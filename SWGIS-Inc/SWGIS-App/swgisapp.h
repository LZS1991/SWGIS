#ifndef SWGISAPP_H
#define SWGISAPP_H

#define QGIS_ICON_SIZE 24

class QActionGroup;
class QCheckBox;
class QCursor;
class QFileInfo;
class QKeyEvent;
class QLabel;
class QMenu;
class QPixmap;
class QProgressBar;
class QPushButton;
class QRectset;
class QSettings;
class QSpinBox;
class QSplashScreen;
class QStringList;
class QToolButton;
class QTcpSocket;
class QValidator;

//class QgisAppInterface;
class QgisAppStyleSheet;
class QgsAnnotationItem;
class QgsClipboard;
class QgsComposer;
class QgsComposerManager;
class QgsComposerView;
class QgsStatusBarCoordinatesWidget;
//class QgsContrastEnhancement;
class QgsCustomLayerOrderWidget;
class QgsDoubleSpinBox;
class QgsFeature;
//class QgsGeometry;
class QgsLayerTreeMapCanvasBridge;
class QgsLayerTreeView;
//class QgsMapCanvas;
//class QgsMapLayer;
class QgsMapTip;
//class QgsMapTool;
//class QgsMapToolAdvancedDigitizing;
class QgsMapOverviewCanvas;
class QgsPluginLayer;
class QgsPoint;
//class QgsProviderRegistry;
//class QgsPythonUtils;
//class QgsRectangle;
class QgsSnappingUtils;
class QgsTransactionGroup;
//class QgsUndoWidget;
//class QgsUserInputDockWidget;
//class QgsVectorLayer;
class QgsVectorLayerTools;
//class QgsWelcomePage;
class QgsLegendFilterButton;

//class QDomDocument;
class QNetworkReply;
class QNetworkProxy;
class QAuthenticator;

class QgsBrowserDockWidget;
//class QgsAdvancedDigitizingDockWidget;
//class QgsSnappingDialog;
//class QgsGPSInformationWidget;
//class QgsStatisticalSummaryDockWidget;
//class QgsMapCanvasTracer;

class QgsDecorationItem;

class QgsMessageLogViewer;
//class QgsMessageBar;

class QgsScaleComboBox;

//class QgsDataItem;
//class QgsTileScaleWidget;


#include <QMainWindow>
#include <QToolBar>
#include <QObject>
//#include <QAbstractSocket>
//#include <QPointer>
#include <QSslError>
//#include <QDateTime>
#include <QSplashScreen>
#include <QStackedWidget>

//#include "qgsauthmanager.h"
//#include "qgsconfig.h"
//#include "qgsfeature.h"
//#include "qgsfeaturestore.h"
//#include "qgspoint.h"
#include "qgsrasterlayer.h"
//#include "qgssnappingdialog.h"
//#include "qgspluginmanager.h"
//#include "qgsmessagebar.h"
//#include "qgsbookmarks.h"
//#include "qgswelcomepageitemsmodel.h"
#include "swgisappconfig.h"
#include "qgsmapcanvas.h"
#include "ui_swgisapp.h"
namespace Ui {
class SWGISApp;
}

class SWGISAPP_EXPORT SWGISApp : public QMainWindow
{
    Q_OBJECT

public:
    SWGISApp(QSplashScreen *splash, bool restorePlugins = true, bool skipVersionCheck = false, QWidget *parent = nullptr, Qt::WindowFlags fl = Qt::Window );
    SWGISApp();
    ~SWGISApp();

    /**
     * Add a vector layer to the canvas, returns pointer to it
     */
    QgsVectorLayer *addVectorLayer( const QString& vectorLayerPath, const QString& baseName, const QString& providerKey );

//    /** \brief overloaded version of the private addLayer method that takes a list of
//     * file names instead of prompting user with a dialog.
//     @param enc encoding type for the layer
//    @param dataSourceType type of ogr datasource
//     @returns true if successfully added layer
//     */
    bool addVectorLayers( const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType );

//    /** Overloaded vesion of the private addRasterLayer()
//      Method that takes a list of file names instead of prompting
//      user with a dialog.
//      @returns true if successfully added layer(s)
//      */
//    bool addRasterLayers( const QStringList &theLayerQStringList, bool guiWarning = true );

    /** Open a raster layer for the given file
      @returns false if unable to open a raster layer for rasterFile
      @note
      This is essentially a simplified version of the above
      */
    QgsRasterLayer *addRasterLayer( const QString &rasterFile, const QString &baseName, bool guiWarning = true );

    /** Returns and adjusted uri for the layer based on current and available CRS as well as the last selected image format
     * @note added in 2.8
     */
    QString crsAndFormatAdjustedLayerUri( const QString& uri, const QStringList& supportedCrs, const QStringList& supportedFormats ) const;

//    /** Add a 'pre-made' map layer to the project */
//    void addMapLayer( QgsMapLayer *theMapLayer );

//    /** Set the extents of the map canvas */
//    void setExtent( const QgsRectangle& theRect );
    //! Remove all layers from the map and legend - reimplements same method from qgisappbase
    void removeAllLayers();
    /** Open a raster or vector file; ignore other files.
      Used to process a commandline argument, FileOpen or Drop event.
      Set interactive to true if it is ok to ask the user for information (mostly for
      when a vector layer has sublayers and we want to ask which sublayers to use).
      @returns true if the file is successfully opened
      */
    bool openLayer( const QString & fileName, bool allowInteractive = false );
//    /** Open the specified project file; prompt to save previous project if necessary.
//      Used to process a commandline argument, FileOpen or Drop event.
//      */
//    void openProject( const QString & fileName );

//    void openLayerDefinition( const QString & filename );
    /** Opens a qgis project file
      @returns false if unable to open the project
      */
    bool addProject( const QString& projectFile );
    /** Convenience function to open either a project or a layer file.
      */
    void openFile( const QString & fileName );
//    //!Overloaded version of the private function with same name that takes the imagename as a parameter
//    void saveMapAsImage( const QString&, QPixmap * );

    /** Get the mapcanvas object from the app */
    QgsMapCanvas *mapCanvas();

    /** Return the messageBar object which allows displaying unobtrusive messages to the user.*/
    QgsMessageBar *messageBar();

//    /** Open the message log dock widget **/
//    void openMessageLog();

//    /** Adds a widget to the user input tool bar.*/
//    void addUserInputWidget( QWidget* widget );

//    //! Set theme (icons)
//    void setTheme( const QString& themeName = "default" );

    void setIconSizes( int size );

    //! Get stylesheet builder object for app and print composers
    QgisAppStyleSheet *styleSheetBuilder();

//    //! Setup the toolbar popup menus for a given theme
//    void setupToolbarPopups( QString themeName );
    //! Returns a pointer to the internal clipboard
    QgsClipboard *clipboard();

    static SWGISApp *instance() { return m_Instance; }

    //! initialize network manager
    void namSetup();

    //! update proxy settings
    void namUpdate();

//    //! set up master password
//    void masterPasswordSetup();

//    /** Add a dock widget to the main window. Overloaded from QMainWindow.
//     * After adding the dock widget to the ui (by delegating to the QMainWindow
//     * parent class, it will also add it to the View menu list of docks.*/
//    void addDockWidget( Qt::DockWidgetArea area, QDockWidget *dockwidget );
//    void removeDockWidget( QDockWidget *dockwidget );
//    /** Add a toolbar to the main window. Overloaded from QMainWindow.
//     * After adding the toolbar to the ui (by delegating to the QMainWindow
//     * parent class, it will also add it to the View menu list of toolbars.*/
//    QToolBar *addToolBar( const QString& name );

//    /** Add a toolbar to the main window. Overloaded from QMainWindow.
//     * After adding the toolbar to the ui (by delegating to the QMainWindow
//     * parent class, it will also add it to the View menu list of toolbars.
//     * @note added in 2.3
//     */
//    void addToolBar( QToolBar *toolBar, Qt::ToolBarArea area = Qt::TopToolBarArea );


//    /** Add window to Window menu. The action title is the window title
//     * and the action should raise, unminimize and activate the window. */
//    void addWindow( QAction *action );
//    /** Remove window from Window menu. Calling this is necessary only for
//     * windows which are hidden rather than deleted when closed. */
//    void removeWindow( QAction *action );

    /** Returns the print composers*/
    QSet<QgsComposer*> printComposers() const {return m_PrintComposers;}
    /** Get a unique title from user for new and duplicate composers
     * @param acceptEmpty whether to accept empty titles (one will be generated)
     * @param currentTitle base name for initial title choice
     * @return QString::null if user cancels input dialog
     */
    bool uniqueComposerTitle( QWidget *parent, QString& composerTitle, bool acceptEmpty, const QString& currentTitle = QString() );
    /** Creates a new composer and returns a pointer to it*/
    QgsComposer* createNewComposer( QString title = QString() );
    /** Deletes a composer and removes entry from Set*/
    void deleteComposer( QgsComposer *c );
    /** Duplicates a composer and adds it to Set
     */
    QgsComposer *duplicateComposer( QgsComposer *currentComposer, QString title = QString() );

    /** Overloaded function used to sort menu entries alphabetically */
    QMenu* createPopupMenu() override;

//    /**
//     * Access the vector layer tools. This will be an instance of {@see QgsGuiVectorLayerTools}
//     * by default.
//     * @return  The vector layer tools
//     */
    QgsVectorLayerTools *vectorLayerTools() { return m_VectorLayerTools; }

//    //! Actions to be inserted in menus and toolbars
//    QAction *actionNewProject() { return mActionNewProject; }
//    QAction *actionOpenProject() { return mActionOpenProject; }
    QAction *actionSaveProject() { return ui->action_Save_Project; }
//    QAction *actionSaveProjectAs() { return mActionSaveProjectAs; }
//    QAction *actionSaveMapAsImage() { return mActionSaveMapAsImage; }
//    QAction *actionProjectProperties() { return mActionProjectProperties; }
    QAction *actionShowComposerManager() { return ui->action_Show_Composer_Manager; }
//    QAction *actionNewPrintComposer() { return mActionNewPrintComposer; }
//    QAction *actionExit() { return mActionExit; }

//    QAction *actionCutFeatures() { return mActionCutFeatures; }
//    QAction *actionCopyFeatures() { return mActionCopyFeatures; }
//    QAction *actionPasteFeatures() { return mActionPasteFeatures; }
//    QAction *actionPasteAsNewVector() { return mActionPasteAsNewVector; }
//    QAction *actionPasteAsNewMemoryVector() { return mActionPasteAsNewMemoryVector; }
//    QAction *actionDeleteSelected() { return mActionDeleteSelected; }
//    QAction *actionAddFeature() { return mActionAddFeature; }
//    QAction *actionMoveFeature() { return mActionMoveFeature; }
//    QAction *actionRotateFeature() { return mActionRotateFeature;}
//    QAction *actionSplitFeatures() { return mActionSplitFeatures; }
//    QAction *actionSplitParts() { return mActionSplitParts; }
//    QAction *actionAddRing() { return mActionAddRing; }
//    QAction *actionFillRing() { return mActionFillRing; }
//    QAction *actionAddPart() { return mActionAddPart; }
//    QAction *actionSimplifyFeature() { return mActionSimplifyFeature; }
//    QAction *actionDeleteRing() { return mActionDeleteRing; }
//    QAction *actionDeletePart() { return mActionDeletePart; }
//    QAction *actionNodeTool() { return mActionNodeTool; }
//    QAction *actionSnappingOptions() { return mActionSnappingOptions; }
//    QAction *actionOffsetCurve() { return mActionOffsetCurve; }
    QAction *actionPan() { return ui->action_Pan_Map; }
//    QAction *actionTouch() { return mActionTouch; }
//    QAction *actionPanToSelected() { return mActionPanToSelected; }
//    QAction *actionZoomIn() { return mActionZoomIn; }
//    QAction *actionZoomOut() { return mActionZoomOut; }
//    QAction *actionSelect() { return mActionSelectFeatures; }
//    QAction *actionSelectRectangle() { return mActionSelectFeatures; }
//    QAction *actionSelectPolygon() { return mActionSelectPolygon; }
//    QAction *actionSelectFreehand() { return mActionSelectFreehand; }
//    QAction *actionSelectRadius() { return mActionSelectRadius; }
//    QAction *actionIdentify() { return mActionIdentify; }
    QAction *actionFeatureAction() { return ui->action_Feature_Action; }
    QAction *actionMeasure() { return ui->action_Measure_Line; }
    QAction *actionMeasureArea() { return ui->action_Measure_Area; }
//    QAction *actionZoomFullExtent() { return mActionZoomFullExtent; }
//    QAction *actionZoomToLayer() { return mActionZoomToLayer; }
//    QAction *actionZoomToSelected() { return mActionZoomToSelected; }
//    QAction *actionZoomLast() { return mActionZoomLast; }
//    QAction *actionZoomNext() { return mActionZoomNext; }
//    QAction *actionZoomActualSize() { return mActionZoomActualSize; }
//    QAction *actionMapTips() { return mActionMapTips; }
//    QAction *actionNewBookmark() { return mActionNewBookmark; }
//    QAction *actionShowBookmarks() { return mActionShowBookmarks; }
//    QAction *actionDraw() { return mActionDraw; }

    QAction *actionNewVectorLayer() { return ui->action_New_Shapefile_Layer; }
//    QAction *actionNewSpatialLiteLayer() { return mActionNewSpatiaLiteLayer; }
//    QAction *actionEmbedLayers() { return mActionEmbedLayers; }
    QAction *actionAddOgrLayer() { return ui->action_Add_Vector_Layer; }
//    QAction *actionAddRasterLayer() { return mActionAddRasterLayer; }
//    QAction *actionAddPgLayer() { return mActionAddPgLayer; }
//    QAction *actionAddSpatiaLiteLayer() { return mActionAddSpatiaLiteLayer; }
    QAction *actionAddWmsLayer() { return ui->action_Add_WMS_WMTS_Layer; }
//    QAction *actionAddWcsLayer() { return mActionAddWcsLayer; }
//    QAction *actionAddWfsLayer() { return mActionAddWfsLayer; }
//    QAction *actionCopyLayerStyle() { return mActionCopyStyle; }
//    QAction *actionPasteLayerStyle() { return mActionPasteStyle; }
//    QAction *actionOpenTable() { return mActionOpenTable; }
//    QAction *actionOpenFieldCalculator() { return mActionOpenFieldCalc; }
    QAction *actionToggleEditing() { return ui->action_Toggle_Editing; }
    QAction *actionSaveActiveLayerEdits() { return ui->action_Save_Layer_Edits; }
    QAction *actionAllEdits() { return ui->action_All_Edits; }
//    QAction *actionSaveEdits() { return mActionSaveEdits; }
//    QAction *actionSaveAllEdits() { return mActionSaveAllEdits; }
//    QAction *actionRollbackEdits() { return mActionRollbackEdits; }
//    QAction *actionRollbackAllEdits() { return mActionRollbackAllEdits; }
//    QAction *actionCancelEdits() { return mActionCancelEdits; }
//    QAction *actionCancelAllEdits() { return mActionCancelAllEdits; }
//    QAction *actionLayerSaveAs() { return mActionLayerSaveAs; }
//    QAction *actionRemoveLayer() { return mActionRemoveLayer; }
//    QAction *actionDuplicateLayer() { return mActionDuplicateLayer; }
//    /** @note added in 2.4 */
//    QAction *actionSetLayerScaleVisibility() { return mActionSetLayerScaleVisibility; }
//    QAction *actionSetLayerCRS() { return mActionSetLayerCRS; }
//    QAction *actionSetProjectCRSFromLayer() { return mActionSetProjectCRSFromLayer; }
//    QAction *actionLayerProperties() { return mActionLayerProperties; }
//    QAction *actionLayerSubsetString() { return mActionLayerSubsetString; }
//    QAction *actionAddToOverview() { return mActionAddToOverview; }
//    QAction *actionAddAllToOverview() { return mActionAddAllToOverview; }
//    QAction *actionRemoveAllFromOverview() { return mActionRemoveAllFromOverview; }
    QAction *actionHideAllLayers() { return ui->action_Hide_All_Layers; }
    QAction *actionShowAllLayers() { return ui->action_Show_All_Layers; }
    QAction *actionHideSelectedLayers() { return ui->action_Hide_Selected_Layers; }
    QAction *actionShowSelectedLayers() { return ui->action_Show_Selected_Layers; }

//    QAction *actionManagePlugins() { return mActionManagePlugins; }
//    QAction *actionPluginListSeparator() { return mActionPluginSeparator1; }
//    QAction *actionPluginPythonSeparator() { return mActionPluginSeparator2; }
//    QAction *actionShowPythonDialog() { return mActionShowPythonDialog; }

//    QAction *actionToggleFullScreen() { return mActionToggleFullScreen; }
    QAction *actionOptions() { return ui->action_Options; }
//    QAction *actionCustomProjection() { return mActionCustomProjection; }
//    QAction *actionConfigureShortcuts() { return mActionConfigureShortcuts; }

//    QAction *actionHelpContents() { return mActionHelpContents; }
//    QAction *actionHelpAPI() { return mActionHelpAPI; }
//    QAction *actionReportaBug() { return mActionReportaBug; }
//    QAction *actionQgisHomePage() { return mActionQgisHomePage; }
//    QAction *actionCheckQgisVersion() { return mActionCheckQgisVersion; }
//    QAction *actionAbout() { return mActionAbout; }
//    QAction *actionSponsors() { return mActionSponsors; }

    QAction *actionShowPinnedLabels() { return ui->action_Highlight_Pinned_Labels; }

//    //! Menus
//    Q_DECL_DEPRECATED QMenu *fileMenu() { return mProjectMenu; }
//    QMenu *projectMenu() { return mProjectMenu; }
//    QMenu *editMenu() { return mEditMenu; }
//    QMenu *viewMenu() { return mViewMenu; }
//    QMenu *layerMenu() { return mLayerMenu; }
//    QMenu *newLayerMenu() { return mNewLayerMenu; }
//    //! @note added in 2.5
//    QMenu *addLayerMenu() { return mAddLayerMenu; }
//    QMenu *settingsMenu() { return mSettingsMenu; }
//    QMenu *pluginMenu() { return mPluginMenu; }
//    QMenu *databaseMenu() { return mDatabaseMenu; }
//    QMenu *rasterMenu() { return mRasterMenu; }
//    QMenu *vectorMenu() { return mVectorMenu; }
//    QMenu *webMenu() { return mWebMenu; }
//    QMenu *firstRightStandardMenu() { return mHelpMenu; }
    QMenu *windowMenu() { return nullptr; }
    QMenu *printComposersMenu() {return ui->menu_Print_Composers;}
    QMenu *helpMenu() { return ui->menu_Help; }

//    //! Toolbars
//    /** Get a reference to a toolbar. Mainly intended
//     *   to be used by plugins that want to specifically add
//     *   an icon into the file toolbar for consistency e.g.
//     *   addWFS and GPS plugins.
//     */
//    QToolBar *fileToolBar() { return mFileToolBar; }
//    QToolBar *layerToolBar() { return mLayerToolBar; }
//    QToolBar *mapNavToolToolBar() { return mMapNavToolBar; }
//    QToolBar *digitizeToolBar() { return mDigitizeToolBar; }
//    QToolBar *advancedDigitizeToolBar() { return mAdvancedDigitizeToolBar; }
//    QToolBar *attributesToolBar() { return mAttributesToolBar; }
//    QToolBar *pluginToolBar() { return mPluginToolBar; }
//    QToolBar *helpToolBar() { return mHelpToolBar; }
//    QToolBar *rasterToolBar() { return mRasterToolBar; }
//    QToolBar *vectorToolBar() { return mVectorToolBar; }
//    QToolBar *databaseToolBar() { return mDatabaseToolBar; }
//    QToolBar *webToolBar() { return mWebToolBar; }

//    //! return CAD dock widget
//    QgsAdvancedDigitizingDockWidget *cadDockWidget() { return mAdvancedDigitizingDockWidget; }

    //! Returns map overview canvas
    QgsMapOverviewCanvas* mapOverviewCanvas() { return m_OverviewCanvas; }

//    //! show layer properties
    void showLayerProperties(QgsMapLayer *ml);

    //! returns pointer to map legend
    QgsLayerTreeView *layerTreeView();

    QgsLayerTreeMapCanvasBridge *layerTreeCanvasBridge() { return m_LayerTreeCanvasBridge; }

//    //! returns pointer to plugin manager
//    QgsPluginManager *pluginManager();

//    /** Return vector layers in edit mode
//     * @param modified whether to return only layers that have been modified
//     * @returns list of layers in legend order, or empty list */
//    QList<QgsMapLayer *> editableLayers( bool modified = false ) const;

    /** 超时信息显示 */
    int messageTimeout();

    //! emit initializationCompleted signal
    void completeInitialization();

    void emitCustomSrsValidation( QgsCoordinateReferenceSystem &crs );

    QList<QgsDecorationItem*> decorationItems() {return m_DecorationItems;}
    void addDecorationItem( QgsDecorationItem *item ) {m_DecorationItems.append(item);}

//    /** @note added in 2.1 */
//    static QString normalizedMenuName( const QString & name ) { return name.normalized( QString::NormalizationForm_KD ).remove( QRegExp( "[^a-zA-Z]" ) ); }

//#ifdef Q_OS_WIN
//    static LONG WINAPI qgisCrashDump( struct _EXCEPTION_POINTERS *ExceptionInfo );
//#endif

//    void parseVersionInfo( QNetworkReply* reply, int& latestVersion, QStringList& versionInfo );

public slots:
    void layerTreeViewDoubleClicked( const QModelIndex& index );
    //! Make sure the insertion point for new layers is up-to-date with the current item in layer tree view
    void updateNewLayerInsertionPoint();
    //! connected to layer tree registry bridge, selects first of the newly added map layers
    void autoSelectAddedLayer( QList<QgsMapLayer*> layers );
    void activeLayerChanged( QgsMapLayer *layer );
//    //! Zoom to full extent
//    void zoomFull();
//    //! Zoom to the previous extent
//    void zoomToPrevious();
//    //! Zoom to the forward extent
//    void zoomToNext();
//    //! Zoom to selected features
//    void zoomToSelected();
//    //! Pan map to selected features
//    void panToSelected();

    //! open the properties dialog for the currently selected layer
    void layerProperties();

    //! show the attribute table for the currently selected layer
    void attributeTable();

//    void fieldCalculator();

    //! mark project dirty
    void markDirty();

    void layersWereAdded( const QList<QgsMapLayer*>& );

    /* layer will be removed - changed from removingLayer to removingLayers
       in 1.8.
     */
    void removingLayers( const QStringList& );

//    //! starts/stops editing mode of the current layer
//    void toggleEditing();

    //! starts/stops editing mode of a layer
    bool toggleEditing( QgsMapLayer *layer, bool allowCancel = true );

//    /** Save edits for active vector layer and start new transactions */
//    void saveActiveLayerEdits();

//    /** Save edits of a layer
//     * @param leaveEditable leave the layer in editing mode when done
//     * @param triggerRepaint send layer signal to repaint canvas when done
//     */
//    void saveEdits( QgsMapLayer *layer, bool leaveEditable = true, bool triggerRepaint = true );

//    /** Cancel edits for a layer
//      * @param leaveEditable leave the layer in editing mode when done
//      * @param triggerRepaint send layer signal to repaint canvas when done
//      */
//    void cancelEdits( QgsMapLayer *layer, bool leaveEditable = true, bool triggerRepaint = true );

//    //! Save current edits for selected layer(s) and start new transaction(s)
//    void saveEdits();

//    /** Save edits for all layers and start new transactions */
//    void saveAllEdits( bool verifyAction = true );

//    /** Rollback current edits for selected layer(s) and start new transaction(s) */
//    void rollbackEdits();

//    /** Rollback edits for all layers and start new transactions */
//    void rollbackAllEdits( bool verifyAction = true );

//    /** Cancel edits for selected layer(s) and toggle off editing */
//    void cancelEdits();

//    /** Cancel all edits for all layers and toggle off editing */
//    void cancelAllEdits( bool verifyAction = true );

//    void updateUndoActions();

//    //! cuts selected features on the active layer to the clipboard
//    /**
//       \param layerContainingSelection  The layer that the selection will be taken from
//                                        (defaults to the active layer on the legend)
//     */
//    void editCut( QgsMapLayer *layerContainingSelection = nullptr );
//    //! copies selected features on the active layer to the clipboard
//    /**
//       \param layerContainingSelection  The layer that the selection will be taken from
//                                        (defaults to the active layer on the legend)
//     */
//    void editCopy( QgsMapLayer *layerContainingSelection = nullptr );
//    //! copies features on the clipboard to the active layer
//    /**
//       \param destinationLayer  The layer that the clipboard will be pasted to
//                                (defaults to the active layer on the legend)
//     */
//    void editPaste( QgsMapLayer *destinationLayer = nullptr );
//    //! copies features on the clipboard to a new vector layer
//    void pasteAsNewVector();
//    //! copies features on the clipboard to a new memory vector layer
//    QgsVectorLayer *pasteAsNewMemoryVector( const QString & theLayerName = QString() );
//    //! copies style of the active layer to the clipboard
//    /**
//       \param sourceLayer  The layer where the style will be taken from
//                                        (defaults to the active layer on the legend)
//     */
//    void copyStyle( QgsMapLayer *sourceLayer = nullptr );
//    //! pastes style on the clipboard to the active layer
//    /**
//       \param destinationLayer  The layer that the clipboard will be pasted to
//                                (defaults to the active layer on the legend)
//     */
//    void pasteStyle( QgsMapLayer *destinationLayer = nullptr );

//    //! copies features to internal clipboard
//    void copyFeatures( QgsFeatureStore & featureStore );
    void loadOGRSublayers( const QString& layertype, const QString& uri, const QStringList& list );
    void loadGDALSublayers( const QString& uri, const QStringList& list );

//    /** Deletes the selected attributes for the currently selected vector layer*/
//    void deleteSelected( QgsMapLayer *layer = nullptr, QWidget *parent = nullptr, bool promptConfirmation = false );

//    //! project was written
//    void writeProject( QDomDocument & );

//    //! project was read
//    void readProject( const QDomDocument & );

    //! Set app stylesheet from settings
    void setAppStyleSheet( const QString& stylesheet );

    //! request credentials for network manager
    void namAuthenticationRequired(QNetworkReply *reply, QAuthenticator *auth );
    void namProxyAuthenticationRequired( const QNetworkProxy &proxy, QAuthenticator *auth );
#ifndef QT_NO_OPENSSL
    void namSslErrors( QNetworkReply *reply, const QList<QSslError> &errors );
#endif
    void namRequestTimedOut( QNetworkReply *reply );

//    //! Schedule and erase of the authentication database upon confirmation
//    void eraseAuthenticationDatabase();

//    //! Push authentication manager output to messagebar
//    void authMessageOut( const QString& message, const QString& authtag, QgsAuthManager::MessageLevel level );

//    //! update default action of toolbutton
//    void toolButtonActionTriggered( QAction * );

    //! layer selection changed
    void legendLayerSelectionChanged( void );

//    //! Watch for QFileOpenEvent.
//    virtual bool event( QEvent *event ) override;

    /** Open a raster layer using the Raster Data Provider. */
    QgsRasterLayer *addRasterLayer( QString const & uri, QString const & baseName, QString const & providerKey );

    /** Open a plugin layer using its provider */
    QgsPluginLayer* addPluginLayer( const QString& uri, const QString& baseName, const QString& providerKey );

//    void addWfsLayer( const QString& uri, const QString& typeName );

//    void versionReplyFinished();

//    QgsMessageLogViewer *logViewer() { return mLogViewer; }

    //! Update project menu with the project templates
    void updateProjectFromTemplates();

    //! Opens the options dialog
    void showOptionsDialog( QWidget *parent = nullptr, const QString& currentPage = QString() );

    /** Refreshes the state of the layer actions toolbar action
      * @note added in 2.1 */
    void refreshActionFeatureAction();

    QMenu *panelMenu() { return m_PanelMenu; }

    bool autoTransaction() const;
    void setAutoTransaction( bool state );

protected:
//    //! Handle state changes (WindowTitleChange)
//    virtual void changeEvent( QEvent *event ) override;
//    //! Have some control over closing of the application
//    virtual void closeEvent( QCloseEvent *event ) override;

//    virtual void dragEnterEvent( QDragEnterEvent *event ) override;
//    virtual void dropEvent( QDropEvent *event ) override;

//    //! reimplements widget keyPress event so we can check if cancel was pressed
//    virtual void keyPressEvent( QKeyEvent *event ) override;

private:
    Ui::SWGISApp *ui;

    QgsMapCanvas *m_MapCanvas;

    // 显示警告的信息
    QgsMessageBar *m_InfoBar;

    /** This method will open a dialog so the user can select GDAL sublayers to load
     * @returns true if any items were loaded
     */
    bool askUserForZipItemLayers( QString path );
    /** This method will open a dialog so the user can select GDAL sublayers to load
     */
    void askUserForGDALSublayers( QgsRasterLayer *layer );
    /** This method will verify if a GDAL layer contains sublayers
     */
    bool shouldAskUserForGDALSublayers( QgsRasterLayer *layer );
    /** This method will open a dialog so the user can select OGR sublayers to load
     */
    void askUserForOGRSublayers( QgsVectorLayer *layer );
    /** Add a raster layer to the map (passed in as a ptr).
     * It won't force a refresh.
     */
    bool addRasterLayer( QgsRasterLayer * theRasterLayer );

    /** Open a raster layer - this is the generic function which takes all parameters */
    QgsRasterLayer* addRasterLayerPrivate( const QString & uri, const QString & baseName,
                                           const QString & providerKey, bool guiWarning,
                                           bool guiUpdate );

//    /** Add this file to the recently opened/saved projects list
//     *  pass settings by reference since creating more than one
//     * instance simultaneously results in data loss.
//     *
//     * @param savePreviewImage Set to false when the preview image should not be saved. E.g. project load.
//     */
//    void saveRecentProjectPath( const QString& projectPath, bool savePreviewImage = true );
//    //! Update project menu with the current list of recently accessed projects
//    void updateRecentProjectPaths();
//    //! Read Well Known Binary stream from PostGIS
//    //void readWKB(const char *, QStringList tables);
//    //! shows the paste-transformations dialog
//    // void pasteTransformations();
    //! check to see if file is dirty and if so, prompt the user th save it
    bool saveDirty();
//    /** Helper function to union several geometries together (used in function mergeSelectedFeatures)
//      @return 0 in case of error or if canceled */
//    QgsGeometry* unionGeometries( const QgsVectorLayer* vl, QgsFeatureList& featureList, bool &canceled );

//    /** Deletes all the composer objects and clears mPrintComposers*/
//    void deletePrintComposers();

//    void saveAsVectorFileGeneral( QgsVectorLayer* vlayer = nullptr, bool symbologyOption = true );

//    /** Paste features from clipboard into a new memory layer.
//     *  If no features are in clipboard an empty layer is returned.
//     *  @return pointer to a new layer or 0 if failed
//     */
//    QgsVectorLayer * pasteToNewMemoryVector();

    /** Returns all annotation items in the canvas*/
    QList<QgsAnnotationItem*> annotationItems();
    /** Removes annotation items in the canvas*/
    void removeAnnotationItems();

    //! 通过用户的设置来定义TreeView
    void setupLayerTreeViewFromSettings();

//    /// QgisApp aren't copyable
//    QgisApp( QgisApp const & );
//    /// QgisApp aren't copyable
//    QgisApp & operator=( QgisApp const & );

//    void readSettings();
//    void writeSettings();
    void createActions();
//    void createActionGroups();
    void createMenus();
//    void createToolBars();
    void createStatusBar();
    void setupConnections();
    void initLayerTreeView();
    void createOverview();
    void createCanvasTools();
    void createMapTips();
    void updateCRSStatusBar();
    void createDecorations();

//    /** Do histogram stretch for singleband gray / multiband color rasters*/
//    void histogramStretch( bool visibleAreaOnly = false, QgsRaster::ContrastEnhancementLimits theLimits = QgsRaster::ContrastEnhancementMinMax );

//    /** Apply raster brightness */
//    void adjustBrightnessContrast( int delta, bool updateBrightness = true );

//    /** Copy a vector style from a layer to another one, if they have the same geometry type */
//    void duplicateVectorStyle( QgsVectorLayer* srcLayer, QgsVectorLayer* destLayer );

    QgisAppStyleSheet *m_StyleSheetBuilder;

//    // actions for menus and toolbars -----------------

//    QAction *mActionPluginSeparator1;
//    QAction *mActionPluginSeparator2;
//    QAction *mActionRasterSeparator;

//    // action groups ----------------------------------
//    QActionGroup *mMapToolGroup;
//    QActionGroup *mPreviewGroup;

//    // menus ------------------------------------------

    QMenu *m_PanelMenu;
//    QMenu *mToolbarMenu;

//    // docks ------------------------------------------
    QDockWidget *m_LayerTreeDock;
    QDockWidget *m_LayerOrderDock;
    QDockWidget *m_OverviewDock;
//    QDockWidget *mpGpsDock;
    QDockWidget *m_LogDock;

    class Tools
    {
        public:

            Tools()
                : m_ZoomIn( nullptr )
                , m_ZoomOut( nullptr )
                , m_Pan( nullptr )
//            , mIdentify( nullptr )
//            , mFeatureAction( nullptr )
                , m_MeasureDist( nullptr )
                , m_MeasureArea( nullptr )
                , m_MeasureAngle( nullptr )
//            , mAddFeature( nullptr )
//            , mCircularStringCurvePoint( nullptr )
//            , mCircularStringRadius( nullptr )
//            , mMoveFeature( nullptr )
//            , mOffsetCurve( nullptr )
//            , mReshapeFeatures( nullptr )
//            , mSplitFeatures( nullptr )
//            , mSplitParts( nullptr )
//            , mSelect( nullptr )
//            , mSelectFeatures( nullptr )
//            , mSelectPolygon( nullptr )
//            , mSelectFreehand( nullptr )
//            , mSelectRadius( nullptr )
//            , mVertexAdd( nullptr )
//            , mVertexMove( nullptr )
//            , mVertexDelete( nullptr )
//            , mAddRing( nullptr )
//            , mFillRing( nullptr )
//            , mAddPart( nullptr )
//            , mSimplifyFeature( nullptr )
//            , mDeleteRing( nullptr )
//            , mDeletePart( nullptr )
//            , mNodeTool( nullptr )
//            , mRotatePointSymbolsTool( nullptr )
//            , mAnnotation( nullptr )
//            , mFormAnnotation( nullptr )
//            , mHtmlAnnotation( nullptr )
//            , mSvgAnnotation( nullptr )
//            , mTextAnnotation( nullptr )
//            , mPinLabels( nullptr )
//            , mShowHideLabels( nullptr )
//            , mMoveLabel( nullptr )
//            , mRotateFeature( nullptr )
//            , mRotateLabel( nullptr )
//            , mChangeLabelProperties( nullptr )
            {}

            QgsMapTool *m_ZoomIn;
            QgsMapTool *m_ZoomOut;
            QgsMapTool *m_Pan;
//        QgsMapTool *mIdentify;
//        QgsMapTool *mFeatureAction;
            QgsMapTool *m_MeasureDist;
            QgsMapTool *m_MeasureArea;
            QgsMapTool *m_MeasureAngle;
//        QgsMapTool *mAddFeature;
//        QgsMapTool *mCircularStringCurvePoint;
//        QgsMapTool *mCircularStringRadius;
//        QgsMapTool *mMoveFeature;
//        QgsMapTool *mOffsetCurve;
//        QgsMapTool *mReshapeFeatures;
//        QgsMapTool *mSplitFeatures;
//        QgsMapTool *mSplitParts;
//        QgsMapTool *mSelect;
//        QgsMapTool *mSelectFeatures;
//        QgsMapTool *mSelectPolygon;
//        QgsMapTool *mSelectFreehand;
//        QgsMapTool *mSelectRadius;
//        QgsMapTool *mVertexAdd;
//        QgsMapTool *mVertexMove;
//        QgsMapTool *mVertexDelete;
//        QgsMapTool *mAddRing;
//        QgsMapTool *mFillRing;
//        QgsMapTool *mAddPart;
//        QgsMapTool *mSimplifyFeature;
//        QgsMapTool *mDeleteRing;
//        QgsMapTool *mDeletePart;
//        QgsMapTool *mNodeTool;
//        QgsMapTool *mRotatePointSymbolsTool;
//        QgsMapTool *mAnnotation;
//        QgsMapTool *mFormAnnotation;
//        QgsMapTool *mHtmlAnnotation;
//        QgsMapTool *mSvgAnnotation;
//        QgsMapTool *mTextAnnotation;
//        QgsMapTool *mPinLabels;
//        QgsMapTool *mShowHideLabels;
//        QgsMapTool *mMoveLabel;
//        QgsMapTool *mRotateFeature;
//        QgsMapTool *mRotateLabel;
//        QgsMapTool *mChangeLabelProperties;
    } m_MapTools;

    QgsMapTool *m_NonEditMapTool;

    //! Widget that will live on the statusbar to display "scale 1:"
    QLabel *m_ScaleLabel;
    //! Widget that will live on the statusbar to display scale value
    QgsScaleComboBox *m_ScaleEdit;
//    //! The validator for the mScaleEdit
//    QValidator * mScaleEditValidator;

    //! Widget that will live in the statusbar to display and edit coords
    QgsStatusBarCoordinatesWidget *m_CoordsEdit;

    //! Widget that will live on the statusbar to display "Rotation"
    QLabel *m_RotationLabel;
    //! Widget that will live in the statusbar to display and edit rotation
    QgsDoubleSpinBox *m_RotationEdit;
//    //! The validator for the mCoordsEdit
//    QValidator *mRotationEditValidator;
    //! Widget that will live in the statusbar to show progress of operations
    QProgressBar *m_ProgressBar;
    //! Widget used to suppress rendering
    QCheckBox *m_RenderSuppressionCBox;
//    //! Widget in status bar used to show current project CRS
//    QLabel *mOnTheFlyProjectionStatusLabel;
    //! Widget in status bar used to show status of on the fly projection
    QToolButton *m_OnTheFlyProjectionStatusButton;
    QToolButton *m_MessageButton;
//    //! Menu that contains the list of actions of the selected vector layer
//    QMenu *mFeatureActionMenu;
//    //! Popup menu
//    QMenu *mPopupMenu;
//    //! Top level database menu
//    QMenu *mDatabaseMenu;
//    //! Top level web menu
//    QMenu *mWebMenu;
//    //! Popup menu for the map overview tools
//    QMenu *mToolPopupOverviews;
//    //! Popup menu for the display tools
//    QMenu *mToolPopupDisplay;
    //! Map canvas
    QgsMapOverviewCanvas *m_OverviewCanvas;
    // 显示的地图列表
    QgsLayerTreeView *m_LayerTreeView;
    //! Helper class that connects layer tree with map canvas
    QgsLayerTreeMapCanvasBridge *m_LayerTreeCanvasBridge;
    //! Table of contents (legend) to order layers of the map
    QgsCustomLayerOrderWidget *m_MapLayerOrder;
    //! Cursor for the overview map
    QCursor *m_OverviewMapCursor;
//    //! Current map window extent in real-world coordinates
//    QRect *mMapWindow;
//    QString mStartupPath;
//    //! full path name of the current map file (if it has been saved or loaded)
//    QString mFullPathName;

//    //! interface to QgisApp for plugins
//    QgisAppInterface *mQgisInterface;
//    friend class QgisAppInterface;

    QSplashScreen *m_Splash;
//    //! list of recently opened/saved project files
//    QList<QgsWelcomePageItemsModel::RecentProjectData> mRecentProjects;
    //! Print composers of this project, accessible by id string
    QSet<QgsComposer*> m_PrintComposers;
    /** QGIS-internal vector feature clipboard */
    QgsClipboard *m_InternalClipboard;
    //! Flag to indicate how the project properties dialog was summoned
    bool m_ShowProjectionTab;
    /** String containing supporting vector file formats
      Suitable for a QFileDialog file filter.  Build in ctor.
      */
    QString m_VectorFileFilter;
    /** String containing supporting raster file formats
      Suitable for a QFileDialog file filter.  Build in ctor.
      */
    QString m_RasterFileFilter;

    //! Timer for map tips
    QTimer *m_MapTipsTimer;

    //! Point of last mouse position in map coordinates (used with MapTips)
    QgsPoint m_LastMapPosition;

    //! Maptip object
    QgsMapTip *m_Maptip;

    //! Flag to indicate if maptips are on or off
    bool m_MapTipsVisible;

//    //! Flag to indicate whether we are in fullscreen mode or not
//    bool mFullScreenMode;

//    //! Flag to indicate that the previous screen mode was 'maximised'
//    bool mPrevScreenModeMaximized;

    //! Flag to indicate an edits save/rollback for active layer is in progress
    bool m_SaveRollbackInProgress;

//    QgsPythonUtils *mPythonUtils;

    static SWGISApp *m_Instance;

//    QgsUndoWidget *mUndoWidget;

    QgsBrowserDockWidget *m_BrowserWidget;
    QgsBrowserDockWidget *m_BrowserWidget2;

//    QgsAdvancedDigitizingDockWidget *mAdvancedDigitizingDockWidget;
//    QgsStatisticalSummaryDockWidget* mStatisticalSummaryDockWidget;
//    QgsBookmarks* mBookMarksDockWidget;

//    QgsSnappingDialog *mSnappingDialog;

//    QgsPluginManager *mPluginManager;

    QgsComposerManager *m_ComposerManager;

    //! map of transaction group: QPair( providerKey, connString ) -> transactionGroup
    QMap< QPair< QString, QString>, QgsTransactionGroup*> m_TransactionGroups;

//    //! Persistent tile scale slider
//    QgsTileScaleWidget *mpTileScaleWidget;

    QList<QgsDecorationItem*> m_DecorationItems;

    int m_LastComposerId;

//    //! Persistent GPS toolbox
//    QgsGPSInformationWidget *mpGpsWidget;

    QgsMessageBarItem *m_LastMapToolMessage;

    QgsMessageLogViewer *m_LogViewer;

//    //! project changed
//    void projectChanged( const QDomDocument & );

//    bool cmpByText( QAction* a, QAction* b );

    //! the user has trusted the project macros
    bool mTrustedMacros;

//    //! a bar to display warnings in a non-blocker manner
//    QgsMessageBar *mInfoBar;
//    QWidget *mMacrosWarn;

//    //! A tool bar for user input
//    QgsUserInputDockWidget* mUserInputDockWidget;

    QgsVectorLayerTools* m_VectorLayerTools;

//    //! A class that facilitates tracing of features
//    QgsMapCanvasTracer* mTracer;

    QAction* m_ActionFilterLegend;

    QgsLegendFilterButton* m_LegendExpressionFilterButton;

    QgsSnappingUtils* m_SnappingUtils;

    QDateTime m_ProjectLastModified;

//    QgsWelcomePage* mWelcomePage;

    QStackedWidget* m_CentralContainer;

//    int mProjOpen;


private slots:
    //! validate a SRS
    void validateSrs( QgsCoordinateReferenceSystem &crs );

//    //! QGis Sponsors
//    void sponsors();
//    //! About QGis
//    void about();
//    //! Add a raster layer to the map (will prompt user for file name using dlg )
//    void addRasterLayer();
//    //#ifdef HAVE_POSTGRESQL
//    //! Add a databaselayer to the map
//    void addDatabaseLayer();
//    //#endif
//    //! Add a list of database layers to the map
//    void addDatabaseLayers( QStringList const & layerPathList, QString const & providerKey );
//    //! Add a SpatiaLite layer to the map
//    void addSpatiaLiteLayer();
//    //! Add a Delimited Text layer to the map
//    void addDelimitedTextLayer();
//    //! Add a vector layer defined by uri, layer name, data source uri
//    void addSelectedVectorLayer( const QString& uri, const QString& layerName, const QString& provider );
//    //! Replace the selected layer by a vector layer defined by uri, layer name, data source uri
//    void replaceSelectedVectorLayer( const QString& oldId, const QString& uri, const QString& layerName, const QString& provider );
//    //#ifdef HAVE_MSSQL
//    //! Add a MSSQL layer to the map
//    void addMssqlLayer();
//    //#endif
//    //#ifdef HAVE_ORACLE
//    //! Add a Oracle layer to the map
//    void addOracleLayer();
//    //#endif
//    //! Add a virtual layer
//    void addVirtualLayer();
//    //! toggles whether the current selected layer is in overview or not
//    void isInOverview();
    //! Store the position for map tool tip
    void saveLastMousePosition(const QgsPoint &);
    //! Slot to show current map scale;
    void showScale(double theScale);
    //! Slot to handle user scale input;
    void userScale();
    //! Slot to handle user rotation input;
    //! @note added in 2.8
    void userRotation();
    //! Remove a layer from the map and legend
    void removeLayer();
//    //! Duplicate map layer(s) in legend
//    void duplicateLayers( const QList<QgsMapLayer *>& lyrList = QList<QgsMapLayer *>() );
    //! Set Scale visibility of selected layers
    void setLayerScaleVisibility();
    //! Set CRS of a layer
    void setLayerCRS();
    //! Assign layer CRS to project
    void setProjectCRSFromLayer();

//    /** Zooms so that the pixels of the raster layer occupies exactly one screen pixel.
//        Only works on raster layers*/
//    void legendLayerZoomNative();

//    /** Stretches the raster layer, if stretching is active, based on the min and max of the current extent.
//        Only workds on raster layers*/
//    void legendLayerStretchUsingCurrentExtent();

//    /** Apply the same style to selected layers or to current legend group*/
//    void applyStyleToGroup();

//    /** Set the CRS of the current legend group*/
//    void legendGroupSetCRS();
//    /** Set the WMS data of the current legend group*/
//    void legendGroupSetWMSData();

//    //! zoom to extent of layer
//    void zoomToLayerExtent();
//    //! zoom to actual size of raster layer
//    void zoomActualSize();
//    /** Perform a local histogram stretch on the active raster layer
//     * (stretch based on pixel values in view extent).
//     * Valid for non wms raster layers only. */
//    void localHistogramStretch();
//    /** Perform a full histogram stretch on the active raster layer
//     * (stretch based on pixels values in full dataset)
//     * Valid for non wms raster layers only. */
//    void fullHistogramStretch();
//    /** Perform a local cumulative cut stretch */
//    void localCumulativeCutStretch();
//    /** Perform a full extent cumulative cut stretch */
//    void fullCumulativeCutStretch();
//    /** Increase raster brightness
//     * Valid for non wms raster layers only. */
//    void increaseBrightness();
//    /** Decrease raster brightness
//     * Valid for non wms raster layers only. */
//    void decreaseBrightness();
//    /** Increase raster contrast
//     * Valid for non wms raster layers only. */
//    void increaseContrast();
//    /** Decrease raster contrast
//     * Valid for non wms raster layers only. */
//    void decreaseContrast();
//    //! plugin manager
//    void showPluginManager();
//    //! load python support if possible
//    void loadPythonSupport();
//    //! Find the QMenu with the given name within plugin menu (ie the user visible text on the menu item)
//    QMenu* getPluginMenu( const QString& menuName );
//    //! Add the action to the submenu with the given name under the plugin menu
//    void addPluginToMenu( const QString& name, QAction *action );
//    //! Remove the action to the submenu with the given name under the plugin menu
//    void removePluginMenu( const QString& name, QAction *action );
//    //! Find the QMenu with the given name within the Database menu (ie the user visible text on the menu item)
//    QMenu *getDatabaseMenu( const QString& menuName );
//    //! Add the action to the submenu with the given name under the Database menu
//    void addPluginToDatabaseMenu( const QString& name, QAction *action );
//    //! Remove the action to the submenu with the given name under the Database menu
//    void removePluginDatabaseMenu( const QString& name, QAction *action );
//    //! Find the QMenu with the given name within the Raster menu (ie the user visible text on the menu item)
//    QMenu *getRasterMenu( const QString& menuName );
//    //! Add the action to the submenu with the given name under the Raster menu
//    void addPluginToRasterMenu( const QString& name, QAction *action );
//    //! Remove the action to the submenu with the given name under the Raster menu
//    void removePluginRasterMenu( const QString& name, QAction *action );
//    //! Find the QMenu with the given name within the Vector menu (ie the user visible text on the menu item)
//    QMenu *getVectorMenu( const QString& menuName );
//    //! Add the action to the submenu with the given name under the Vector menu
//    void addPluginToVectorMenu( const QString& name, QAction *action );
//    //! Remove the action to the submenu with the given name under the Vector menu
//    void removePluginVectorMenu( const QString& name, QAction *action );
//    //! Find the QMenu with the given name within the Web menu (ie the user visible text on the menu item)
//    QMenu *getWebMenu( const QString& menuName );
//    //! Add the action to the submenu with the given name under the Web menu
//    void addPluginToWebMenu( const QString& name, QAction *action );
//    //! Remove the action to the submenu with the given name under the Web menu
//    void removePluginWebMenu( const QString& name, QAction *action );
//    //! Add "add layer" action to layer menu
//    void insertAddLayerAction( QAction *action );
//    //! Remove "add layer" action to layer menu
//    void removeAddLayerAction( QAction *action );
//    //! Add an icon to the plugin toolbar
//    int addPluginToolBarIcon( QAction *qAction );
//    /**
//     * Add a widget to the plugins toolbar.
//     * To remove this widget again, call {@link removeToolBarIcon}
//     * with the returned QAction.
//     *
//     * @param widget widget to add. The toolbar will take ownership of this widget
//     * @return the QAction you can use to remove this widget from the toolbar
//     */
//    QAction* addPluginToolBarWidget( QWidget *widget );
//    //! Remove an icon from the plugin toolbar
//    void removePluginToolBarIcon( QAction *qAction );
//    //! Add an icon to the Raster toolbar
//    int addRasterToolBarIcon( QAction *qAction );
//    /**
//     * Add a widget to the raster toolbar.
//     * To remove this widget again, call {@link removeRasterToolBarIcon}
//     * with the returned QAction.
//     *
//     * @param widget widget to add. The toolbar will take ownership of this widget
//     * @return the QAction you can use to remove this widget from the toolbar
//     */
//    QAction *addRasterToolBarWidget( QWidget *widget );
//    //! Remove an icon from the Raster toolbar
//    void removeRasterToolBarIcon( QAction *qAction );
//    //! Add an icon to the Vector toolbar
//    int addVectorToolBarIcon( QAction *qAction );
//    /**
//     * Add a widget to the vector toolbar.
//     * To remove this widget again, call {@link removeVectorToolBarIcon}
//     * with the returned QAction.
//     *
//     * @param widget widget to add. The toolbar will take ownership of this widget
//     * @return the QAction you can use to remove this widget from the toolbar
//     */
//    QAction *addVectorToolBarWidget( QWidget *widget );
//    //! Remove an icon from the Vector toolbar
//    void removeVectorToolBarIcon( QAction *qAction );
//    //! Add an icon to the Database toolbar
//    int addDatabaseToolBarIcon( QAction *qAction );
//    /**
//     * Add a widget to the database toolbar.
//     * To remove this widget again, call {@link removeDatabaseToolBarIcon}
//     * with the returned QAction.
//     *
//     * @param widget widget to add. The toolbar will take ownership of this widget
//     * @return the QAction you can use to remove this widget from the toolbar
//     */
//    QAction *addDatabaseToolBarWidget( QWidget *widget );
//    //! Remove an icon from the Database toolbar
//    void removeDatabaseToolBarIcon( QAction *qAction );
//    //! Add an icon to the Web toolbar
//    int addWebToolBarIcon( QAction *qAction );
//    /**
//     * Add a widget to the web toolbar.
//     * To remove this widget again, call {@link removeWebToolBarIcon}
//     * with the returned QAction.
//     *
//     * @param widget widget to add. The toolbar will take ownership of this widget
//     * @return the QAction you can use to remove this widget from the toolbar
//     */
//    QAction *addWebToolBarWidget( QWidget *widget );
//    //! Remove an icon from the Web toolbar
//    void removeWebToolBarIcon( QAction *qAction );
    //! Save window state
    void saveWindowState();
    //! Restore the window and toolbar state
    void restoreWindowState();
    //! Save project. Returns true if the user selected a file to save to, false if not.
    bool fileSave();
//    //! Save project as
//    void fileSaveAs();
//    //! Export project in dxf format
//    void dxfExport();
//    //! Open the project file corresponding to the
//    //! text)= of the given action.
//    void openProject( QAction *action );
//    /** Attempts to run a python script
//     * @param filePath full path to python script
//     * @note added in QGIS 2.7
//     */
//    void runScript( const QString& filePath );
//    //! Save the map view as an image - user is prompted for image name using a dialog
//    void saveMapAsImage();
//    //! Open a project
//    void fileOpen();
//    //! Create a new project
//    void fileNew();
    //! Create a new blank project (no template)
    void fileNewBlank();
    //! As above but allows forcing without prompt and forcing blank project
    void fileNew( bool thePromptToSaveFlag, bool forceBlank = false );
//    /** What type of project to open after launch */
//    void fileOpenAfterLaunch();
//    /** After project read, set any auto-opened project as successful */
//    void fileOpenedOKAfterLaunch();
    //! Create a new file from a template project
    bool fileNewFromTemplate( const QString& fileName );
    void fileNewFromTemplateAction( QAction * qAction );
    void fileNewFromDefaultTemplate();
//    //! Calculate new rasters from existing ones
//    void showRasterCalculator();
//    //! Open dialog to align raster layers
//    void showAlignRasterTool();
//    void embedLayers();

    //! Create a new empty vector layer
    void newVectorLayer();
//    //! Create a new memory layer
//    void newMemoryLayer();
//    //! Create a new empty spatialite layer
//    void newSpatialiteLayer();
//    //! Print the current map view frame
//    void newPrintComposer();
    void showComposerManager();
//    //! Add all loaded layers into the overview - overrides qgisappbase method
//    void addAllToOverview();
//    //! Remove all loaded layers from the overview - overrides qgisappbase method
//    void removeAllFromOverview();
//    //reimplements method from base (gui) class
    void hideAllLayers();
    //reimplements method from base (gui) class
    void showAllLayers();
    //reimplements method from base (gui) class
    void hideSelectedLayers();
    //reimplements method from base (gui) class
    void showSelectedLayers();
    //! Return pointer to the active layer
    QgsMapLayer *activeLayer();
    //! set the active layer
    bool setActiveLayer( QgsMapLayer * );
//    //! Open the help contents in a browser
//    void helpContents();
//    //! Open the API documentation in a browser
//    void apiDocumentation();
//    //! Open the Bugtracker page in a browser
//    void reportaBug();
//    //! Open the QGIS support page
//    void supportProviders();
//    //! Open the QGIS homepage in users browser
//    void helpQgisHomePage();
//    //! Open a url in the users configured browser
//    void openURL( QString url, bool useQgisDocDirectory = true );
//    //! Check qgis version against the qgis version server
//    void checkQgisVersion();
//    //!Invoke the custom projection dialog
//    void customProjection();
//    //! configure shortcuts
//    void configureShortcuts();
//    //! show customization dialog
//    void customize();
    //! options dialog slot
    void options();
//    //! Whats-this help slot
//    void whatsThis();
    //! Set project properties, including map untis
    void projectProperties();
    //! Open project properties dialog and show the projections tab
    void projectPropertiesProjections();
//    /*  void urlData(); */
//    //! Show the spatial bookmarks dialog
//    void showBookmarks();
//    //! Create a new spatial bookmark
//    void newBookmark();
//    //! activates the add feature tool
//    void addFeature();
//    //! activates the add circular string tool
//    void circularStringCurvePoint();
//    //! activates the circular string radius tool
//    void circularStringRadius();
//    //! activates the move feature tool
//    void moveFeature();
//    //! activates the offset curve tool
//    void offsetCurve();
//    //! activates the reshape features tool
//    void reshapeFeatures();
//    //! activates the split features tool
//    void splitFeatures();
//    //! activates the split parts tool
//    void splitParts();
//    //! activates the add ring tool
//    void addRing();
//    //! activates the fill ring tool
//    void fillRing();
//    //! activates the add part tool
//    void addPart();
//    //! simplifies feature
//    void simplifyFeature();
//    //! deletes ring in polygon
//    void deleteRing();
//    //! deletes part of polygon
//    void deletePart();
//    //! merges the selected features together
//    void mergeSelectedFeatures();
//    //! merges the attributes of selected features
//    void mergeAttributesOfSelectedFeatures();
//    //! provides operations with nodes
//    void nodeTool();
//    //! activates the rotate points tool
//    void rotatePointSymbols();
//    //! shows the snapping Options
//    void snappingOptions();

//    //! activates the rectangle selection tool
//    void selectFeatures();

//    //! activates the polygon selection tool
//    void selectByPolygon();

//    //! activates the freehand selection tool
//    void selectByFreehand();

//    //! activates the radius selection tool
//    void selectByRadius();

//    //! deselect features from all layers
//    void deselectAll();

//    //! select all features
//    void selectAll();

//    //! invert the selection
//    void invertSelection();

//    //! select features by expression
//    void selectByExpression();

    //! refresh map canvas
    void refreshMapCanvas();

    //! start "busy" progress bar
    void canvasRefreshStarted();
    //! stop "busy" progress bar
    void canvasRefreshFinished();

//    /** Dialog for verification of action on many edits */
//    bool verifyEditsActionDialog( const QString& act, const QString& upon );

    /** Update gui actions/menus when layers are modified */
    void updateLayerModifiedActions();

//    //! change layer subset of current vector layer
//    void layerSubsetString();

    //! map tool changed
    void mapToolChanged(QgsMapTool *newTool, QgsMapTool *oldTool);

    //! 图层改变
    void showMapCanvas();

//    //! change log message icon in statusbar
//    void toggleLogMessageIcon( bool hasLogMessage );

    /** Called when some layer's editing mode was toggled on/off */
    void layerEditStateChanged();

    /** Activates or deactivates actions depending on the current maplayer type.
    Is called from the legend when the current legend item has changed*/
    void activateDeactivateLayerRelatedActions( QgsMapLayer *layer );

    void selectionChanged( QgsMapLayer *layer );

    void showProgress( int theProgress, int theTotalSteps );
    void extentChanged();
    void showRotation();
    void showStatusMessage( const QString& theMessage );
    void displayMapToolMessage( const QString& message, QgsMessageBar::MessageLevel level = QgsMessageBar::INFO );
    void displayMessage( const QString& title, const QString& message, QgsMessageBar::MessageLevel level );
    void removeMapToolMessage();
    void updateMouseCoordinatePrecision();
//    void hasCrsTransformEnabled( bool theFlag );
//    void destinationCrsChanged();
//    //    void debugHook();
//    //! Add a Layer Definition file
//    void addLayerDefinition();
    //! Add a vector layer to the map
    void addVectorLayer();
//    //! Exit Qgis
//    void fileExit();
    //! Add a WMS layer to the map
    void addWmsLayer();
//    //! Add a WCS layer to the map
//    void addWcsLayer();
//    //! Add a WFS layer to the map
//    void addWfsLayer();
    //! Set map tool to Zoom out
    void zoomOut();
    //! Set map tool to Zoom in
    void zoomIn();
    //! Set map tool to pan
    void pan();
//    //! Identify feature(s) on the currently selected layer
//    void identify();
    //! Measure distance
    void measure();
    //! Measure area
    void measureArea();
    //! Measure angle
    void measureAngle();

//    //! Run the default feature action on the current layer
//    void doFeatureAction();
//    //! Set the default feature action for the current layer
//    void updateDefaultFeatureAction( QAction *action );
//    //! Refresh the list of feature actions of the current layer
//    void refreshFeatureActions();

//    //annotations
//    void addFormAnnotation();
//    void addTextAnnotation();
//    void addHtmlAnnotation();
//    void addSvgAnnotation();
//    void modifyAnnotation();
//    void reprojectAnnotations();

    /** Alerts user when labeling font for layer has not been found on system */
    void labelingFontNotFound( QgsVectorLayer *vlayer, const QString& fontfamily );

    /** Alerts user when commit errors occurred */
    void commitError( QgsVectorLayer *vlayer );

    /** Opens the labeling dialog for a layer when called from labelingFontNotFound alert */
    void labelingDialogFontNotFound( QAction *act );

    //! shows label settings dialog (for labeling-ng)
    void labeling();

//    //! set the CAD dock widget visible
//    void setCadDockVisible( bool visible );

    /** Check if deprecated labels are used in project, and flag projects that use them */
    void checkForDeprecatedLabelsInProject();

//    //! save current vector layer
//    void saveAsFile();

//    void saveAsLayerDefinition();

//    //! save current raster layer
//    void saveAsRasterFile();

//    //! show python console
//    void showPythonDialog();

//    //! Shows a warning when an old project file is read.
//    void oldProjectVersionWarning( const QString& );

//    //! Toggle map tips on/off
//    void toggleMapTips();

    //! Show the map tip
    void showMapTip();

//    //! Toggle full screen mode
//    void toggleFullScreen();

//    //! Set minimized mode of active window
//    void showActiveWindowMinimized();

//    //! Toggle maximized mode of active window
//    void toggleActiveWindowMaximized();

//    //! Raise, unminimize and activate this window
//    void activate();

//    //! Bring forward all open windows
//    void bringAllToFront();

//    //! Stops rendering of the main map
//    void stopRendering();

//    void showStyleManagerV2();

//    void writeAnnotationItemsToProject( QDomDocument& doc );

//    /** Creates the composer instances in a project file and adds them to the menu*/
//    bool loadComposersFromProject( const QDomDocument& doc );

//    /** Slot to handle display of composers menu, e.g. sorting */
//    void on_mPrintComposersMenu_aboutToShow();

//    bool loadAnnotationItemsFromProject( const QDomDocument& doc );

//    //! Toggles whether to show pinned labels
//    void showPinnedLabels( bool show );
//    //! Activates pin labels tool
//    void pinLabels();
//    //! Activates show/hide labels tool
//    void showHideLabels();
//    //! Activates the move label tool
//    void moveLabel();
//    //! Activates rotate feature tool
//    void rotateFeature();
//    //! Activates rotate label tool
//    void rotateLabel();
//    //! Activates label property tool
//    void changeLabelProperties();

    void renderDecorationItems( QPainter *p );
//    void projectReadDecorationItems();

    //! clear out any stuff from project
    void closeProject();

//    //! trust and load project macros
//    void enableProjectMacros();

//    void osmDownloadDialog();
//    void osmImportDialog();
//    void osmExportDialog();

    void clipboardChanged();

//    //! catch MapCanvas keyPress event so we can check if selected feature collection must be deleted
//    void mapCanvas_keyPressed( QKeyEvent *e );

    //! Deletes the active QgsComposerManager instance
    void deleteComposerManager();

//    /** Disable any preview modes shown on the map canvas
//     * @note added in 2.3 */
//    void disablePreviewMode();
//    /** Enable a grayscale preview mode on the map canvas
//     * @note added in 2.3 */
//    void activateGrayscalePreview();
//    /** Enable a monochrome preview mode on the map canvas
//     * @note added in 2.3 */
//    void activateMonoPreview();
//    /** Enable a color blindness (protanope) preview mode on the map canvas
//     * @note added in 2.3 */
//    void activateProtanopePreview();
//    /** Enable a color blindness (deuteranope) preview mode on the map canvas
//     * @note added in 2.3 */
//    void activateDeuteranopePreview();

    void toggleFilterLegendByExpression( bool );
    void updateFilterLegend();

//    /** Shows the statistical summary dock widget and brings it to the foreground
//     */
//    void showStatisticsDockWidget();

    /** Pushes a layer error to the message bar */
    void onLayerError( const QString& msg );

signals:
//    /** Emitted when a key is pressed and we want non widget sublasses to be able
//      to pick up on this (e.g. maplayer) */
//    void keyPressed( QKeyEvent *e );

    /** 当投影文件成功读取之后触发
      @note
      This is useful for plug-ins that store properties with project files.  A
      plug-in can connect to this signal.  When it is emitted, the plug-in
      knows to then check the project properties for any relevant state.
      */
    void projectRead();
    /** Emitted when starting an entirely new project
      @note
      This is similar to projectRead(); plug-ins might want to be notified
      that they're in a new project.  Yes, projectRead() could have been
      overloaded to be used in the case of new projects instead.  However,
      it's probably more semantically correct to have an entirely separate
      signal for when this happens.
      */
    void newProject();

//    /** Signal emitted when the current theme is changed so plugins
//     * can change there tool button icons. */
//    void currentThemeChanged( const QString& );

    /** This signal is emitted when a new composer instance has been created
       */
    void composerAdded( QgsComposerView* v );

    /** This signal is emitted before a new composer instance is going to be removed
      */
    void composerWillBeRemoved( QgsComposerView* v );

    /** This signal is emitted when a composer instance has been removed
       @note added in version 2.3*/
    void composerRemoved( QgsComposerView* v );

    /** This signal is emitted when QGIS' initialization is complete */
    void initializationCompleted();

    void customSrsValidation(QgsCoordinateReferenceSystem &crs);

//    /** This signal is emitted when a layer has been saved using save as
//       @note added in version 2.7
//     */
//    void layerSavedAs( QgsMapLayer* l, const QString& path );


};



#endif // SWGISAPP_H
