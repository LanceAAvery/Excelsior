#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBANIMAL_LIBRARY)
#  define XRBANIMAL_EXPORT Q_DECL_EXPORT
#else
#  define XRBANIMAL_EXPORT Q_DECL_IMPORT
#endif
