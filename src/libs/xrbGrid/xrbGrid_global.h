#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBGRID_LIBRARY)
#  define XRBGRID_EXPORT Q_DECL_EXPORT
#else
#  define XRBGRID_EXPORT Q_DECL_IMPORT
#endif
