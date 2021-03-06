#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T13:26:10
#
#-------------------------------------------------
TARGET = SWGIS-Gui
CONFIG += console
CONFIG -= app_bundle
DEFINES      += SWGISGUI_LIB
TEMPLATE = lib

#加入代码输出路径配置
include(../SWGISSrcSetting.pri)

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Gui \
               $$SWGISINC_PATH/SWGIS-Gui/attributetable \
               $$SWGISINC_PATH/SWGIS-Gui/symbology-ng \
               $$SWGISINC_PATH/SWGIS-Gui/raster \
               $$SWGISINC_PATH/SWGIS-Gui/editorwidgets \
               $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core \
               $$SWGISINC_PATH/SWGIS-Gui/layertree \
               $$SWGISINC_PATH/SWGIS-Gui/effects \
               $$SWGISINC_PATH/SWGIS-Core/symbology-ng \
               $$SWGISINC_PATH/SWGIS-Core/effects \
               $$SWGISINC_PATH/SWGIS-Core/geometry \
               $$SWGISINC_PATH/SWGIS-Core/raster \
               $$SWGISINC_PATH/SWGIS-Core/layertree \
               $$SWGISINC_PATH/SWGIS-Core/composer

INCLUDEPATH += $$THIRDPARTY_PATH \
               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include \
               $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/include \
               $$THIRDPARTY_PATH/QWT/win_msvc_x64/include \
               $$THIRDPARTY_PATH/QScintilla2/win_msvc_x64/include

LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/sqlite3_i.lib
#LIBS += $$THIRDPARTY_PATH/QScintilla2/win_msvc_x64/lib/qscintilla2.lib
#LIBS += F:/02-QtProject/QScintilla_gpl-2.9.3/Qt4Qt5/release/qscintilla2.lib

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
        }
         CONFIG(debug, debug|release) {
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Cored.lib
            LIBS +=  $$THIRDPARTY_PATH/QWT/win_msvc_x64/lib/qwtd.lib
        }else {
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Core.lib
            LIBS +=  $$THIRDPARTY_PATH/QWT/win_msvc_x64/lib/qwt.lib
        }
    }
}

SOURCES += \
    qgsnumericsortlistviewitem.cpp \
    qgsmessageviewer.cpp \
    qgsmanageconnectionsdialog.cpp \
    qgsgenericprojectionselector.cpp \
    qgsprojectionselector.cpp \
    qgsfilterlineedit.cpp \
    qgsmapcanvas.cpp \
    qgsmessagebar.cpp \
    qgsmessagebaritem.cpp \
    qgshighlight.cpp \
    qgsmapcanvasmap.cpp \
    qgsmapoverviewcanvas.cpp \
    qgsmaptool.cpp \
    qgsprevieweffect.cpp \
    qgsmapmouseevent.cpp \
    qgsmapcanvasitem.cpp \
    qgsdatumtransformdialog.cpp \
    qgsmapcanvassnappingutils.cpp \
    qgscursors.cpp \
    qgsmaptoolpan.cpp \
    qgsmaptoolzoom.cpp \
    qgsrubberband.cpp \
    qgscredentialdialog.cpp \
    layertree/qgslayertreeview.cpp \
    layertree/qgslayertreeviewdefaultactions.cpp \
    qgscolorwidgets.cpp \
    qgscolordialog.cpp \
    qgscolorschemelist.cpp \
    qgscolorswatchgrid.cpp \
    symbology-ng/qgssymbolv2selectordialog.cpp \
    symbology-ng/qgssymbolslistwidget.cpp \
    symbology-ng/qgslayerpropertieswidget.cpp \
    symbology-ng/qgssymbollayerv2widget.cpp \
    symbology-ng/qgsellipsesymbollayerv2widget.cpp \
    symbology-ng/qgsvectorfieldsymbollayerwidget.cpp \
    symbology-ng/qgssizescalewidget.cpp \
    qgsdatadefinedbutton.cpp \
    qgsexpressionbuilderdialog.cpp \
    qgscolorbuttonv2.cpp \
    qgsunitselectionwidget.cpp \
    qgsexpressionbuilderwidget.cpp \
    qgsexpressionhighlighter.cpp \
    qgsfieldexpressionwidget.cpp \
    qgsfieldmodel.cpp \
    qgsfieldproxymodel.cpp \
    qgsmaplayermodel.cpp \
    qgsmaplayerproxymodel.cpp \
    qgsscalecombobox.cpp \
    qgsscalewidget.cpp \
#    qgscodeeditor.cpp \
#    qgscodeeditorpython.cpp \
#    qgscodeeditorsql.cpp \
    symbology-ng/qgsdatadefinedsymboldialog.cpp \
    symbology-ng/qgspenstylecombobox.cpp \
    symbology-ng/qgsbrushstylecombobox.cpp \
    symbology-ng/qgscolorrampcombobox.cpp \
    symbology-ng/qgsstylev2managerdialog.cpp \
    symbology-ng/qgsstylev2groupselectiondialog.cpp \
    symbology-ng/characterwidget.cpp \
    symbology-ng/qgsdashspacedialog.cpp \
    symbology-ng/qgsvectorgradientcolorrampv2dialog.cpp \
    symbology-ng/qgscptcitycolorrampv2dialog.cpp \
    symbology-ng/qgsstylev2exportimportdialog.cpp \
    symbology-ng/qgssmartgroupeditordialog.cpp \
    qgsdialog.cpp \
    symbology-ng/qgsvectorrandomcolorrampv2dialog.cpp \
    symbology-ng/qgsvectorcolorbrewercolorrampv2dialog.cpp \
    qgsoptionsdialogbase.cpp \
    qgsmaptoolemitpoint.cpp \
    raster/qgsmultibandcolorrendererwidget.cpp \
    raster/qgspalettedrendererwidget.cpp \
    raster/qgsrasterminmaxwidget.cpp \
    raster/qgsrasterrendererwidget.cpp \
    raster/qgsrasterhistogramwidget.cpp \
    qgisgui.cpp \
    qgsencodingfiledialog.cpp \
    raster/qgssinglebandgrayrendererwidget.cpp \
    raster/qgssinglebandpseudocolorrendererwidget.cpp \
    raster/qwt5_histogram_item.cpp \
    qgsscalerangewidget.cpp \
    qgscollapsiblegroupbox.cpp \
    editorwidgets/core/qgseditorconfigwidget.cpp \
    editorwidgets/core/qgseditorwidgetwrapper.cpp \
    editorwidgets/core/qgswidgetwrapper.cpp \
    qgsattributetypeloaddialog.cpp \
    editorwidgets/core/qgseditorwidgetfactory.cpp \
    editorwidgets/core/qgssearchwidgetwrapper.cpp \
    qgsfieldvalidator.cpp \
    editorwidgets/qgsdefaultsearchwidgetwrapper.cpp \
    editorwidgets/core/qgseditorwidgetregistry.cpp \
    editorwidgets/qgsclassificationwidgetwrapper.cpp \
    editorwidgets/qgsclassificationwidgetwrapperfactory.cpp \
    editorwidgets/qgsdummyconfigdlg.cpp \
    editorwidgets/qgscheckboxwidgetfactory.cpp \
    editorwidgets/qgscheckboxwidgetwrapper.cpp \
    editorwidgets/qgscheckboxconfigdlg.cpp \
    editorwidgets/qgscolorwidgetfactory.cpp \
    editorwidgets/qgscolorwidgetwrapper.cpp \
    editorwidgets/qgsdatetimeeditconfig.cpp \
    editorwidgets/qgsdatetimeeditfactory.cpp \
    editorwidgets/qgsdatetimeeditwrapper.cpp \
    editorwidgets/qgsdatetimeedit.cpp \
    editorwidgets/qgsenumerationwidgetfactory.cpp \
    editorwidgets/qgsexternalresourcewidgetfactory.cpp \
    editorwidgets/qgsfilenamewidgetfactory.cpp \
    editorwidgets/qgshiddenwidgetfactory.cpp \
    editorwidgets/qgsphotowidgetfactory.cpp \
    editorwidgets/qgsrangewidgetfactory.cpp \
    editorwidgets/qgsrelationreferencefactory.cpp \
    editorwidgets/qgstexteditwidgetfactory.cpp \
    editorwidgets/qgsuniquevaluewidgetfactory.cpp \
    editorwidgets/qgsuuidwidgetfactory.cpp \
    editorwidgets/qgsvaluemapwidgetfactory.cpp \
    editorwidgets/qgsvaluerelationwidgetfactory.cpp \
    editorwidgets/qgsenumerationwidgetwrapper.cpp \
    editorwidgets/qgsexternalresourceconfigdlg.cpp \
    editorwidgets/qgsexternalresourcewidgetwrapper.cpp \
    editorwidgets/qgsfilenamewidgetwrapper.cpp \
    editorwidgets/qgshiddenwidgetwrapper.cpp \
    editorwidgets/qgsphotoconfigdlg.cpp \
    editorwidgets/qgsphotowidgetwrapper.cpp \
    editorwidgets/qgsrangeconfigdlg.cpp \
    editorwidgets/qgsrangewidgetwrapper.cpp \
    editorwidgets/qgsrelationreferenceconfigdlg.cpp \
    editorwidgets/qgsrelationreferencewidget.cpp \
    editorwidgets/qgsrelationreferencewidgetwrapper.cpp \
    editorwidgets/qgstexteditconfigdlg.cpp \
    editorwidgets/qgstexteditwrapper.cpp \
    editorwidgets/qgsuniquevaluesconfigdlg.cpp \
    editorwidgets/qgsuniquevaluewidgetwrapper.cpp \
    editorwidgets/qgsuuidwidgetwrapper.cpp \
    editorwidgets/qgsvaluemapwidgetwrapper.cpp \
    editorwidgets/qgsvaluerelationwidgetwrapper.cpp \
    editorwidgets/qgswebviewwidgetwrapper.cpp \
    qgspixmaplabel.cpp \
    qgsdial.cpp \
    qgsslider.cpp \
    editorwidgets/qgsvaluemapsearchwidgetwrapper.cpp \
    editorwidgets/qgsvaluemapconfigdlg.cpp \
    qgsmaplayercombobox.cpp \
    qgsfieldcombobox.cpp \
    qgsquerybuilder.cpp \
    symbology-ng/qgsrendererv2propertiesdialog.cpp \
    symbology-ng/qgs25drendererwidget.cpp \
    symbology-ng/qgscategorizedsymbolrendererv2widget.cpp \
    symbology-ng/qgsgraduatedsymbolrendererv2widget.cpp \
    symbology-ng/qgsheatmaprendererwidget.cpp \
    symbology-ng/qgsinvertedpolygonrendererwidget.cpp \
    symbology-ng/qgspointdisplacementrendererwidget.cpp \
    symbology-ng/qgsrendererv2widget.cpp \
    symbology-ng/qgsrulebasedrendererv2widget.cpp \
    symbology-ng/qgssinglesymbolrendererv2widget.cpp \
    editorwidgets/qgsvaluerelationconfigdlg.cpp \
    editorwidgets/qgsvaluerelationsearchwidgetwrapper.cpp \
    editorwidgets/qgsspinbox.cpp \
    qgsmaptoolidentifyfeature.cpp \
    qgsmaptoolidentify.cpp \
    qgsidentifymenu.cpp \
    qgsactionmenu.cpp \
    qgsmaplayeractionregistry.cpp \
    qgsexternalresourcewidget.cpp \
    qgsfilewidget.cpp \
    qgsattributeform.cpp \
    qgsattributeeditor.cpp \
    qgsattributeforminterface.cpp \
    qgsattributeformlegacyinterface.cpp \
    editorwidgets/qgsrelationwidgetwrapper.cpp \
    qgsrelationeditorwidget.cpp \
    qgsfeatureselectiondlg.cpp \
    qgsattributedialog.cpp \
    effects/qgseffectstackpropertieswidget.cpp \
    effects/qgspainteffectpropertieswidget.cpp \
    effects/qgspainteffectwidget.cpp \
    qgsblendmodecombobox.cpp \
    symbology-ng/qgssymbollevelsv2dialog.cpp \
    effects/qgseffectdrawmodecombobox.cpp \
    symbology-ng/qgsgraduatedhistogramwidget.cpp \
    qgshistogramwidget.cpp \
    qgsorderbydialog.cpp \
    qgsludialog.cpp \
    attributetable/qgsattributetabledelegate.cpp \
    attributetable/qgsattributetablefiltermodel.cpp \
    attributetable/qgsattributetablemodel.cpp \
    attributetable/qgsattributetableview.cpp \
    attributetable/qgsdualview.cpp \
    attributetable/qgsfeaturelistmodel.cpp \
    attributetable/qgsfeaturelistview.cpp \
    attributetable/qgsfeaturelistviewdelegate.cpp \
    attributetable/qgsfeatureselectionmodel.cpp \
    attributetable/qgsfieldconditionalformatwidget.cpp \
    attributetable/qgsgenericfeatureselectionmanager.cpp \
    attributetable/qgsvectorlayerselectionmanager.cpp \
    qgslegendfilterbutton.cpp \
    qgsbrowsertreeview.cpp \
    qgsmaptip.cpp \
    qgssublayersdialog.cpp \
    qgsprojectionselectionwidget.cpp \
    qgsvariableeditorwidget.cpp \
    qgscharacterselectdialog.cpp \
    symbology-ng/qgssvgselectorwidget.cpp \
    qgsmessagelogviewer.cpp \
    qgsnewvectorlayerdialog.cpp \
    qgsannotationitem.cpp \
    layertree/qgslayertreemapcanvasbridge.cpp \
    layertree/qgscustomlayerorderwidget.cpp \
    qgsscalevisibilitydialog.cpp \
    qgsrasterformatsaveoptionswidget.cpp \
    qgsrasterpyramidsoptionswidget.cpp \
    qgscomposerruler.cpp \
    qgscomposerview.cpp \
    qgsbusyindicatordialog.cpp \
    qgsnewnamedialog.cpp \
    swgisnewhttpconnection.cpp \
    qgspanelwidget.cpp \
    qgstrackedvectorlayertools.cpp \
    qgsattributeformeditorwidget.cpp \
    editorwidgets/qgsmultiedittoolbutton.cpp \
    editorwidgets/qgssearchwidgettoolbutton.cpp \
    qgsgradientstopeditor.cpp \
    qgsmaplayerconfigwidget.cpp \
    editorwidgets/qgscheckboxsearchwidgetwrapper.cpp \
    editorwidgets/qgsdatetimesearchwidgetwrapper.cpp \
    editorwidgets/qgstexteditsearchwidgetwrapper.cpp \
    editorwidgets/qgsrelationreferencesearchwidgetwrapper.cpp \
    qgsdockwidget.cpp \
    qgscompoundcolorwidget.cpp \
    symbology-ng/qgsarrowsymbollayerwidget.cpp \
    attributetable/qgsorganizetablecolumnsdialog.cpp \
    qgssearchquerybuilder.cpp \
    qgsexpressionselectiondialog.cpp \
    symbology-ng/qgsnullsymbolrendererwidget.cpp \
    layertree/qgslayertreeembeddedwidgetregistry.cpp \
    layertree/qgslayertreeembeddedwidgetsimpl.cpp \
    editorwidgets/qgsdoublespinbox.cpp \
    qgssqlcomposerdialog.cpp \
    raster/qgshillshaderendererwidget.cpp \
    qgsmaplayerconfigwidgetfactory.cpp \
    layertree/qgslayertreeembeddedconfigwidget.cpp \
    qgscomposeritemcombobox.cpp \
    qgstablewidgetitem.cpp

HEADERS += \
    $$SWGISINC_PATH/SWGIS-Gui/stgisguiconfig.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsnumericsortlistviewitem.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmessageviewer.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmanageconnectionsdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsgenericprojectionselector.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsprojectionselector.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfilterlineedit.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapcanvas.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmessagebar.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmessagebaritem.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgshighlight.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapcanvasmap.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapoverviewcanvas.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptool.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsprevieweffect.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapmouseevent.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapcanvasitem.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsdatumtransformdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmapcanvassnappingutils.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscursors.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptoolpan.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptoolzoom.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsrubberband.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscredentialdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/layertree/qgslayertreeview.h \
    $$SWGISINC_PATH/SWGIS-Gui/layertree/qgslayertreeviewdefaultactions.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscolorwidgets.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscolordialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscolorschemelist.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscolorswatchgrid.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssymbolv2selectordialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssymbolslistwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgslayerpropertieswidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsellipsesymbollayerv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssymbollayerv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsvectorfieldsymbollayerwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssizescalewidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsdatadefinedbutton.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsexpressionbuilderdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscolorbuttonv2.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsdoublespinbox.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsunitselectionwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsexpressionbuilderwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsexpressionhighlighter.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsvectorlayertools.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributeeditorcontext.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfieldexpressionwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfieldmodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfieldproxymodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaplayermodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaplayerproxymodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsscalecombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsscalewidget.h \
#    $$SWGISINC_PATH/SWGIS-Gui/qgscodeeditor.h \
#    $$SWGISINC_PATH/SWGIS-Gui/qgscodeeditorpython.h \
#    $$SWGISINC_PATH/SWGIS-Gui/qgscodeeditorsql.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsdatadefinedsymboldialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgspenstylecombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsbrushstylecombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgscolorrampcombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsstylev2managerdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgscptcitycolorrampv2dialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssmartgroupeditordialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsstylev2exportimportdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsvectorcolorbrewercolorrampv2dialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsvectorgradientcolorrampv2dialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsvectorrandomcolorrampv2dialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsstylev2groupselectiondialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/characterwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsdashspacedialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsoptionsdialogbase.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptoolemitpoint.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgsmultibandcolorrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgspalettedrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgsrasterminmaxwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgsrasterrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgsrasterhistogramwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgisgui.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsencodingfiledialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgssinglebandgrayrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qgssinglebandpseudocolorrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/raster/qwt5_histogram_item.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsscalerangewidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscollapsiblegroupbox.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgseditorconfigwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgseditorwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgswidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributetypeloaddialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgseditorwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgssearchwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfieldvalidator.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdefaultsearchwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/core/qgseditorwidgetregistry.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsclassificationwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsclassificationwidgetwrapperfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdummyconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgscheckboxwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgscheckboxwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgscheckboxconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgscolorwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgscolorwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdatetimeeditconfig.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdatetimeeditfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdatetimeeditwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsdatetimeedit.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsenumerationwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsexternalresourcewidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsfilenamewidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgshiddenwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsphotowidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrangewidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrelationreferencefactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgstexteditwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsuniquevaluewidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsuuidwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluemapwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluerelationwidgetfactory.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsenumerationwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsexternalresourceconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsexternalresourcewidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsfilenamewidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgshiddenwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsphotoconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsphotowidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrangeconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrangewidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrelationreferenceconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrelationreferencewidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrelationreferencewidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgstexteditconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgstexteditwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsuniquevaluesconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsuniquevaluewidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsuuidwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluemapwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluerelationwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgswebviewwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgspixmaplabel.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsdial.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsslider.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluemapsearchwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluemapconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaplayercombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfieldcombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsquerybuilder.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsrendererv2propertiesdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgs25drendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgscategorizedsymbolrendererv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsgraduatedsymbolrendererv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsheatmaprendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsinvertedpolygonrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgspointdisplacementrendererwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsrendererv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsrulebasedrendererv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssinglesymbolrendererv2widget.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluerelationconfigdlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsvaluerelationsearchwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsspinbox.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptoolidentifyfeature.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptoolidentify.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsidentifymenu.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsactionmenu.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaplayeractionregistry.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsexternalresourcewidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfilewidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributeform.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributeeditor.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributeforminterface.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributeformlegacyinterface.h \
    $$SWGISINC_PATH/SWGIS-Gui/editorwidgets/qgsrelationwidgetwrapper.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsrelationeditorwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsfeatureselectiondlg.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsattributedialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/effects/qgseffectstackpropertieswidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/effects/qgspainteffectpropertieswidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/effects/qgspainteffectwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsblendmodecombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssymbollevelsv2dialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/effects/qgseffectdrawmodecombobox.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgsgraduatedhistogramwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgshistogramwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsorderbydialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsludialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsattributetabledelegate.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsattributetablefiltermodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsattributetablemodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsattributetableview.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsdualview.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfeaturelistmodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfeaturelistview.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfeaturelistviewdelegate.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfeaturemodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfeatureselectionmodel.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsfieldconditionalformatwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsgenericfeatureselectionmanager.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsifeatureselectionmanager.h \
    $$SWGISINC_PATH/SWGIS-Gui/attributetable/qgsvectorlayerselectionmanager.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgslegendfilterbutton.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsbrowsertreeview.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmaptip.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgssublayersdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsprojectionselectionwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsvariableeditorwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscharacterselectdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/symbology-ng/qgssvgselectorwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsmessagelogviewer.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsnewvectorlayerdialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsannotationitem.h \
    $$SWGISINC_PATH/SWGIS-Gui/layertree/qgslayertreemapcanvasbridge.h \
    $$SWGISINC_PATH/SWGIS-Gui/layertree/qgscustomlayerorderwidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsscalevisibilitydialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsrasterformatsaveoptionswidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsrasterpyramidsoptionswidget.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscomposerruler.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgscomposerview.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsbusyindicatordialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/qgsnewnamedialog.h \
    $$SWGISINC_PATH/SWGIS-Gui/swgisnewhttpconnection.h \
    ../../SWGIS-Inc/SWGIS-Gui/layertree/qgslayertreeembeddedwidgetregistry.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgspanelwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgstrackedvectorlayertools.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsattributeformeditorwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgsmultiedittoolbutton.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgssearchwidgettoolbutton.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsgradientstopeditor.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsmaplayerconfigwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgscheckboxsearchwidgetwrapper.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgsdatetimesearchwidgetwrapper.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgstexteditsearchwidgetwrapper.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgsrelationreferencesearchwidgetwrapper.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsdockwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgscompoundcolorwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/symbology-ng/qgsarrowsymbollayerwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/attributetable/qgsorganizetablecolumnsdialog.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgssearchquerybuilder.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsexpressionselectiondialog.h \
    ../../SWGIS-Inc/SWGIS-Gui/symbology-ng/qgsnullsymbolrendererwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/layertree/qgslayertreeembeddedwidgetsimpl.h \
    ../../SWGIS-Inc/SWGIS-Gui/editorwidgets/qgsdoublespinbox.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgssqlcomposerdialog.h \
    ../../SWGIS-Inc/SWGIS-Gui/raster/qgshillshaderendererwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgsmaplayerconfigwidgetfactory.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgstablewidgetitem.h \
    ../../SWGIS-Inc/SWGIS-Gui/layertree/qgslayertreeembeddedconfigwidget.h \
    ../../SWGIS-Inc/SWGIS-Gui/qgscomposeritemcombobox.h

FORMS += \
    stgismessageviewer.ui \
    stgismanageconnectionsdialogbase.ui \
    stgisgenericprojectionselectorbase.ui \
    stgisdatumtransformdialogbase.ui \
    stgisprojectionselectorbase.ui \
    swgiscredentialdialog.ui \
    swgissymbolv2selectordialogbase.ui \
    widget_layerproperties.ui \
    widget_symbolslist.ui \
    widget_ellipse.ui \
    widget_simpleline.ui \
    widget_size_scale.ui \
    swgisexpressionbuilderdialogbase.ui \
    swgisunitselectionwidget.ui \
    swgismapunitscaledialog.ui \
    swgisexpressionbuilder.ui \
    swgisstylev2managerdialogbase.ui \
    widget_simplemarker.ui \
    widget_simplefill.ui \
    swgisgeometrygeneratorwidgetbase.ui \
    widget_centroidfill.ui \
    widget_fontmarker.ui \
    widget_gradientfill.ui \
    widget_linepatternfill.ui \
    widget_markerline.ui \
    widget_pointpatternfill.ui \
    widget_rasterfill.ui \
    widget_shapeburstfill.ui \
    widget_svgfill.ui \
    widget_svgmarker.ui \
    swgisdatadefinedsymboldialogbase.ui \
    widget_vectorfield.ui \
    swgisdashspacedialogbase.ui \
    swgisvectorgradientcolorrampv2dialogbase.ui \
    swgisvectorrandomcolorrampv2dialogbase.ui \
    swgisvectorcolorbrewercolorrampv2dialogbase.ui \
    swgiscptcitycolorrampv2dialogbase.ui \
    swgissmartgroupconditionwidget.ui \
    swgisstylev2exportimportdialogbase.ui \
    swgisstylev2groupselectiondialogbase.ui \
    swgissmartgroupeditordialogbase.ui \
    swgispalettedrendererwidgetbase.ui \
    swgisrasterminmaxwidgetbase.ui \
    swgisrasterhistogramwidgetbase.ui \
    swgissinglebandgrayrendererwidgetbase.ui \
    swgissinglebandpseudocolorrendererwidgetbase.ui \
    swgisattributeloadfrommap.ui \
    swgisdummyconfigdlgbase.ui \
    swgischeckboxconfigdlgbase.ui \
    swgisdatetimeeditconfig.ui \
    swgisexternalresourceconfigdlg.ui \
    swgisrelationreferenceconfigdlgbase.ui \
    swgistexteditconfigdlg.ui \
    swgisuniquevaluesconfigdlgbase.ui \
    swgisvaluemapconfigdlgbase.ui \
    swgisquerybuilderbase.ui \
    swgisrendererv2propsdialogbase.ui \
    swgiscategorizedsymbolrendererv2widget.ui \
    swgisphotoconfigdlgbase.ui \
    swgisrangeconfigdlgbase.ui \
    swgisvaluerelationconfigdlgbase.ui \
    swgisheatmaprendererwidgetbase.ui \
    swgisinvertedpolygonrendererwidgetbase.ui \
    swgispointdisplacementrendererwidgetbase.ui \
    widget_set_dd_value.ui \
    swgisfeatureselectiondlg.ui \
    swgisdualviewbase.ui \
    swgis25drendererwidgetbase.ui \
    swgisfieldconditionalformatwidget.ui \
    swgiseffectstackpropertieswidgetbase.ui \
    swgiseffectpropertieswidget.ui \
    widget_drawsource.ui \
    swgisgraduatedsymbolrendererv2widget.ui \
    swgisrulebasedrendererv2widget.ui \
    swgissymbollevelsv2dialogbase.ui \
    widget_blur.ui \
    widget_coloreffects.ui \
    widget_glow.ui \
    widget_shadoweffect.ui \
    widget_transform.ui \
    swgisrendererrulepropsdialogbase.ui \
    swgishistogramwidgetbase.ui \
    swgisorderbydialogbase.ui \
    swgisludialogbase.ui \
    swgissublayersdialogbase.ui \
    swgischaracterselectdialogbase.ui \
    widget_svgselector.ui \
    swgismessagelogviewer.ui \
    swgisnewvectorlayerdialogbase.ui \
    swgisrasterformatsaveoptionswidgetbase.ui \
    swgisrasterpyramidsoptionswidgetbase.ui \
    swgisnewhttpconnection.ui \
    swgiscolordialog.ui \
    swgismultibandcolorrendererwidgetbase.ui \
    swgiscompoundcolorwidget.ui \
    widget_filledmarker.ui \
    swgisarrowsymbollayerwidgetbase.ui \
    swgisorganizetablecolumnsdialog.ui \
    swgisexpressionselectiondialogbase.ui \
    swgissqlcomposerdialogbase.ui \
    swgishillshaderendererwidget.ui \
    swgislabelingrulepropswidget.ui \
    swgislayertreeembeddedconfigwidget.ui

