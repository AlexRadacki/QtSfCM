#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T13:27:21
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtSfCM
TEMPLATE = app

LIBS += -luser32

SOURCES += main.cpp\
        mainwindow.cpp \
    additemdialog.cpp

HEADERS  += mainwindow.h \
    additemdialog.h

FORMS    += mainwindow.ui \
    additemdialog.ui
