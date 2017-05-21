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
    additemdialog.cpp \
    setupcanvas.cpp \
    mouseeventeater.cpp \
    webcampreview.cpp \
    canvasrenderer.cpp \
    openglobject.cpp \
    videoframegrabber.cpp

HEADERS  += mainwindow.h \
    additemdialog.h \
    setupcanvas.h \
    mouseeventeater.h \
    webcampreview.h \
    canvasrenderer.h \
    openglobject.h \
    videoframegrabber.h

FORMS    += mainwindow.ui \
    additemdialog.ui \
    setupcanvas.ui \
    webcampreview.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
