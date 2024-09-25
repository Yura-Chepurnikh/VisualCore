#ifndef LOGICGATESYMBOL_GLOBAL_H
#define LOGICGATESYMBOL_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QtGui/QOpenGLFunctions>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QObject>

#if defined(LOGICGATESYMBOL_LIBRARY)
#define LOGICGATESYMBOL_EXPORT Q_DECL_EXPORT
#else
#define LOGICGATESYMBOL_EXPORT Q_DECL_IMPORT
#endif

#endif // LOGICGATESYMBOL_GLOBAL_H
