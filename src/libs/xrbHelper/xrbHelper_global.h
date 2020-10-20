#pragma once

#include <QtCore/qglobal.h>

#if defined(XRBHELPER_LIBRARY)
#  define XRBHELPER_EXPORT Q_DECL_EXPORT
#else
#  define XRBHELPER_EXPORT Q_DECL_IMPORT
#endif
