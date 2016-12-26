#include <Windows.h>
#include <WinUser.h>
#include <string>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCheckBox>
#include <QScreen>
#include <QVideoWidget>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qApp->installEventFilter(this);
    ui->setupUi(this);

    ui->displayInfoTable->setColumnWidth(0, 220);

    screen0 = false;
    screen1 = false;

    DISPLAY_DEVICE dd;
       dd.cb = sizeof(dd);
       int deviceIndex = 0;
       while(EnumDisplayDevices(0, deviceIndex, &dd, 0))
       {
           WCHAR wc[32] = {};
           wcscpy(wc, dd.DeviceName);
           char ch[32];
           char DefChar = ' ';
           WideCharToMultiByte(CP_ACP,0,wc,-1, ch,32,&DefChar, NULL);
           std::string deviceName (ch);
           std::wstring stemp = std::wstring(deviceName.begin(), deviceName.end());
           LPCWSTR sw = stemp.c_str();

           WCHAR wc128[128] = {};
           wcscpy(wc128, dd.DeviceString);
           char ch128[128];
           char DefChar128 = ' ';
           WideCharToMultiByte(CP_ACP,0,wc128,-1, ch128,128,&DefChar128, NULL);
           std::string deviceString (ch128);

           int monitorIndex = 0;
           while(EnumDisplayDevices(sw, monitorIndex, &dd, 0))
           {
               ui->videoAdapterlist->addItem(QString::fromStdString(deviceName)+", "+QString::fromStdString(deviceString));
               ++monitorIndex;

               QCheckBox *checkBox = new QCheckBox(QString::fromStdString(deviceName));
               ui->verticalLayoutWidget->layout()->addWidget(checkBox);
               checkBox->setObjectName("checkbox " + QString::number(deviceIndex));
               connect(checkBox, SIGNAL(clicked()), this, SLOT(on_checkBox_clicked()));
           }

           ++deviceIndex;
       }


       player = new QMediaPlayer;

       videoWidget = new QVideoWidget;
       player->setVideoOutput(videoWidget);
       videoWidget->setParent(ui->videoBox);
       videoWidget->setGeometry(QRect(15,20,300,180));
       videoWidget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_videoAdapterlist_itemClicked(QListWidgetItem *item)
{
    int itemID = ui->videoAdapterlist->row(item);
    ui->displayInfoTable->setItem(0,0,new QTableWidgetItem(item->text()));
    ui->displayInfoTable->setItem(1,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->geometry().x())));
    ui->displayInfoTable->setItem(2,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->geometry().y())));
    ui->displayInfoTable->setItem(3,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->geometry().width())));
    ui->displayInfoTable->setItem(4,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->geometry().height())));
    ui->displayInfoTable->setItem(5,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->refreshRate())));
    ui->displayInfoTable->setItem(6,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->physicalDotsPerInch())));
    ui->displayInfoTable->setItem(7,0,new QTableWidgetItem(QString::number(QApplication::screens().at(itemID)->depth())));
}

void MainWindow::on_actionLoad_triggered()
{
    qDebug() << "loadtest";
    fileName = QFileDialog::getOpenFileName(this, tr("Open Media"), "/", tr("Media Files (*.avi *.mp4 *.mov)"));
    ui->fileNameLabel->setText(fileName.toString());
    player->setMedia(fileName);
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Qt System for cultural mediation\nVersion 0.0.2\nAlexander Radacki 2016\nh_da University of Applied Sciences");
}

void MainWindow::on_checkBox_clicked()
{
    QObject* obj = sender();
    qDebug() <<"checkbox " << obj->objectName();
    if (obj->objectName() == "checkbox 0") screen0 = !screen0;
    else if (obj->objectName() == "checkbox 1") screen1 = !screen1;
}

void MainWindow::on_pushButton_pressed()
{
    if(player->state() > 0) player->stop();

    if(fileName.isEmpty())
    {

        fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.avi *.mp4 *.mov)"));
        player->setMedia(fileName);
        ui->fileNameLabel->setText(fileName.toString());
        qDebug() <<"Play file: " << player->currentMedia().canonicalUrl();
    }

    if(screen0 && !screen1)
    {
        videoWidget->setFullScreen(true);
        videoWidget->setGeometry(QApplication::screens().at(0)->geometry());
    }
    else if(screen1 && !screen0)
    {
        videoWidget->setFullScreen(true);
        videoWidget->setGeometry(QApplication::screens().at(1)->geometry());
    }
    else if(screen1 && screen0)
    {
        videoWidget->setFullScreen(true);
        int x = QApplication::screens().at(0)->geometry().width() + QApplication::screens().at(1)->geometry().width();
        int y = (QApplication::screens().at(0)->geometry().height() > QApplication::screens().at(1)->geometry().height()) ? QApplication::screens().at(0)->geometry().height() : QApplication::screens().at(1)->geometry().height();
        videoWidget->setGeometry(QRect(0,0,x,y));
    }

    player->play();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyRelease)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if(keyEvent->isAutoRepeat() == false && lastKeyEventTime != keyEvent->timestamp())
        {
            qDebug() << "key " << keyEvent->key() << "from" << obj;
            if(keyEvent->key() == Qt::Key_Enter)
            {
                videoWidget->setFullScreen(!videoWidget->isFullScreen());
                if(videoWidget->isFullScreen()==false)
                {
                    videoWidget->setParent(ui->videoBox);
                    videoWidget->setGeometry(QRect(15,20,300,180));
                }

            }
            if(keyEvent->key() == Qt::Key_Q) QApplication::exit();
            lastKeyEventTime = keyEvent->timestamp();
        }

    }

    return QObject::eventFilter(obj, event);

}
