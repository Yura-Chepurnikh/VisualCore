#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //LogicGateSymbol* sym = new LogicGateSymbol();
    //w.setCentralWidget(sym);

    w.show();
    return a.exec();
}
