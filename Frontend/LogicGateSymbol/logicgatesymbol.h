#ifndef LOGICGATESYMBOL_H
#define LOGICGATESYMBOL_H

#include "LogicGateSymbol_global.h"

class LOGICGATESYMBOL_EXPORT LogicGateSymbol : public QOpenGLWidget, protected QOpenGLFunctions {
public:
    LogicGateSymbol(QWidget* parent = nullptr);
    ~LogicGateSymbol() override;

    void initializeGL() override;
    void resizeGL(int w, int h) override;
};

#endif // LOGICGATESYMBOL_H
