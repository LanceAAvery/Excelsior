#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBTERRAIN_LIBRARY)
#  define XRBTERRAIN_EXPORT Q_DECL_EXPORT
#else
#  define XRBTERRAIN_EXPORT Q_DECL_IMPORT
#endif
