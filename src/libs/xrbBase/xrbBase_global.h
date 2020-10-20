#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBBASE_LIBRARY)
#  define XRBBASE_EXPORT Q_DECL_EXPORT
#else
#  define XRBBASE_EXPORT Q_DECL_IMPORT
#endif
