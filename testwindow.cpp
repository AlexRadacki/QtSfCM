#include "testwindow.h"
#include "ui_testwindow.h"
#include <QDebug>
#include "myglwidget.h"

TestWindow::TestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestWindow)
{
    ui->setupUi(this);
}

TestWindow::~TestWindow()
{
    delete ui;
}


void TestWindow::on_pushButton_Color_clicked()
{
    ui->myglwidget->randomColor();
}
