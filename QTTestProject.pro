#-------------------------------------------------
#
# Project created by QtCreator 2016-10-16T22:04:04
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTTestProject
TEMPLATE = app

LIBS += -lopengl32

SOURCES += main.cpp\
        testwindow.cpp \
    myglwidget.cpp

HEADERS  += testwindow.h \
    myglwidget.h

FORMS    += testwindow.ui
