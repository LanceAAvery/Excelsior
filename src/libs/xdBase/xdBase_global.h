#pragma once

#include <QtCore/qglobal.h>

#if defined(XDBASE_LIBRARY)
#  define XDBASE_EXPORT Q_DECL_EXPORT
#else
#  define XDBASE_EXPORT Q_DECL_IMPORT
#endif
