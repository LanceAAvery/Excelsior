#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBACTOR_LIBRARY)
#  define XRBACTOR_EXPORT Q_DECL_EXPORT
#else
#  define XRBACTOR_EXPORT Q_DECL_IMPORT
#endif
