#ifndef QTGISBROWSERTREEVIEW_H
#define QTGISBROWSERTREEVIEW_H

#include <QTreeView>
#include <stgisguiconfig.h>
class SWGISGUI_EXPORT STGISBrowserTreeView : public QTreeView
{
    Q_OBJECT
  public:
    STGISBrowserTreeView( QWidget *parent = nullptr );
    ~STGISBrowserTreeView();

    virtual void setModel( QAbstractItemModel* model ) override;
    virtual void showEvent( QShowEvent * e ) override;
    virtual void hideEvent( QHideEvent * e ) override;

    bool hasExpandedDescendant( const QModelIndex& index ) const;

    void setSettingsSection( const QString & section ) { m_SettingsSection = section; }

  protected slots:
    virtual void rowsInserted( const QModelIndex & parentIndex, int start, int end ) override;

  private:
    QString m_SettingsSection;
    QStringList m_ExpandPaths;
    void saveState();
    void restoreState();

    QString expandedPathsKey() const;

    QStringList expandedPathsList( const QModelIndex & index );

    void expandTree( const QModelIndex & index );

    bool treeExpanded( const QModelIndex & index );
};

#endif // QGSBROWSERTREEVIEW_H
