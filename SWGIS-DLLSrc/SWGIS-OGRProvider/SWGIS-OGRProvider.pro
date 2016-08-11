#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T13:26:27
#
#-------------------------------------------------
TARGET = SWGIS-OGRProvider
CONFIG += console
CONFIG -= app_bundle
DEFINES      += SWGISOGRPROVIDER_LIB
TEMPLATE = lib

#加入代码输出路径配置
include(../SWGISSrcSetting.pri)

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
               $$SWGISINC_PATH/SWGIS-Gui \
               $$SWGISINC_PATH/SWGIS-OGRProvider \
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
    qgsogrconnpool.cpp \
    qgsogrdataitems.cpp \
    qgsogrexpressioncompiler.cpp \
    qgsogrfeatureiterator.cpp \
    qgsogrgeometrysimplifier.cpp \
    qgsogrprovider.cpp

HEADERS += \
    $$SWGISINC_PATH/SWGIS-OGRProvider/ogrproviderconfig.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrconnpool.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrdataitems.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrexpressioncompiler.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrfeatureiterator.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrgeometrysimplifier.h \
    $$SWGISINC_PATH/SWGIS-OGRProvider/qgsogrprovider.h

