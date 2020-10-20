#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBROGUE_LIBRARY)
#  define XRBROGUE_EXPORT Q_DECL_EXPORT
#else
#  define XRBROGUE_EXPORT Q_DECL_IMPORT
#endif
