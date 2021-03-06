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
#include <QOpenGLTexture>
#include <QGraphicsOpacityEffect>


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

        // Set the QWidget canvas up
        mainCanvas = new QWidget();
        mainCanvas->setGeometry(1920,0,1920,1080);
        mainCanvas->setStyleSheet("background-color:black;");
        mainCanvas->setWindowFlags(Qt::FramelessWindowHint);
        mainCanvas->show();

       previewPlayer = new QMediaPlayer;
       previewVideoWidget = new QVideoWidget;
       previewPlayer->setVideoOutput(previewVideoWidget);
       previewVideoWidget->setParent(ui->videoBox);
       previewVideoWidget->setGeometry(ui->videoBox->rect());
       previewVideoWidget->show();

       // Set the OpenGL canvas up
       canvasrenderer = new CanvasRenderer(QOpenGLWindow::NoPartialUpdate, 0);
       canvasrenderer->setGeometry(1920,0,1920,1080);
       //canvasrenderer->show();
       glCanvas = false;
}

//main update

void MainWindow::updateTime()
{
    int currentMs = QTime(0,0,0).msecsTo(elapsed_mainTime);
    if(currentMs >= totalMs)
    {
        timer.stop();
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
        for(i = 0; i < ui->eventListTable->rowCount(); i++)
        {
            if(mediaEventArray.at(i) != nullptr)
            {
                if(QTime(0,0,0).msecsTo(mediaEventArray.at(i)->start) <= currentMs && !mediaEventArray.at(i)->hasStarted)
                {
                    mediaEventArray.at(i)->hasStarted = true;
                    qDebug()<<"start mediaEvent " + mediaEventArray.at(i)->name;
                    if(mediaEventArray.at(i)->type == "Video" || mediaEventArray.at(i)->type == "Sound")
                    {
                        qDebug()<<"play " + mediaEventArray.at(i)->path.toString();


                        QMediaPlayer *player = new QMediaPlayer();

                        if(glCanvas)
                        {
                        VideoFrameGrabber *vidGrabber = new VideoFrameGrabber();
                        connect(vidGrabber, SIGNAL(frameAvailable(QImage)), this, SLOT(processFrame(QImage)));
                        vidGrabber->renderer = canvasrenderer;
                        player->setVideoOutput(vidGrabber);
                        vidGrabber->rect = mediaEventArray.at(i)->rect;
                        }
                        else
                        {
                            QVideoWidget *newVideoWidget = new QVideoWidget;
                            newVideoWidget->setParent(mainCanvas);
                            newVideoWidget->setGeometry( mediaEventArray.at(i)->rect);
                            newVideoWidget->setWindowFlags(Qt::FramelessWindowHint);
                            QGraphicsOpacityEffect *op = new QGraphicsOpacityEffect(newVideoWidget);
                                op->setOpacity(mediaEventArray.at(i)->alpha/100);
                                newVideoWidget->setGraphicsEffect(op);
                                newVideoWidget->setAutoFillBackground(true);
                            newVideoWidget->show();
                            player->setVideoOutput(newVideoWidget);

                            mediaPlayerWidgets.append(newVideoWidget);
                        }


                        player->setMedia(mediaEventArray.at(i)->path);
                        player->play();

                        mediaPlayers.append(player);

                        //previewPlayer->setMedia(mediaEventArray.at(i)->path);
                        //previewPlayer->play();
                    }
                    if(mediaEventArray.at(i)->type == "Image")
                    {
                        qDebug()<<"show " + mediaEventArray.at(i)->path.toLocalFile();
                        QPixmap file(mediaEventArray.at(i)->path.toLocalFile());

                        if(glCanvas)
                        {
                            QImage imageTexture = file.toImage();
                            QOpenGLTexture *glTex = new QOpenGLTexture(imageTexture);
                            canvasrenderer->createSurface(glTex);
                        }
                        else
                        {
                            QWidget *imageItem = new QWidget(mainCanvas);
                            QLabel *imageLabel = new QLabel(imageItem);
                            imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                            imageLabel->setScaledContents(true);
                            imageLabel->setPixmap(file);
                            imageItem->setGeometry(mediaEventArray.at(i)->rect);
                            imageLabel->setGeometry(0,0,mediaEventArray.at(i)->rect.width(), mediaEventArray.at(i)->rect.height());
                            QGraphicsOpacityEffect *op = new QGraphicsOpacityEffect(imageItem);
                                op->setOpacity(mediaEventArray.at(i)->alpha/100);
                                imageItem->setGraphicsEffect(op);
                                imageItem->setAutoFillBackground(true);
                            imageItem->show();
                            imageLabel->show();

                            images.append(imageItem);
                        }
                    }
                }

                if(QTime(0,0,0).msecsTo(mediaEventArray.at(i)->end) <= currentMs && mediaEventArray.at(i)->hasStarted)
                {
                   previewPlayer->stop();
                }
            }
        }
    }

    if(glCanvas)
    {
        canvasrenderer->paintGL();
        canvasrenderer->update();
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
        mainTime.restart();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;

        timer.start(1000/25, this);

        isPlaying = true;
    }
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == timer.timerId()) {
        updateTime();
    } else {
        QWidget::timerEvent(event);
    }
}

void MainWindow::on_pause_Button_pressed()
{
    if(isPlaying)
    {
        isPaused = !isPaused;

        mainTime.restart();
        lastTime = 0;

        if(isPaused)
        {
            timer.stop();
            foreach (QMediaPlayer *item, mediaPlayers) {
                item->pause();
            }
        }
        else
        {
            timer.start(1000/20,this);
            foreach (QMediaPlayer *item, mediaPlayers) {
                item->play();
            }
        }
    }
}

void MainWindow::on_stop_Button_pressed()
{
    if(isPlaying)
    {
        timer.stop();
        elapsed_mainTime.setHMS(0,0,0);
        lastTime = 0;
        ui->time_label->setText("00:00:00:000");
        isPlaying = false;
        ui->progressBar->setValue(0);

        foreach (QMediaPlayer *item, mediaPlayers) {

            item->stop();
            mediaPlayers.removeOne(item);
            delete item;

        }
        foreach (QWidget *item, images) {
            images.removeOne(item);
            delete item;
        }
        foreach (QWidget *item, mediaPlayerWidgets) {
            mediaPlayerWidgets.removeOne(item);
            delete item;
        }
        foreach (MediaEvent *item, mediaEventArray) {
            item->hasStarted = false;
        }
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
        timer.stop();
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

void MainWindow::createItem(QString name, QUrl path, QString type, QTime start, QTime end, QRect rect, float alpha)
{
    qDebug() << "create item of type: " + type + " from: " + path.toString() + " at: " + start.toString() + " to: " +end.toString();
    ui->eventListTable->setRowCount(ui->eventListTable->rowCount()+1);
    MediaEvent *newEvent = new MediaEvent(name, path, type, start, end, rect, alpha);
    mediaEventArray.append(newEvent);
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,0, new QTableWidgetItem(newEvent->name));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,1, new QTableWidgetItem(newEvent->start.toString()));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,2, new QTableWidgetItem(newEvent->end.toString()));
    ui->eventListTable->setItem(ui->eventListTable->rowCount()-1,3, new QTableWidgetItem(newEvent->type));
}

void MainWindow::on_actionWebcam_triggered()
{
    WebcamPreview *newWebcam = new WebcamPreview();
    newWebcam->show();
}
