#include "swgisnewhttpconnection.h"
#include "ui_swgisnewhttpconnection.h"
#include "qgscontexthelp.h"
#include <QPushButton>
SWGISNewHttpConnection::SWGISNewHttpConnection(QWidget *parent, const QString &baseKey, const QString &connName, const Qt::WindowFlags &fl)
    : QDialog(parent, fl)
    , ui(new Ui::SWGISNewHttpConnection)
    , mBaseKey( baseKey )
    , mOriginalConnName( connName )
{
    ui->setupUi(this);
    QString service = baseKey.mid( 18, 3 ).toUpper();
    this->setWindowTitle( tr( "Create a new %1 connection" ).arg( service ) );

    // It would be obviously much better to use mBaseKey also for credentials,
    // but for some strange reason a different hardcoded key was used instead.
    // WFS and WMS credentials were mixed with the same key WMS.
    // Only WMS and WFS providers are using QgsNewHttpConnection at this moment
    // using connection-wms and connection-wfs -> parse credential key fro it.
    mCredentialsBaseKey = mBaseKey.split( '-' ).last().toUpper();

    ui->txtName->setValidator( new QRegExpValidator( QRegExp( "[^\\/]+" ), ui->txtName ) );

    ui->cmbDpiMode->clear();
    ui->cmbDpiMode->addItem( tr( "all" ) );
    ui->cmbDpiMode->addItem( tr( "off" ) );
    ui->cmbDpiMode->addItem( tr( "QGIS" ) );
    ui->cmbDpiMode->addItem( tr( "UMN" ) );
    ui->cmbDpiMode->addItem( tr( "GeoServer" ) );

    if ( !connName.isEmpty() )
    {
      // populate the dialog with the information stored for the connection
      // populate the fields with the stored setting parameters

         QSettings settings;

         QString key = mBaseKey + connName;
         QString credentialsKey = "/Qgis/" + mCredentialsBaseKey + '/' + connName;
         ui->txtName->setText( connName );
         ui->txtUrl->setText( settings.value( key + "/url" ).toString() );

         ui->cbxIgnoreGetMapURI->setChecked( settings.value( key + "/ignoreGetMapURI", false ).toBool() );
         ui->cbxIgnoreAxisOrientation->setChecked( settings.value( key + "/ignoreAxisOrientation", false ).toBool() );
         ui->cbxInvertAxisOrientation->setChecked( settings.value( key + "/invertAxisOrientation", false ).toBool() );
         ui->cbxIgnoreGetFeatureInfoURI->setChecked( settings.value( key + "/ignoreGetFeatureInfoURI", false ).toBool() );
         ui->cbxSmoothPixmapTransform->setChecked( settings.value( key + "/smoothPixmapTransform", false ).toBool() );

         int dpiIdx;
         switch ( settings.value( key + "/dpiMode", 7 ).toInt() )
         {
            case 0: // off
                dpiIdx = 1;
                break;
           case 1: // QGIS
                dpiIdx = 2;
                break;
           case 2: // UMN
                dpiIdx = 3;
                break;
           case 4: // GeoServer
                dpiIdx = 4;
                break;
           default: // other => all
                dpiIdx = 0;
                break;
         }
      ui->cmbDpiMode->setCurrentIndex( dpiIdx );
      ui->txtReferer->setText( settings.value( key + "/referer" ).toString() );
      ui->txtUserName->setText( settings.value( credentialsKey + "/username" ).toString() );
      ui->txtPassword->setText( settings.value( credentialsKey + "/password" ).toString() );
    }
      if ( mBaseKey != "/Qgis/connections-wms/" )
      {
        if ( mBaseKey == "/Qgis/connections-wcs/" )
        {
          ui->cbxIgnoreGetMapURI->setText( tr( "Ignore GetCoverage URI reported in capabilities" ) );
          ui->cbxIgnoreAxisOrientation->setText( tr( "Ignore axis orientation" ) );
        }
        else
        {
          ui->cbxIgnoreGetMapURI->setVisible( false );
          ui->cbxIgnoreAxisOrientation->setVisible( false );
          ui->cbxInvertAxisOrientation->setVisible( false );
          ui->cbxSmoothPixmapTransform->setVisible( false );
          ui->mGroupBox->layout()->removeWidget( ui->cbxIgnoreGetMapURI );
          ui->mGroupBox->layout()->removeWidget( ui->cbxIgnoreAxisOrientation );
          ui->mGroupBox->layout()->removeWidget( ui->cbxInvertAxisOrientation );
          ui->mGroupBox->layout()->removeWidget( ui->cbxSmoothPixmapTransform );
        }

        ui->cbxIgnoreGetFeatureInfoURI->setVisible( false );
        ui->mGroupBox->layout()->removeWidget( ui->cbxIgnoreGetFeatureInfoURI );

        ui->cmbDpiMode->setVisible( false );
        ui->mGroupBox->layout()->removeWidget( ui->cmbDpiMode );
        ui->lblDpiMode->setVisible( false );
        ui->mGroupBox->layout()->removeWidget( ui->lblDpiMode );

        ui->txtReferer->setVisible( false );
        ui->mGroupBox->layout()->removeWidget( ui->txtReferer );
        ui->lblReferer->setVisible( false );
        ui->mGroupBox->layout()->removeWidget( ui->lblReferer );

        // Adjust height
        int w = width();
        adjustSize();
        resize( w, height() );
      }
      on_txtName_textChanged( connName );

}

SWGISNewHttpConnection::~SWGISNewHttpConnection()
{
    delete ui;
}

void SWGISNewHttpConnection::on_buttonBox_accepted()
{
    QSettings settings;
    QString key = mBaseKey + ui->txtName->text();
    QString credentialsKey = "/Qgis/" + mCredentialsBaseKey + '/' + ui->txtName->text();

    // warn if entry was renamed to an existing connection
    if (( mOriginalConnName.isNull() || mOriginalConnName.compare( ui->txtName->text(), Qt::CaseInsensitive ) != 0 ) &&
        settings.contains( key + "/url" ) &&
        QMessageBox::question( this,
                               tr( "Save connection" ),
                               tr( "Should the existing connection %1 be overwritten?" ).arg( ui->txtName->text() ),
                               QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
    {
      return;
    }

    if ( !ui->txtPassword->text().isEmpty() &&
         QMessageBox::question( this,
                                tr( "Saving passwords" ),
                                tr( "WARNING: You have entered a password. It will be stored in plain text in your project files and in your home directory on Unix-like systems, or in your user profile on Windows. If you do not want this to happen, please press the Cancel button.\nNote: giving the password is optional. It will be requested interactivly, when needed." ),
                                QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
    {
      return;
    }

    // on rename delete original entry first
    if ( !mOriginalConnName.isNull() && mOriginalConnName != key )
    {
      settings.remove( mBaseKey + mOriginalConnName );
      settings.remove( "/Qgis/" + mCredentialsBaseKey + '/' + mOriginalConnName );
      settings.sync();
    }

    QString str = ui->txtUrl->text().trimmed();
    QUrl url( ui->txtUrl->text().trimmed() );
    QUrlQuery urlQuery(url);
    const QList< QPair<QString, QString> > &items = urlQuery.queryItems();
    QHash< QString, QPair<QString, QString> > params;
    for ( QList< QPair<QString, QString> >::const_iterator it = items.constBegin(); it != items.constEnd(); ++it )
    {
      params.insert( QString( it->first ).toUpper(), *it );
    }

    if ( params["SERVICE"].second.toUpper() == "WMS" ||
         params["SERVICE"].second.toUpper() == "WFS" ||
         params["SERVICE"].second.toUpper() == "WCS" )
    {
      urlQuery.removeQueryItem( params["SERVICE"].first );
      urlQuery.removeQueryItem( params["REQUEST"].first );
      urlQuery.removeQueryItem( params["FORMAT"].first );
    }

    url.setQuery(urlQuery);
    if ( url.path().isEmpty() )
    {
      url.setPath( "/" );
    }

    settings.setValue( key + "/url", url.toString() );
    if ( mBaseKey == "/Qgis/connections-wms/" || mBaseKey == "/Qgis/connections-wcs/" )
    {
      settings.setValue( key + "/ignoreGetMapURI", ui->cbxIgnoreGetMapURI->isChecked() );
      settings.setValue( key + "/ignoreAxisOrientation", ui->cbxIgnoreAxisOrientation->isChecked() );
      settings.setValue( key + "/invertAxisOrientation", ui->cbxInvertAxisOrientation->isChecked() );
      settings.setValue( key + "/smoothPixmapTransform", ui->cbxSmoothPixmapTransform->isChecked() );

      int dpiMode = 0;
      switch ( ui->cmbDpiMode->currentIndex() )
      {
        case 0: // all => QGIS|UMN|GeoServer
          dpiMode = 7;
          break;
        case 1: // off
          dpiMode = 0;
          break;
        case 2: // QGIS
          dpiMode = 1;
          break;
        case 3: // UMN
          dpiMode = 2;
          break;
        case 4: // GeoServer
          dpiMode = 4;
          break;
      }

      settings.setValue( key + "/dpiMode", dpiMode );
    }
    if ( mBaseKey == "/Qgis/connections-wms/" )
    {
      settings.setValue( key + "/ignoreGetFeatureInfoURI", ui->cbxIgnoreGetFeatureInfoURI->isChecked() );
    }

    settings.setValue( key + "/referer", ui->txtReferer->text() );

    settings.setValue( credentialsKey + "/username", ui->txtUserName->text() );
    settings.setValue( credentialsKey + "/password", ui->txtPassword->text() );

//    settings.setValue( credentialsKey + "/authcfg", mAuthConfigSelect->configId() );

    settings.setValue( mBaseKey + "/selected", ui->txtName->text() );

    QDialog::accept();

}

void SWGISNewHttpConnection::on_txtName_textChanged(const QString &text)
{
    Q_UNUSED( text );
    ui->buttonBox->button( QDialogButtonBox::Ok )->setDisabled( ui->txtName->text().isEmpty() || ui->txtUrl->text().isEmpty() );

}

void SWGISNewHttpConnection::on_txtUrl_textChanged(const QString &text)
{
    Q_UNUSED( text );
    ui->buttonBox->button( QDialogButtonBox::Ok )->setDisabled( ui->txtName->text().isEmpty() || ui->txtUrl->text().isEmpty() );

}

void SWGISNewHttpConnection::on_buttonBox_helpRequested()
{
    QgsContextHelp::run( metaObject()->className() );
}

