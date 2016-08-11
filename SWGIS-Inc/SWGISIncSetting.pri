#-------------------------------------------------
#
# INSPACE v1.5 工程文件配置
#
#-------------------------------------------------
QT                              += core gui xml  sql network widgets qml
CONFIG                    += warn_off thread
DEFINES                   += EIGEN_USE_NEW_STDVECTOR
######################################################################################################
#定义文件输出目录
STGIS_LIB_PATH = $$PWD/../SWGIS-Lib
STGIS_BIN_PATH = $$PWD/../SWGIS-Bin
#定义文件编译输出目录
SWGIS_BUILD_PATH = ../../SWGIS-Build
##linux编译环境
#linux-g++{
#       #查看Qt/mkspecs/qconfig.pri 确定QT_ARCH
#        contains(QT_ARCH,arm64){
#            message("linux-arm64 build")
#                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/linux_arm64
#                STGIS_BIN_PATH           =    $$STGIS_BIN_PATH/bin_linux_arm64
#       }
#        contains(QT_ARCH,i386){
#            message("linux-x86 build")
#                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/linux_x86
#                STGIS_BIN_PATH           =    $$STGIS_BIN_PATH/bin_linux_x86
#       }
#}
#windows编译环境
win32{
        contains(QT_ARCH,i386){
            message("win32-x86 build")

            win32-g++{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_gcc_x86
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_gcc_x86
            }

            win32-msvc2010{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_msvc2010_x86
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_msvc2010_x86
            }
            win32-msvc2013{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_msvc2013_x86
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_msvc2013_x86
            }
        }
        contains(QT_ARCH, x86_64){
            message("X86 64bit build")
            win32-g++{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_gcc_x64
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_gcc_x64
            }
            win32-msvc2015{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_msvc2015_x64
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_msvc2015_x64
            }
            win32-msvc2013{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_msvc2013_x64
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_msvc2013_x64
            }
            win32-msvc2010{
                STGIS_LIB_PATH            =    $$STGIS_LIB_PATH/win_msvc2010_x64
                STGIS_BIN_PATH            =    $$STGIS_BIN_PATH/bin_win_msvc2010_x64
            }
        }
}
DESTDIR = $$STGIS_BIN_PATH
#定义BIN路径，程序中用于设置搜索DLL搜索路径
#DEFINES += THIRDPARTY_DLL_PATH

#设置Obj输出目录与Target
SUFFIX_STR =
 CONFIG(debug, debug|release) {
     message(Building $$TARGET with debug mode.)
     SUFFIX_STR =d
     OBJECTS_DIR       = $$PWD/../SWGIS-Build/$$TARGET/debug
 }else {
     message(Building $$TARGET with release mode.)
     OBJECTS_DIR       = $$PWD/../SWGIS-Build/$$TARGET/release
}
TARGET              = $$TARGET$$SUFFIX_STR

######################################################################################################

STGISLIBINC_PATH              =    $$PWD/../SWGIS-Inc
THIRDPARTY_PATH            =    $$PWD/../ThirdParty

message($$STGISLIBINC_PATH)


win32{
    win32-g++{
         CONFIG(debug, debug|release) {
            message(Building $$TARGET with G++ WIN32 DEBUG mode.)
        }else{
            message(Building $$TARGET with  G++ WIN32 RELEASE mode.)
        }
     }else{#MSVC
         CONFIG(debug, debug|release) {
            message(Building $$TARGET with MSVS WIN32 DEBUG mode.)
            LIBS += $$STGIS_LIB_PATH/SWGIS-Cored.lib
            LIBS += $$STGIS_LIB_PATH/SWGIS-Guid.lib
            LIBS += $$STGIS_LIB_PATH/SWGIS-Appd.lib
        }else{
            message(Building $$TARGET with MSVS WIN32 RELEASE mode.)
            LIBS += $$STGIS_LIB_PATH/SWGIS-Core.lib
            LIBS += $$STGIS_LIB_PATH/SWGIS-Gui.lib
            LIBS += $$STGIS_LIB_PATH/SWGIS-App.lib
        }
    }
}

############################################# Linux #######################################################
#linux-g++{
#        # 32-bit Linux
#    message("Warning: compiling linux version" + $$PWD)
#    QMAKE_LIBDIR = $$STGIS_LIB_PATH
#     LIBS += -L QMAKE_LIBDIR
#    CONFIG(debug, debug|release) {
#    message("Warning: compiling a  linux debug version" + $$PWD)
#     LIBS += $$QMAKE_LIBDIR/libSTGISmodeld.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISgeospatiald.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISterraind.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS3dd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS3dprod.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS2dd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISastrocored.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISanalysisd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISdlgservicesd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISscenariod.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISsymbolsd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISmainappd.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISviewd.so
#}else{
#    message("Warning: compiling a linux release version " + $$PWD)
#     LIBS += $$QMAKE_LIBDIR/libSTGISmodel.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISterrain.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISgeospatial.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS3d.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS3dpro.so
#     LIBS += $$QMAKE_LIBDIR/libSTGIS2d.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISastrocore.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISanalysis.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISdlgservices.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISscenario.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISsymbols.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISmainapp.so
#     LIBS += $$QMAKE_LIBDIR/libSTGISview.so
#}
#    contains(QT_ARCH,arm64){
#        LIBS += $$PWD/../ThirdParty/FreeImage/aarch64/libfreeimage.a
#        INCLUDEPATH +=  $$PWD/../ThirdParty/gdal/aarch64/include
#        LIBS +=$$PWD/../ThirdParty/gdal/aarch64/lib/libgeos.so
#        LIBS += $$PWD/../ThirdParty/gdal/aarch64/lib/libgdal.so
#  }
#}
