#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T13:26:27
#
#-------------------------------------------------
TARGET = SWGIS-WMSProvider
CONFIG += console
CONFIG -= app_bundle
DEFINES      += SWGISWMSPROVIDER_LIB
TEMPLATE = lib

#加入代码输出路径配置
include(../SWGISSrcSetting.pri)

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
               $$SWGISINC_PATH/SWGIS-Core/raster \
               $$SWGISINC_PATH/SWGIS-Core/geometry \
               $$SWGISINC_PATH/SWGIS-Gui \
               $$SWGISINC_PATH/SWGIS-WMSProvider \
               $$SWGIS_BUILD_PATH/SWGIS-Gui

INCLUDEPATH += $$THIRDPARTY_PATH \
               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include \
               $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/include
LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/sqlite3_i.lib
LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/gdal_i.lib

DESTDIR    = $$SWGIS_LIB_PATH/plugins
DLLDESTDIR = $$SWGIS_BIN_PATH/plugins

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
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Guid.lib
        }else {
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Core.lib
            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Gui.lib
        }
    }
}


FORMS += \
    stgistilescalewidget.ui \
    stgiswmssourceselectbase.ui \
    stgiswmtsdimensionsbase.ui

SOURCES += \
    qgstilescalewidget.cpp \
    qgswmscapabilities.cpp \
    qgswmsconnection.cpp \
    qgswmsdataitems.cpp \
    qgswmsprovider.cpp \
    qgswmssourceselect.cpp \
    qgswmtsdimensions.cpp

HEADERS += \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgstilescalewidget.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmscapabilities.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmsconnection.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmsdataitems.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmsprovider.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmssourceselect.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/qgswmtsdimensions.h \
    $$SWGISINC_PATH/SWGIS-WMSProvider/wmsproviderconfig.h

