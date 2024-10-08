QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += -L"D:/VisualCore/Frontend/LogicGateSymbol/build/Desktop_Qt_6_7_1_MinGW_64_bit-Debug/debug" -lLogicGateSymbol
INCLUDEPATH += "D:/VisualCore/Frontend/LogicGateSymbol"

LIBS += -L"D:/VisualCore/Frontend/Toolbar/build/Desktop_Qt_6_7_1_MinGW_64_bit-Debug/debug" -lToolbar
INCLUDEPATH += "D:/VisualCore/Frontend/Toolbar"
