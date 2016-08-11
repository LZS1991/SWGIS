#ifndef SWGISNEWHTTPCONNECTION_H
#define SWGISNEWHTTPCONNECTION_H

#include <QDialog>
#include <QSettings>
#include <QMessageBox>
#include <QUrl>
#include <QUrlQuery>
#include "qgscontexthelp.h"

#ifdef SWGISGUI_LIB
# define SWGISGUI_EXPORT Q_DECL_EXPORT
#else
# define SWGISGUI_EXPORT Q_DECL_IMPORT
#endif

namespace Ui {
class SWGISNewHttpConnection;
}

class SWGISGUI_EXPORT SWGISNewHttpConnection : public QDialog
{
    Q_OBJECT

public:
    SWGISNewHttpConnection(QWidget *parent = nullptr, const QString& baseKey = "/Qgis/connections-wms/", const QString& connName = QString::null, const Qt::WindowFlags& fl = nullptr);
    ~SWGISNewHttpConnection();

public slots:
//    //! Saves the connection to ~/.qt/qgisrc
//    void accept() override;

    void on_txtName_textChanged( const QString & );

    void on_txtUrl_textChanged( const QString & );

    void on_buttonBox_helpRequested();

private slots:
    void on_buttonBox_accepted();

private:
    QString mBaseKey;
    QString mCredentialsBaseKey;
    QString mOriginalConnName; //store initial name to delete entry in case of rename

private:
    Ui::SWGISNewHttpConnection *ui;
};

#endif // SWGISNEWHTTPCONNECTION_H
