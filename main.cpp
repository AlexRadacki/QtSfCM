#include "testwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>
#include <QTimer>
#include "testwindow.h"
#include "myglwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestWindow w;
    w.show();
    qInfo() << "Application initialized";
    return a.exec();
}
