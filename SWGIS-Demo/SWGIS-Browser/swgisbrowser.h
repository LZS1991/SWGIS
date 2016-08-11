#ifndef SWGISBROWSER_H
#define SWGISBROWSER_H

#include <QMainWindow>
#include <QMap>
#include <QModelIndex>
#include "qgsvectorlayer.h"
class QgsBrowserModel;
class QgsLayerItem;
class QgsMapLayer;

namespace Ui {
class SWGISBrowser;
}

class SWGISBrowser : public QMainWindow
{
    Q_OBJECT

public:
    SWGISBrowser(QWidget *parent = nullptr, const Qt::WindowFlags& flags = nullptr);
    ~SWGISBrowser();

    // Expand to given path
    void expandPath( const QString& path );
    void setLayer( QgsVectorLayer* vLayer );
public slots:
    void itemClicked( const QModelIndex& index );
    void itemDoubleClicked( const QModelIndex& index );
//    void on_mActionSetProjection_triggered();
//    void on_mActionWmsConnections_triggered();
//    void on_mActionRefresh_triggered();
//    void newVectorLayer();

    void saveWindowState();
    void restoreWindowState();

    void tabChanged();
    void updateCurrentTab();
    void stopRendering();

    // Refresh all leaf or expanded items
    void refresh( const QModelIndex& index = QModelIndex() );

protected:
    void keyPressEvent( QKeyEvent * e ) override;
    void keyReleaseEvent( QKeyEvent * e ) override;

    bool layerClicked( QgsLayerItem* ptr );

    enum Tab
    {
        Metadata,
        Preview,
        Attributes
    };
    Tab activeTab();

    bool m_DirtyMetadata, m_DirtyPreview, m_DirtyAttributes;

    QgsBrowserModel* m_Model;
    QgsMapLayer *m_Layer;
    QModelIndex m_Index;
    QWidget *m_ParamWidget;
//    // last (selected) tab for each
    QMap<QString, int> m_LastTab;
//    QgsAttributeTableFilterModel* m_AttributeTableFilterModel;

private slots:
    void on_action_Manage_WMS_Connection_triggered();

    void on_action_Refresh_triggered();

private:
    Ui::SWGISBrowser *ui;
};

#endif // SWGISBROWSER_H
