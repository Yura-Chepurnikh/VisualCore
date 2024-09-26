#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../Frontend/LogicGateSymbol/logicgatesymbol.h"
#include "../Frontend/Toolbar/toolbar.h"
#include <QMouseEvent>
#include <QMainWindow>
#include <QToolBar>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Toolbar* tools;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
