#pragma once

#include <QtCore/qglobal.h>

#if defined(XIBASE_LIBRARY)
#  define XIBASE_EXPORT Q_DECL_EXPORT
#else
#  define XIBASE_EXPORT Q_DECL_IMPORT
#endif
