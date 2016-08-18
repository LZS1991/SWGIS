#-------------------------------------------------
#
# Project created by QtCreator 2016-07-28T18:39:23
#
#-------------------------------------------------
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = SWGIS-App
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = lib
DEFINES      += SWGISAPP_LIB

#include some common parameter
include(../SWGISSrcSetting.pri)

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
               $$SWGISINC_PATH/SWGIS-Core/composer \
               $$SWGISINC_PATH/SWGIS-Core/diagram \
               $$SWGISINC_PATH/SWGIS-Core/dxf \
               $$SWGISINC_PATH/SWGIS-Core/geometry \
               $$SWGISINC_PATH/SWGIS-Core/effects \
               $$SWGISINC_PATH/SWGIS-Core/gps \
               $$SWGISINC_PATH/SWGIS-Core/layertree \
               $$SWGISINC_PATH/SWGIS-Core/pal \
               $$SWGISINC_PATH/SWGIS-Core/raster \
               $$SWGISINC_PATH/SWGIS-Core/symbology-ng \
               $$SWGISINC_PATH/SWGIS-Core/gps/qextserialport \
               $$SWGISINC_PATH/SWGIS-Gui \
               $$SWGISINC_PATH/SWGIS-Gui/raster \
               $$SWGISINC_PATH/SWGIS-Gui/symbology-ng \
               $$SWGISINC_PATH/SWGIS-Gui/attributetable \
               $$SWGISINC_PATH/SWGIS-Gui/effects \
               $$SWGISINC_PATH/SWGIS-Gui/layertree \
               $$SWGISINC_PATH/SWGIS-Gui/editorwidgets \
               $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core \
               $$SWGISINC_PATH/SWGIS-WMSProvider \
               $$SWGISINC_PATH/SWGIS-App \
               $$SWGISINC_PATH/SWGIS-App/composer \
               $$SWGIS_BUILD_PATH/SWGIS-Gui
INCLUDEPATH += $$THIRDPARTY_PATH \
               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include \
               $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/include \
               $$THIRDPARTY_PATH/QWT/win_msvc_x64/include

win32{
    win32-g++ {
        contains(QT_ARCH,i386){
            message("win32-x86 build")
        }else{
            message("win x64 build")
        }
         CONFIG(debug, debug|release) {
        }else {
        }
     }else{#MSVC
         contains(QT_ARCH,i386){
            message("win32-x86 build")
        }else{
            message("win x64 build")
#            LIBS += $$SYSTEM_LIB_PATH/x64/SetupAPI.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/WSock32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/User32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/kernel32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/Gdi32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/shell32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/Ole32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/OleAut32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/Uuid.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/ComDlg32.Lib
#            LIBS += $$SYSTEM_LIB_PATH/x64/AdvAPI32.Lib
#            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/expat.lib
            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/gdal_i.lib
            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/geos_c.lib
#            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/proj_i.lib
#            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/spatialite_i.lib
            LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/sqlite3_i.lib
#            LIBS += $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/lib/spatialindex-64.lib
#            LIBS += $$THIRDPARTY_PATH/QScintilla2/win_msvc_x64/lib/qscintilla2.lib
        }
         CONFIG(debug, debug|release) {
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Cored.lib
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Guid.lib
            LIBS +=  $$SWGIS_LIB_PATH/plugins/SWGIS-WMSProviderd.lib
            LIBS +=  $$THIRDPARTY_PATH/QWT/win_msvc_x64/lib/qwtd.lib
        }else {
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Core.lib
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Gui.lib
            LIBS +=  $$SWGIS_LIB_PATH/plugins/SWGIS-WMSProvider.lib
            LIBS +=  $$THIRDPARTY_PATH/QWT/win_msvc_x64/lib/qwt.lib
        }

    }
}

FORMS += \
    swgisapp.ui \
    swgisrasterlayerpropertiesbase.ui \
    swgisvectorlayerpropertiesbase.ui \
    swgisaddattrdialogbase.ui \
    swgisdelattrdialogbase.ui \
    swgisattributetypeedit.ui \
    swgisjoindialogbase.ui \
    swgisdiagrampropertiesbase.ui \
    swgisengineconfigdialog.ui \
    swgisfieldcalculatorbase.ui \
    swgisfieldspropertiesbase.ui \
    swgisaddtaborgroupbase.ui \
    swgislabeldialogbase.ui \
    swgislabelingguibase.ui \
    swgislabelingwidget.ui \
    swgisrulebasedlabelingwidget.ui \
    swgissavetodbdialog.ui \
    swgisloadstylefromdbdialog.ui \
    swgisdecorationcopyrightdialog.ui \
    swgisdecorationgriddialog.ui \
    swgisdecorationnortharrowdialog.ui \
    swgisdecorationscalebardialog.ui \
    swgisbrowserdirectorypropertiesbase.ui \
    swgisbrowserdockwidgetbase.ui \
    swgisbrowserlayerpropertiesbase.ui \
    swgisbrowserpropertiesdialogbase.ui \
    swgisprojectpropertiesbase.ui \
    swgisrelationmanagerdialogbase.ui \
    swgisrelationadddlgbase.ui \
    swgisprojectlayergroupdialogbase.ui \
    swgissnappingdialogbase.ui \
    swgistipguibase.ui \
    swgiscustomizationdialogbase.ui \
    swgisattributeactiondialogbase.ui \
    swgisidentifyresultsbase.ui \
    swgislabelingrulepropsdialog.ui \
    swgisopenvectorlayerdialogbase.ui \
    swgisnewogrconnectionbase.ui \
    swgismeasurebase.ui \
    swgisoptionsbase.ui \
    swgiscomposerbase.ui \
    swgiscompositionwidgetbase.ui \
    swgisatlascompositionwidgetbase.ui \
    swgiscomposerarrowwidgetbase.ui \
    swgiscomposerattributetablewidgetbase.ui \
    swgiscomposerhtmlwidgetbase.ui \
    swgiscomposerlabelwidgetbase.ui \
    swgiscomposerlegendwidgetbase.ui \
    swgiscomposeritemwidgetbase.ui \
    swgiscomposerlegenditemdialogbase.ui \
    swgiscomposerlegendlayersdialogbase.ui \
    swgiscomposermapwidgetbase.ui \
    swgiscomposerpicturewidgetbase.ui \
    swgiscomposerscalebarwidgetbase.ui \
    swgiscomposershapewidgetbase.ui \
    swgiscomposertablewidgetbase.ui \
    swgisattributeselectiondialogbase.ui \
    swgiscomposerimageexportoptions.ui \
    swgissvgexportoptions.ui \
    swgisdisplayanglebase.ui \
    swgiscomposertablebackgroundstyles.ui \
    swgiscomposermanagerbase.ui

SOURCES += \
    qgsapplayertreeviewmenuprovider.cpp \
    qgsclipboard.cpp \
    qgsmaplayerstyleguiutils.cpp \
    qgsrasterlayerproperties.cpp \
    qgsvectorlayerproperties.cpp \
    qgsaddattrdialog.cpp \
    qgsdelattrdialog.cpp \
    qgsattributetypedialog.cpp \
    qgsjoindialog.cpp \
    qgsattributeactiondialog.cpp \
    qgsdiagramproperties.cpp \
    qgslabelengineconfigdialog.cpp \
    qgsfieldcalculator.cpp \
    qgsfieldsproperties.cpp \
    qgsaddtaborgroup.cpp \
    qgslabeldialog.cpp \
    qgslabelinggui.cpp \
    qgslabelingwidget.cpp \
    qgsrulebasedlabelingwidget.cpp \
    qgssavestyletodbdialog.cpp \
    qgsloadstylefromdbdialog.cpp \
    qgsdecorationcopyrightdialog.cpp \
    qgsdecorationgrid.cpp \
    qgsdecorationgriddialog.cpp \
    qgsdecorationitem.cpp \
    qgsdecorationnortharrow.cpp \
    qgsdecorationnortharrowdialog.cpp \
    qgsdecorationscalebar.cpp \
    qgsdecorationscalebardialog.cpp \
    qgsdecorationcopyright.cpp \
    qgsbrowserdockwidget.cpp \
    qgsguivectorlayertools.cpp \
    qgsprojectproperties.cpp \
    qgsrelationadddlg.cpp \
    qgsrelationmanagerdialog.cpp \
    qgsprojectlayergroupdialog.cpp \
    qgssnappingdialog.cpp \
    qgsstatusbarcoordinateswidget.cpp \
    qgsmaptoollabel.cpp \
    qgsmaptoolpinlabels.cpp \
    qgsmaptoolselectutils.cpp \
    qgsmaptoolshowhidelabels.cpp \
    qgsmaptoolmovelabel.cpp \
    qgsmaptoolrotatelabel.cpp \
    qgspointrotationitem.cpp \
    qgscustomization.cpp \
    qgstipgui.cpp \
    qgsshortcutsmanager.cpp \
    qgsfeatureaction.cpp \
    qgsidentifyresultsdialog.cpp \
    ogr/qgsopenvectorlayerdialog.cpp \
    ogr/qgsnewogrconnection.cpp \
    ogr/qgsogrhelperfunctions.cpp \
    qgstipfactory.cpp \
    qgslabelpreview.cpp \
    swgisapp.cpp \
    qgsmeasuredialog.cpp \
    qgsmeasuretool.cpp \
    qgsoptions.cpp \
    qgisappstylesheet.cpp \
    composer/qgscomposer.cpp \
    composer/qgscompositionwidget.cpp \
    composer/qgsatlascompositionwidget.cpp \
    composer/qgscomposerarrowwidget.cpp \
    composer/qgscomposerattributetablewidget.cpp \
    composer/qgscomposerhtmlwidget.cpp \
    composer/qgscomposerlabelwidget.cpp \
    composer/qgscomposerlegendwidget.cpp \
    composer/qgscomposeritemwidget.cpp \
    composer/qgscomposerlegenditemdialog.cpp \
    composer/qgscomposerlegendlayersdialog.cpp \
    composer/qgscomposermapwidget.cpp \
    composer/qgscomposerpicturewidget.cpp \
    composer/qgscomposerscalebarwidget.cpp \
    composer/qgscomposershapewidget.cpp \
    qgsvisibilitypresets.cpp \
    composer/qgscomposertablewidget.cpp \
    composer/qgsattributeselectiondialog.cpp \
    composer/qgscomposerimageexportoptionsdialog.cpp \
    qgsmaptoolmeasureangle.cpp \
    qgsdisplayangle.cpp \
    qgssettingstree.cpp \
    qgsvariantdelegate.cpp \
    composer/qgscomposertablebackgroundcolorsdialog.cpp \
    composer/qgscomposermanager.cpp \
    qgscursors.cpp \
    qgswelcomepageitemsmodel.cpp \
    qgswelcomepage.cpp \
    qgsversioninfo.cpp

HEADERS += \
    $$SWGISINC_PATH/SWGIS-App/swgisappconfig.h \
    $$SWGISINC_PATH/SWGIS-App/qgsapplayertreeviewmenuprovider.h \
    $$SWGISINC_PATH/SWGIS-App/qgsclipboard.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaplayerstyleguiutils.h \
    $$SWGISINC_PATH/SWGIS-App/qgsrasterlayerproperties.h \
    $$SWGISINC_PATH/SWGIS-App/qgsvectorlayerproperties.h \
    $$SWGISINC_PATH/SWGIS-App/qgsaddattrdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdelattrdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsattributetypedialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsjoindialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsattributeactiondialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdiagramproperties.h \
    $$SWGISINC_PATH/SWGIS-App/qgslabelengineconfigdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsfieldcalculator.h \
    $$SWGISINC_PATH/SWGIS-App/qgsfieldsproperties.h \
    $$SWGISINC_PATH/SWGIS-App/qgsaddtaborgroup.h \
    $$SWGISINC_PATH/SWGIS-App/qgslabeldialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgslabelinggui.h \
    $$SWGISINC_PATH/SWGIS-App/qgslabelingwidget.h \
    $$SWGISINC_PATH/SWGIS-App/qgsrulebasedlabelingwidget.h \
    $$SWGISINC_PATH/SWGIS-App/qgssavestyletodbdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsloadstylefromdbdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationcopyright.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationcopyrightdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationgrid.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationgriddialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationitem.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationnortharrow.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationnortharrowdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationscalebar.h \
    $$SWGISINC_PATH/SWGIS-App/qgsdecorationscalebardialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsbrowserdockwidget.h \
    $$SWGISINC_PATH/SWGIS-App/qgsguivectorlayertools.h \
    $$SWGISINC_PATH/SWGIS-App/qgsprojectproperties.h \
    $$SWGISINC_PATH/SWGIS-App/qgsrelationadddlg.h \
    $$SWGISINC_PATH/SWGIS-App/qgsrelationmanagerdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsprojectlayergroupdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgssnappingdialog.h \
    $$SWGISINC_PATH/SWGIS-App/qgsstatusbarcoordinateswidget.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoollabel.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoolpinlabels.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoolselectutils.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoolshowhidelabels.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoolmovelabel.h \
    $$SWGISINC_PATH/SWGIS-App/qgsmaptoolrotatelabel.h \
    $$SWGISINC_PATH/SWGIS-App/qgspointrotationitem.h \
    $$SWGISINC_PATH/SWGIS-App/qgscustomization.h \
    $$SWGISINC_PATH/SWGIS-App/qgstipgui.h \
    $$SWGISINC_PATH/SWGIS-App/qgstip.h \
    $$SWGISINC_PATH/SWGIS-App/qgsshortcutsmanager.h \
    $$SWGISINC_PATH/SWGIS-App/qgsfeatureaction.h \
    $$SWGISINC_PATH/SWGIS-App/qgsidentifyresultsdialog.h \
    ../../SWGIS-Inc/SWGIS-App/ogr/qgsopenvectorlayerdialog.h \
    ../../SWGIS-Inc/SWGIS-App/ogr/qgsnewogrconnection.h \
    ../../SWGIS-Inc/SWGIS-App/ogr/qgsogrhelperfunctions.h \
    ../../SWGIS-Inc/SWGIS-App/qgstipfactory.h \
    ../../SWGIS-Inc/SWGIS-App/qgslabelpreview.h \
    ../../SWGIS-Inc/SWGIS-App/ui_defaults.h \
    ../../SWGIS-Inc/SWGIS-App/swgisapp.h \
    ../../SWGIS-Inc/SWGIS-App/qgsmeasuredialog.h \
    ../../SWGIS-Inc/SWGIS-App/qgsmeasuretool.h \
    ../../SWGIS-Inc/SWGIS-App/qgsoptions.h \
    ../../SWGIS-Inc/SWGIS-App/qgisappstylesheet.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposer.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscompositionwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgsatlascompositionwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerarrowwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerattributetablewidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerhtmlwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerlabelwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerlegendwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposeritemwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerlegenditemdialog.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerlegendlayersdialog.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposermapwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerpicturewidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerscalebarwidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposershapewidget.h \
    ../../SWGIS-Inc/SWGIS-App/qgsvisibilitypresets.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposertablewidget.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgsattributeselectiondialog.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposerimageexportoptionsdialog.h \
    ../../SWGIS-Inc/SWGIS-App/qgsmaptoolmeasureangle.h \
    ../../SWGIS-Inc/SWGIS-App/qgsdisplayangle.h \
    ../../SWGIS-Inc/SWGIS-App/qgssettingstree.h \
    ../../SWGIS-Inc/SWGIS-App/qgsvariantdelegate.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposertablebackgroundcolorsdialog.h \
    ../../SWGIS-Inc/SWGIS-App/composer/qgscomposermanager.h \
    ../../SWGIS-Inc/SWGIS-App/qgscursors.h \
    ../../SWGIS-Inc/SWGIS-App/qgswelcomepageitemsmodel.h \
    ../../SWGIS-Inc/SWGIS-App/qgswelcomepage.h \
    ../../SWGIS-Inc/SWGIS-App/qgsversioninfo.h

RESOURCES += \
    resource.qrc

