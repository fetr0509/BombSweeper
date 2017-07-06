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
    cellbrush.cpp \
    gamecreator.cpp \
    gamelogic.cpp

HEADERS  += mainwindow.h \
    gameboard.h \
    gamecell.h \
    cellbrush.h \
    gamecreator.h \
    gamelogic.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
