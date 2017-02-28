#include <string>
#include "mainwindow.h"
#include "additemdialog.h"
#include "ui_mainwindow.h"
#include "setupcanvas.h"
#include <QMessageBox>
#include <QVideoWidget>
#include <QFileDialog>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    qApp->installEventFilter(this);
    ui->setupUi(this);
    isPlaying = false;
    isPaused = false;
        totalMs = QTime(0,0,0).msecsTo(ui->timeEdit->time());
        ui->progressBar->setRange(0,totalMs);
        int n;
        for(n=0;n<64;n++)
        {
            mediaEventArray[n] = nullptr;
        }

        mainCanvas = new Canvas(1280,720);


       previewPlayer = new QMediaPlayer;
       previewVideoWidget = new QVideoWidget;
       previewPlayer->setVideoOutput(previewVideoWidget);
       previewVideoWidget->setParent(ui->videoBox);
       previewVideoWidget->setGeometry(ui->videoBox->rect());
       previewVideoWidget->show();

}

//main update function

void MainWindow::updateTime()
{
    int currentMs = QTime(0,0,0).msecsTo(elapsed_mainTime);
    if(currentMs >= totalMs)
    {
        timer->stop();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;
        ui->time_label->setText("00:00:00:000");
        isPlaying = false;
        ui->progressBar->setValue(0);
    }
    else
    {
        elapsed_mainTime = elapsed_mainTime.addMSecs(mainTime.elapsed() - lastTime);
        QString ms_String;
        if(elapsed_mainTime.msec() < 10) ms_String = "00" + QString::number(elapsed_mainTime.msec());
        else if(elapsed_mainTime.msec()<100) ms_String = "0" + QString::number(elapsed_mainTime.msec());
        else ms_String = QString::number(elapsed_mainTime.msec());
        ui->time_label->setText(elapsed_mainTime.toString()+":"+ ms_String);

        lastTime = mainTime.elapsed();

        ui->progressBar->setValue(currentMs);
        int i;
        for(i = 0; i < 64; i++)
        {
            if(mediaEventArray[i] != nullptr)
            {
                if(QTime(0,0,0).msecsTo(mediaEventArray[i]->start) <= currentMs && !mediaEventArray[i]->hasStarted)
                {
                    mediaEventArray[i]->hasStarted = true;
                    qDebug()<<"start mediaEvent " + mediaEventArray[i]->name;
                    if(mediaEventArray[i]->type == "Video" || mediaEventArray[i]->type == "Sound")
                    {
                        qDebug()<<"play " + mediaEventArray[i]->path.toString();
                        //QMediaPlayer *player = new QMediaPlayer();
                        previewPlayer->setMedia(mediaEventArray[i]->path);
                        previewPlayer->play();
                    }
                    if(mediaEventArray[i]->type == "Image")
                    {
                        qDebug()<<"show " + mediaEventArray[i]->path.toLocalFile();
                        QPixmap file(mediaEventArray[i]->path.toLocalFile());
                        QLabel *imageLabel = new QLabel();
                        imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                        imageLabel->setScaledContents(true);
                        imageLabel->setPixmap(file);
                        imageLabel->setParent(ui->videoBox);
                        imageLabel->setGeometry(ui->videoBox->rect());
                        imageLabel->show();

                    }

                }

                if(QTime(0,0,0).msecsTo(mediaEventArray[i]->end) <= currentMs && mediaEventArray[i]->hasStarted)
                {
                   previewPlayer->stop();
                }
            }
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




// menu items

void MainWindow::on_actionSetup_Canvas_triggered()
{
    SetupCanvas *newCanvasDialoge = new SetupCanvas();
    newCanvasDialoge->mainWindow = this;
    newCanvasDialoge->show();
}

//void MainWindow::on_actionLoad_triggered()
//{
//    qDebug() << "loadtest";
//    fileName = QFileDialog::getOpenFileName(this, tr("Open file"), "/", tr("XML Files (*.xml)"));
//}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "Qt System for cultural mediation\nVersion 0.1.9\nAlexander Radacki 2016\nh_da University of Applied Sciences");
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyRelease)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if(keyEvent->isAutoRepeat() == false && lastKeyEventTime != keyEvent->timestamp())
        {
            qDebug() << "key " << keyEvent->key() << "from" << obj;
//            if(keyEvent->key() == Qt::Key_Enter)
//            {
//                videoWidget->setFullScreen(!videoWidget->isFullScreen());
//                if(videoWidget->isFullScreen()==false)
//                {
//                    videoWidget->setParent(ui->videoBox);
//                    videoWidget->setGeometry(QRect(15,20,300,180));
//                }

//            }
//            if(keyEvent->key() == Qt::Key_Q) QApplication::exit();
            lastKeyEventTime = keyEvent->timestamp();
        }

    }

    return QObject::eventFilter(obj, event);

}

void MainWindow::on_timeEdit_userTimeChanged(const QTime &time)
{
    int msec = QTime(0,0,0).msecsTo(time);
    ui->progressBar->setRange(0,msec);
    totalMs = QTime(0,0,0).msecsTo(time);
}

// play buttons

void MainWindow::on_play_Button_pressed()
{
     qDebug()<<isPlaying;
    if (!isPlaying)
    {
        qDebug()<<"test";
        mainTime.restart();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;

        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
        timer->start(100);

        isPlaying = true;

    }

}

void MainWindow::on_pause_Button_pressed()
{
    if(isPlaying)
    {
        isPaused = !isPaused;

        mainTime.restart();
        lastTime = 0;

        if(isPaused) timer->stop();
        else timer->start(100);
    }
}

void MainWindow::on_stop_Button_pressed()
{
    if(isPlaying)
    {
        timer->stop();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;
        ui->time_label->setText("00:00:00:000");
        isPlaying = false;
        ui->progressBar->setValue(0);
    }
}

void MainWindow::on_backward_Button_pressed()
{
    if(elapsed_mainTime.hour()==0 && elapsed_mainTime.minute() == 0 && elapsed_mainTime.second()<10)
    {
        mainTime.restart();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;
    }
    else elapsed_mainTime = elapsed_mainTime.addSecs(-10);
}

void MainWindow::on_forward_Button_pressed()
{
    int secondsToEnd = QTime(0,0,0).secsTo(ui->timeEdit->time()) - QTime(0, 0, 0).secsTo(elapsed_mainTime);
    if(secondsToEnd<10)
    {
        timer->stop();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;
        ui->time_label->setText("00:00:00:000");
        isPlaying = false;
    }
    else elapsed_mainTime = elapsed_mainTime.addSecs(10);
}

void MainWindow::on_addImageButton_pressed()
{
    AddItemDialog *newItemAdder = new AddItemDialog();
    newItemAdder->mainWindow = this;
    newItemAdder->mediaType = "Image";
    newItemAdder->show();
}

void MainWindow::on_addVideoButton_pressed()
{
    AddItemDialog *newItemAdder = new AddItemDialog();
    newItemAdder->mainWindow = this;
    newItemAdder->mediaType = "Video";
    newItemAdder->show();
}

void MainWindow::on_addSoundButton_pressed()
{
    AddItemDialog *newItemAdder = new AddItemDialog();
    newItemAdder->mainWindow = this;
    newItemAdder->mediaType = "Sound";
    newItemAdder->show();
}

void MainWindow::createItem(QString name, QUrl path, QString type, QTime start, QTime end)
{
    qDebug() << "create item of type: " + type + " from: " + path.toString() + " at: " + start.toString() + " to: " +end.toString();
    ui->eventListTable->setRowCount(ui->eventListTable->rowCount()+1);

    mediaEventArray[ui->eventListTable->rowCount()] = new MediaEvent(name, path, type, start, end);
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,0, new QTableWidgetItem( mediaEventArray[ui->eventListTable->rowCount()]->name));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,1, new QTableWidgetItem(mediaEventArray[ui->eventListTable->rowCount()]->start.toString()));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,2, new QTableWidgetItem(mediaEventArray[ui->eventListTable->rowCount()]->end.toString()));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,3, new QTableWidgetItem(mediaEventArray[ui->eventListTable->rowCount()]->type));
}


void MainWindow::on_actionWebcam_triggered()
{
    WebcamPreview *newWebcam = new WebcamPreview();
    newWebcam->show();
}
