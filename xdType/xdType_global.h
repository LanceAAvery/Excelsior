#pragma once

#include <QtCore/qglobal.h>

#if defined(XDTYPE_LIBRARY)
#  define XDTYPE_EXPORT Q_DECL_EXPORT
#else
#  define XDTYPE_EXPORT Q_DECL_IMPORT
#endif
