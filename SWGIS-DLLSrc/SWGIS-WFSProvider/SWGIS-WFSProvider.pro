#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T13:26:27
#
#-------------------------------------------------
TARGET = SWGIS-WFSProvider
CONFIG += console
CONFIG -= app_bundle
DEFINES      += SWGISWFSPROVIDER_LIB
TEMPLATE = lib

#加入代码输出路径配置
include(../SWGISSrcSetting.pri)

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
               $$SWGISINC_PATH/SWGIS-Core/geometry \
               $$SWGISINC_PATH/SWGIS-Core/symbology-ng \
               $$SWGISINC_PATH/SWGIS-Gui \
               $$SWGISINC_PATH/SWGIS-Gui/symbology-ng \
               $$SWGISINC_PATH/SWGIS-WFSProvider \
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

SOURCES += \
    qgswfscapabilities.cpp \
    qgswfsdataitems.cpp \
    qgswfsfeatureiterator.cpp \
    qgswfsprovider.cpp \
    qgswfssourceselect.cpp \
    qgswfsconnection.cpp \
    qgswfsconstants.cpp \
    qgswfsdatasourceuri.cpp \
    qgswfsdescribefeaturetype.cpp \
    qgswfsrequest.cpp \
    qgswfsshareddata.cpp \
    qgswfstransactionrequest.cpp \
    qgswfsutils.cpp

HEADERS += \
    $$SWGISINC_PATH/SWGIS-WFSProvider/qgswfscapabilities.h \
    $$SWGISINC_PATH/SWGIS-WFSProvider/qgswfsdataitems.h \
    $$SWGISINC_PATH/SWGIS-WFSProvider/qgswfsfeatureiterator.h \
    $$SWGISINC_PATH/SWGIS-WFSProvider/qgswfsprovider.h \
    $$SWGISINC_PATH/SWGIS-WFSProvider/qgswfssourceselect.h \
    $$SWGISINC_PATH/SWGIS-WFSProvider/wfsproviderconfig.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsconnection.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsconstants.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsdatasourceuri.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsdescribefeaturetype.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsrequest.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsshareddata.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfstransactionrequest.h \
    ../../SWGIS-Inc/SWGIS-WFSProvider/qgswfsutils.h

FORMS += \
    swgiswfssourceselectbase.ui

