#include "./logicgatesymbol.h"
#include "./AndLogicGateSymbol.h"

AndLogicGateSymbol::AndLogicGateSymbol(QWidget* parent) : LogicGateSymbol(parent) { }

void AndLogicGateSymbol::paintGL() {
    glClear(CL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin
}
