#ifndef TSTGENERATOR_GLOBAL_H
#define TSTGENERATOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TSTGENERATOR_LIBRARY)
#  define TSTGENERATORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TSTGENERATORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TSTGENERATOR_GLOBAL_H