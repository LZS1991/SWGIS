#ifndef STGISCONFIG_H
#define STGISCONFIG_H

#ifdef SWGISWFSPROVIDER_LIB
# define SWGISWFSPROVIDER_EXPORT Q_DECL_EXPORT
#else
# define SWGISWFSPROVIDER_EXPORT Q_DECL_IMPORT
#endif

#endif // STGISCONFIG_H
