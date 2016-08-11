#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T23:09:40
#
#-------------------------------------------------

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SWGIS-Browser
TEMPLATE = app

#加入代码输出路径配置
include(../../SWGIS-Inc/SWGISIncSetting.pri)

INCLUDEPATH += $$STGISLIBINC_PATH \
               $$STGISLIBINC_PATH/SWGIS-Core \
               $$STGISLIBINC_PATH/SWGIS-Core/composer \
               $$STGISLIBINC_PATH/SWGIS-Core/diagram \
               $$STGISLIBINC_PATH/SWGIS-Core/dxf \
               $$STGISLIBINC_PATH/SWGIS-Core/effects \
               $$STGISLIBINC_PATH/SWGIS-Core/geometry \
               $$STGISLIBINC_PATH/SWGIS-Core/gps \
               $$STGISLIBINC_PATH/SWGIS-Core/layertree \
               $$STGISLIBINC_PATH/SWGIS-Core/pal \
               $$STGISLIBINC_PATH/SWGIS-Core/raster \
               $$STGISLIBINC_PATH/SWGIS-Core/symbology-ng \
               $$STGISLIBINC_PATH/SWGIS-Gui \
               $$STGISLIBINC_PATH/SWGIS-Gui/attributetable \
               $$STGISLIBINC_PATH/SWGIS-Gui/editorwidgets \
               $$STGISLIBINC_PATH/SWGIS-Gui/effects \
               $$STGISLIBINC_PATH/SWGIS-Gui/layertree \
               $$STGISLIBINC_PATH/SWGIS-Gui/raster \
               $$STGISLIBINC_PATH/SWGIS-Gui/symbology-ng \
               $$STGISLIBINC_PATH/SWGIS-App \
               $$STGISLIBINC_PATH/SWGIS-App/ogr \
               $$STGISLIBINC_PATH/SWGIS-WMSProvider \
               $$SWGIS_BUILD_PATH/SWGIS-Gui \
               $$SWGIS_BUILD_PATH/SWGIS-App

INCLUDEPATH += $$THIRDPARTY_PATH \
               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include \
               $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/include \
               $$THIRDPARTY_PATH/QWT/win_msvc_x64/include


SOURCES += main.cpp\
        swgisbrowser.cpp

HEADERS  += swgisbrowser.h

FORMS    += swgisbrowser.ui

RESOURCES += \
    resources.qrc
