#include "logicgatesymbol.h"

LogicGateSymbol::LogicGateSymbol(QWidget* parent) : QOpenGLWidget(parent),
    QOpenGLFunctions()
{
    //update();
    setFixedSize(300, 300);
}

LogicGateSymbol::~LogicGateSymbol() { }

void LogicGateSymbol::initializeGL() {
    initializeOpenGLFunctions();
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -1, 1);
    //glMatrixMode(GL_MODELVIEW);
}

void LogicGateSymbol::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void LogicGateSymbol::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);

    glBegin(GL_LINES);
    glVertex2f(-10.0f, -10.0f);
    glVertex2f(10.0f, 10.0f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    for (int i = 0; i <= 180; ++i) {
        float theta = i * M_PI / 180.0f;
        glVertex2f(sin(theta) * 4.0f, cos(theta) * 4.0f);
    }
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-10.0f, 10.0f);
    glVertex2f(10.0f, -10.0f);
    glEnd();

    qDebug() << "It's work!!!";
}
