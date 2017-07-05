#-------------------------------------------------
#
# Project created by QtCreator 2017-07-04T15:50:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BombSweeper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gameboard.cpp \
    gamecell.cpp \
    cellbrushclass.cpp

HEADERS  += mainwindow.h \
    gameboard.h \
    gamecell.h \
    cellbrushclass.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
