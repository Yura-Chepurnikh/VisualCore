#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //tools = new Toolbar(parent);

    //QDockWidget* toolbar = new QDockWidget("Tools", this);
    //toolbar->setWidget(tools);

    //addDockWidget(Qt::LeftDockWidgetArea, toolbar);

    //setCentralWidget(tools);

    QToolBar* bar = addToolBar("ASD");
}

MainWindow::~MainWindow()
{
    delete ui;
}

