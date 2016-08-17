QT += core widgets gui network sql xml svg printsupport concurrent positioning script webkitwidgets uitools quick

#定义文件输出目录
SWGIS_LIB_PATH = ../../SWGIS-Lib
SWGIS_BIN_PATH = ../../SWGIS-Bin
#定义文件编译输出目录
SWGIS_BUILD_PATH = ../../SWGIS-Build
#定义文件第三方库目录
THIRDPARTY_PATH = ../../ThirdParty
#定义部分系统库Path;因为有空格，所使用$$quote
SYSTEM_LIB_PATH   =  $$quote(C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um)
MSVCRTD_LIB_PATH  =  $$quote(C:/Program Files (x86)/Microsoft Visual Studio 12.0/VC/lib)
#定义SWGIS头文件路径
SWGISINC_PATH  = ../../SWGIS-Inc

INCLUDEPATH += $$SWGISINC_PATH/SWGIS-Core \
               $$SWGISINC_PATH/SWGIS-Gui \
               $$THIRDPARTY_PATH/GDAL/win_msvc_x64/include

############################################################
#linux编译环境
linux-g++{
       #查看Qt/mkspecs/qconfig.pri 确定QT_ARCH
        contains(QT_ARCH,arm64){
            message("linux-arm64 build")
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/linux_arm64
                SWGIS_BIN_PATH           =    $$SWGIS_BIN_PATH/bin_linux_arm64
       }
        contains(QT_ARCH,i386){
            message("linux-x86 build")
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/linux_x86
                SWGIS_BIN_PATH           =    $$SWGIS_BIN_PATH/bin_linux_x86
       }
}
#windows编译环境
win32{
        contains(QT_ARCH,i386){
            message("win32-x86 build")
            win32-g++{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_gcc_x86
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_gcc_x86
            }

            win32-msvc2010{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2010_x86
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2010_x86
            }
            win32-msvc2013{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2013_x86
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2013_x86
            }
            win32-msvc2015{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2015_x86
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2015_x86
            }
        }
        contains(QT_ARCH , x86_64){
            message("X86 64bit build")
            win32-g++{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_gcc_x64
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_gcc_x64
            }
            win32-msvc2015{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2015_x64
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2015_x64
            }
            win32-msvc2013{
                message("vs2013 build")
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2013_x64
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2013_x64
            }
            win32-msvc2010{
                SWGIS_LIB_PATH            =    $$SWGIS_LIB_PATH/win_msvc2010_x64
                SWGIS_BIN_PATH            =    $$SWGIS_BIN_PATH/bin_win_msvc2010_x64
            }
        }
}
############################################################

DESTDIR    = $$SWGIS_LIB_PATH
DLLDESTDIR = $$SWGIS_BIN_PATH

#设置Obj输出目录与Target
SUFFIX_STR =
 CONFIG(debug, debug|release) {
     message(Building $$TARGET with debug mode.)
     SUFFIX_STR = d
     OBJECTS_DIR       = ../../SWGIS-Build/$$TARGET/debug
 }else {
     message(Building $$TARGET with release mode.)
     OBJECTS_DIR       = ../../SWGIS-Build/$$TARGET/release
}
TARGET              = $$TARGET$$SUFFIX_STR
