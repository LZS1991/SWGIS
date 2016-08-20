#include "swgisapp.h"
#include "ui_swgisapp.h"

#include <QGridLayout>
#include <QColor>
#include <QAction>
#include <QApplication>
#include <QBitmap>
#include <QCheckBox>
#include <QClipboard>
#include <QCursor>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QDialog>
#include <QDir>
#include <QDockWidget>
#include <QEvent>
#include <QFile>
#include <QFileInfo>
#include <QImageWriter>
#include <QInputDialog>
#include <QKeyEvent>
#include <QLabel>
#include <QLibrary>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QPainter>
#include <QPictureIO>
#include <QPixmap>
#include <QPoint>
#include <QPrinter>
#include <QProcess>
#include <QProgressBar>
#include <QProgressDialog>
#include <QRegExp>
#include <QRegExpValidator>
#include <QSettings>
#include <QSpinBox>
#include <QSplashScreen>
#include <QFileSystemWatcher>
//#ifndef QT_NO_OPENSSL
//#include <QSslConfiguration>
//#endif
#include <QStatusBar>
#include <QStringList>
#include <QTcpSocket>
#include <QTextStream>
#include <QtGlobal>
#include <QThread>
#include <QTimer>
#include <QToolButton>
#include <QUuid>
#include <QVBoxLayout>
#include <QWhatsThis>
#include <QWidgetAction>
#include <QNetworkReply>
#include <QNetworkProxy>
#include <QAuthenticator>

#include <qgsnetworkaccessmanager.h>
#include <qgsapplication.h>
#include <qgscomposition.h>

#include "ui_defaults.h"
//#include "qgisappinterface.h"
#include "qgisappstylesheet.h"
#include "qgis.h"
//#include "qgisplugin.h"
//#include "qgsabout.h"
//#include "qgsalignrasterdialog.h"
#include "qgsapplayertreeviewmenuprovider.h"
#include "qgsapplication.h"
#include "qgsattributeaction.h"
//#include "qgsattributetabledialog.h"
//#include "qgsauthmanager.h"
//#include "qgsauthguiutils.h"
//#ifndef QT_NO_OPENSSL
//#include "qgsauthcertutils.h"
//#include "qgsauthsslerrorsdialog.h"
//#endif
//#include "qgsbookmarks.h"
#include "qgsbrowserdockwidget.h"
//#include "qgsadvanceddigitizingdockwidget.h"
#include "qgsclipboard.h"
#include "qgscomposer.h"
#include "qgscomposermanager.h"
#include "qgscomposerview.h"
#include "qgsstatusbarcoordinateswidget.h"
//#include "qgsconfigureshortcutsdialog.h"
#include "qgscoordinatetransform.h"
#include "qgscoordinateutils.h"
#include "qgscredentialdialog.h"
#include "qgscursors.h"
#include "qgscustomization.h"
#include "qgscustomlayerorderwidget.h"
//#include "qgscustomprojectiondialog.h"
#include "qgsdatasourceuri.h"
#include "qgsdatumtransformdialog.h"
#include "qgsdoublespinbox.h"
//#include "qgsdxfexport.h"
//#include "qgsdxfexportdialog.h"
#include "qgsdecorationcopyright.h"
#include "qgsdecorationnortharrow.h"
#include "qgsdecorationscalebar.h"
#include "qgsdecorationgrid.h"
#include "qgsdecorationgriddialog.h"
#include "qgsannotationitem.h"
#include "qgsencodingfiledialog.h"
#include "qgserror.h"
//#include "qgserrordialog.h"
#include "qgsexception.h"
//#include "qgsexpressionselectiondialog.h"
#include "qgsfeature.h"
//#include "qgsformannotationitem.h"
#include "qgsfieldcalculator.h"
//#include "qgshtmlannotationitem.h"
#include "qgsgenericprojectionselector.h"
//#include "qgsgpsinformationwidget.h"
#include "qgsguivectorlayertools.h"
#include "qgslabelingwidget.h"
#include "qgslayerdefinition.h"
#include "qgslayertree.h"
#include "qgslayertreemapcanvasbridge.h"
#include "qgslayertreemodel.h"
#include "qgslayertreemodellegendnode.h"
#include "qgslayertreeregistrybridge.h"
#include "qgslayertreeutils.h"
#include "./layertree/qgslayertreeview.h"
#include "qgslayertreeviewdefaultactions.h"
#include "qgslogger.h"
#include "qgsmapcanvas.h"
#include "qgsmapcanvassnappingutils.h"
//#include "qgsmapcanvastracer.h"
#include "qgsmaplayer.h"
#include "qgsmaplayerregistry.h"
#include "qgsmaplayerstyleguiutils.h"
#include "qgsmapoverviewcanvas.h"
#include "qgsmaprenderer.h"
#include "qgsmapsettings.h"
#include "qgsmaptip.h"
//#include "qgsmergeattributesdialog.h"
#include "qgsmessageviewer.h"
#include "qgsmessagebar.h"
#include "qgsmessagebaritem.h"
#include "qgsmimedatautils.h"
#include "qgsmessagelog.h"
#include "qgsmultibandcolorrenderer.h"
#include "qgsnewvectorlayerdialog.h"
//#include "qgsnewmemorylayerdialog.h"
#include "qgsoptions.h"
#include "qgspluginlayer.h"
#include "qgspluginlayerregistry.h"
//#include "qgspluginmanager.h"
//#include "qgspluginregistry.h"
#include "qgspoint.h"
//#include "qgshandlebadlayers.h"
#include "qgsproject.h"
//#include "qgsprojectlayergroupdialog.h"
#include "qgsprojectproperties.h"
#include "qgsproviderregistry.h"
#include "qgspythonrunner.h"
//#include "qgsquerybuilder.h"
//#include "qgsrastercalcdialog.h"
//#include "qgsrasterfilewriter.h"
//#include "qgsrasteriterator.h"
#include "qgsrasterlayerproperties.h"
//#include "qgsrasternuller.h"
//#include "qgsbrightnesscontrastfilter.h"
//#include "qgsrasterrenderer.h"
//#include "qgsrasterlayersaveasdialog.h"
//#include "qgsrectangle.h"
#include "qgsscalecombobox.h"
#include "qgsscalevisibilitydialog.h"
//#include "qgsgroupwmsdatadialog.h"
#include "qgsshortcutsmanager.h"
//#include "qgssinglebandgrayrenderer.h"
//#include "qgssnappingdialog.h"
//#include "qgssponsors.h"
//#include "qgsstatisticalsummarydockwidget.h"
#include "qgssymbolv2selectordialog.h"
#include "qgsstylev2.h"
//#include "qgssvgannotationitem.h"
//#include "qgstextannotationitem.h"
#include "qgstipgui.h"
//#include "qgsundowidget.h"
//#include "qgsuserinputdockwidget.h"
#include "qgsvectordataprovider.h"
//#include "qgsvectorfilewriter.h"
//#include "qgsvectorlayer.h"
#include "qgsvectorlayerproperties.h"
//#include "qgsvisibilitypresets.h"
#include "qgsmessagelogviewer.h"
//#include "qgsdataitem.h"
#include "qgsmaplayeractionregistry.h"
#include "qgswelcomepage.h"
//#include "qgsmaprendererparalleljob.h"
//#include "qgsversioninfo.h"
#include "qgslegendfilterbutton.h"
//#include "qgsvirtuallayerdefinition.h"
//#include "qgsvirtuallayerdefinitionutils.h"
#include "qgstransaction.h"
#include "qgstransactiongroup.h"

#include "qgssublayersdialog.h"
#include "ogr/qgsopenvectorlayerdialog.h"
//#include "ogr/qgsvectorlayersaveasdialog.h"

//#include "qgsosmdownloaddialog.h"
//#include "qgsosmimportdialog.h"
//#include "qgsosmexportdialog.h"

//
// GDAL/OGR includes
//
#include <ogr_api.h>
#include <proj_api.h>
#include <cpl_error.h>
//
// Other includes
//
#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <list>
#include <memory>
#include <vector>

////
//// Map tools
////
//#include "qgsmaptooladdfeature.h"
//#include "qgsmaptooladdpart.h"
//#include "qgsmaptooladdring.h"
//#include "qgsmaptoolfillring.h"
//#include "qgsmaptoolannotation.h"
//#include "qgsmaptoolcircularstringcurvepoint.h"
//#include "qgsmaptoolcircularstringradius.h"
//#include "qgsmaptooldeletering.h"
//#include "qgsmaptooldeletepart.h"
//#include "qgsmaptoolfeatureaction.h"
//#include "qgsmaptoolformannotation.h"
//#include "qgsmaptoolhtmlannotation.h"
//#include "qgsmaptoolidentifyaction.h"
#include "qgsmaptoolmeasureangle.h"
//#include "qgsmaptoolmovefeature.h"
//#include "qgsmaptoolrotatefeature.h"
//#include "qgsmaptooloffsetcurve.h"
#include "qgsmaptoolpan.h"
//#include "qgsmaptoolselect.h"
//#include "qgsmaptoolselectrectangle.h"
//#include "qgsmaptoolselectfreehand.h"
//#include "qgsmaptoolselectpolygon.h"
//#include "qgsmaptoolselectradius.h"
//#include "qgsmaptoolsvgannotation.h"
//#include "qgsmaptoolreshape.h"
//#include "qgsmaptoolrotatepointsymbols.h"
//#include "qgsmaptoolsplitfeatures.h"
//#include "qgsmaptoolsplitparts.h"
//#include "qgsmaptooltextannotation.h"
#include "qgsmaptoolzoom.h"
//#include "qgsmaptoolsimplify.h"
#include "qgsmeasuretool.h"
#include "qgsmaptoolpinlabels.h"
#include "qgsmaptoolshowhidelabels.h"
#include "qgsmaptoolmovelabel.h"
#include "qgsmaptoolrotatelabel.h"
//#include "qgsmaptoolchangelabelproperties.h"

//#include "nodetool/qgsmaptoolnodetool.h"

// Editor widgets
#include "qgseditorwidgetregistry.h"

/*********************************
 * 设置系统启动之后右上角的标题
**********************************/
static void setTitleBarText_(QWidget & swgisApp)
{
    QString caption = SWGISApp::tr("SWGIS ");

    caption += QGis::QGIS_VERSION;

    swgisApp.setWindowTitle( caption );
} // setTitleBarText_( QWidget * qgisApp )

static void customSrsValidation_(QgsCoordinateReferenceSystem &crs)
{
  SWGISApp::instance()->emitCustomSrsValidation(crs);
}

static bool cmpByText_(QAction* a, QAction* b)
{
  return QString::localeAwareCompare(a->text(), b->text()) < 0;
}

static QgsMessageOutput *messageOutputViewer_()
{
  if (QThread::currentThread() == qApp->thread())
    return new QgsMessageViewer(SWGISApp::instance());
  else
    return new QgsMessageOutputConsole();
}

SWGISApp *SWGISApp::m_Instance = nullptr;

SWGISApp::SWGISApp(QSplashScreen *splash, bool restorePlugins, bool skipVersionCheck, QWidget *parent, Qt::WindowFlags fl)
    : QMainWindow(parent, fl)
    , m_Splash(splash)
    , m_ScaleEdit(nullptr)
    , m_ScaleLabel(nullptr)
    , m_RotationEdit(nullptr)
    , m_RotationLabel(nullptr)
    , m_OnTheFlyProjectionStatusButton(nullptr)
    , m_RenderSuppressionCBox(nullptr)
    , m_MessageButton(nullptr)
    , m_CoordsEdit(nullptr)
    , m_InternalClipboard(nullptr)
    , m_ProjectLastModified()
    , m_LayerTreeCanvasBridge(nullptr)
    , m_NonEditMapTool(nullptr)
    , m_ComposerManager(nullptr)
    , m_WelcomePage(nullptr)
    , ui(new Ui::SWGISApp)
{
    if (m_Instance)
    {
        QMessageBox::critical(
                            this,
                            tr("Multiple Instances of SWGISApp"),
                            tr("Multiple instances of QGIS application object detected.\nPlease contact the developers.\n"));
        abort();
    }

    m_Instance = this;

    namSetup();
    ui->setupUi(this);
    m_Splash->showMessage(tr("Checking database"), Qt::AlignHCenter | Qt::AlignBottom);
    qApp->processEvents();

    QString dbError;
    if(!QgsApplication::createDB(&dbError))
        QMessageBox::critical(this, tr("Private qgis.db"), dbError);

//    splash->showMessage(tr("Initializing authentication"), Qt::AlignHCenter | Qt::AlignBottom);
    m_Splash->showMessage(tr("Setting up the GUI"), Qt::AlignHCenter | Qt::AlignBottom);
    qApp->processEvents();
    QSettings settings;

    // set up stylesheet builder and apply saved or default style options
    m_StyleSheetBuilder = new QgisAppStyleSheet( this );
    connect( m_StyleSheetBuilder, SIGNAL( appStyleSheetChanged( const QString& ) ),
             this, SLOT( setAppStyleSheet( const QString& ) ) );
    m_StyleSheetBuilder->buildStyleSheet( m_StyleSheetBuilder->defaultOptions() );


    QWidget *centralWidget = this->centralWidget();
    QGridLayout *centralLayout = new QGridLayout(centralWidget);
    centralWidget->setLayout(centralLayout);
    centralLayout->setContentsMargins(0, 0, 0, 0);

    this->m_MapCanvas = new QgsMapCanvas(centralWidget, "theMapCanvas");
    connect(this->m_MapCanvas, SIGNAL(messageEmitted(const QString&,const QString&,QgsMessageBar::MessageLevel)),
            this, SLOT(displayMessage(const QString&, const QString&, QgsMessageBar::MessageLevel)));
    this->m_MapCanvas->setWhatsThis(tr("That is Map Canvas,this is where raster and vector layers are displayed when added to the map!"));

    int red = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
    int green = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
    int blue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
    this->m_MapCanvas->setCanvasColor(QColor(red, green, blue));

    m_WelcomePage = new QgsWelcomePage(skipVersionCheck);

    this->m_CentralContainer = new QStackedWidget();
    this->m_CentralContainer->insertWidget(0, this->m_MapCanvas);
    this->m_CentralContainer->insertWidget(1, this->m_WelcomePage);
    centralLayout->addWidget(this->m_CentralContainer, 0, 0, 2, 1);

    connect(this->m_MapCanvas, SIGNAL(layersChanged()), this, SLOT(showMapCanvas()));
    this->m_CentralContainer->setCurrentIndex(0);
    this->m_InfoBar = new QgsMessageBar( centralWidget );
    this->m_InfoBar->setSizePolicy( QSizePolicy::Minimum, QSizePolicy::Fixed );
    centralLayout->addWidget( this->m_InfoBar, 0, 0, 1, 1 );

    //将mapCanvas设置为焦点
    this->m_MapCanvas->setFocus();

    this->m_LayerTreeView = new QgsLayerTreeView(this);
    this->m_LayerTreeView->setObjectName("theLayerTreeView");

    this->m_SnappingUtils = new QgsMapCanvasSnappingUtils(this->m_MapCanvas, this);
    this->m_MapCanvas->setSnappingUtils(this->m_SnappingUtils);
    connect(QgsProject::instance(), SIGNAL(snapSettingsChanged()), this->m_SnappingUtils, SLOT(readConfigFromProject()));
    connect(this, SIGNAL(projectRead()), this->m_SnappingUtils, SLOT(readConfigFromProject()));

    createActions();
    createMenus();
    createStatusBar();
    createCanvasTools();
    this->m_MapCanvas->freeze();
    initLayerTreeView();
    createOverview();
    createMapTips();
    createDecorations();
    updateProjectFromTemplates();
    legendLayerSelectionChanged();

    QFileSystemWatcher* projectsTemplateWatcher = new QFileSystemWatcher( this );
    QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                              QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
    projectsTemplateWatcher->addPath( templateDirName );
    connect( projectsTemplateWatcher, SIGNAL( directoryChanged( QString ) ), this, SLOT( updateProjectFromTemplates() ) );

    m_BrowserWidget = new QgsBrowserDockWidget(tr("Browser Panel"), this);
    m_BrowserWidget->setObjectName("Browser");
    addDockWidget(Qt::LeftDockWidgetArea, m_BrowserWidget);
    m_BrowserWidget->hide();

    m_BrowserWidget2 = new QgsBrowserDockWidget(tr("Browser Panel (2)"), this);
    m_BrowserWidget2->setObjectName("Browser2");
    addDockWidget(Qt::LeftDockWidgetArea, m_BrowserWidget2);
    m_BrowserWidget2->hide();

    m_LastMapToolMessage = nullptr;

    m_LogViewer = new QgsMessageLogViewer( statusBar(), this );

    m_LogDock = new QDockWidget( tr( "Log Messages Panel" ), this );
    m_LogDock->setObjectName( "MessageLog" );
    m_LogDock->setAllowedAreas( Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea );
    addDockWidget( Qt::BottomDockWidgetArea, m_LogDock );
    m_LogDock->setWidget( m_LogViewer );
    m_LogDock->hide();
    connect(m_MessageButton, SIGNAL(toggled(bool)), m_LogDock, SLOT(setVisible(bool)));
    connect(m_LogDock, SIGNAL(visibilityChanged(bool)), m_MessageButton, SLOT(setChecked(bool)));

    m_VectorLayerTools = new QgsGuiVectorLayerTools();
    QgsEditorWidgetRegistry::initEditors(m_MapCanvas, m_InfoBar);

    m_InternalClipboard = new QgsClipboard; // create clipboard
    connect(m_InternalClipboard, SIGNAL(changed()), this, SLOT(clipboardChanged()));

    activateDeactivateLayerRelatedActions(nullptr);
    connect(QgsMapLayerActionRegistry::instance(), SIGNAL(changed()), this, SLOT(refreshActionFeatureAction()));

    QgsMessageLog::logMessage(tr("QGIS starting..."), QString::null, QgsMessageLog::INFO);

    //设置特定的CRS
    connect(this, SIGNAL(customSrsValidation(QgsCoordinateReferenceSystem&)),
             this, SLOT(validateSrs(QgsCoordinateReferenceSystem&)));
    QgsCoordinateReferenceSystem::setCustomSrsValidation(customSrsValidation_);

    QgsMessageOutput::setMessageOutputCreator(messageOutputViewer_);
    new QgsCredentialDialog(this);
    qApp->processEvents();

    m_Splash->showMessage(tr("Checking provider plugins"), Qt::AlignHCenter | Qt::AlignBottom);
    qApp->processEvents();
    QgsApplication::initQgis();

//    // Create the plugin registry and load plugins
//    // load any plugins that were running in the last session
//    m_Splash->showMessage(tr("Restoring loaded plugins"), Qt::AlignHCenter | Qt::AlignBottom);
//    qApp->processEvents();

    int size = settings.value("/IconSize", QGIS_ICON_SIZE).toInt();
    this->setIconSizes(size);

    m_Splash->showMessage(tr("Initializing file filters"), Qt::AlignHCenter | Qt::AlignBottom);
    qApp->processEvents();

    // now build vector and raster file filters
    m_VectorFileFilter = QgsProviderRegistry::instance()->fileVectorFilters();
    m_RasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

    setupConnections();
    // 在存储系统状态之前需要确定所有的操作已经初始化完成
    //
    m_Splash->showMessage(tr("Restoring window state"), Qt::AlignHCenter | Qt::AlignBottom);
    qApp->processEvents();
    restoreWindowState();

    m_Splash->showMessage(tr("SWGIS is ready!"), Qt::AlignHCenter | Qt::AlignBottom);
    QgsMessageLog::logMessage( QgsApplication::showSettings(), QString::null, QgsMessageLog::INFO );

    QgsMessageLog::logMessage( tr( "QGIS Ready!" ), QString::null, QgsMessageLog::INFO );

    m_MapTipsVisible = false;

    setAcceptDrops(true);

    this->show();
    qApp->processEvents();

    m_MapCanvas->freeze(false);
    m_MapCanvas->clearExtentHistory();//将放大缩小复原
    m_LastComposerId = 0;
    // Show a nice tip of the day
    if(settings.value(QString("/qgis/showTips%1").arg(QGis::QGIS_VERSION_INT / 100), true).toBool())
    {
        m_Splash->hide();
        QgsTipGui myTip( this );
        myTip.exec();
    }
    else
        QgsDebugMsg("Tips are disabled");

    QgsShortcutsManager::instance()->registerAllChildrenActions(this);
    QgsProviderRegistry::instance()->registerGuis(this);
    qApp->processEvents();

    fileNewBlank();

    this->m_MapCanvas->setMapTool(m_MapTools.m_Pan);
    QgsApplication::setFileOpenEventReceiver(this);
}

SWGISApp::SWGISApp()
    : QMainWindow(nullptr, nullptr)
    , ui(new Ui::SWGISApp)
{
    ui->setupUi(this);
}

SWGISApp::~SWGISApp()
{
    delete ui;
    m_MapCanvas->stopRendering();

    delete m_InternalClipboard;
    delete m_StyleSheetBuilder;
    delete m_MapTools.m_ZoomIn;
    delete m_MapTools.m_ZoomOut;
    delete m_MapTools.m_Pan;
    delete m_MapTools.m_MeasureDist;
    delete m_MapTools.m_MeasureArea;
    delete m_ComposerManager;
    delete m_Maptip;
    delete m_OverviewMapCursor;
    delete m_VectorLayerTools;
    delete m_WelcomePage;
    removeAnnotationItems();

    QgsApplication::setFileOpenEventReceiver(nullptr);

    QgsApplication::exitQgis();

    delete QgsProject::instance();
}

QgsVectorLayer *SWGISApp::addVectorLayer(const QString &vectorLayerPath, const QString &baseName, const QString &providerKey)
{
    bool wasfrozen = m_MapCanvas->isFrozen();

    m_MapCanvas->freeze();

  // Let render() do its own cursor management
  //  QApplication::setOverrideCursor(Qt::WaitCursor);

    /* Eliminate the need to instantiate the layer based on provider type.
       The caller is responsible for cobbling together the needed information to
       open the layer
       */
    QgsDebugMsg( "Creating new vector layer using " + vectorLayerPath
                 + " with baseName of " + baseName
                 + " and providerKey of " + providerKey );
    //LZS2851
//    // if the layer needs authentication, ensure the master password is set
//    bool authok = true;
//    QRegExp rx( "authcfg=([a-z]|[A-Z]|[0-9]){7}" );
//    if ( rx.indexIn( vectorLayerPath ) != -1 )
//    {
//      authok = false;
//      if ( !QgsAuthGuiUtils::isDisabled( messageBar(), messageTimeout() ) )
//      {
//          //LZS2851
//        authok = QgsAuthManager::instance()->setMasterPassword( true );
//      }
//    }

    // create the layer
    QgsVectorLayer *layer = new QgsVectorLayer( vectorLayerPath, baseName, providerKey, false );

//    if (authok && layer && layer->isValid() )
    if(layer && layer->isValid() )
    {
      QStringList sublayers = layer->dataProvider()->subLayers();
      QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

      // If the newly created layer has more than 1 layer of data available, we show the
      // sublayers selection dialog so the user can select the sublayers to actually load.
      if ( sublayers.count() > 1 )
      {
        askUserForOGRSublayers( layer );

        // The first layer loaded is not useful in that case. The user can select it in
        // the list if he wants to load it.
        delete layer;
        layer = nullptr;
      }
      else
      {
        // Register this layer with the layers registry
        QList<QgsMapLayer *> myList;
        myList << layer;
        QgsMapLayerRegistry::instance()->addMapLayers( myList );
        bool ok;
        layer->loadDefaultStyle( ok );
      }
    }
    else
    {
      QString msg = tr( "The layer %1 is not a valid layer and can not be added to the map" ).arg( vectorLayerPath );
      messageBar()->pushMessage( tr( "Layer is not valid" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );

      delete layer;
      m_MapCanvas->freeze( false );
      return nullptr;
    }

    // Only update the map if we frozen in this method
    // Let the caller do it otherwise
    if ( !wasfrozen )
    {
      m_MapCanvas->freeze( false );
      m_MapCanvas->refresh();
    }

  // Let render() do its own cursor management
  //  QApplication::restoreOverrideCursor();

    return layer;

}

bool SWGISApp::addVectorLayers(const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType)
{
    bool wasfrozen = m_MapCanvas->isFrozen();
    QList<QgsMapLayer *> myList;
    Q_FOREACH(QString src, theLayerQStringList)
    {
        src = src.trimmed();
        QString base;
        if(dataSourceType == "file")
        {
            QFileInfo fi(src);
            base = fi.completeBaseName();

            // if needed prompt for zipitem layers
            QString vsiPrefix = QgsZipItem::vsiPrefix(src);
            if(!src.startsWith("/vsi", Qt::CaseInsensitive) &&
                (vsiPrefix == "/vsizip/" || vsiPrefix == "/vsitar/"))
            {
                if(askUserForZipItemLayers(src))
                    continue;
            }
        }
        else if(dataSourceType == "database")
        {
            base = src;
        }
        else //directory //protocol
        {
            QFileInfo fi(src);
            base = fi.completeBaseName();
        }

        QgsDebugMsg( "completeBaseName: " + base );

        // create the layer

        QgsVectorLayer *layer = new QgsVectorLayer(src, base, "ogr", false);
        Q_CHECK_PTR(layer);

        if (!layer)
        {
            m_MapCanvas->freeze(false);

            // Let render() do its own cursor management
            //      QApplication::restoreOverrideCursor();

            // XXX insert meaningful whine to the user here
            return false;
        }

        if(layer->isValid())
        {
            layer->setProviderEncoding( enc );

            QStringList sublayers = layer->dataProvider()->subLayers();
            QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

            // If the newly created layer has more than 1 layer of data available, we show the
            // sublayers selection dialog so the user can select the sublayers to actually load.
            if(sublayers.count() > 1)
            {
                askUserForOGRSublayers(layer);

                // The first layer loaded is not useful in that case. The user can select it in
                // the list if he wants to load it.
                delete layer;
            }
            else if(!sublayers.isEmpty()) // there is 1 layer of data available
            {
                //set friendly name for datasources with only one layer
                QStringList sublayers = layer->dataProvider()->subLayers();
                QStringList elements = sublayers.at(0).split(':');

                Q_ASSERT(elements.size() >= 4);
                if (layer->name() != elements.at(1))
                {
                    layer->setLayerName(QString( "%1 %2 %3" ).arg(layer->name(), elements.at(1), elements.at(3)) );
                }
                myList << layer;
            }
            else
            {
                QString msg = tr("%1 doesn't have any layers").arg(src);
                messageBar()->pushMessage(tr("Invalid Data Source"), msg, QgsMessageBar::CRITICAL, messageTimeout() );
                delete layer;
            }
        }
        else
        {
            QString msg = tr( "%1 is not a valid or recognized data source" ).arg( src );
            messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );

            // since the layer is bad, stomp on it
            delete layer;
        }
    }

    // make sure at least one layer was successfully added
    if(myList.isEmpty())
        return false;

    // Register this layer with the layers registry
    QgsMapLayerRegistry::instance()->addMapLayers(myList);
    Q_FOREACH(QgsMapLayer *l, myList)
    {
        bool ok;
        l->loadDefaultStyle(ok);
    }

    // Only update the map if we frozen in this method
    // Let the caller do it otherwise
    if(!wasfrozen)
    {
        m_MapCanvas->freeze( false );
        m_MapCanvas->refresh();
    }
    // Let render() do its own cursor management
    //  QApplication::restoreOverrideCursor();
    // statusBar()->showMessage( mMapCanvas->extent().toString( 2 ) );
    return true;
}

QgsRasterLayer *SWGISApp::addRasterLayer(const QString &rasterFile, const QString &baseName, bool guiWarning)
{
    return addRasterLayerPrivate( rasterFile, baseName, QString(), guiWarning, true );
}

QString SWGISApp::crsAndFormatAdjustedLayerUri(const QString &uri, const QStringList &supportedCrs, const QStringList &supportedFormats) const
{
    QString newuri = uri;

    // Adjust layer CRS to project CRS
    QgsCoordinateReferenceSystem testCrs;
    Q_FOREACH(const QString& c, supportedCrs)
    {
        testCrs.createFromOgcWmsCrs(c);
        if(testCrs == m_MapCanvas->mapSettings().destinationCrs())
        {
            newuri.replace(QRegExp("crs=[^&]+"), "crs=" + c);
            QgsDebugMsg(QString("Changing layer crs to %1, new uri: %2").arg(c, uri));
            break;
        }
    }

    // Use the last used image format
    QString lastImageEncoding = QSettings().value("/qgis/lastWmsImageEncoding", "image/png").toString();
    Q_FOREACH(const QString& fmt, supportedFormats)
    {
        if(fmt == lastImageEncoding)
        {
            newuri.replace(QRegExp("format=[^&]+" ), "format=" + fmt);
            QgsDebugMsg(QString("Changing layer format to %1, new uri: %2").arg(fmt, uri));
            break;
        }
    }
    return newuri;
}

void SWGISApp::removeAllLayers()
{
    QgsMapLayerRegistry::instance()->removeAllMapLayers();
}

bool SWGISApp::openLayer(const QString &fileName, bool allowInteractive)
{
    QFileInfo fileInfo(fileName);
    bool ok( false );

    CPLPushErrorHandler(CPLQuietErrorHandler);

    // if needed prompt for zipitem layers
    QString vsiPrefix = QgsZipItem::vsiPrefix(fileName);
    if(vsiPrefix == "/vsizip/" || vsiPrefix == "/vsitar/")
    {
        if(askUserForZipItemLayers(fileName))
        {
            CPLPopErrorHandler();
            return true;
        }
    }

    // try to load it as raster
    if(QgsRasterLayer::isValidRasterFileName(fileName))
    {
        // open .adf as a directory
        if ( fileName.endsWith( ".adf", Qt::CaseInsensitive ) )
        {
            QString dirName = fileInfo.path();
            ok  = addRasterLayer(dirName, QFileInfo(dirName).completeBaseName());
        }
        else
            ok  = addRasterLayer(fileName, fileInfo.completeBaseName());
    }
    // TODO - should we really call isValidRasterFileName() before addRasterLayer()
    //        this results in 2 calls to GDALOpen()
    // I think (Radim) that it is better to test only first if valid,
    // addRasterLayer() is really trying to add layer and gives error if fails
    //
    // if ( addRasterLayer( fileName, fileInfo.completeBaseName() ) )
    // {
    //   ok  = true );
    // }
    else // nope - try to load it as a shape/ogr
    {
        if (allowInteractive)
            ok = addVectorLayers(QStringList(fileName), "System", "file");
        else
            ok = addVectorLayer(fileName, fileInfo.completeBaseName(), "ogr");
    }

    CPLPopErrorHandler();

    if(!ok)
    {
        // we have no idea what this file is...
        QgsMessageLog::logMessage(tr("Unable to load %1").arg(fileName));
    }
    return ok;
}

void SWGISApp::openProject(const QString &fileName)
{
    // possibly save any pending work before opening a different project
    if(saveDirty())
        // error handling and reporting is in addProject() function
        addProject(fileName);
    return;

}

bool SWGISApp::addProject(const QString &projectFile)
{
    QFileInfo pfi( projectFile );
    statusBar()->showMessage( tr( "Loading project: %1" ).arg( pfi.fileName() ) );
    qApp->processEvents();

    QApplication::setOverrideCursor( Qt::WaitCursor );

    // close the previous opened project if any
    closeProject();

    if ( !QgsProject::instance()->read( projectFile ) )
    {
        QString backupFile = projectFile + "~";
        QString loadBackupPrompt;
        QMessageBox::StandardButtons buttons;
        if ( QFile( backupFile ).exists() )
        {
            loadBackupPrompt = "\n\n" + tr( "Do you want to open the backup file\n%1\ninstead?" ).arg( backupFile );
            buttons |= QMessageBox::Yes;
            buttons |= QMessageBox::No;
        }
        else
            buttons |= QMessageBox::Ok;
        QApplication::restoreOverrideCursor();
        statusBar()->clearMessage();

        int r = QMessageBox::critical( this,
                                     tr( "Unable to open project" ),
                                     QgsProject::instance()->error() + loadBackupPrompt,
                                     buttons );

        if ( QMessageBox::Yes == r && addProject( backupFile ) )
        {
            // We loaded data from the backup file, but we pretend to work on the original project file.
            QgsProject::instance()->setFileName( projectFile );
            QgsProject::instance()->setDirty( true );
            m_ProjectLastModified = pfi.lastModified();
            return true;
        }

        m_MapCanvas->freeze( false );
        m_MapCanvas->refresh();
        return false;
    }

    m_ProjectLastModified = pfi.lastModified();

    setTitleBarText_( *this );
    int  myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorRedPart", 255 );
    int  myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorGreenPart", 255 );
    int  myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorBluePart", 255 );
    QColor myColor = QColor( myRedInt, myGreenInt, myBlueInt );
    m_MapCanvas->setCanvasColor( myColor ); //this is fill color before rendering starts
    m_OverviewCanvas->setBackgroundColor( myColor );

    QgsDebugMsg( "Canvas background color restored..." );
    int myAlphaInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorAlphaPart", 255 );
    myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorRedPart", 255 );
    myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorGreenPart", 255 );
    myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorBluePart", 0 );
    myColor = QColor( myRedInt, myGreenInt, myBlueInt, myAlphaInt );
    m_MapCanvas->setSelectionColor( myColor ); //this is selection color before rendering starts

    //load project scales
    bool projectScales = QgsProject::instance()->readBoolEntry( "Scales", "/useProjectScales" );
    if ( projectScales )
    {
        m_ScaleEdit->updateScales( QgsProject::instance()->readListEntry( "Scales", "/ScalesList" ) );
    }

    m_MapCanvas->updateScale();
    QgsDebugMsg( "Scale restored..." );

    m_ActionFilterLegend->setChecked( QgsProject::instance()->readBoolEntry( "Legend", "filterByMap" ) );

    QSettings settings;

    // does the project have any macros?
//    if ( mPythonUtils && mPythonUtils->isEnabled() )
//    {
//      if ( !QgsProject::instance()->readEntry( "Macros", "/pythonCode", QString::null ).isEmpty() )
//      {
//        int enableMacros = settings.value( "/qgis/enableMacros", 1 ).toInt();
//        // 0 = never, 1 = ask, 2 = just for this session, 3 = always

//        if ( enableMacros == 3 || enableMacros == 2 )
//        {
//          enableProjectMacros();
//        }
//        else if ( enableMacros == 1 ) // ask
//        {
//          // create the notification widget for macros


//          QToolButton *btnEnableMacros = new QToolButton();
//          btnEnableMacros->setText( tr( "Enable macros" ) );
//          btnEnableMacros->setStyleSheet( "background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline;" );
//          btnEnableMacros->setCursor( Qt::PointingHandCursor );
//          btnEnableMacros->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Preferred );
//          connect( btnEnableMacros, SIGNAL( clicked() ), mInfoBar, SLOT( popWidget() ) );
//          connect( btnEnableMacros, SIGNAL( clicked() ), this, SLOT( enableProjectMacros() ) );

//          QgsMessageBarItem *macroMsg = new QgsMessageBarItem(
//            tr( "Security warning" ),
//            tr( "project macros have been disabled." ),
//            btnEnableMacros,
//            QgsMessageBar::WARNING,
//            0,
//            mInfoBar );
//          // display the macros notification widget
//          mInfoBar->pushItem( macroMsg );
//        }
//      }
//    }

    emit projectRead(); // let plug-ins know that we've read in a new
    // project so that they can check any project
    // specific plug-in state

//    LZS2851
//    // add this to the list of recently used project files
//    saveRecentProjectPath( projectFile, false );

    QApplication::restoreOverrideCursor();

    m_MapCanvas->freeze( false );
    m_MapCanvas->refresh();

    statusBar()->showMessage( tr( "Project loaded" ), 3000 );
    return true;

}

void SWGISApp::openFile(const QString &fileName)
{

}

QgsMapCanvas *SWGISApp::mapCanvas()
{
    return m_MapCanvas;
}

QgsMessageBar *SWGISApp::messageBar()
{
    Q_ASSERT(this->m_InfoBar);
    return this->m_InfoBar;
}

void SWGISApp::setIconSizes(int size)
{
    int dockSize;
    if(size > 32)
    {
        dockSize = size - 16;
    }
    else if(size == 32)
    {
        dockSize = 24;
    }
    else
    {
        dockSize = 16;
    }

    //Set the icon size of for all the toolbars created in the future.
    setIconSize(QSize(size, size));

    //Change all current icon sizes.
    QList<QToolBar *> toolbars = findChildren<QToolBar *>();
    Q_FOREACH(QToolBar * toolbar, toolbars)
    {
        QString className = toolbar->parent()->metaObject()->className();
        if (className == "SWGISApp")
        {
            toolbar->setIconSize(QSize(size, size));
        }
        else
        {
            toolbar->setIconSize(QSize(dockSize, dockSize));
        }
    }

    //LZS2851
//    Q_FOREACH (QgsComposer *c, mPrintComposers)
//    {
//        c->setIconSizes( size );
    //    }
}

QgisAppStyleSheet *SWGISApp::styleSheetBuilder()
{
    Q_ASSERT(m_StyleSheetBuilder);
    return m_StyleSheetBuilder;

}

QgsClipboard *SWGISApp::clipboard()
{
    return m_InternalClipboard;
}

void SWGISApp::namSetup()
{
    QgsNetworkAccessManager *nam = QgsNetworkAccessManager::instance();

    namUpdate();

    connect(nam, SIGNAL(authenticationRequired(QNetworkReply *, QAuthenticator *)),
            this, SLOT(namAuthenticationRequired(QNetworkReply *, QAuthenticator *)));

    connect(nam, SIGNAL(proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *)),
            this, SLOT(namProxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *)));

    connect(nam, SIGNAL(requestTimedOut(QNetworkReply*)),
            this, SLOT(namRequestTimedOut(QNetworkReply*)));

#ifndef QT_NO_OPENSSL
    connect(nam, SIGNAL(sslErrors(QNetworkReply *, const QList<QSslError> &)),
            this, SLOT(namSslErrors(QNetworkReply *, const QList<QSslError> &)));
#endif
}

void SWGISApp::namUpdate()
{
    QgsNetworkAccessManager::instance()->setupDefaultProxyAndCache();
}

bool SWGISApp::uniqueComposerTitle(QWidget *parent, QString &composerTitle, bool acceptEmpty, const QString &currentName)
{
    if(!parent)
        parent = this;
    bool ok = false;
    bool titleValid = false;
    QString newTitle = QString(currentName);
    QString chooseMsg = tr("Create unique print composer title");
    if(acceptEmpty)
        chooseMsg += '\n' + tr( "(title generated if left empty)" );
    QString titleMsg = chooseMsg;

    QStringList cNames;
    cNames << newTitle;
    Q_FOREACH(QgsComposer* c, printComposers())
      cNames << c->title();

    while(!titleValid)
    {
        newTitle = QInputDialog::getItem(parent,
                                        tr("Composer title"),
                                        titleMsg,
                                        cNames,
                                        cNames.indexOf(newTitle),
                                        true,
                                        &ok);
        if(!ok)
            return false;

        if(newTitle.isEmpty())
        {
            if(!acceptEmpty)
                titleMsg = chooseMsg + "\n\n" + tr("Title can not be empty!");
            else
                titleValid = true;
        }
        else if(cNames.indexOf(newTitle, 1) >= 0)
        {
            cNames[0] = QString(); // clear non-unique name
            titleMsg = chooseMsg + "\n\n" + tr("Title already exists!");
        }
        else
            titleValid = true;
    }
    composerTitle = newTitle;
    return true;
}

QgsComposer *SWGISApp::createNewComposer(QString title)
{
    //ask user about name
    m_LastComposerId++;
    if ( title.isEmpty() )
    {
      title = tr( "Composer %1" ).arg( m_LastComposerId );
    }
    //create new composer object
    QgsComposer* newComposerObject = new QgsComposer( this, title );

    //add it to the map of existing print composers
    m_PrintComposers.insert( newComposerObject );
    //and place action into print composers menu
    ui->menu_Print_Composers->addAction( newComposerObject->windowAction() );
    newComposerObject->open();
    emit composerAdded( newComposerObject->view() );
    connect( newComposerObject, SIGNAL( composerAdded( QgsComposerView* ) ), this, SIGNAL( composerAdded( QgsComposerView* ) ) );
    connect( newComposerObject, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ), this, SIGNAL( composerWillBeRemoved( QgsComposerView* ) ) );
    connect( newComposerObject, SIGNAL( atlasPreviewFeatureChanged() ), this, SLOT( refreshMapCanvas() ) );
    markDirty();
    return newComposerObject;
}

void SWGISApp::deleteComposer(QgsComposer *c)
{
    emit composerWillBeRemoved( c->view() );
    m_PrintComposers.remove( c );
    ui->menu_Print_Composers->removeAction( c->windowAction() );
    markDirty();
    emit composerRemoved( c->view() );

    //save a reference to the composition
    QgsComposition* composition = c->composition();

    //first, delete the composer. This must occur before deleting the composition as some of the cleanup code in
    //composer or in composer item widgets may require the composition to still be around
    delete c;

    //next, delete the composition
    if ( composition )
        delete composition;
}

QgsComposer *SWGISApp::duplicateComposer(QgsComposer *currentComposer, QString title)
{
    QgsComposer* newComposer = nullptr;

    // test that current composer template write is valid
    QDomDocument currentDoc;
    currentComposer->templateXML( currentDoc );
    QDomElement compositionElem = currentDoc.documentElement().firstChildElement( "Composition" );
    if ( compositionElem.isNull() )
    {
        QgsDebugMsg( "selected composer could not be stored as temporary template" );
        return newComposer;
    }

    if ( title.isEmpty() )
    {
        // TODO: inject a bit of randomness in auto-titles?
        title = currentComposer->title() + tr( " copy" );
    }

    newComposer = createNewComposer( title );
    if ( !newComposer )
    {
        QgsDebugMsg( "could not create new composer" );
        return newComposer;
    }

    // hiding composer until template is loaded is much faster, provide feedback to user
    newComposer->hide();
    QApplication::setOverrideCursor( Qt::BusyCursor );
    if ( !newComposer->composition()->loadFromTemplate( currentDoc, nullptr, false ) )
    {
        deleteComposer( newComposer );
        newComposer = nullptr;
        QgsDebugMsg( "Error, composer could not be duplicated" );
        return newComposer;
    }
    newComposer->activate();
    QApplication::restoreOverrideCursor();
    return newComposer;
}

QMenu *SWGISApp::createPopupMenu()
{
    QMenu* menu = QMainWindow::createPopupMenu();
    QList<QAction*> al = menu->actions();
    QList<QAction*> panels, toolbars;

    if(!al.isEmpty())
    {
        bool found = false;
        for(int i = 0; i < al.size(); ++i)
        {
            if(al[i]->isSeparator())
            {
                found = true;
                continue;
            }

            if(!found)
                panels.append(al[i]);
            else
                toolbars.append(al[i]);
        }

        qSort(panels.begin(), panels.end(), cmpByText_);
        QWidgetAction* panelstitle = new QWidgetAction(menu);
        QLabel* plabel = new QLabel(QString( "<b>%1</b>").arg(tr("Panels")));
        plabel->setMargin(3);
        plabel->setAlignment(Qt::AlignHCenter);
        panelstitle->setDefaultWidget(plabel);
        menu->addAction(panelstitle);

        Q_FOREACH(QAction* a, panels)
            menu->addAction(a);

        menu->addSeparator();
        QWidgetAction* toolbarstitle = new QWidgetAction(menu);
        QLabel* tlabel = new QLabel(QString("<b>%1</b>").arg(tr( "Toolbars")));
        tlabel->setMargin(3);
        tlabel->setAlignment(Qt::AlignHCenter);
        toolbarstitle->setDefaultWidget(tlabel);
        menu->addAction(toolbarstitle);
        qSort(toolbars.begin(), toolbars.end(), cmpByText_);
        Q_FOREACH (QAction* a, toolbars)
            menu->addAction( a );
    }
    return menu;
}

void SWGISApp::showLayerProperties(QgsMapLayer *ml)
{
    if(!ml)
        return;

    if(!QgsProject::instance()->layerIsEmbedded( ml->id()).isEmpty())
    {
        return; //don't show properties of embedded layers
    }

    if(ml->type() == QgsMapLayer::RasterLayer)
    {
        QgsRasterLayerProperties *rlp = new QgsRasterLayerProperties( ml, m_MapCanvas, this );

        rlp->exec();
        delete rlp; // delete since dialog cannot be reused without updating code
    }
    else if ( ml->type() == QgsMapLayer::VectorLayer ) // VECTOR
    {
        QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( ml );

        QgsVectorLayerProperties *vlp = new QgsVectorLayerProperties( vlayer, this );

        if (vlp->exec())
        {
            activateDeactivateLayerRelatedActions(ml);
        }
        delete vlp; // delete since dialog cannot be reused without updating code
    }
    else if ( ml->type() == QgsMapLayer::PluginLayer )
    {
        QgsPluginLayer* pl = qobject_cast<QgsPluginLayer *>( ml );
        if ( !pl )
            return;

        QgsPluginLayerType* plt = QgsPluginLayerRegistry::instance()->pluginLayerType( pl->pluginLayerType() );
        if ( !plt )
            return;

        if ( !plt->showLayerProperties( pl ) )
        {
            messageBar()->pushMessage( tr( "Warning" ),
                                   tr( "This layer doesn't have a properties dialog." ),
                                   QgsMessageBar::INFO, messageTimeout() );
        }
    }
}

QgsLayerTreeView *SWGISApp::layerTreeView()
{
    Q_ASSERT(m_LayerTreeView );
    return m_LayerTreeView;
}

int SWGISApp::messageTimeout()
{
    QSettings settings;
    return settings.value( "/qgis/messageTimeout", 5 ).toInt();
}

void SWGISApp::completeInitialization()
{
    emit initializationCompleted();
}

void SWGISApp::emitCustomSrsValidation(QgsCoordinateReferenceSystem &crs)
{
    emit customSrsValidation( crs );
}

void SWGISApp::layerTreeViewDoubleClicked(const QModelIndex &index)
{
    Q_UNUSED( index )
    QSettings settings;
    switch(settings.value("/qgis/legendDoubleClickAction", 0).toInt())
    {
        case 0:
        {
        //show properties
            if (m_LayerTreeView)
            {
                // if it's a legend node, open symbol editor directly
                if (QgsSymbolV2LegendNode* node = dynamic_cast<QgsSymbolV2LegendNode*>( m_LayerTreeView->currentLegendNode() ) )
                {
                    const QgsSymbolV2* originalSymbol = node->symbol();
                    if (!originalSymbol)
                        return;

                    QScopedPointer<QgsSymbolV2> symbol(originalSymbol->clone());
                    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer*>(node->layerNode()->layer());
                    QgsSymbolV2SelectorDialog dlg(symbol.data(), QgsStyleV2::defaultStyle(), vlayer, this );
                    dlg.setMapCanvas(m_MapCanvas);
                    if (dlg.exec())
                        node->setSymbol(symbol.take());

                    return;
                }
             }
            SWGISApp::instance()->layerProperties();
            break;
        }
        case 1:
            SWGISApp::instance()->attributeTable();
            break;
        default:
            break;
    }
}

void SWGISApp::updateNewLayerInsertionPoint()
{
    QgsLayerTreeGroup* parentGroup = m_LayerTreeView->layerTreeModel()->rootGroup();
    int index = 0;
    QModelIndex current = m_LayerTreeView->currentIndex();

    if(current.isValid())
    {
        if(QgsLayerTreeNode* currentNode = m_LayerTreeView->currentNode())
        {
            // if the insertion point is actually a group, insert new layers into the group
            if (QgsLayerTree::isGroup(currentNode))
            {
                QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint(QgsLayerTree::toGroup(currentNode), 0);
                return;
            }
            // otherwise just set the insertion point in front of the current node
            QgsLayerTreeNode* parentNode = currentNode->parent();
            if (QgsLayerTree::isGroup(parentNode))
                parentGroup = QgsLayerTree::toGroup(parentNode);
        }
        index = current.row();
    }
    QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint(parentGroup, index);
}

void SWGISApp::autoSelectAddedLayer(QList<QgsMapLayer *> layers)
{
    if (!layers.isEmpty())
    {
        QgsLayerTreeLayer* nodeLayer = QgsProject::instance()->layerTreeRoot()->findLayer(layers[0]->id());

        if(!nodeLayer)
            return;

        QModelIndex index = m_LayerTreeView->layerTreeModel()->node2index(nodeLayer);
        m_LayerTreeView->setCurrentIndex(index);
    }
}

void SWGISApp::activeLayerChanged(QgsMapLayer *layer)
{
    if(m_MapCanvas)
        m_MapCanvas->setCurrentLayer(layer);
}

void SWGISApp::layerProperties()
{
    showLayerProperties(activeLayer());
}

void SWGISApp::attributeTable()
{  
}

void SWGISApp::markDirty()
{
    QgsProject::instance()->dirty(true);
}

void SWGISApp::layersWereAdded(const QList<QgsMapLayer *> &theLayers)
{
    Q_FOREACH (QgsMapLayer* layer, theLayers)
    {
        QgsDataProvider *provider = nullptr;

        QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>(layer);
        if (vlayer)
        {
            // notify user about any font family substitution, but only when rendering labels (i.e. not when opening settings dialog)
            connect(vlayer, SIGNAL(labelingFontNotFound(QgsVectorLayer*, QString)), this, SLOT(labelingFontNotFound(QgsVectorLayer*, QString)));

            QgsVectorDataProvider* vProvider = vlayer->dataProvider();
            if (vProvider && vProvider->capabilities() & QgsVectorDataProvider::EditingCapabilities)
            {
                connect(vlayer, SIGNAL(layerModified()), this, SLOT(updateLayerModifiedActions()));
                connect(vlayer, SIGNAL(editingStarted()), this, SLOT(layerEditStateChanged()));
                connect(vlayer, SIGNAL(editingStopped()), this, SLOT(layerEditStateChanged()));
            }

            if (autoTransaction())
            {
                if (QgsTransaction::supportsTransaction(vlayer))
                {
                    QString connString = QgsDataSourceURI(vlayer->source()).connectionInfo();
                    QString key = vlayer->providerType();

                    QgsTransactionGroup* tg = m_TransactionGroups.value( qMakePair( key, connString ) );

                    if ( !tg )
                    {
                        tg = new QgsTransactionGroup();
                        m_TransactionGroups.insert(qMakePair(key, connString), tg);

                        connect(tg, SIGNAL(commitError(QString)), this, SLOT(displayMapToolMessage(QString)));
                    }
                    tg->addLayer(vlayer);
                }
            }

            connect(vlayer, SIGNAL(raiseError(QString)), this, SLOT(onLayerError(QString)));

            provider = vProvider;
        }

        QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer *>(layer);
        if(rlayer)
        {
            // connect up any request the raster may make to update the app progress
            connect(rlayer, SIGNAL(drawingProgress(int, int)), this, SLOT(showProgress(int, int)));

            // connect up any request the raster may make to update the statusbar message
            connect(rlayer, SIGNAL(statusChanged(QString)), this, SLOT(showStatusMessage(QString)));

            provider = rlayer->dataProvider();
        }

        if(provider)
        {
            connect(provider, SIGNAL(dataChanged()), layer, SLOT(triggerRepaint()));
            connect(provider, SIGNAL(dataChanged()), m_MapCanvas, SLOT(refresh()));
        }
    }
}

void SWGISApp::removingLayers(const QStringList &theLayers)
{
    Q_FOREACH(const QString &layerId, theLayers)
    {
        QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>(
                                 QgsMapLayerRegistry::instance()->mapLayer(layerId));
        if (!vlayer || !vlayer->isEditable())
            return;

        toggleEditing( vlayer, false );
    }

    if(autoTransaction())
    {
        for ( QMap< QPair< QString, QString>, QgsTransactionGroup*>::Iterator tg = m_TransactionGroups.begin(); tg != m_TransactionGroups.end();)
        {
            if (tg.value()->isEmpty())
            {
                delete tg.value();
                tg = m_TransactionGroups.erase( tg );
            }
            else
                ++tg;
        }
    }
}

bool SWGISApp::toggleEditing(QgsMapLayer *layer, bool allowCancel)
{
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>(layer);
    if (!vlayer)
        return false;

    bool res = true;

    QString connString = QgsDataSourceURI(vlayer->source()).connectionInfo();
    QString key = vlayer->providerType();

    QMap<QPair<QString, QString>, QgsTransactionGroup*>::iterator tIt = m_TransactionGroups.find(qMakePair(key, connString));
    QgsTransactionGroup* tg = (tIt != m_TransactionGroups.end() ? tIt.value() : nullptr);

    bool isModified = false;

    // Assume changes if: a) the layer reports modifications or b) its transaction group was modified
    if(vlayer->isModified() || ( tg && tg->layers().contains( vlayer ) && tg->modified()))
        isModified  = true;

    if(!vlayer->isEditable() && !vlayer->isReadOnly())
    {
        if(!( vlayer->dataProvider()->capabilities() & QgsVectorDataProvider::EditingCapabilities))
        {
//        mActionToggleEditing->setChecked( false );
//        mActionToggleEditing->setEnabled( false );
            messageBar()->pushMessage(tr( "Start editing failed" ),
                                   tr("Provider cannot be opened for editing"),
                                   QgsMessageBar::INFO, messageTimeout());
            return false;
        }

        vlayer->startEditing();

        QSettings settings;
        QString markerType = settings.value( "/qgis/digitizing/marker_style", "Cross" ).toString();
        bool markSelectedOnly = settings.value( "/qgis/digitizing/marker_only_for_selected", false ).toBool();

        // redraw only if markers will be drawn
        if ((!markSelectedOnly || vlayer->selectedFeatureCount() > 0) &&
          (markerType == "Cross" || markerType == "SemiTransparentCircle"))
        {
            vlayer->triggerRepaint();
        }
    }
    else if ( isModified )
    {
        QMessageBox::StandardButtons buttons = QMessageBox::Save | QMessageBox::Discard;
        if ( allowCancel )
            buttons |= QMessageBox::Cancel;

        switch ( QMessageBox::information( nullptr,
                                         tr( "Stop editing" ),
                                         tr( "Do you want to save the changes to layer %1?" ).arg( vlayer->name() ),
                                         buttons ) )
        {
            case QMessageBox::Cancel:
                res = false;
                break;
            case QMessageBox::Save:
                QApplication::setOverrideCursor( Qt::WaitCursor );

            if (!vlayer->commitChanges())
            {
                commitError( vlayer );
            // Leave the in-memory editing state alone,
            // to give the user a chance to enter different values
            // and try the commit again later
                res = false;
            }

          vlayer->triggerRepaint();

          QApplication::restoreOverrideCursor();
          break;

        case QMessageBox::Discard:
          QApplication::setOverrideCursor( Qt::WaitCursor );

          m_MapCanvas->freeze( true );
          if ( !vlayer->rollBack() )
          {
            messageBar()->pushMessage( tr( "Error" ),
                                       tr( "Problems during roll back" ),
                                       QgsMessageBar::CRITICAL );
            res = false;
          }
          m_MapCanvas->freeze( false );

          vlayer->triggerRepaint();

          QApplication::restoreOverrideCursor();
          break;

        default:
          break;
      }
    }
    else //layer not modified
    {
      m_MapCanvas->freeze( true );
      vlayer->rollBack();
      m_MapCanvas->freeze( false );
      res = true;
      vlayer->triggerRepaint();
    }

    if ( !res && layer == activeLayer() )
    {
      // while also called when layer sends editingStarted/editingStopped signals,
      // this ensures correct restoring of gui state if toggling was canceled
      // or layer commit/rollback functions failed
      activateDeactivateLayerRelatedActions( layer );
    }

    return res;
}

void SWGISApp::loadOGRSublayers(const QString &layertype, const QString &uri, const QStringList &list)
{
    // The uri must contain the actual uri of the vectorLayer from which we are
    // going to load the sublayers.
    QString fileName = QFileInfo( uri ).baseName();
    QList<QgsMapLayer *> myList;
    for ( int i = 0; i < list.size(); i++ )
    {
        QString composedURI;
        QStringList elements = list.at( i ).split( ':' );
        while ( elements.size() > 2 )
        {
            elements[0] += ':' + elements[1];
            elements.removeAt( 1 );
        }

        QString layerName = elements.value( 0 );
        QString layerType = elements.value( 1 );
        if ( layerType == "any" )
        {
            layerType = "";
            elements.removeAt( 1 );
        }

        if ( layertype != "GRASS" )
        {
            composedURI = uri + "|layername=" + layerName;
        }
        else
        {
            composedURI = uri + "|layerindex=" + layerName;
        }

        if ( !layerType.isEmpty() )
        {
            composedURI += "|geometrytype=" + layerType;
        }

        // addVectorLayer( composedURI, list.at( i ), "ogr" );

        QgsDebugMsg( "Creating new vector layer using " + composedURI );
        QString name = list.at( i );
        name.replace( ':', ' ' );
        QgsVectorLayer *layer = new QgsVectorLayer( composedURI, fileName + " " + name, "ogr", false );
        if ( layer && layer->isValid() )
        {
            myList << layer;
        }
        else
        {
            QString msg = tr( "%1 is not a valid or recognized data source" ).arg( composedURI );
            messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
            if ( layer )
                delete layer;
        }
    }

    if ( ! myList.isEmpty() )
    {
        // Register layer(s) with the layers registry
        QgsMapLayerRegistry::instance()->addMapLayers( myList );
        Q_FOREACH ( QgsMapLayer *l, myList )
        {
            bool ok;
            l->loadDefaultStyle( ok );
        }
    }
}

void SWGISApp::loadGDALSublayers(const QString &uri, const QStringList &list)
{
    QString path, name;
    QgsRasterLayer *subLayer = nullptr;

    //add layers in reverse order so they appear in the right order in the layer dock
    for ( int i = list.size() - 1; i >= 0 ; i-- )
    {
        path = list[i];
        // shorten name by replacing complete path with filename
        name = path;
        name.replace( uri, QFileInfo( uri ).completeBaseName() );
        subLayer = new QgsRasterLayer( path, name );
        if ( subLayer )
        {
            if ( subLayer->isValid() )
                addRasterLayer( subLayer );
            else
                delete subLayer;
        }
    }
}

void SWGISApp::setAppStyleSheet(const QString &stylesheet)
{
    setStyleSheet( stylesheet );

    // cascade styles to any current project composers
    Q_FOREACH ( QgsComposer *c, m_PrintComposers )
    {
      c->setStyleSheet( stylesheet );
    }

}

void SWGISApp::namAuthenticationRequired(QNetworkReply *inReply, QAuthenticator *auth)
{
    QPointer<QNetworkReply> reply(inReply);
    Q_ASSERT(qApp->thread() == QThread::currentThread());

    QString username = auth->user();
    QString password = auth->password();

    if (username.isEmpty() && password.isEmpty() && reply->request().hasRawHeader("Authorization"))
    {
        QByteArray header(reply->request().rawHeader( "Authorization"));
        if(header.startsWith("Basic "))
        {
            QByteArray auth(QByteArray::fromBase64(header.mid(6)));
            int pos = auth.indexOf(':');
            if (pos >= 0)
            {
                username = auth.left(pos);
                password = auth.mid(pos + 1);
            }
        }
    }

    for(;;)
    {
        bool ok;
        {
            QMutexLocker lock(QgsCredentials::instance()->mutex());
            ok = QgsCredentials::instance()->get(
                QString("%1 at %2").arg(auth->realm(), reply->url().host()),
                username, password,
                tr("Authentication required"));
        }
        if(!ok)
            return;

        if(reply.isNull() || reply->isFinished())
            return;

        if(auth->user() != username || (password != auth->password() && !password.isNull()))
            break;

        {
            //credentials didn't change - stored ones probably wrong? clear password and retry
            QMutexLocker lock(QgsCredentials::instance()->mutex());
            QgsCredentials::instance()->put(QString("%1 at %2").arg(auth->realm(), reply->url().host()),
                                        username, QString::null);
        }
    }

    {
        // save credentials
        QMutexLocker lock(QgsCredentials::instance()->mutex());
        QgsCredentials::instance()->put(QString( "%1 at %2" ).arg(auth->realm(), reply->url().host()),
                                    username, password);
    }

    auth->setUser(username);
    auth->setPassword(password);
}

void SWGISApp::namProxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *auth)
{
    QSettings settings;
    if (!settings.value("proxy/proxyEnabled", false).toBool() ||
         settings.value("proxy/proxyType", "").toString() == "DefaultProxy")
    {
        auth->setUser("");
        return;
    }

    QString username = auth->user();
    QString password = auth->password();

    for(;;)
    {
        bool ok;
        {
            QMutexLocker lock( QgsCredentials::instance()->mutex() );
            ok = QgsCredentials::instance()->get(
                QString("proxy %1:%2 [%3]").arg(proxy.hostName()).arg(proxy.port()).arg(auth->realm()),
                username, password,
                tr( "Proxy authentication required"));
        }
        if (!ok)
            return;

        if (auth->user() != username || (password != auth->password() && !password.isNull()))
            break;

        // credentials didn't change - stored ones probably wrong? clear password and retry
        {
        QMutexLocker lock(QgsCredentials::instance()->mutex());
        QgsCredentials::instance()->put(QString("proxy %1:%2 [%3]").arg(proxy.hostName()).arg(proxy.port()).arg(auth->realm()),
                                        username, QString::null);
        }
    }

    {
        QMutexLocker lock( QgsCredentials::instance()->mutex() );
        QgsCredentials::instance()->put(QString("proxy %1:%2 [%3]").arg(proxy.hostName()).arg(proxy.port()).arg(auth->realm()),
                                        username, password);
    }

    auth->setUser(username);
    auth->setPassword(password);
}
#ifndef QT_NO_OPENSSL
void SWGISApp::namSslErrors(QNetworkReply *reply, const QList<QSslError> &errors)
{
    // stop the timeout timer, or app crashes if the user (or slot) takes longer than
    // singleshot timeout and tries to update the closed QNetworkReply
//    QTimer *timer = reply->findChild<QTimer *>("timeoutTimer");
//    if (timer)
//    {
//        QgsDebugMsg("Stopping network reply timeout");
//        timer->stop();
//    }

//    QString requesturl = reply->request().url().toString();
//    QgsDebugMsg(QString("SSL errors occurred accessing URL:\n%1").arg(requesturl));

//    QString hostport(QString( "%1:%2" )
//                      .arg(reply->url().host())
//                      .arg(reply->url().port() != -1 ? reply->url().port() : 443)
//                      .trimmed());
//    QString digest(QgsAuthCertUtils::shaHexForCert(reply->sslConfiguration().peerCertificate()));
//    QString dgsthostport(QString("%1:%2" ).arg(digest, hostport));

//    const QHash<QString, QSet<QSslError::SslError>> &errscache(QgsAuthManager::instance()->getIgnoredSslErrorCache());

//    if (errscache.contains(dgsthostport))
//    {
//        QgsDebugMsg(QString("Ignored SSL errors cahced item found, ignoring errors if they match for %1").arg(hostport));
//        const QSet<QSslError::SslError>& errenums(errscache.value(dgsthostport));
//        bool ignore = !errenums.isEmpty();
//        int errmatched = 0;
//        if(ignore)
//        {
//            Q_FOREACH (const QSslError& error, errors)
//            {
//                if (error.error() == QSslError::NoError)
//                    continue;

//                bool errmatch = errenums.contains(error.error());
//                ignore = ignore && errmatch;
//                errmatched += errmatch ? 1 : 0;
//            }
//        }

//        if (ignore && errenums.size() == errmatched)
//        {
//            QgsDebugMsg(QString("Errors matched cached item's, ignoring all for %1").arg(hostport));
//            reply->ignoreSslErrors();
//            return;
//        }

//        QgsDebugMsg(QString( "Errors %1 for cached item for %2" )
//                   .arg(errenums.isEmpty() ? "not found" : "did not match",
//                         hostport));
//    }


//    QgsAuthSslErrorsDialog *dlg = new QgsAuthSslErrorsDialog( reply, errors, this, digest, hostport );
//    dlg->setWindowModality( Qt::ApplicationModal );
//    dlg->resize( 580, 512 );
//    if ( dlg->exec() )
//    {
//      if ( reply )
//      {
//        QgsDebugMsg( QString( "All SSL errors ignored for %1" ).arg( hostport ) );
//        reply->ignoreSslErrors();
//      }
//    }
//    dlg->deleteLater();

    // restart network request timeout timer
//    if(reply)
//    {
//        QSettings s;
//        QTimer *timer = reply->findChild<QTimer *>("timeoutTimer");
//        if(timer)
//        {
//            QgsDebugMsg("Restarting network reply timeout");
//            timer->setSingleShot(true);
//            timer->start(s.value("/qgis/networkAndProxy/networkTimeout", "60000").toInt());
//        }
//    }

}
#endif

void SWGISApp::namRequestTimedOut(QNetworkReply *reply)
{
    Q_UNUSED(reply);
    QLabel *msgLabel = new QLabel(tr("A network request timed out, any data received is likely incomplete.") +
                                  tr(" Please check the <a href=\"#messageLog\">message log</a> for further info."), messageBar());
    msgLabel->setWordWrap(true);
    connect(msgLabel, SIGNAL(linkActivated(QString)), m_LogDock, SLOT(show()));
    messageBar()->pushItem(new QgsMessageBarItem(msgLabel, QgsMessageBar::WARNING, messageTimeout()));

}

void SWGISApp::legendLayerSelectionChanged()
{
    QList<QgsLayerTreeLayer*> selectedLayers = m_LayerTreeView ? m_LayerTreeView->selectedLayerNodes() : QList<QgsLayerTreeLayer*>();

//    mActionDuplicateLayer->setEnabled(!selectedLayers.isEmpty());
//    mActionSetLayerScaleVisibility->setEnabled( !selectedLayers.isEmpty());
//    mActionSetLayerCRS->setEnabled(!selectedLayers.isEmpty());
//    mActionSetProjectCRSFromLayer->setEnabled(selectedLayers.count() == 1);

//    mActionSaveEdits->setEnabled(QgsLayerTreeUtils::layersModified(selectedLayers));
//    mActionRollbackEdits->setEnabled(QgsLayerTreeUtils::layersModified(selectedLayers));
//    mActionCancelEdits->setEnabled(QgsLayerTreeUtils::layersEditable(selectedLayers));

    m_LegendExpressionFilterButton->setEnabled(false);
    m_LegendExpressionFilterButton->setVectorLayer(nullptr);
    if (selectedLayers.size() == 1)
    {
        QgsLayerTreeLayer* l = selectedLayers.front();
        if (l->layer() && l->layer()->type() == QgsMapLayer::VectorLayer)
        {
            m_LegendExpressionFilterButton->setEnabled( true );
            bool exprEnabled;
            QString expr = QgsLayerTreeUtils::legendFilterByExpression(*l, &exprEnabled);
            m_LegendExpressionFilterButton->setExpressionText(expr);
            m_LegendExpressionFilterButton->setVectorLayer(qobject_cast<QgsVectorLayer*>( l->layer()));
            m_LegendExpressionFilterButton->setChecked(exprEnabled);
        }
    }
}

QgsRasterLayer *SWGISApp::addRasterLayer(const QString &uri, const QString &baseName, const QString &providerKey)
{
    return addRasterLayerPrivate( uri, baseName, providerKey, true, true );
}

QgsPluginLayer *SWGISApp::addPluginLayer(const QString &uri, const QString &baseName, const QString &providerKey)
{
    QgsPluginLayer* layer = QgsPluginLayerRegistry::instance()->createLayer( providerKey, uri );
    if ( !layer )
        return nullptr;

    layer->setLayerName( baseName );

    QgsMapLayerRegistry::instance()->addMapLayer( layer );

    return layer;
}

void SWGISApp::addWfsLayer(const QString &uri, const QString &typeName)
{
    // TODO: this should be eventually moved to a more reasonable place
    addVectorLayer( uri, typeName, "WFS" );
}

void SWGISApp::updateProjectFromTemplates()
{
    // get list of project files in template dir
    QSettings settings;
    QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                              QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
    QDir templateDir( templateDirName );
    QStringList filters( "*.qgs" );
    templateDir.setNameFilters( filters );
    QStringList templateFiles = templateDir.entryList( filters );

    // Remove existing entries
    ui->menu_New_From_Template->clear();

    // Add entries
    Q_FOREACH ( const QString& templateFile, templateFiles )
    {
        ui->menu_New_From_Template->addAction( templateFile );
    }

    // add <blank> entry, which loads a blank template (regardless of "default template")
    if ( settings.value( "/qgis/newProjectDefault", QVariant( false ) ).toBool() )
        ui->menu_New_From_Template->addAction( tr( "< Blank >" ) );

}

void SWGISApp::showOptionsDialog(QWidget *parent, const QString &currentPage)
{
    QSettings mySettings;
    QString oldScales = mySettings.value("Map/scales",PROJECT_SCALES).toString();
    bool oldCapitalise = mySettings.value("/qgis/capitaliseLayerName", QVariant(false)).toBool();

    QgsOptions *optionsDialog = new QgsOptions(parent);
    if(!currentPage.isEmpty())
    {
        optionsDialog->setCurrentPage(currentPage);
    }

    if(optionsDialog->exec())
    {
        QgsProject::instance()->layerTreeRegistryBridge()->setNewLayersVisible(mySettings.value("/qgis/new_layers_visible", true).toBool());

        setupLayerTreeViewFromSettings();

        m_MapCanvas->enableAntiAliasing(mySettings.value("/qgis/enable_anti_aliasing").toBool());

        int action = mySettings.value( "/qgis/wheel_action", 2 ).toInt();
        double zoomFactor = mySettings.value( "/qgis/zoom_factor", 2 ).toDouble();
        m_MapCanvas->setWheelAction( static_cast< QgsMapCanvas::WheelAction >( action ), zoomFactor );

        m_MapCanvas->setCachingEnabled( mySettings.value( "/qgis/enable_render_caching", true ).toBool() );

        m_MapCanvas->setParallelRenderingEnabled( mySettings.value( "/qgis/parallel_rendering", false ).toBool() );

        m_MapCanvas->setMapUpdateInterval( mySettings.value( "/qgis/map_update_interval", 250 ).toInt() );

        if ( oldCapitalise != mySettings.value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool() )
        {
            // if the layer capitalization has changed, we need to update all layer names
            Q_FOREACH (QgsMapLayer* layer, QgsMapLayerRegistry::instance()->mapLayers())
            layer->setLayerName(layer->originalName());
        }

        //update any open compositions so they reflect new composer settings
        //we have to push the changes to the compositions here, because compositions
        //have no access to qgisapp and accordingly can't listen in to changes
        QSet<QgsComposer*> composers = instance()->printComposers();
        QSet<QgsComposer*>::iterator composer_it = composers.begin();
        for(; composer_it != composers.end(); ++composer_it)
        {
            QgsComposition* composition = (*composer_it)->composition();
            composition->updateSettings();
        }

        //do we need this? TS
        m_MapCanvas->refresh();

        m_RasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

        if(oldScales != mySettings.value("Map/scales", PROJECT_SCALES).toString() )
            m_ScaleEdit->updateScales();

        qobject_cast<QgsMeasureTool*>( m_MapTools.m_MeasureDist )->updateSettings();
        qobject_cast<QgsMeasureTool*>( m_MapTools.m_MeasureArea )->updateSettings();
        qobject_cast<QgsMapToolMeasureAngle*>( m_MapTools.m_MeasureAngle )->updateSettings();

        bool otfTransformAutoEnable = mySettings.value( "/Projections/otfTransformAutoEnable", true ).toBool();
        m_LayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );
    }
    delete optionsDialog;
}

void SWGISApp::refreshActionFeatureAction()
{
    QgsMapLayer* layer = activeLayer();

    if(!layer || layer->type() != QgsMapLayer::VectorLayer)
        return;

    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>(layer);

    bool layerHasActions = vlayer->actions()->size() || !QgsMapLayerActionRegistry::instance()->mapLayerActions(vlayer).isEmpty();
    ui->action_Feature_Action->setEnabled(layerHasActions);
}

bool SWGISApp::autoTransaction() const
{
    QSettings settings;
    return settings.value( "/qgis/autoTransaction", false ).toBool();
}

void SWGISApp::setAutoTransaction(bool state)
{
    QSettings settings;

    if ( settings.value( "/qgis/autoTransaction", false ).toBool() != state )
        settings.setValue( "/qgis/autoTransaction", state );
}

bool SWGISApp::askUserForZipItemLayers(QString path)
{
    bool ok = false;
    QVector<QgsDataItem*> childItems;
    QgsZipItem *zipItem = nullptr;
    QSettings settings;
    int promptLayers = settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt();

    QgsDebugMsg( "askUserForZipItemLayers( " + path + ')' );

    // if scanZipBrowser == no: skip to the next file
    if ( settings.value( "/qgis/scanZipInBrowser2", "basic" ).toString() == "no" )
    {
        return false;
    }

    zipItem = new QgsZipItem( nullptr, path, path );
    if ( ! zipItem )
        return false;

    zipItem->populate();
    QgsDebugMsg( QString( "Path= %1 got zipitem with %2 children" ).arg( path ).arg( zipItem->rowCount() ) );

    // if 1 or 0 child found, exit so a normal item is created by gdal or ogr provider
    if ( zipItem->rowCount() <= 1 )
    {
        delete zipItem;
        return false;
    }

    // if promptLayers=Load all, load all layers without prompting
    if ( promptLayers == 3 )
    {
        childItems = zipItem->children();
    }
    // exit if promptLayers=Never
    else if ( promptLayers == 2 )
    {
        delete zipItem;
        return false;
    }
    else
    {
        // We initialize a selection dialog and display it.
        QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Vsifile, "vsi", this );

        QStringList layers;
        for ( int i = 0; i < zipItem->children().size(); i++ )
        {
            QgsDataItem *item = zipItem->children().at( i );
            QgsLayerItem *layerItem = dynamic_cast<QgsLayerItem *>( item );
            if ( layerItem )
            {
                QgsDebugMsgLevel( QString( "item path=%1 provider=%2" ).arg( item->path(), layerItem->providerKey() ), 2 );
            }
            if ( layerItem && layerItem->providerKey() == "gdal" )
            {
                layers << QString( "%1|%2|%3" ).arg( i ).arg( item->name(), "Raster" );
            }
            else if ( layerItem && layerItem->providerKey() == "ogr" )
            {
                layers << QString( "%1|%2|%3" ).arg( i ).arg( item->name(), tr( "Vector" ) );
            }
        }

        chooseSublayersDialog.populateLayerTable( layers, "|" );

        if ( chooseSublayersDialog.exec() )
        {
            Q_FOREACH ( int i, chooseSublayersDialog.selectionIndexes() )
            {
                childItems << zipItem->children().at( i );
            }
        }
    }

    if ( childItems.isEmpty() )
    {
        // return true so dialog doesn't popup again (#6225) - hopefully this doesn't create other trouble
        ok = true;
    }

    // add childItems
    Q_FOREACH ( QgsDataItem* item, childItems )
    {
        QgsLayerItem *layerItem = dynamic_cast<QgsLayerItem *>( item );
        if ( !layerItem )
            continue;

        QgsDebugMsg( QString( "item path=%1 provider=%2" ).arg( item->path(), layerItem->providerKey() ) );
        if ( layerItem->providerKey() == "gdal" )
        {
            if ( addRasterLayer( item->path(), QFileInfo( item->name() ).completeBaseName() ) )
            ok = true;
        }
        else if ( layerItem->providerKey() == "ogr" )
        {
            if ( addVectorLayers( QStringList( item->path() ), "System", "file" ) )
            ok = true;
        }
    }

    delete zipItem;
    return ok;
}

void SWGISApp::askUserForGDALSublayers(QgsRasterLayer *layer)
{
    if(!layer)
        return;

    QStringList sublayers = layer->subLayers();
    QgsDebugMsg( QString( "raster has %1 sublayers" ).arg( layer->subLayers().size() ) );

    if ( sublayers.size() < 1 )
        return;

    // if promptLayers=Load all, load all sublayers without prompting
    QSettings settings;
    if ( settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt() == 3 )
    {
        loadGDALSublayers( layer->source(), sublayers );
        return;
    }

    // We initialize a selection dialog and display it.
    QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Gdal, "gdal", this );

    QStringList layers;
    QStringList names;
    for ( int i = 0; i < sublayers.size(); i++ )
    {
        // simplify raster sublayer name - should add a function in gdal provider for this?
        // code is copied from QgsGdalLayerItem::createChildren
        QString name = sublayers[i];
        QString path = layer->source();
        // if netcdf/hdf use all text after filename
        // for hdf4 it would be best to get description, because the subdataset_index is not very practical
        if ( name.startsWith( "netcdf", Qt::CaseInsensitive ) ||
            name.startsWith( "hdf", Qt::CaseInsensitive ) )
        name = name.mid( name.indexOf( path ) + path.length() + 1 );
        else
        {
            // remove driver name and file name
            name.remove( name.split( ':' )[0] );
            name.remove( path );
        }
        // remove any : or " left over
        if ( name.startsWith( ':' ) )
            name.remove( 0, 1 );

        if ( name.startsWith( '\"' ) )
            name.remove( 0, 1 );

        if ( name.endsWith( ':' ) )
            name.chop( 1 );

        if ( name.endsWith( '\"' ) )
            name.chop( 1 );

        names << name;
        layers << QString( "%1|%2" ).arg( i ).arg( name );
    }

    chooseSublayersDialog.populateLayerTable( layers, "|" );

    if ( chooseSublayersDialog.exec() )
    {
        // create more informative layer names, containing filename as well as sublayer name
        QRegExp rx( "\"(.*)\"" );
        QString uri, name;

        Q_FOREACH ( int i, chooseSublayersDialog.selectionIndexes() )
        {
            if ( rx.indexIn( sublayers[i] ) != -1 )
            {
                uri = rx.cap( 1 );
                name = sublayers[i];
                name.replace( uri, QFileInfo( uri ).completeBaseName() );
            }
            else
            {
                name = names[i];
            }

            QgsRasterLayer *rlayer = new QgsRasterLayer( sublayers[i], name );
            if ( rlayer && rlayer->isValid() )
            {
                addRasterLayer( rlayer );
            }
        }
    }

}

bool SWGISApp::shouldAskUserForGDALSublayers(QgsRasterLayer *layer)
{
    // return false if layer is empty or raster has no sublayers
    if(!layer || layer->providerType() != "gdal" || layer->subLayers().size() < 1)
        return false;

    QSettings settings;
    int promptLayers = settings.value("/qgis/promptForRasterSublayers", 1).toInt();
    // 0 = Always -> always ask (if there are existing sublayers)
    // 1 = If needed -> ask if layer has no bands, but has sublayers
    // 2 = Never -> never prompt, will not load anything
    // 3 = Load all -> never prompt, but load all sublayers

    return promptLayers == 0 || promptLayers == 3 || (promptLayers == 1 && layer->bandCount() == 0);
}

void SWGISApp::askUserForOGRSublayers(QgsVectorLayer *layer)
{
    if ( !layer )
    {
        layer = qobject_cast<QgsVectorLayer *>( activeLayer() );
        if ( !layer || layer->dataProvider()->name() != "ogr" )
            return;
    }

    QStringList sublayers = layer->dataProvider()->subLayers();
    QString layertype = layer->dataProvider()->storageType();

    // We initialize a selection dialog and display it.
    QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Ogr, "ogr", this );
    chooseSublayersDialog.populateLayerTable( sublayers );

    if ( chooseSublayersDialog.exec() )
    {
        QString uri = layer->source();
        //the separator char & was changed to | to be compatible
        //with url for protocol drivers
        if ( uri.contains( '|', Qt::CaseSensitive ) )
        {
            // If we get here, there are some options added to the filename.
            // A valid uri is of the form: filename&option1=value1&option2=value2,...
            // We want only the filename here, so we get the first part of the split.
            QStringList theURIParts = uri.split( '|' );
            uri = theURIParts.at( 0 );
        }
        QgsDebugMsg( "Layer type " + layertype );
        // the user has done his choice
        loadOGRSublayers( layertype, uri, chooseSublayersDialog.selectionNames() );
    }
}

void SWGISApp::setupLayerTreeViewFromSettings()
{
    QSettings settings;
    QgsLayerTreeModel* model = this->m_LayerTreeView->layerTreeModel();
    model->setFlag(QgsLayerTreeModel::ShowRasterPreviewIcon, settings.value("/qgis/createRasterLegendIcons", false).toBool());

    QFont fontLayer, fongGroup;
    fontLayer.setBold(settings.value("/qgis/legendLayersBold", true).toBool());
    fongGroup.setBold(settings.value("/qgis/legendGroupsBold", true).toBool());
    model->setLayerTreeNodeFont(QgsLayerTreeNode::NodeLayer, fontLayer);
    model->setLayerTreeNodeFont(QgsLayerTreeNode::NodeGroup, fongGroup);
}

void SWGISApp::createActions()
{
    connect(ui->action_New_Project, SIGNAL(triggered()), this, SLOT(fileNew()));
    connect(ui->action_Open_Project, SIGNAL(triggered()), this, SLOT(fileOpen()));
    connect(ui->action_Save_Project, SIGNAL(triggered()), this, SLOT(fileSave()));
    connect(ui->action_Save_Project_As, SIGNAL(triggered()), this, SLOT(fileSaveAs()));
    connect(ui->action_Save_as_Image, SIGNAL(triggered()), this, SLOT(saveMapAsImage()));

    connect(ui->action_Show_Composer_Manager, SIGNAL(triggered()), this, SLOT(showComposerManager()));
    connect(ui->action_Labeling, SIGNAL(triggered()), this, SLOT(labeling()));


    connect(ui->action_Add_WMS_WMTS_Layer, SIGNAL(triggered()), this, SLOT(addWmsLayer()));
    connect(ui->action_Add_Vector_Layer, SIGNAL(triggered()), this, SLOT(addVectorLayer()));
    connect(ui->action_Add_WFS_Layer, SIGNAL(triggered()), this, SLOT(addWfsLayer()));
    connect(ui->action_New_Shapefile_Layer, SIGNAL(triggered()), this, SLOT(newVectorLayer()));

    connect(ui->action_Project_Properties, SIGNAL(triggered()), this, SLOT(projectProperties()));
    connect(ui->action_Options, SIGNAL(triggered()), this, SLOT(options()));
    connect(ui->action_Pan_Map, SIGNAL(triggered()), this, SLOT(pan()));
//    connect( mActionPanToSelected, SIGNAL( triggered() ), this, SLOT( panToSelected() ) );
    connect(ui->action_Zoom_In, SIGNAL(triggered()), this, SLOT(zoomIn()));
    connect(ui->action_Zoom_Out, SIGNAL(triggered()), this, SLOT(zoomOut()));
    connect(ui->action_Measure_Line, SIGNAL(triggered()), this, SLOT(measure()));
    connect(ui->action_Measure_Area, SIGNAL(triggered()), this, SLOT(measureArea()));
    connect(ui->action_Measure_Angle, SIGNAL(triggered()), this, SLOT(measureAngle()));

    connect( ui->action_Show_All_Layers, SIGNAL( triggered() ), this, SLOT( showAllLayers() ) );
    connect( ui->action_Hide_All_Layers, SIGNAL( triggered() ), this, SLOT( hideAllLayers() ) );
    connect( ui->action_Show_Selected_Layers, SIGNAL( triggered() ), this, SLOT( showSelectedLayers() ) );
    connect( ui->action_Hide_Selected_Layers, SIGNAL( triggered() ), this, SLOT( hideSelectedLayers() ) );

}

void SWGISApp::createMenus()
{
    m_PanelMenu = new QMenu(tr("Panels"), this);
    m_PanelMenu->setObjectName("mPanelMenu");

    connect( ui->menu_New_From_Template, SIGNAL( triggered( QAction * ) ),
             this, SLOT( fileNewFromTemplateAction( QAction * ) ) );

//    QAction* before = mActionHelpAPI;
//    QAction* actionWhatsThis = QWhatsThis::createAction( this );
//    actionWhatsThis->setIcon( QgsApplication::getThemeIcon( "/mActionWhatsThis.svg" ) );
//    mHelpMenu->insertAction( before, actionWhatsThis );


}

void SWGISApp::createStatusBar()
{
    //remove borders from children under Windows
    statusBar()->setStyleSheet("QStatusBar::item {border: none;}");

    // Add a panel to the status bar for the scale, coords and progress
    // And also rendering suppression checkbox
    m_ProgressBar = new QProgressBar( statusBar() );
    m_ProgressBar->setObjectName( "mProgressBar" );
    m_ProgressBar->setMaximumWidth( 100 );
    m_ProgressBar->hide();
    m_ProgressBar->setWhatsThis( tr( "Progress bar that displays the status "
                                    "of rendering layers and other time-intensive operations" ) );
    statusBar()->addPermanentWidget( m_ProgressBar, 1 );
    connect( m_MapCanvas, SIGNAL( renderStarting() ), this, SLOT( canvasRefreshStarted() ) );
    connect( m_MapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( canvasRefreshFinished() ) );

    QFont myFont( "Arial", 9 );
    statusBar()->setFont(myFont);

    //coords status bar widget
    m_CoordsEdit = new QgsStatusBarCoordinatesWidget(statusBar());
    m_CoordsEdit->setMapCanvas(m_MapCanvas );
    m_CoordsEdit->setFont(myFont);
    statusBar()->addPermanentWidget(m_CoordsEdit, 0);

    // add a label to show current scale
    m_ScaleLabel = new QLabel(QString(), statusBar());
    m_ScaleLabel->setObjectName("mScaleLable");
    m_ScaleLabel->setFont(myFont);
    m_ScaleLabel->setMinimumWidth(10);
    m_ScaleLabel->setMargin(3);
    m_ScaleLabel->setAlignment(Qt::AlignCenter);
    m_ScaleLabel->setFrameStyle(QFrame::NoFrame);
    m_ScaleLabel->setText(tr("Scale"));
    m_ScaleLabel->setToolTip(tr("Current map scale"));
    statusBar()->addPermanentWidget(m_ScaleLabel, 0);

    m_ScaleEdit = new QgsScaleComboBox(statusBar());
    m_ScaleEdit->setObjectName("mScaleEdit");
    m_ScaleEdit->setFont(myFont);
    // seems setFont() change font only for popup not for line edit,
    // so we need to set font for it separately
    m_ScaleEdit->lineEdit()->setFont(myFont);
    m_ScaleEdit->setMinimumWidth(10);
    m_ScaleEdit->setContentsMargins(0, 0, 0, 0);
    m_ScaleEdit->setWhatsThis(tr("Displays the current map scale"));
    m_ScaleEdit->setToolTip(tr("Current map scale (formatted as x:y)"));

    statusBar()->addPermanentWidget(m_ScaleEdit, 0);
    connect(m_ScaleEdit, SIGNAL(scaleChanged()), this, SLOT(userScale()));

    if (QgsMapCanvas::rotationEnabled())
    {
      // add a widget to show/set current rotation
        m_RotationLabel = new QLabel(QString(), statusBar());
        m_RotationLabel->setObjectName("mRotationLabel");
        m_RotationLabel->setFont(myFont);
        m_RotationLabel->setMinimumWidth(10);
        m_RotationLabel->setMargin(3);
        m_RotationLabel->setAlignment(Qt::AlignCenter);
        m_RotationLabel->setFrameStyle(QFrame::NoFrame);
        m_RotationLabel->setText(tr( "Rotation"));
        m_RotationLabel->setToolTip(tr("Current clockwise map rotation in degrees"));
        statusBar()->addPermanentWidget(m_RotationLabel, 0);

        m_RotationEdit = new QgsDoubleSpinBox(statusBar());
        m_RotationEdit->setObjectName("mRotationEdit");
        m_RotationEdit->setClearValue(0.0);
        m_RotationEdit->setKeyboardTracking(false);
        m_RotationEdit->setMaximumWidth(120);
        m_RotationEdit->setDecimals(1);
        m_RotationEdit->setRange(-180.0, 180.0);
        m_RotationEdit->setWrapping(true);
        m_RotationEdit->setSingleStep(5.0);
        m_RotationEdit->setFont(myFont);
        m_RotationEdit->setWhatsThis(tr("Shows the current map clockwise rotation "
                                       "in degrees. It also allows editing to set "
                                       "the rotation"));
        m_RotationEdit->setToolTip(tr("Current clockwise map rotation in degrees"));
        statusBar()->addPermanentWidget(m_RotationEdit, 0);
        connect(m_RotationEdit, SIGNAL(valueChanged(double)), this, SLOT(userRotation()));

        showRotation();
    }

    // render suppression status bar widget
    m_RenderSuppressionCBox = new QCheckBox(tr("Render"), statusBar());
    m_RenderSuppressionCBox->setObjectName("mRenderSuppressionCBox");
    m_RenderSuppressionCBox->setChecked(true);
    m_RenderSuppressionCBox->setFont(myFont);
    m_RenderSuppressionCBox->setWhatsThis(tr("When checked, the map layers "
                                          "are rendered in response to map navigation commands and other "
                                          "events. When not checked, no rendering is done. This allows you "
                                          "to add a large number of layers and symbolize them before rendering.") );
    m_RenderSuppressionCBox->setToolTip(tr("Toggle map rendering"));
    statusBar()->addPermanentWidget(m_RenderSuppressionCBox, 0);
    // On the fly projection status bar icon
    // Changed this to a tool button since a QPushButton is
    // sculpted on OS X and the icon is never displayed [gsherman]
    m_OnTheFlyProjectionStatusButton = new QToolButton(statusBar());
    m_OnTheFlyProjectionStatusButton->setAutoRaise(true);
    m_OnTheFlyProjectionStatusButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    m_OnTheFlyProjectionStatusButton->setObjectName("mOntheFlyProjectionStatusButton");
    // Maintain uniform widget height in status bar by setting button height same as labels
    // For Qt/Mac 3.3, the default toolbutton height is 30 and labels were expanding to match
    m_OnTheFlyProjectionStatusButton->setMaximumHeight(m_ScaleLabel->height());
//    m_OnTheFlyProjectionStatusButton->setIcon(QgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ));
    m_OnTheFlyProjectionStatusButton->setWhatsThis(tr( "This icon shows whether "
        "on the fly coordinate reference system transformation is enabled or not. "
        "Click the icon to bring up "
        "the project properties dialog to alter this behaviour."));
    m_OnTheFlyProjectionStatusButton->setToolTip(tr("CRS status - Click "
        "to open coordinate reference system dialog"));
    connect(m_OnTheFlyProjectionStatusButton, SIGNAL(clicked()), this, SLOT(projectPropertiesProjections()));//bring up the project props dialog when clicked
    statusBar()->addPermanentWidget(m_OnTheFlyProjectionStatusButton, 0);
    statusBar()->showMessage(tr( "Ready"));

    m_MessageButton = new QToolButton( statusBar() );
    m_MessageButton->setAutoRaise( true );
//    m_MessageButton->setIcon( QgsApplication::getThemeIcon( "/mMessageLogRead.svg" ) );
    m_MessageButton->setToolTip( tr( "Messages" ) );
    m_MessageButton->setWhatsThis( tr( "Messages" ) );
    m_MessageButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
    m_MessageButton->setObjectName( "mMessageLogViewerButton" );
    m_MessageButton->setMaximumHeight( m_ScaleLabel->height() );
    m_MessageButton->setCheckable( true );
    statusBar()->addPermanentWidget(m_MessageButton, 0);
}

void SWGISApp::setupConnections()
{
    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(saveWindowState()));

    // signal when mouse moved over window (coords display in status bar)
    connect(m_MapCanvas, SIGNAL(xyCoordinates(const QgsPoint &)), this, SLOT(saveLastMousePosition(const QgsPoint &)));
    connect(m_MapCanvas, SIGNAL(extentsChanged()), this, SLOT(extentChanged()));
    connect(m_MapCanvas, SIGNAL(scaleChanged(double)), this, SLOT(showScale(double)));
    connect(m_MapCanvas, SIGNAL(rotationChanged(double)), this, SLOT(showRotation()));
    connect(m_MapCanvas, SIGNAL(scaleChanged(double)), this, SLOT(updateMouseCoordinatePrecision()));
    connect(m_MapCanvas, SIGNAL(mapToolSet(QgsMapTool *, QgsMapTool *)), this, SLOT(mapToolChanged(QgsMapTool *, QgsMapTool *)));
    connect(m_MapCanvas, SIGNAL(selectionChanged(QgsMapLayer *)), this, SLOT(selectionChanged(QgsMapLayer *)));
//    connect(m_MapCanvas, SIGNAL(extentsChanged()),
//             this, SLOT(markDirty()));
    connect(m_MapCanvas, SIGNAL(layersChanged()), this, SLOT(markDirty()));

//    connect( m_MapCanvas, SIGNAL( zoomLastStatusChanged( bool ) ),
//             mActionZoomLast, SLOT( setEnabled( bool ) ) );
//    connect( m_MapCanvas, SIGNAL( zoomNextStatusChanged( bool ) ),
//             mActionZoomNext, SLOT( setEnabled( bool ) ) );
//    connect( mRenderSuppressionCBox, SIGNAL( toggled( bool ) ),
//             m_MapCanvas, SLOT( setRenderFlag( bool ) ) );

//    connect( m_MapCanvas, SIGNAL( destinationCrsChanged() ),
//             this, SLOT( reprojectAnnotations() ) );

//    // connect MapCanvas keyPress event so we can check if selected feature collection must be deleted
//    connect( m_MapCanvas, SIGNAL( keyPressed( QKeyEvent * ) ),
//             this, SLOT( mapCanvas_keyPressed( QKeyEvent * ) ) );

//    // connect renderer
//    connect( m_MapCanvas, SIGNAL( hasCrsTransformEnabledChanged( bool ) ),
//             this, SLOT( hasCrsTransformEnabled( bool ) ) );
//    connect( m_MapCanvas, SIGNAL( destinationCrsChanged() ),
//             this, SLOT( destinationCrsChanged() ) );

    // connect legend signals
    connect(m_LayerTreeView, SIGNAL(currentLayerChanged( QgsMapLayer *)),
             this, SLOT(activateDeactivateLayerRelatedActions(QgsMapLayer *)));
    connect(m_LayerTreeView->selectionModel(), SIGNAL(selectionChanged( QItemSelection, QItemSelection)),
             this, SLOT(legendLayerSelectionChanged()));
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(addedChildren(QgsLayerTreeNode*, int, int)),
             this, SLOT(markDirty()));
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(addedChildren(QgsLayerTreeNode*, int, int)),
             this, SLOT(updateNewLayerInsertionPoint() ) );
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(removedChildren(QgsLayerTreeNode*, int, int)),
             this, SLOT(markDirty()));
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(removedChildren(QgsLayerTreeNode*, int, int)),
             this, SLOT(updateNewLayerInsertionPoint()));
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(visibilityChanged(QgsLayerTreeNode*, Qt::CheckState)),
             this, SLOT(markDirty()));
    connect(m_LayerTreeView->layerTreeModel()->rootGroup(), SIGNAL(customPropertyChanged(QgsLayerTreeNode*, QString)),
             this, SLOT(markDirty()));

    // connect map layer registry
    connect(QgsMapLayerRegistry::instance(), SIGNAL(layersAdded( QList<QgsMapLayer *>)), this, SLOT(layersWereAdded( QList<QgsMapLayer *>)));
    connect(QgsMapLayerRegistry::instance(), SIGNAL(layersWillBeRemoved( QStringList)), this, SLOT(removingLayers(QStringList)));

//    // connect initialization signal
//    connect( this, SIGNAL( initializationCompleted() ),
//             this, SLOT( fileOpenAfterLaunch() ) );

    // Connect warning dialog from project reading
//    connect(QgsProject::instance(), SIGNAL(oldProjectVersionWarning(QString ) ),
//             this, SLOT( oldProjectVersionWarning( QString ) ) );
    connect(QgsProject::instance(), SIGNAL(layerLoaded(int, int)),
             this, SLOT(showProgress(int, int)));
    connect(QgsProject::instance(), SIGNAL(loadingLayer( QString)),
             this, SLOT(showStatusMessage(QString)));
//    connect(QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ),
//             this, SLOT( readProject( const QDomDocument & ) ) );
//    connect(QgsProject::instance(), SIGNAL( writeProject( QDomDocument & ) ),
//             this, SLOT( writeProject( QDomDocument & ) ) );
//    connect(QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ),
//             this, SLOT( writeAnnotationItemsToProject( QDomDocument& ) ) );

//    connect(QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadComposersFromProject( const QDomDocument& ) ) );
//    connect(QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadAnnotationItemsFromProject( const QDomDocument& ) ) );

//    connect(this, SIGNAL( projectRead() ),
//             this, SLOT( fileOpenedOKAfterLaunch() ) );

//    // connect preview modes actions
//    connect( mActionPreviewModeOff, SIGNAL( triggered() ), this, SLOT( disablePreviewMode() ) );
//    connect( mActionPreviewModeGrayscale, SIGNAL( triggered() ), this, SLOT( activateGrayscalePreview() ) );
//    connect( mActionPreviewModeMono, SIGNAL( triggered() ), this, SLOT( activateMonoPreview() ) );
//    connect( mActionPreviewProtanope, SIGNAL( triggered() ), this, SLOT( activateProtanopePreview() ) );
//    connect( mActionPreviewDeuteranope, SIGNAL( triggered() ), this, SLOT( activateDeuteranopePreview() ) );

    // handle deprecated labels in project for QGIS 2.0
    connect( this, SIGNAL( newProject() ),
             this, SLOT( checkForDeprecatedLabelsInProject() ) );
    connect( this, SIGNAL( projectRead() ),
             this, SLOT( checkForDeprecatedLabelsInProject() ) );

//    // setup undo/redo actions
//    connect( mUndoWidget, SIGNAL( undoStackChanged() ), this, SLOT( updateUndoActions() ) );

}

void SWGISApp::initLayerTreeView()
{
    this->m_LayerTreeView->setWhatsThis(tr( "Map legend that displays all the layers currently on the map canvas. Click on the check box to turn a layer on or off. Double click on a layer in the legend to customize its appearance and set other properties."));
    this->m_LayerTreeDock = new QDockWidget(tr("Layers Panel"), this);
    this->m_LayerTreeDock->setObjectName("Layers");
    this->m_LayerTreeDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);

    QgsLayerTreeModel* model = new QgsLayerTreeModel(QgsProject::instance()->layerTreeRoot(), this);
    model->setFlag(QgsLayerTreeModel::AllowNodeReorder);
    model->setFlag(QgsLayerTreeModel::AllowNodeRename);
    model->setFlag(QgsLayerTreeModel::AllowNodeChangeVisibility);
    model->setFlag(QgsLayerTreeModel::ShowLegendAsTree);
    model->setAutoCollapseLegendNodes(10);

    this->m_LayerTreeView->setModel(model);
    this->m_LayerTreeView->setMenuProvider(new QgsAppLayerTreeViewMenuProvider(this->m_LayerTreeView, this->m_MapCanvas));
    this->setupLayerTreeViewFromSettings();

    connect( m_LayerTreeView, SIGNAL( doubleClicked( QModelIndex ) ), this, SLOT( layerTreeViewDoubleClicked( QModelIndex ) ) );
    connect( m_LayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer* ) ), this, SLOT( activeLayerChanged( QgsMapLayer* ) ) );
    connect( m_LayerTreeView->selectionModel(), SIGNAL( currentChanged( QModelIndex, QModelIndex ) ), this, SLOT( updateNewLayerInsertionPoint() ) );
    connect( QgsProject::instance()->layerTreeRegistryBridge(), SIGNAL( addedLayersToLayerTree( QList<QgsMapLayer*> ) ),
             this, SLOT( autoSelectAddedLayer( QList<QgsMapLayer*> ) ) );

    m_ActionFilterLegend = new QAction(tr("Filter Legend By Map Content"), this);
    m_ActionFilterLegend->setCheckable(true);
    m_ActionFilterLegend->setToolTip(tr("Filter Legend By Map Content"));
    connect(m_ActionFilterLegend, SIGNAL(toggled( bool)), this, SLOT( updateFilterLegend()));

    m_LegendExpressionFilterButton = new QgsLegendFilterButton(this);
    m_LegendExpressionFilterButton->setToolTip(tr("Filter legend by expression"));
    connect(m_LegendExpressionFilterButton, SIGNAL(toggled(bool)), this, SLOT(toggleFilterLegendByExpression(bool)));

    // expand / collapse tool buttons
    QAction* actionExpandAll = new QAction( tr( "Expand All" ), this );
    actionExpandAll->setIcon( QgsApplication::getThemeIcon( "/mActionExpandTree.svg" ) );
    actionExpandAll->setToolTip( tr( "Expand All" ) );
    connect( actionExpandAll, SIGNAL( triggered( bool ) ), m_LayerTreeView, SLOT( expandAll() ) );
    QAction* actionCollapseAll = new QAction( tr( "Collapse All" ), this );
    actionCollapseAll->setIcon( QgsApplication::getThemeIcon( "/mActionCollapseTree.svg" ) );
    actionCollapseAll->setToolTip( tr( "Collapse All" ) );
    connect( actionCollapseAll, SIGNAL( triggered( bool ) ), m_LayerTreeView, SLOT( collapseAll() ) );

    QToolBar* toolbar = new QToolBar();
    toolbar->setIconSize(QSize(16, 16));
    toolbar->addAction(m_ActionFilterLegend);
    toolbar->addWidget(m_LegendExpressionFilterButton);
    toolbar->addAction(actionExpandAll);
    toolbar->addAction(actionCollapseAll);


    QVBoxLayout* vboxLayout = new QVBoxLayout;
    vboxLayout->setMargin( 0 );
    vboxLayout->addWidget( toolbar );
    vboxLayout->addWidget( m_LayerTreeView );

    QWidget* w = new QWidget;
    w->setLayout( vboxLayout );
    m_LayerTreeDock->setWidget( w );
    addDockWidget( Qt::LeftDockWidgetArea, m_LayerTreeDock);

    m_LayerTreeCanvasBridge = new QgsLayerTreeMapCanvasBridge( QgsProject::instance()->layerTreeRoot(), m_MapCanvas, this );
    connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ), m_LayerTreeCanvasBridge, SLOT( writeProject( QDomDocument& ) ) );
    connect( QgsProject::instance(), SIGNAL( readProject( QDomDocument ) ), m_LayerTreeCanvasBridge, SLOT( readProject( QDomDocument ) ) );

    bool otfTransformAutoEnable = QSettings().value( "/Projections/otfTransformAutoEnable", true ).toBool();
    m_LayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );

    m_MapLayerOrder = new QgsCustomLayerOrderWidget( m_LayerTreeCanvasBridge, this );
    m_MapLayerOrder->setObjectName( "theMapLayerOrder" );

    m_MapLayerOrder->setWhatsThis( tr( "Map layer list that displays all layers in drawing order." ) );
    m_LayerOrderDock = new QDockWidget( tr( "Layer Order Panel" ), this );
    m_LayerOrderDock->setObjectName( "LayerOrder" );
    m_LayerOrderDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );

    m_LayerOrderDock->setWidget( m_MapLayerOrder );
    addDockWidget( Qt::LeftDockWidgetArea, m_LayerOrderDock );
    m_LayerOrderDock->hide();


    connect(m_MapCanvas, SIGNAL(mapCanvasRefreshed()), this, SLOT(updateFilterLegend()));

}

void SWGISApp::createOverview()
{
    m_OverviewCanvas = new QgsMapOverviewCanvas(nullptr, m_MapCanvas);

    QSettings settings;
    int red = settings.value("/qgis/default_canvas_color_red", 255).toInt();
    int green = settings.value("/qgis/default_canvas_color_green", 255).toInt();
    int blue = settings.value("/qgis/default_canvas_color_blue", 255).toInt();
    m_OverviewCanvas->setBackgroundColor(QColor(red, green, blue));

    m_OverviewCanvas->setWhatsThis(tr( "Map overview canvas. This canvas can be used to display a locator map that shows the current extent of the map canvas. The current extent is shown as a red rectangle. Any layer on the map can be added to the overview canvas."));

    m_OverviewMapCursor = new QCursor(Qt::OpenHandCursor);
    m_OverviewCanvas->setCursor(*m_OverviewMapCursor);
  //  QVBoxLayout *myOverviewLayout = new QVBoxLayout;
    m_OverviewDock = new QDockWidget(tr( "Overview Panel" ), this);
    m_OverviewDock->setObjectName("Overview");
    m_OverviewDock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    m_OverviewDock->setWidget(m_OverviewCanvas);
    addDockWidget(Qt::LeftDockWidgetArea, m_OverviewDock);
    // add to the Panel submenu
    m_PanelMenu->addAction(m_OverviewDock->toggleViewAction());

    m_MapCanvas->enableOverviewMode(m_OverviewCanvas);

    // moved here to set anti aliasing to both map canvas and overview
    QSettings mySettings;
    // Anti Aliasing enabled by default as of QGIS 1.7
    m_MapCanvas->enableAntiAliasing(mySettings.value("/qgis/enable_anti_aliasing", true ).toBool());

    int action = mySettings.value("/qgis/wheel_action", 2).toInt();
    double zoomFactor = mySettings.value("/qgis/zoom_factor", 2).toDouble();
    m_MapCanvas->setWheelAction( static_cast< QgsMapCanvas::WheelAction >(action), zoomFactor);

    m_MapCanvas->setCachingEnabled( mySettings.value("/qgis/enable_render_caching", true).toBool());

    m_MapCanvas->setParallelRenderingEnabled(mySettings.value("/qgis/parallel_rendering", false).toBool());

    m_MapCanvas->setMapUpdateInterval(mySettings.value("/qgis/map_update_interval", 250).toInt());
}

void SWGISApp::createCanvasTools()
{
    m_MapTools.m_ZoomIn = new QgsMapToolZoom(m_MapCanvas, false /* zoomIn */ );
    m_MapTools.m_ZoomIn->setAction( ui->action_Zoom_In );
    m_MapTools.m_ZoomOut = new QgsMapToolZoom( m_MapCanvas, true /* zoomOut */ );
    m_MapTools.m_ZoomOut->setAction( ui->action_Zoom_Out );
    m_MapTools.m_Pan = new QgsMapToolPan( m_MapCanvas );
    m_MapTools.m_Pan->setAction( ui->action_Pan_Map );
    m_MapTools.m_MeasureDist = new QgsMeasureTool(m_MapCanvas, false);
    m_MapTools.m_MeasureDist->setAction(ui->action_Measure_Line);
    m_MapTools.m_MeasureArea = new QgsMeasureTool(m_MapCanvas, false);
    m_MapTools.m_MeasureArea->setAction(ui->action_Measure_Area);
    m_MapTools.m_MeasureAngle = new QgsMeasureTool(m_MapCanvas, false);
    m_MapTools.m_MeasureAngle->setAction(ui->action_Measure_Angle);


}

void SWGISApp::createMapTips()
{
    // Set up the timer for maptips. The timer is reset everytime the mouse is moved
    m_MapTipsTimer = new QTimer(m_MapCanvas);
    // connect the timer to the maptips slot
    connect(m_MapTipsTimer, SIGNAL(timeout()), this, SLOT(showMapTip()));
    // set the interval to 0.850 seconds - timer will be started next time the mouse moves
    m_MapTipsTimer->setInterval( 850 );

    m_Maptip = new QgsMapTip();

}

void SWGISApp::updateCRSStatusBar()
{
    m_OnTheFlyProjectionStatusButton->setText( m_MapCanvas->mapSettings().destinationCrs().authid() );

    if ( m_MapCanvas->mapSettings().hasCrsTransformEnabled() )
    {
      m_OnTheFlyProjectionStatusButton->setText( tr( "%1 (OTF)" ).arg( m_OnTheFlyProjectionStatusButton->text() ) );
      m_OnTheFlyProjectionStatusButton->setToolTip(
        tr( "Current CRS: %1 (OTFR enabled)" ).arg( m_MapCanvas->mapSettings().destinationCrs().description() ) );
//LZS2851
//      m_OnTheFlyProjectionStatusButton->setIcon( QgsApplication::getThemeIcon( "mIconProjectionEnabled.png" ) );
    }
    else
    {
      m_OnTheFlyProjectionStatusButton->setToolTip(
        tr( "Current CRS: %1 (OTFR disabled)" ).arg( m_MapCanvas->mapSettings().destinationCrs().description() ) );
      //LZS2851
//      m_OnTheFlyProjectionStatusButton->setIcon( QgsApplication::getThemeIcon( "mIconProjectionDisabled.png" ) );
    }

}

void SWGISApp::createDecorations()
{
    QgsDecorationCopyright* decorationCopyright = new QgsDecorationCopyright(this);
    connect(ui->action_Decoration_CopyRight, SIGNAL(triggered()), decorationCopyright, SLOT(run()));

    QgsDecorationNorthArrow* decorationNorthArrow = new QgsDecorationNorthArrow(this);
    connect(ui->action_Decoration_NorthArrow, SIGNAL(triggered()), decorationNorthArrow, SLOT(run()));

    QgsDecorationScaleBar* decorationScaleBar = new QgsDecorationScaleBar(this);
    connect(ui->action_Decoration_ScaleBar, SIGNAL(triggered()), decorationScaleBar, SLOT(run()));

    QgsDecorationGrid* decorationGrid = new QgsDecorationGrid(this);
    connect(ui->action_Decoration_Grid, SIGNAL(triggered()), decorationGrid, SLOT(run()));

    // add the decorations in a particular order so they are rendered in that order
    addDecorationItem( decorationGrid );
    addDecorationItem( decorationCopyright );
    addDecorationItem( decorationNorthArrow );
    addDecorationItem( decorationScaleBar );
    connect(m_MapCanvas, SIGNAL(renderComplete(QPainter *)), this, SLOT(renderDecorationItems(QPainter *)));
//    connect(this, SIGNAL(newProject()), this, SLOT(projectReadDecorationItems()));
//    connect(this, SIGNAL(projectRead()), this, SLOT(projectReadDecorationItems()));

}

void SWGISApp::validateSrs(QgsCoordinateReferenceSystem &crs)
{
    static QString authid = QString::null;
    QSettings mySettings;
    QString myDefaultProjectionOption = mySettings.value("/Projections/defaultBehaviour", "prompt").toString();
    if (myDefaultProjectionOption == "prompt")
    {
      // @note this class is not a descendent of QWidget so we can't pass
      // it in the ctor of the layer projection selector

        QgsGenericProjectionSelector *mySelector = new QgsGenericProjectionSelector();
        mySelector->setMessage(crs.validationHint()); //shows a generic message, if not specified
        if (authid.isNull())
            authid = SWGISApp::instance()->mapCanvas()->mapSettings().destinationCrs().authid();

        QgsCoordinateReferenceSystem defaultCrs;
        if (defaultCrs.createFromOgcWmsCrs(authid))
        {
            mySelector->setSelectedCrsId( defaultCrs.srsid() );
        }

         bool waiting = QApplication::overrideCursor() && QApplication::overrideCursor()->shape() == Qt::WaitCursor;
        if (waiting)
            QApplication::setOverrideCursor( Qt::ArrowCursor );

        if (mySelector->exec())
        {
            QgsDebugMsg("Layer srs set from dialog: " + QString::number(mySelector->selectedCrsId()));
            authid = mySelector->selectedAuthId();
            crs.createFromOgcWmsCrs(mySelector->selectedAuthId());
        }

        if ( waiting )
            QApplication::restoreOverrideCursor();

        delete mySelector;
    }
    else if (myDefaultProjectionOption == "useProject")
    {
        // XXX TODO: Change project to store selected CS as 'projectCRS' not 'selectedWkt'
        authid = SWGISApp::instance()->mapCanvas()->mapSettings().destinationCrs().authid();
        crs.createFromOgcWmsCrs(authid);
        QgsDebugMsg("Layer srs set from project: " + authid);
        messageBar()->pushMessage(tr("CRS was undefined"), tr("defaulting to project CRS %1 - %2").arg(authid, crs.description()), QgsMessageBar::WARNING, messageTimeout());
    }
    else ///Projections/defaultBehaviour==useGlobal
    {
        authid = mySettings.value( "/Projections/layerDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
        crs.createFromOgcWmsCrs( authid );
        QgsDebugMsg( "Layer srs set from default: " + authid );
        messageBar()->pushMessage( tr( "CRS was undefined" ), tr( "defaulting to CRS %1 - %2" ).arg( authid, crs.description() ), QgsMessageBar::WARNING, messageTimeout() );
    }
}

bool SWGISApp::addRasterLayer(QgsRasterLayer *theRasterLayer)
{
    Q_CHECK_PTR(theRasterLayer);

    if(!theRasterLayer)
    {
        // XXX insert meaningful whine to the user here; although be
        // XXX mindful that a null layer may mean exhausted memory resources
        return false;
    }

    if(!theRasterLayer->isValid())
    {
        delete theRasterLayer;
        return false;
    }

    // register this layer with the central layers registry
    QList<QgsMapLayer *> myList;
    myList << theRasterLayer;
    QgsMapLayerRegistry::instance()->addMapLayers(myList);
    return true;
}

QgsRasterLayer *SWGISApp::addRasterLayerPrivate(const QString &uri, const QString &baseName, const QString &providerKey, bool guiWarning, bool guiUpdate)
{
    if(guiUpdate)
    {
        // let the user know we're going to possibly be taking a while
        // QApplication::setOverrideCursor( Qt::WaitCursor );
        m_MapCanvas->freeze(true);
    }

    QgsDebugMsg("Creating new raster layer using " + uri
                 + " with baseName of " + baseName);

    QgsRasterLayer *layer = nullptr;
    // XXX ya know QgsRasterLayer can snip out the basename on its own;
    // XXX why do we have to pass it in for it?
    // ET : we may not be getting "normal" files here, so we still need the baseName argument
    if(!providerKey.isEmpty() && uri.endsWith(".adf", Qt::CaseInsensitive))
    {
        QFileInfo fileInfo(uri);
        QString dirName = fileInfo.path();
        layer = new QgsRasterLayer(dirName, QFileInfo(dirName).completeBaseName(), QString("gdal"));
    }
    else if (providerKey.isEmpty())
        layer = new QgsRasterLayer(uri, baseName); // fi.completeBaseName());
    else
        layer = new QgsRasterLayer(uri, baseName, providerKey);

    QgsDebugMsg("Constructed new layer");

    QgsError error;
    QString title;
    bool ok = false;

    if(!layer->isValid())
    {
        error = layer->error();
        title = tr("Invalid Layer");

        if(shouldAskUserForGDALSublayers(layer))
        {
            askUserForGDALSublayers(layer);
            ok = true;

            // The first layer loaded is not useful in that case. The user can select it in
            // the list if he wants to load it.
            delete layer;
            layer = nullptr;
        }
    }
    else
    {
        ok = addRasterLayer(layer);
        if(!ok)
        {
            error.append(QGS_ERROR_MESSAGE(tr("Error adding valid layer to map canvas"),
                                         tr("Raster layer")));
            title = tr("Error");
        }
    }

    if(!ok)
    {
        if(guiUpdate)
            m_MapCanvas->freeze( false );

        // don't show the gui warning if we are loading from command line
        if(guiWarning)
        {
            messageBar()->pushMessage( title, error.message( QgsErrorMessage::Text ),
                                   QgsMessageBar::CRITICAL, messageTimeout() );
        }

        if (layer)
        {
            delete layer;
            layer = nullptr;
        }
    }

    if(guiUpdate)
    {
        // draw the map
        m_MapCanvas->freeze( false );
        m_MapCanvas->refresh();
        // Let render() do its own cursor management
        //    QApplication::restoreOverrideCursor();
    }

    return layer;
}

void SWGISApp::saveRecentProjectPath(const QString &projectPath, bool savePreviewImage)
{
    QSettings settings;

    // Get canonical absolute path
    QFileInfo myFileInfo( projectPath );
    QgsWelcomePageItemsModel::RecentProjectData projectData;
    projectData.path = myFileInfo.absoluteFilePath();
    projectData.title = QgsProject::instance()->title();
    if ( projectData.title.isEmpty() )
        projectData.title = projectData.path;

    projectData.crs = m_MapCanvas->mapSettings().destinationCrs().authid();

    if ( savePreviewImage )
    {
        // Generate a unique file name
        QString fileName( QCryptographicHash::hash(( projectData.path.toUtf8() ), QCryptographicHash::Md5 ).toHex() );
        QString previewDir = QString( "%1/previewImages" ).arg( QgsApplication::qgisSettingsDirPath() );
        projectData.previewImagePath = QString( "%1/%2.png" ).arg( previewDir, fileName );
        QDir().mkdir( previewDir );

        // Render the map canvas
        QSize previewSize( 250, 177 ); // h = w / sqrt(2)
        QRect previewRect( QPoint(( m_MapCanvas->width() - previewSize.width() ) / 2
                                , ( m_MapCanvas->height() - previewSize.height() ) / 2 )
                         , previewSize );

        QPixmap previewImage( previewSize );
        QPainter previewPainter( &previewImage );
        m_MapCanvas->render( &previewPainter, QRect( QPoint(), previewSize ), previewRect );

        // Save
        previewImage.save( projectData.previewImagePath );
    }
    else
    {
        int idx = m_RecentProjects.indexOf( projectData );
        if ( idx != -1 )
            projectData.previewImagePath = m_RecentProjects.at( idx ).previewImagePath;
    }

    // If this file is already in the list, remove it
    m_RecentProjects.removeAll( projectData );

    // Prepend this file to the list
    m_RecentProjects.prepend( projectData );

    // Keep the list to 10 items by trimming excess off the bottom
    // And remove the associated image
    while ( m_RecentProjects.count() > 10 )
    {
        QFile( m_RecentProjects.takeLast().previewImagePath ).remove();
    }

    settings.remove( "/UI/recentProjects" );
    int idx = 0;

    // Persist the list
    Q_FOREACH ( const QgsWelcomePageItemsModel::RecentProjectData& recentProject, m_RecentProjects )
    {
        ++idx;
        settings.beginGroup( QString( "/UI/recentProjects/%1" ).arg( idx ) );
        settings.setValue( "title", recentProject.title );
        settings.setValue( "path", recentProject.path );
        settings.setValue( "previewImage", recentProject.previewImagePath );
        settings.setValue( "crs", recentProject.crs );
        settings.endGroup();
    }
    // Update menu list of paths
    updateRecentProjectPaths();
}

void SWGISApp::updateRecentProjectPaths()
{
    ui->menu_Recent_Project->clear();

    Q_FOREACH ( const QgsWelcomePageItemsModel::RecentProjectData& recentProject, m_RecentProjects )
    {
      QAction* action = ui->menu_Recent_Project->addAction( QString( "%1 (%2)" ).arg( recentProject.title != recentProject.path ? recentProject.title : QFileInfo( recentProject.path ).baseName(), recentProject.path ) );
      action->setEnabled( QFile::exists(( recentProject.path ) ) );
      action->setData( recentProject.path );
    }

    if ( m_WelcomePage )
      m_WelcomePage->setRecentProjects( m_RecentProjects );
}

/**
  Prompt and save if project has been modified.
  @return true if saved or discarded, false if cancelled
 */
bool SWGISApp::saveDirty()
{
    QString whyDirty = "";
    bool hasUnsavedEdits = false;
    // extra check to see if there are any vector layers with unsaved provider edits
    // to ensure user has opportunity to save any editing
    if(QgsMapLayerRegistry::instance()->count() > 0)
    {
        QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
        for(QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it)
        {
            QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value());
            if(!vl)
                continue;

            hasUnsavedEdits = (vl->isEditable() && vl->isModified());
            if(hasUnsavedEdits)
                break;
        }

        if(hasUnsavedEdits)
        {
            markDirty();
            whyDirty = "<p style='color:darkred;'>";
            whyDirty += tr("Project has layer(s) in edit mode with unsaved edits, which will NOT be saved!");
            whyDirty += "</p>";
        }
    }

    QMessageBox::StandardButton answer(QMessageBox::Discard);
    m_MapCanvas->freeze(true);

    QgsDebugMsg(QString("Layer count is %1").arg(m_MapCanvas->layerCount()));
    QgsDebugMsg(QString("Project is %1dirty").arg( QgsProject::instance()->isDirty() ? "" : "not "));
    QgsDebugMsg(QString("Map canvas is %1dirty").arg(m_MapCanvas->isDirty() ? "" : "not "));

    QSettings settings;
    bool askThem = settings.value("qgis/askToSaveProjectChanges", true).toBool();

    if (askThem && QgsProject::instance()->isDirty() && QgsMapLayerRegistry::instance()->count() > 0)
    {
        // flag project as dirty since dirty state of canvas is reset if "dirty"
        // is based on a zoom or pan
        markDirty();

        // old code: mProjectIsDirtyFlag = true;

        // prompt user to save
        answer = QMessageBox::information(this, tr("Save?"),
                                            tr("Do you want to save the current project? %1")
                                            .arg( whyDirty),
                                            QMessageBox::Save | QMessageBox::Cancel | QMessageBox::Discard,
                                            hasUnsavedEdits ? QMessageBox::Cancel : QMessageBox::Save );
        if(QMessageBox::Save == answer)
        {
            if(!fileSave())
                answer = QMessageBox::Cancel;
        }
    }

    m_MapCanvas->freeze( false );

    return answer != QMessageBox::Cancel;
}

QList<QgsAnnotationItem *> SWGISApp::annotationItems()
{
    QList<QgsAnnotationItem*> itemList;

    if(!m_MapCanvas)
    {
        return itemList;
    }

    if(m_MapCanvas)
    {
        QList<QGraphicsItem*> graphicsItems = m_MapCanvas->items();
        QList<QGraphicsItem*>::iterator gIt = graphicsItems.begin();
        for(; gIt != graphicsItems.end(); ++gIt)
        {
            QgsAnnotationItem* currentItem = dynamic_cast<QgsAnnotationItem*>(*gIt);
            if(currentItem)
            {
                itemList.push_back(currentItem);
            }
        }
    }
    return itemList;
}

void SWGISApp::removeAnnotationItems()
{
    if(!m_MapCanvas)
    {
        return;
    }
    QGraphicsScene* scene = m_MapCanvas->scene();
    if(!scene)
    {
        return;
    }
    QList<QgsAnnotationItem*> itemList = annotationItems();
    QList<QgsAnnotationItem*>::iterator itemIt = itemList.begin();
    for(; itemIt != itemList.end(); ++itemIt)
    {
        if(*itemIt)
        {
            scene->removeItem(*itemIt);
            delete *itemIt;
        }
    }
}


void SWGISApp::saveLastMousePosition(const QgsPoint &point)
{
    if(m_MapTipsVisible)
    {
        m_LastMapPosition = point;
        if(m_MapCanvas->underMouse())
        {
            m_Maptip->clear(m_MapCanvas);
            m_MapTipsTimer->start();
        }
    }
}

void SWGISApp::showScale(double theScale)
{
    // Why has MapCanvas the scale inverted?
    m_ScaleEdit->setScale(1.0 / theScale);

    // Not sure if the lines below do anything meaningful /Homann
    if (m_ScaleEdit->width() > m_ScaleEdit->minimumWidth())
    {
        m_ScaleEdit->setMinimumWidth(m_ScaleEdit->width());
    }
}

void SWGISApp::userScale()
{
    m_MapCanvas->zoomScale(1.0 / m_ScaleEdit->scale());
}

void SWGISApp::userRotation()
{
    double degrees = m_RotationEdit->value();
    m_MapCanvas->setRotation(degrees);
    m_MapCanvas->refresh();

}

void SWGISApp::removeLayer()
{
    if(!m_LayerTreeView)
        return;

    Q_FOREACH(QgsMapLayer * layer, m_LayerTreeView->selectedLayers())
    {
        QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( layer );
        if(vlayer && vlayer->isEditable() && !toggleEditing(vlayer, true))
            return;
    }

    QList<QgsLayerTreeNode*> selectedNodes = m_LayerTreeView->selectedNodes(true);

    //validate selection
    if(selectedNodes.isEmpty())
    {
        messageBar()->pushMessage(tr("No legend entries selected"),
                                 tr("Select the layers and groups you want to remove in the legend."),
                                 QgsMessageBar::INFO, messageTimeout());
        return;
    }

    bool promptConfirmation = QSettings().value("qgis/askToDeleteLayers", true).toBool();
    //display a warning
    if(promptConfirmation && QMessageBox::warning(this, tr("Remove layers and groups"), tr("Remove %n legend entries?", "number of legend items to remove", selectedNodes.count()), QMessageBox::Ok | QMessageBox::Cancel) == QMessageBox::Cancel)
      return;

    Q_FOREACH(QgsLayerTreeNode* node, selectedNodes)
    {
        QgsLayerTreeGroup* parentGroup = qobject_cast<QgsLayerTreeGroup*>(node->parent());
        if(parentGroup)
            parentGroup->removeChildNode(node);
    }

    showStatusMessage(tr("%n legend entries removed.", "number of removed legend entries", selectedNodes.count()));

    m_MapCanvas->refresh();
}

void SWGISApp::setLayerScaleVisibility()
{
    if(!m_LayerTreeView )
        return;

    QList<QgsMapLayer*> layers = m_LayerTreeView->selectedLayers();

    if(layers.length() < 1)
        return;

    QgsScaleVisibilityDialog* dlg = new QgsScaleVisibilityDialog(this, tr( "Set scale visibility for selected layers"), m_MapCanvas);
    QgsMapLayer* layer = m_LayerTreeView->currentLayer();
    if(layer)
    {
        dlg->setScaleVisiblity(layer->hasScaleBasedVisibility());
        dlg->setMinimumScale(1.0 / layer->maximumScale());
        dlg->setMaximumScale(1.0 / layer->minimumScale());
    }
    if(dlg->exec())
    {
        m_MapCanvas->freeze();
        Q_FOREACH ( QgsMapLayer* layer, layers )
        {
            layer->setScaleBasedVisibility( dlg->hasScaleVisibility() );
            layer->setMinimumScale( 1.0 / dlg->maximumScale() );
            layer->setMaximumScale( 1.0 / dlg->minimumScale() );
        }
        m_MapCanvas->freeze( false );
        m_MapCanvas->refresh();
    }
    delete dlg;

}

void SWGISApp::setLayerCRS()
{
    if(!(m_LayerTreeView && m_LayerTreeView->currentLayer()))
        return;

    QgsGenericProjectionSelector mySelector(this);
    mySelector.setSelectedCrsId(m_LayerTreeView->currentLayer()->crs().srsid());
    mySelector.setMessage();
    if(!mySelector.exec())
    {
        QApplication::restoreOverrideCursor();
        return;
    }

    QgsCoordinateReferenceSystem crs(mySelector.selectedCrsId(), QgsCoordinateReferenceSystem::InternalCrsId);

    Q_FOREACH(QgsLayerTreeNode* node, m_LayerTreeView->selectedNodes())
    {
        if(QgsLayerTree::isGroup(node))
        {
            Q_FOREACH(QgsLayerTreeLayer* child, QgsLayerTree::toGroup(node)->findLayers())
            {
                if(child->layer())
                {
                    child->layer()->setCrs(crs);
                    child->layer()->triggerRepaint();
                }
            }
        }
        else if(QgsLayerTree::isLayer(node))
        {
            QgsLayerTreeLayer* nodeLayer = QgsLayerTree::toLayer(node);
            if (nodeLayer->layer())
            {
                nodeLayer->layer()->setCrs(crs);
                nodeLayer->layer()->triggerRepaint();
            }
        }
    }

    m_MapCanvas->refresh();
}

void SWGISApp::setProjectCRSFromLayer()
{
    if(!(m_LayerTreeView && m_LayerTreeView->currentLayer()))
        return;

    QgsCoordinateReferenceSystem crs = m_LayerTreeView->currentLayer()->crs();
    m_MapCanvas->freeze();
    m_MapCanvas->setDestinationCrs(crs);

    if(crs.mapUnits() != QGis::UnknownUnit)
        m_MapCanvas->setMapUnits(crs.mapUnits());

    m_MapCanvas->freeze(false);
    m_MapCanvas->refresh();
}

void SWGISApp::saveWindowState()
{
    // store window and toolbar positions
    QSettings settings;
    // store the toolbar/dock widget settings using Qt4 settings API
    settings.setValue("/UI/state", saveState());

    // store window geometry
    settings.setValue("/UI/geometry", saveGeometry());

    //    QgsPluginRegistry::instance()->unloadAll();
}

void SWGISApp::restoreWindowState()
{
    // restore the toolbar and dock widgets positions using Qt4 settings API
    QSettings settings;

    if(!restoreState(settings.value("/UI/state", QByteArray::fromRawData(reinterpret_cast< const char * >(defaultUIstate), sizeof defaultUIstate)).toByteArray()))
    {
        QgsDebugMsg( "restore of UI state failed" );
    }

    // restore window geometry
    if (!restoreGeometry(settings.value("/UI/geometry", QByteArray::fromRawData(reinterpret_cast<const char *>(defaultUIgeometry), sizeof defaultUIgeometry)).toByteArray()))
    {
        QgsDebugMsg( "restore of UI geometry failed" );
    }
}

bool SWGISApp::fileSave()
{
    // if we don't have a file name, then obviously we need to get one; note
    // that the project file name is reset to null in fileNew()
    QFileInfo fullPath;

    if ( QgsProject::instance()->fileName().isNull() )
    {
        // Retrieve last used project dir from persistent settings
        QSettings settings;
        QString lastUsedDir = settings.value( "/UI/lastProjectDir", QDir::homePath() ).toString();

        QString path = QFileDialog::getSaveFileName(
                       this,
                       tr( "Choose a QGIS project file" ),
                       lastUsedDir + '/' + QgsProject::instance()->title(),
                       tr( "QGIS files" ) + " (*.qgs *.QGS)" );
        if ( path.isEmpty() )
            return false;

        fullPath.setFile( path );

        // make sure we have the .qgs extension in the file name
        if ( "qgs" != fullPath.suffix().toLower() )
        {
            fullPath.setFile( fullPath.filePath() + ".qgs" );
        }


        QgsProject::instance()->setFileName( fullPath.filePath() );
    }
    else
    {
        QFileInfo fi( QgsProject::instance()->fileName() );
        fullPath = fi.absoluteFilePath();
        if ( fi.exists() && !m_ProjectLastModified.isNull() && m_ProjectLastModified != fi.lastModified() )
        {
            if ( QMessageBox::warning( this,
                                   tr( "Project file was changed" ),
                                   tr( "The loaded project file on disk was meanwhile changed.  Do you want to overwrite the changes?\n"
                                       "\nLast modification date on load was: %1"
                                       "\nCurrent last modification date is: %2" )
                                   .arg( m_ProjectLastModified.toString( Qt::DefaultLocaleLongDate ),
                                         fi.lastModified().toString( Qt::DefaultLocaleLongDate ) ),
                                   QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
            return false;
        }

        if ( fi.exists() && ! fi.isWritable() )
        {
            messageBar()->pushMessage( tr( "Insufficient permissions" ),
                                   tr( "The project file is not writable." ),
                                   QgsMessageBar::WARNING );
            return false;
        }
    }

    if ( QgsProject::instance()->write() )
    {
        setTitleBarText_( *this ); // update title bar
        statusBar()->showMessage( tr( "Saved project to: %1" ).arg( QgsProject::instance()->fileName() ), 5000 );

        saveRecentProjectPath( fullPath.filePath() );

        QFileInfo fi( QgsProject::instance()->fileName() );
        m_ProjectLastModified = fi.lastModified();
    }
    else
    {
        QMessageBox::critical( this,
                             tr( "Unable to save project %1" ).arg( QgsProject::instance()->fileName() ),
                             QgsProject::instance()->error() );
        return false;
    }

    // run the saved project macro
    if ( mTrustedMacros )
        QgsPythonRunner::run( "qgis.utils.saveProjectMacro();" );

    return true;
}

void SWGISApp::fileSaveAs()
{
    // Retrieve last used project dir from persistent settings
    QSettings settings;
    QString lastUsedDir = settings.value("/UI/lastProjectDir", QDir::homePath()).toString();

    QString path = QFileDialog::getSaveFileName(this,
                   tr("Choose a file name to save the QGIS project file as"),
                   lastUsedDir + '/' + QgsProject::instance()->title(),
                   tr("QGIS files") + " (*.qgs *.QGS)");
    if (path.isEmpty())
      return;

    QFileInfo fullPath(path);

    settings.setValue("/UI/lastProjectDir", fullPath.path());

    // make sure the .qgs extension is included in the path name. if not, add it...
    if("qgs" != fullPath.suffix().toLower())
    {
        fullPath.setFile(fullPath.filePath() + ".qgs");
    }

    QgsProject::instance()->setFileName(fullPath.filePath());

    if (QgsProject::instance()->write())
    {
        setTitleBarText_(*this); // update title bar
        statusBar()->showMessage(tr( "Saved project to: %1").arg(QgsProject::instance()->fileName()), 5000);
        // add this to the list of recently used project files
        saveRecentProjectPath(fullPath.filePath());
        m_ProjectLastModified = fullPath.lastModified();
    }
    else
    {
        QMessageBox::critical( this,
                             tr( "Unable to save project %1" ).arg( QgsProject::instance()->fileName() ),
                             QgsProject::instance()->error(),
                             QMessageBox::Ok,
                             Qt::NoButton );
    }
}

void SWGISApp::saveMapAsImage()
{
    QPair< QString, QString> myFileNameAndFilter = QgisGui::getSaveAsImageName( this, tr( "Choose a file name to save the map image as" ) );
    if ( myFileNameAndFilter.first != "" )
    {
        //save the mapview to the selected file
        m_MapCanvas->saveAsImage( myFileNameAndFilter.first, nullptr, myFileNameAndFilter.second );
        statusBar()->showMessage( tr( "Saved map image to %1" ).arg( myFileNameAndFilter.first ) );
    }

}

void SWGISApp::fileOpen()
{
    // possibly save any pending work before opening a new project
    if ( saveDirty() )
    {
        // Retrieve last used project dir from persistent settings
        QSettings settings;
        QString lastUsedDir = settings.value( "/UI/lastProjectDir", QDir::homePath() ).toString();
        QString fullPath = QFileDialog::getOpenFileName( this,
                         tr( "Choose a QGIS project file to open" ),
                         lastUsedDir,
                         tr( "QGIS files" ) + " (*.qgs *.QGS)" );
        if ( fullPath.isNull() )
            return;

        // Fix by Tim - getting the dirPath from the dialog
        // directly truncates the last node in the dir path.
        // This is a workaround for that
        QFileInfo myFI( fullPath );
        QString myPath = myFI.path();
        // Persist last used project dir
        settings.setValue( "/UI/lastProjectDir", myPath );

        // open the selected project
        addProject( fullPath );
    }
}

void SWGISApp::fileNew()
{
    fileNew( true ); // prompts whether to save project
}

void SWGISApp::fileNewBlank()
{
    fileNew(true,true);
}

void SWGISApp::fileNew(bool thePromptToSaveFlag, bool forceBlank)
{
    if(thePromptToSaveFlag)
    {
        if (!saveDirty())
            return; //cancel pressed
    }

    m_ProjectLastModified = QDateTime();

    QSettings settings;

    closeProject();

    QgsProject* prj = QgsProject::instance();
    prj->clear();

    prj->layerTreeRegistryBridge()->setNewLayersVisible(settings.value("/qgis/new_layers_visible", true).toBool());

    m_LayerTreeCanvasBridge->clear();

    //set the color for selections
    //the default can be set in qgisoptions
    //use project properties to override the color on a per project basis
    int myRed = settings.value("/qgis/default_selection_color_red", 255).toInt();
    int myGreen = settings.value("/qgis/default_selection_color_green", 255).toInt();
    int myBlue = settings.value("/qgis/default_selection_color_blue", 0).toInt();
    int myAlpha = settings.value("/qgis/default_selection_color_alpha", 255).toInt();
    prj->writeEntry("Gui", "/SelectionColorRedPart", myRed);
    prj->writeEntry("Gui", "/SelectionColorGreenPart", myGreen);
    prj->writeEntry("Gui", "/SelectionColorBluePart", myBlue);
    prj->writeEntry("Gui", "/SelectionColorAlphaPart", myAlpha);
    m_MapCanvas->setSelectionColor(QColor(myRed, myGreen, myBlue, myAlpha));

    //set the canvas to the default background color
    //the default can be set in qgisoptions
    //use project properties to override the color on a per project basis
    myRed = settings.value("/qgis/default_canvas_color_red", 255).toInt();
    myGreen = settings.value("/qgis/default_canvas_color_green", 255).toInt();
    myBlue = settings.value("/qgis/default_canvas_color_blue", 255).toInt();
    prj->writeEntry("Gui", "/CanvasColorRedPart", myRed);
    prj->writeEntry("Gui", "/CanvasColorGreenPart", myGreen);
    prj->writeEntry("Gui", "/CanvasColorBluePart", myBlue);
    m_MapCanvas->setCanvasColor(QColor(myRed, myGreen, myBlue));
    m_OverviewCanvas->setBackgroundColor(QColor(myRed, myGreen, myBlue));

    prj->dirty(false);

    setTitleBarText_(*this);

    //QgsDebugMsg("emiting new project signal");

    // emit signal so listeners know we have a new project
    emit newProject();

    m_MapCanvas->freeze(false);
    m_MapCanvas->refresh();
    m_MapCanvas->clearExtentHistory();
    m_MapCanvas->setRotation(0.0);
    m_ScaleEdit->updateScales();

    // set project CRS
    QString defCrs = settings.value("/Projections/projectDefaultCrs", GEO_EPSG_CRS_AUTHID).toString();
    QgsCoordinateReferenceSystem srs;
    srs.createFromOgcWmsCrs(defCrs);
    m_MapCanvas->setDestinationCrs(srs);
    // write the projections _proj string_ to project settings
    prj->writeEntry("SpatialRefSys", "/ProjectCRSProj4String", srs.toProj4());
    prj->writeEntry("SpatialRefSys", "/ProjectCrs", srs.authid());
    prj->writeEntry("SpatialRefSys", "/ProjectCRSID", static_cast< int >(srs.srsid()));
    prj->dirty( false );
    if ( srs.mapUnits() != QGis::UnknownUnit )
    {
        m_MapCanvas->setMapUnits(srs.mapUnits());
    }

    // enable OTF CRS transformation if necessary
    m_MapCanvas->setCrsTransformEnabled(settings.value("/Projections/otfTransformEnabled", 0).toBool());

    updateCRSStatusBar();

    /** New Empty Project Created
        (before attempting to load custom project templates/filepaths) */

    // load default template
    /* NOTE: don't open default template on launch until after initialization,
             in case a project was defined via command line */

    // don't open template if last auto-opening of a project failed
    if(!forceBlank)
    {
        forceBlank = ! settings.value("/qgis/projOpenedOKAtLaunch", QVariant(true)).toBool();
    }

    if(!forceBlank && settings.value("/qgis/newProjectDefault", QVariant(false )).toBool())
    {
        fileNewFromDefaultTemplate();
    }

//    // set the initial map tool
//  #ifndef HAVE_TOUCH
//    m_MapCanvas->setMapTool( m_MapTools.mPan );
//    mNonEditMapTool = mMapTools.mPan;  // signals are not yet setup to catch this
//  #else
//    mMapCanvas->setMapTool( mMapTools.mTouch );
//    mNonEditMapTool = mMapTools.mTouch;  // signals are not yet setup to catch this
//  #endif

}

bool SWGISApp::fileNewFromTemplate(const QString &fileName)
{
    if(!saveDirty())
    {
        return false; //cancel pressed
    }

    QgsDebugMsg( QString( "loading project template: %1" ).arg(fileName));
    if(addProject(fileName))
    {
        // set null filename so we don't override the template
        QgsProject::instance()->setFileName(QString());
        return true;
    }
    return false;
}

void SWGISApp::fileNewFromTemplateAction(QAction *qAction)
{
    if(! qAction)
        return;

    if(qAction->text() == tr("< Blank >"))
    {
        fileNewBlank();
    }
    else
    {
        QSettings settings;
        QString templateDirName = settings.value( "/qgis/projectTemplateDir",
                                QgsApplication::qgisSettingsDirPath() + "project_templates" ).toString();
        fileNewFromTemplate( templateDirName + QDir::separator() + qAction->text() );
    }
}

void SWGISApp::fileNewFromDefaultTemplate()
{
    QString projectTemplate = QgsApplication::qgisSettingsDirPath() + QLatin1String( "project_default.qgs" );
    QString msgTxt;
    if(!projectTemplate.isEmpty() && QFile::exists(projectTemplate))
    {
        if(fileNewFromTemplate(projectTemplate))
            return;
        msgTxt = tr( "Default failed to open: %1" );
    }
    else
        msgTxt = tr( "Default not found: %1" );
    messageBar()->pushMessage( tr( "Open Template Project" ),
                               msgTxt.arg( projectTemplate ),
                               QgsMessageBar::WARNING );

}

void SWGISApp::newVectorLayer()
{
    QString enc;
    QString fileName = QgsNewVectorLayerDialog::runAndCreateLayer(this, &enc);

    if (!fileName.isEmpty())
    {
        //then add the layer to the view
        QStringList fileNames;
        fileNames.append( fileName );
        //todo: the last parameter will change accordingly to layer type
        addVectorLayers(fileNames, enc, "file");
    }
    else if(fileName.isNull())
    {
        QLabel *msgLabel = new QLabel( tr( "Layer creation failed. Please check the <a href=\"#messageLog\">message log</a> for further information." ), messageBar() );
        msgLabel->setWordWrap( true );
        connect(msgLabel, SIGNAL(linkActivated(QString)), m_LogDock, SLOT(show()));
        QgsMessageBarItem *item = new QgsMessageBarItem(msgLabel, QgsMessageBar::WARNING);
        messageBar()->pushItem(item);
    }
}

void SWGISApp::showComposerManager()
{
    if ( !m_ComposerManager )
    {
      m_ComposerManager = new QgsComposerManager( nullptr, Qt::Window );
      connect( m_ComposerManager, SIGNAL( finished( int ) ), this, SLOT( deleteComposerManager() ) );
    }
    m_ComposerManager->show();
    m_ComposerManager->activate();

}

void SWGISApp::hideAllLayers()
{
    QgsDebugMsg( "hiding all layers!" );

    Q_FOREACH(QgsLayerTreeLayer* nodeLayer, m_LayerTreeView->layerTreeModel()->rootGroup()->findLayers())
        nodeLayer->setVisible(Qt::Unchecked);
}

void SWGISApp::showAllLayers()
{
    QgsDebugMsg( "Showing all layers!" );
    Q_FOREACH ( QgsLayerTreeLayer* nodeLayer, m_LayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
        nodeLayer->setVisible( Qt::Checked );

}

void SWGISApp::hideSelectedLayers()
{
    QgsDebugMsg( "hiding selected layers!" );

    Q_FOREACH ( QgsLayerTreeNode* node, m_LayerTreeView->selectedNodes() )
    {
        if ( QgsLayerTree::isGroup( node ) )
            QgsLayerTree::toGroup( node )->setVisible( Qt::Unchecked );
        else if ( QgsLayerTree::isLayer( node ) )
            QgsLayerTree::toLayer( node )->setVisible( Qt::Unchecked );
    }

}

void SWGISApp::showSelectedLayers()
{
    QgsDebugMsg( "show selected layers!" );

    Q_FOREACH ( QgsLayerTreeNode* node, m_LayerTreeView->selectedNodes() )
    {
        if ( QgsLayerTree::isGroup( node ) )
            QgsLayerTree::toGroup( node )->setVisible( Qt::Checked );
        else if ( QgsLayerTree::isLayer( node ) )
            QgsLayerTree::toLayer( node )->setVisible( Qt::Checked );
    }

}

QgsMapLayer *SWGISApp::activeLayer()
{
    return m_LayerTreeView ? m_LayerTreeView->currentLayer() : nullptr;
}

bool SWGISApp::setActiveLayer(QgsMapLayer *layer)
{
    if(!layer)
        return false;

    if(!m_LayerTreeView->layerTreeModel()->rootGroup()->findLayer(layer->id()))
        return false;

    m_LayerTreeView->setCurrentLayer(layer);
    return true;
}

void SWGISApp::options()
{
    this->showOptionsDialog(this);
}

void SWGISApp::projectProperties()
{
    /* Display the property sheet for the Project */
    // set wait cursor since construction of the project properties
    // dialog results in the construction of the spatial reference
    // system QMap
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QgsProjectProperties *pp = new QgsProjectProperties(m_MapCanvas, this);
    // if called from the status bar, show the projection tab
    if (m_ShowProjectionTab)
    {
      pp->showProjectionsTab();
      m_ShowProjectionTab = false;
    }
    qApp->processEvents();
    // Be told if the mouse display precision may have changed by the user
    // changing things in the project properties dialog box
    connect(pp, SIGNAL(displayPrecisionChanged()), this, SLOT( updateMouseCoordinatePrecision()));

    connect(pp, SIGNAL(scalesChanged( const QStringList &)), m_ScaleEdit,
             SLOT(updateScales(const QStringList &)));
    QApplication::restoreOverrideCursor();

    //pass any refresh signals off to canvases
    // Line below was commented out by wonder three years ago (r4949).
    // It is needed to refresh scale bar after changing display units.
    connect(pp, SIGNAL(refresh()), m_MapCanvas, SLOT(refresh()));

    // Display the modal dialog box.
    pp->exec();

    //LZS2851
    qobject_cast<QgsMeasureTool*>(m_MapTools.m_MeasureDist)->updateSettings();
    qobject_cast<QgsMeasureTool*>(m_MapTools.m_MeasureArea)->updateSettings();
    qobject_cast<QgsMapToolMeasureAngle*>(m_MapTools.m_MeasureAngle)->updateSettings();

    // Set the window title.
    setTitleBarText_( *this );

    // delete the property sheet object
    delete pp;

}

void SWGISApp::projectPropertiesProjections()
{
    m_ShowProjectionTab = true;
    projectProperties();
}

void SWGISApp::refreshMapCanvas()
{
    //stop any current rendering
    m_MapCanvas->stopRendering();
    m_MapCanvas->refreshAllLayers();
}

void SWGISApp::canvasRefreshStarted()
{
    showProgress(-1, 0);
}

void SWGISApp::canvasRefreshFinished()
{
    showProgress(0, 0);
}

void SWGISApp::updateLayerModifiedActions()
{
    bool enableSaveLayerEdits = false;
    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>(activeLayer());
    if(vlayer)
    {
        QgsVectorDataProvider* dprovider = vlayer->dataProvider();
        if (dprovider)
        {
            enableSaveLayerEdits = (dprovider->capabilities()
                                    & QgsVectorDataProvider::ChangeAttributeValues
                                    && vlayer->isEditable()
                                    && vlayer->isModified());
        }
    }

    QList<QgsLayerTreeLayer*> selectedLayerNodes = m_LayerTreeView ? m_LayerTreeView->selectedLayerNodes() : QList<QgsLayerTreeLayer*>();

}

void SWGISApp::mapToolChanged(QgsMapTool *newTool, QgsMapTool *oldTool)
{
    if(oldTool)
    {
        disconnect(oldTool, SIGNAL(messageEmitted(QString)), this, SLOT(displayMapToolMessage(QString)));
        disconnect(oldTool, SIGNAL(messageEmitted(QString, QgsMessageBar::MessageLevel)), this, SLOT(displayMapToolMessage(QString, QgsMessageBar::MessageLevel)));
        disconnect(oldTool, SIGNAL(messageDiscarded()), this, SLOT(removeMapToolMessage()));
    }

    if(newTool)
    {
        if (!newTool->isEditTool())
            m_NonEditMapTool = newTool;

        connect(newTool, SIGNAL(messageEmitted(QString)), this, SLOT(displayMapToolMessage(QString)));
        connect(newTool, SIGNAL(messageEmitted(QString, QgsMessageBar::MessageLevel)), this, SLOT(displayMapToolMessage(QString, QgsMessageBar::MessageLevel)));
        connect(newTool, SIGNAL(messageDiscarded()), this, SLOT(removeMapToolMessage()));
    }

}

void SWGISApp::showMapCanvas()
{
    // 图层改变时，切换到对应图层
    if ( m_CentralContainer )
      m_CentralContainer->setCurrentIndex( 0 );
}

void SWGISApp::layerEditStateChanged()
{
    QgsMapLayer* layer = qobject_cast<QgsMapLayer *>(sender());
    if (layer && layer == activeLayer())
    {
        activateDeactivateLayerRelatedActions( layer );
        m_SaveRollbackInProgress = false;
    }
}

void SWGISApp::activateDeactivateLayerRelatedActions(QgsMapLayer *layer)
{
    //LZS2851
    bool enableMove = false, enableRotate = false, enablePin = false, enableShowHide = false, enableChange = false;

    QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
    for (QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
    {
        QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>(it.value());
        if (!vlayer || !vlayer->isEditable()||
            (!vlayer->diagramsEnabled() && !vlayer->labelsEnabled()))
        continue;

        int colX, colY, colShow, colAng;
//        enablePin =
//            enablePin ||
//            (qobject_cast<QgsMapToolPinLabels*>(mMapTools.mPinLabels) &&
//            qobject_cast<QgsMapToolPinLabels*>(mMapTools.mPinLabels)->layerCanPin(vlayer, colX, colY));

//        enableShowHide =
//            enableShowHide ||
//            (qobject_cast<QgsMapToolShowHideLabels*>(mMapTools.mShowHideLabels) &&
//            qobject_cast<QgsMapToolShowHideLabels*>(mMapTools.mShowHideLabels)->layerCanShowHide(vlayer, colShow));

//        enableMove =
//            enableMove ||
//            (qobject_cast<QgsMapToolMoveLabel*>(mMapTools.mMoveLabel) &&
//            (qobject_cast<QgsMapToolMoveLabel*>(mMapTools.mMoveLabel)->labelMoveable(vlayer, colX, colY)
//            || qobject_cast<QgsMapToolMoveLabel*>(mMapTools.mMoveLabel)->diagramMoveable(vlayer, colX, colY))
//        );

//        enableRotate =
//            enableRotate ||
//            (qobject_cast<QgsMapToolRotateLabel*>(mMapTools.mRotateLabel) &&
//            qobject_cast<QgsMapToolRotateLabel*>(mMapTools.mRotateLabel)->layerIsRotatable(vlayer, colAng));

        enableChange = true;

        if(enablePin && enableShowHide && enableMove && enableRotate && enableChange)
            break;
    }

    if(!layer)
    {
        ui->action_Labeling->setEnabled(true);
    }
    updateLayerModifiedActions();

}

void SWGISApp::selectionChanged(QgsMapLayer *layer)
{
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>(layer);
    if(vlayer)
    {
        showStatusMessage(tr( "%n feature(s) selected on layer %1.", "number of selected features", vlayer->selectedFeatureCount()).arg(vlayer->name()));
    }
    if(layer == activeLayer())
    {
        activateDeactivateLayerRelatedActions(layer);
    }
}

void SWGISApp::showProgress(int theProgress, int theTotalSteps)
{
    if (theProgress == theTotalSteps)
    {
        m_ProgressBar->reset();
        m_ProgressBar->hide();
    }
    else
    {
      //only call show if not already hidden to reduce flicker
        if (!m_ProgressBar->isVisible())
        {
            m_ProgressBar->show();
        }
        m_ProgressBar->setMaximum(theTotalSteps);
        m_ProgressBar->setValue(theProgress);

      if(m_ProgressBar->maximum() == 0)
      {
        // for busy indicator (when minimum equals to maximum) the oxygen Qt style (used in KDE)
        // has some issues and does not start busy indicator animation. This is an ugly fix
        // that forces creation of a temporary progress bar that somehow resumes the animations.
        // Caution: looking at the code below may introduce mild pain in stomach.
          if (strcmp( QApplication::style()->metaObject()->className(), "Oxygen::Style" ) == 0)
          {
              QProgressBar pb;
              pb.setAttribute( Qt::WA_DontShowOnScreen ); // no visual annoyance
              pb.setMaximum( 0 );
              pb.show();
              qApp->processEvents();
          }
       }
    }
}

void SWGISApp::extentChanged()
{
    m_LayerTreeView->layerTreeModel()->setLegendMapViewData(m_MapCanvas->mapUnitsPerPixel(), m_MapCanvas->mapSettings().outputDpi(), m_MapCanvas->scale());
}

void SWGISApp::showRotation()
{
    double myrotation = m_MapCanvas->rotation();
    m_RotationEdit->setValue(myrotation);
}

void SWGISApp::showStatusMessage(const QString &theMessage)
{
    statusBar()->showMessage(theMessage);
}

void SWGISApp::displayMapToolMessage(const QString &message, QgsMessageBar::MessageLevel level)
{
    // remove previous message
    messageBar()->popWidget(m_LastMapToolMessage);

    QgsMapTool* tool = mapCanvas()->mapTool();

    if ( tool )
    {
      m_LastMapToolMessage = new QgsMessageBarItem(tool->toolName(), message, level, messageTimeout());
      messageBar()->pushItem(m_LastMapToolMessage);
    }
}

void SWGISApp::displayMessage(const QString &title, const QString &message, QgsMessageBar::MessageLevel level)
{
    this->messageBar()->pushMessage( title, message, level, messageTimeout() );
}

void SWGISApp::removeMapToolMessage()
{
    messageBar()->popWidget(m_LastMapToolMessage);
}

void SWGISApp::updateMouseCoordinatePrecision()
{
    m_CoordsEdit->setMouseCoordinatesPrecision(QgsCoordinateUtils::calculateCoordinatePrecision(mapCanvas()->mapUnitsPerPixel(), mapCanvas()->mapSettings().destinationCrs()));
}

void SWGISApp::addVectorLayer()
{
    m_MapCanvas->freeze();
    QgsOpenVectorLayerDialog *ovl = new QgsOpenVectorLayerDialog(this);

    if(ovl->exec())
    {
        QStringList selectedSources = ovl->dataSources();
        QString enc = ovl->encoding();
        if(!selectedSources.isEmpty())
        {
            addVectorLayers(selectedSources, enc, ovl->dataSourceType());
        }
    }

    m_MapCanvas->freeze( false );
    m_MapCanvas->refresh();

    delete ovl;
}

void SWGISApp::addWmsLayer()
{
    // TODO: QDialog for now, switch to QWidget in future
    QDialog *wmss = dynamic_cast<QDialog*>(QgsProviderRegistry::instance()->selectWidget(QString("wms"), this));
    if (!wmss)
    {
        QMessageBox::warning(this, tr("WMS"), tr("Cannot get WMS select dialog from provider."));
        return;
    }
    connect(wmss, SIGNAL(addRasterLayer(QString const &, QString const &, QString const &)),
             this, SLOT(addRasterLayer(QString const &, QString const &, QString const &)));
    wmss->exec();
    delete wmss;
}

void SWGISApp::addWfsLayer()
{
    if(!m_MapCanvas )
        return;

    QgsDebugMsg( "about to addWfsLayer" );

    // TODO: QDialog for now, switch to QWidget in future
    QDialog *wfss = dynamic_cast<QDialog*>(QgsProviderRegistry::instance()->selectWidget(QString("WFS"), this));
    if(!wfss)
    {
        QMessageBox::warning( this, tr( "WFS" ), tr( "Cannot get WFS select dialog from provider." ) );
        return;
    }
    connect(wfss, SIGNAL(addWfsLayer(QString, QString)), this, SLOT(addWfsLayer(QString, QString)));

    //re-enable wfs with extent setting: pass canvas info to source select
    wfss->setProperty("MapExtent", m_MapCanvas->extent().toString());
    if(m_MapCanvas->mapSettings().hasCrsTransformEnabled())
    {
        //if "on the fly" reprojection is active, pass canvas CRS
        wfss->setProperty("MapCRS", m_MapCanvas->mapSettings().destinationCrs().authid());
    }

    bool bkRenderFlag = m_MapCanvas->renderFlag();
    m_MapCanvas->setRenderFlag(false);
    wfss->exec();
    m_MapCanvas->setRenderFlag(bkRenderFlag);
    delete wfss;
}

void SWGISApp::zoomOut()
{
    m_MapCanvas->setMapTool(m_MapTools.m_ZoomOut);
}

void SWGISApp::zoomIn()
{
    m_MapCanvas->setMapTool(m_MapTools.m_ZoomIn);
}

void SWGISApp::pan()
{
    m_MapCanvas->setMapTool(m_MapTools.m_Pan);
}

void SWGISApp::measure()
{
    m_MapCanvas->setMapTool(m_MapTools.m_MeasureDist);
}

void SWGISApp::measureArea()
{
    m_MapCanvas->setMapTool( m_MapTools.m_MeasureArea);
}

void SWGISApp::measureAngle()
{
    m_MapCanvas->setMapTool( m_MapTools.m_MeasureAngle);
}

void SWGISApp::labelingFontNotFound(QgsVectorLayer *vlayer, const QString &fontfamily)
{
    // TODO: update when pref for how to resolve missing family (use matching algorithm or just default font) is implemented
    QString substitute = tr( "Default system font substituted." );

    QToolButton* btnOpenPrefs = new QToolButton();
    btnOpenPrefs->setStyleSheet("QToolButton{ background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline; }");
    btnOpenPrefs->setCursor(Qt::PointingHandCursor);
    btnOpenPrefs->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
    btnOpenPrefs->setToolButtonStyle(Qt::ToolButtonTextOnly);

    // store pointer to vlayer in data of QAction
    QAction* act = new QAction(btnOpenPrefs);
    act->setData(QVariant( QMetaType::QObjectStar, &vlayer));
    act->setText(tr( "Open labeling dialog"));
    btnOpenPrefs->addAction(act);
    btnOpenPrefs->setDefaultAction(act);
    btnOpenPrefs->setToolTip("");
    connect(btnOpenPrefs, SIGNAL(triggered( QAction*)), this, SLOT(labelingDialogFontNotFound( QAction*)));

    // no timeout set, since notice needs attention and is only shown first time layer is labeled
    QgsMessageBarItem* fontMsg = new QgsMessageBarItem(
      tr( "Labeling" ),
      tr( "Font for layer <b><u>%1</u></b> was not found (<i>%2</i>). %3" ).arg( vlayer->name(), fontfamily, substitute ),
      btnOpenPrefs,
      QgsMessageBar::WARNING,
      0,
      messageBar() );
    messageBar()->pushItem(fontMsg);
}

void SWGISApp::commitError(QgsVectorLayer *vlayer)
{
    QgsMessageViewer *mv = new QgsMessageViewer();
    mv->setWindowTitle( tr( "Commit errors" ) );
    mv->setMessageAsPlainText( tr( "Could not commit changes to layer %1" ).arg( vlayer->name() )
                               + "\n\n"
                               + tr( "Errors: %1\n" ).arg( vlayer->commitErrors().join( "\n  " ) )
                             );

    QToolButton *showMore = new QToolButton();
    // store pointer to vlayer in data of QAction
    QAction *act = new QAction(showMore);
    act->setData(QVariant(QMetaType::QObjectStar, &vlayer));
    act->setText(tr("Show more"));
    showMore->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline;" );
    showMore->setCursor(Qt::PointingHandCursor);
    showMore->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
    showMore->addAction(act);
    showMore->setDefaultAction(act);
    connect(showMore, SIGNAL(triggered(QAction* )), mv, SLOT(exec()));
    connect(showMore, SIGNAL(triggered(QAction* )), showMore, SLOT(deleteLater()));

    // no timeout set, since notice needs attention and is only shown first time layer is labeled
    QgsMessageBarItem *errorMsg = new QgsMessageBarItem(
      tr( "Commit errors" ),
      tr( "Could not commit changes to layer %1" ).arg(vlayer->name()),
      showMore,
      QgsMessageBar::WARNING,
      0,
      messageBar() );
    messageBar()->pushItem(errorMsg);
}

void SWGISApp::labelingDialogFontNotFound(QAction *act)
{
    if(!act)
        return;

    // get base pointer to layer
    QObject* obj = qvariant_cast<QObject*>(act->data());

    // remove calling messagebar widget
    messageBar()->popWidget();

    if(!obj)
        return;

    QgsMapLayer* layer = qobject_cast<QgsMapLayer*>(obj);
    if(layer && setActiveLayer(layer))
    {
        labeling();
    }
}

void SWGISApp::labeling()
{
    QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>(activeLayer());
    if (!vlayer)
    {
        messageBar()->pushMessage( tr( "Labeling Options" ),
                                 tr( "Please select a vector layer first" ),
                                 QgsMessageBar::INFO,
                                 messageTimeout() );
        return;
    }

    QDialog dlg;
    dlg.setWindowTitle(tr( "Layer labeling settings"));
    QgsLabelingWidget *labelingGui = new QgsLabelingWidget(vlayer, m_MapCanvas, &dlg);
    labelingGui->layout()->setContentsMargins(0, 0, 0, 0);
    QVBoxLayout *layout = new QVBoxLayout(&dlg);
    layout->addWidget(labelingGui);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel | QDialogButtonBox::Apply, Qt::Horizontal, &dlg);
    layout->addWidget(buttonBox);

    dlg.setLayout(layout);

    QSettings settings;
    dlg.restoreGeometry(settings.value("/Windows/Labeling/geometry").toByteArray());

    connect(buttonBox->button(QDialogButtonBox::Ok ), SIGNAL(clicked()), &dlg, SLOT(accept()));
    connect(buttonBox->button(QDialogButtonBox::Cancel ), SIGNAL(clicked()), &dlg, SLOT(reject()));
    connect(buttonBox->button(QDialogButtonBox::Apply ), SIGNAL(clicked()), labelingGui, SLOT(apply()));

    if (dlg.exec())
    {
        labelingGui->writeSettingsToLayer();

        settings.setValue( "/Windows/Labeling/geometry", dlg.saveGeometry());

      // trigger refresh
        if ( m_MapCanvas )
        {
            m_MapCanvas->refresh();
        }
    }

    activateDeactivateLayerRelatedActions( vlayer );
}

void SWGISApp::checkForDeprecatedLabelsInProject()
{
    bool ok;
    QgsProject::instance()->readBoolEntry("DeprecatedLabels", "/Enabled", false, &ok);
    if (ok) // project already flagged (regardless of project property value)
        return;

    if(QgsMapLayerRegistry::instance()->count() > 0)
    {
        bool depLabelsUsed = false;
        QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
        for (QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it)
        {
            QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>(it.value());
            if (!vl)
                continue;

            Q_NOWARN_DEPRECATED_PUSH
            depLabelsUsed = vl->hasLabelsEnabled();
            if(depLabelsUsed)
                break;
            Q_NOWARN_DEPRECATED_POP
        }
      if(depLabelsUsed)
            QgsProject::instance()->writeEntry("DeprecatedLabels", "/Enabled", true);
    }
}

void SWGISApp::showMapTip()
{
    // Stop the timer while we look for a maptip
    m_MapTipsTimer->stop();

    // Only show tooltip if the mouse is over the canvas
    if(m_MapCanvas->underMouse())
    {
        QPoint myPointerPos = m_MapCanvas->mouseLastXY();

        //  Make sure there is an active layer before proceeding
        QgsMapLayer* mypLayer = m_MapCanvas->currentLayer();
        if(mypLayer)
        {
            //QgsDebugMsg("Current layer for maptip display is: " + mypLayer->source());
            // only process vector layers
            if(mypLayer->type() == QgsMapLayer::VectorLayer)
            {
                // Show the maptip if the maptips button is depressed
                if(m_MapTipsVisible)
                {
                    m_Maptip->showMapTip(mypLayer, m_LastMapPosition, myPointerPos, m_MapCanvas);
                }
            }
        }
        else
        {
            showStatusMessage(tr("Maptips require an active layer"));
        }
    }

}

void SWGISApp::renderDecorationItems(QPainter *p)
{
    Q_FOREACH(QgsDecorationItem* item, m_DecorationItems)
    {
        item->render(p);
    }
}

void SWGISApp::closeProject()
{
    // unload the project macros before changing anything
//    if(mTrustedMacros)
//    {
//        QgsPythonRunner::run( "qgis.utils.unloadProjectMacros();" );
//    }

    mTrustedMacros = false;

    m_LegendExpressionFilterButton->setExpressionText("");
    m_LegendExpressionFilterButton->setChecked(false);
    m_ActionFilterLegend->setChecked(false);
  //LZS2851
//    deletePrintComposers();
    removeAnnotationItems();
    // clear out any stuff from project
    m_MapCanvas->freeze(true);
    QList<QgsMapCanvasLayer> emptyList;
    m_MapCanvas->setLayerSet(emptyList);
    m_MapCanvas->clearCache();
    removeAllLayers();
}

void SWGISApp::clipboardChanged()
{
    activateDeactivateLayerRelatedActions(activeLayer());
}

void SWGISApp::deleteComposerManager()
{
    m_ComposerManager->deleteLater();
    m_ComposerManager = nullptr;

}

void SWGISApp::toggleFilterLegendByExpression(bool checked)
{
    QgsLayerTreeNode* node = m_LayerTreeView->currentNode();
    if (! node)
        return;

    if (QgsLayerTree::isLayer(node))
    {
        QString e = m_LegendExpressionFilterButton->expressionText();
        QgsLayerTreeUtils::setLegendFilterByExpression(*QgsLayerTree::toLayer(node), e, checked);
    }

    updateFilterLegend();
}

void SWGISApp::updateFilterLegend()
{
    if (m_ActionFilterLegend->isChecked())
    {
        layerTreeView()->layerTreeModel()->setLegendFilterByMap(&m_MapCanvas->mapSettings());
    }
    else if ( QgsLayerTreeUtils::hasLegendFilterExpression(*m_LayerTreeView->layerTreeModel()->rootGroup()))
    {
        layerTreeView()->layerTreeModel()->setLegendFilter(&m_MapCanvas->mapSettings(), /* useExtent */ false);
    }
    else
    {
        layerTreeView()->layerTreeModel()->setLegendFilterByMap(nullptr);
    }

}

void SWGISApp::onLayerError(const QString &msg)
{
    QgsVectorLayer* layer = qobject_cast<QgsVectorLayer*>(sender());

    Q_ASSERT( layer );

    m_InfoBar->pushCritical(tr( "Layer %1" ).arg(layer->name()), msg);
}
