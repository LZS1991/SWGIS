
// QGSCONFIG.H

#ifndef QGSCONFIG_H
#define QGSCONFIG_H

#include <QtCore/qglobal.h>

// Version must be specified according to
// <int>.<int>.<int>-<any text>.
// or else upgrading old project file will not work
// reliably.
// that is the name of the song i heared then!
#define VERSION "0.1 - NewYork"

//used in vim src/core/qgis.cpp
//The way below should work but it resolves to a number like 0110 which the compiler treats as octal I think
//because debuggin it out shows the decimal number 72 which results in incorrect version status.
//As a short term fix I (Tim) am defining the version in top level cmake. It would be good to 
//reinstate this more generic approach below at some point though
//#define VERSION_INT 2142
#define VERSION_INT 21402
#define ABISYM(x) x ## 21402
//used in main.cpp and anywhere else where the release name is needed
#define RELEASE_NAME "Essen"

#define QGIS_PLUGIN_SUBDIR "plugins"
#define QGIS_DATA_SUBDIR "."
#define QGIS_LIBEXEC_SUBDIR "."
#define QGIS_LIB_SUBDIR "lib"
#define CMAKE_SOURCE_DIR "C:/QGIS/QGIS_2_14_2"
#if defined( __APPLE__ )
//used by Mac to find system or bundle resources relative to amount of bundling
#define QGIS_MACAPP_BUNDLE 
#endif

#define QT_PLUGINS_DIR "C:/Qt/Qt5.4.2/5.4/msvc2013_64_opengl/plugins"
#define OSG_PLUGINS_PATH ""

/* #undef USING_NMAKE */

/* #undef HAVE_POSTGRESQL */

#define HAVE_SPATIALITE

#define HAVE_MSSQL

/* #undef HAVE_ORACLE */

/* #undef HAVE_PYTHON */

/* #undef HAVE_TOUCH */

/* #undef HAVE_OSGEARTHQT */

/* #undef SERVER_SKIP_ECW */

/* #undef HAVE_SERVER_PYTHON_PLUGINS */

/* #undef ENABLE_MODELTEST */

#ifdef SWGISCORE_LIB
# define SWGISCORE_EXPORT Q_DECL_EXPORT
#else
# define SWGISCORE_EXPORT Q_DECL_IMPORT
#endif

#define TEST_DATA_DIR "../../SWGIS-TestData"

//#define M_E        2.71828182845904523536
//#define M_LOG2E    1.44269504088896340736
//#define M_LOG10E   0.434294481903251827651
//#define M_LN2      0.693147180559945309417
//#define M_LN10     2.30258509299404568402
//#define M_PI       3.14159265358979323846
//#define M_PI_2     1.57079632679489661923
//#define M_PI_4     0.785398163397448309616
//#define M_1_PI     0.318309886183790671538
//#define M_2_PI     0.636619772367581343076
//#define M_2_SQRTPI 1.12837916709551257390
//#define M_SQRT2    1.41421356237309504880
//#define M_SQRT1_2  0.707106781186547524401

#endif

