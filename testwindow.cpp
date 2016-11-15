#include "testwindow.h"
#include "ui_testwindow.h"
#include <QDebug>
#include <QTimer>
#include "myglwidget.h"

TestWindow::TestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestWindow)
{
    ui->setupUi(this);       

        auto timer = new QTimer(parent);
        connect(timer, &QTimer::timeout, [&]{updateFps();});
        timer->start(1000);
}



TestWindow::~TestWindow()
{
    delete ui;
}

void TestWindow::updateWindow()
{
    ui->myglwidget->updateRotation();
}

void TestWindow::updateFps()
{
    ui->label_fps->setText(QString::number(ui->myglwidget->calcFps()) + "FPS");
}

void TestWindow::on_pushButton_Color_clicked()
{
    ui->myglwidget->randomColor();
}
