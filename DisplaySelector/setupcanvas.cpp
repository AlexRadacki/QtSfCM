#include <Windows.h>
#include <WinUser.h>
#include <QCheckBox>
#include <QScreen>
#include <QDrag>
#include <QMimeData>
#include <QTreeWidgetItem>
#include "setupcanvas.h"
#include "ui_setupcanvas.h"


SetupCanvas::SetupCanvas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetupCanvas)
{
    ui->setupUi(this);
    ui->displayInfoTable->setColumnWidth(0, 220);
    mouseEventEater = new MouseEventEater(this);

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

       canvasFrame = new QFrame();
       canvasFrame->setParent(ui->canvaspreviewBox);
       canvasFrame->setFrameShape(QFrame::Box);
       canvasFrame->setFrameShadow(QFrame::Plain);
       QPalette* palette = new QPalette();
       palette->setColor(QPalette::Foreground,Qt::red);
       canvasFrame->setPalette(*palette);
       canvasFrame->setLineWidth(5);
       canvasFrame->setObjectName("CanvasFrame");
       canvasFrame->setGeometry(0,0,0,0);

}

void SetupCanvas::on_videoAdapterlist_itemClicked(QListWidgetItem *item)
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

SetupCanvas::~SetupCanvas()
{
    delete ui;
}

void SetupCanvas::on_okButton_pressed()
{
    mainWindow->mainCanvas->x = canvas_width;
    mainWindow->mainCanvas->y = canvas_height;
}

void SetupCanvas::on_cancelButton_pressed()
{
    SetupCanvas::~SetupCanvas();
}

void SetupCanvas::on_testScreenButton_pressed()
{
//    if(player->state() > 0) player->stop();

//    if(fileName.isEmpty())
//    {

//        fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.avi *.mp4 *.mov)"));
//        player->setMedia(fileName);
//        qDebug() <<"Play file: " << player->currentMedia().canonicalUrl();
//    }

//    if(screen0 && !screen1)
//    {
//        videoWidget->setFullScreen(true);
//        videoWidget->setGeometry(QApplication::screens().at(0)->geometry());
//    }
//    else if(screen1 && !screen0)
//    {
//        videoWidget->setFullScreen(true);
//        videoWidget->setGeometry(QApplication::screens().at(1)->geometry());
//    }
//    else if(screen1 && screen0)
//    {
//        videoWidget->setFullScreen(true);
//        int x = QApplication::screens().at(0)->geometry().width() + QApplication::screens().at(1)->geometry().width();
//        int y = (QApplication::screens().at(0)->geometry().height() > QApplication::screens().at(1)->geometry().height()) ? QApplication::screens().at(0)->geometry().height() : QApplication::screens().at(1)->geometry().height();
//        videoWidget->setGeometry(QRect(0,0,x,y));
//    }

//    player->play();
    UpdateCanvasFrame();

}



void SetupCanvas::UpdateCanvasFrame()
{
    int i;
    int lowestXVal = 65000;
    int indexOfLowestX = 0;
    int highestXVal = 0;
    int indexOfHighestX = 0;

    for(i = 0; i < canvasItems.length(); i++)
    {

        if(canvasItems.at(i)->geometry().x() < lowestXVal)
        {
            lowestXVal = canvasItems.at(i)->geometry().x();
            indexOfLowestX = i;

        }

            if(canvasItems.at(i)->geometry().x() > highestXVal)
            {
                highestXVal = canvasItems.at(i)->geometry().x();
                indexOfHighestX = i;

            }
    }

    int x,y,w,h;

    if(canvasItems.at(indexOfLowestX)->geometry().y() > canvasItems.at(indexOfHighestX)->geometry().y())
    {
         x = canvasItems.at(indexOfLowestX)->geometry().bottomLeft().x();
         y = canvasItems.at(indexOfHighestX)->geometry().topRight().y();
         w = canvasItems.at(indexOfHighestX)->geometry().topRight().x() - x;
         h = canvasItems.at(indexOfLowestX)->geometry().bottomLeft().y() - y;
    }
    else
    {
         x = canvasItems.at(indexOfLowestX)->geometry().topLeft().x();
         y = canvasItems.at(indexOfLowestX)->geometry().topLeft().y();
         w = canvasItems.at(indexOfHighestX)->geometry().bottomRight().x() - x + 1;
         h = canvasItems.at(indexOfHighestX)->geometry().bottomRight().y() - y + 1;
    }


    canvasFrame->setGeometry(x,y,w,h);

    canvasFrame->show();

    ui->canvasXlabel->setText( "Canvas X: " + QString::number(w * 10));
    ui->canvasYlabel->setText( "Canvas Y: " + QString::number(h* 10));
}

void SetupCanvas::on_checkBox_clicked()
{
    QObject* obj = sender();
    qDebug() <<"checkbox " << obj->objectName();
    QCheckBox *checkbox = qobject_cast<QCheckBox*>(obj);

    int i;
    for(i = 0; i < obj->parent()->children().length(); i++)
    {
        if(obj->parent()->children().at(i) == obj)
        {
            qDebug() << "found item at: " + QString::number(i);
            break;
        }

    }

    if(i>0) i--;

    if(checkbox->isChecked())
    {

        QFrame *newFrame = new QFrame();

        newFrame->setParent(ui->canvaspreviewBox);
        newFrame->setGeometry(ui->canvaspreviewBox->width()/2, ui->canvaspreviewBox->height()/2, QApplication::screens().at(i)->geometry().width() / 10, QApplication::screens().at(i)->geometry().height() / 10);
        newFrame->setFrameShape(QFrame::Box);
        newFrame->setFrameShadow(QFrame::Plain);
        newFrame->setLineWidth(3);
        newFrame->setMouseTracking(true);;
        newFrame->setObjectName("DisplayDevice");
        newFrame->installEventFilter(mouseEventEater);
        newFrame->show();
        canvasItems.append(newFrame);

    }
    else
    {
        QFrame *tmpFrame = canvasItems.at(i);
        tmpFrame->~QFrame();
    }

}

