#ifndef ANDLOGICGATESYMBOL_H
#define ANDLOGICGATESYMBOL_H

#include "logicgatesymbol.h"

class AndLogicGateSymbol : public LogicGateSymbol {
public:
    AndLogicGateSymbo(QWidget* parent);

    void paintGL() override;
};

#endif // ANDLOGICGATESYMBOL_H
