#include "toolbar.h"

Toolbar::Toolbar(QWidget* parent) : QToolBar(parent)
{
    QToolBar* tools = new QToolBar("tools", this);
    QAction* action1 = new QAction("action1");
    QAction* action2 = new QAction("action1");
    QAction* action3 = new QAction("action1");
    QAction* action4 = new QAction("action1");

    tools->addAction(action1);
    tools->addAction(action2);
    tools->addAction(action3);
    tools->addAction(action4);
}
