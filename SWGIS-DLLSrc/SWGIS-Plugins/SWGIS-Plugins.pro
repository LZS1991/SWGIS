#-------------------------------------------------
#
# Project created by QtCreator 2016-08-01T20:59:59
#
#-------------------------------------------------
TARGET = SWGIS-Plugins
CONFIG += console
CONFIG -= app_bundle
DEFINES      += SWGISPLUGINS_LIB
TEMPLATE = lib

#加入代码输出路径配置
include(../SWGISSrcSetting.pri)

#INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
#               $$SWGISINC_PATH/SWGIS-Gui \
#               $$SWGISINC_PATH/SWGIS-WMSProvider \
#INCLUDEPATH += $$THIRDPARTY_PATH \
#               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include \
#               $$THIRDPARTY_PATH/libspatialindex/win_msvc_x64/include
#LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/sqlite3_i.lib
#LIBS += $$THIRDPARTY_PATH/GDAL/win_msvc_x64/lib/gdal_i.lib

#DESTDIR    = $$SWGIS_LIB_PATH/plugins
#DLLDESTDIR = $$SWGIS_BIN_PATH/plugins

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
#            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Cored.lib
#            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Guid.lib
        }else {
#            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Core.lib
#            LIBS +=  $$SWGIS_LIB_PATH/SWGIS-Gui.lib
        }
    }
}

HEADERS += \
    ../../SWGIS-Inc/SWGIS-Plugins/swgispluginsconfig.h

