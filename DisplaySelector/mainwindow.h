#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QListWidgetItem>
#include <QDebug>
#include <QMediaPlayer>
#include <QWidget>
#include <QKeyEvent>
#include <QTime>
#include <QLCDNumber>
#include "webcampreview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    explicit MainWindow(QWidget *parent = 0);
    QTime mainTime;
    void createItem(QString name, QUrl path, QString type, QTime start, QTime end);
    ~MainWindow();

    struct MediaEvent
    {
        QString name;
        QUrl path;
        QString type;
        QTime start;
        QTime end;
        bool hasStarted;
        MediaEvent(){}
        MediaEvent(QString _name, QUrl _path, QString _type, QTime _start, QTime _end)
            : name(_name), path(_path), type(_type), start(_start), end(_end)
        {
            hasStarted = false;
        }
    };

    MediaEvent *mediaEventArray[64];

    struct Canvas
    {
        int x;
        int y;

        Canvas(){}
        Canvas(int _x, int _y) : x(_x), y(_y){}
    };

    Canvas *mainCanvas;

private slots:
    void updateTime();

    //void on_actionLoad_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_play_Button_pressed();

    void on_pause_Button_pressed();

    void on_stop_Button_pressed();

    void on_backward_Button_pressed();

    void on_forward_Button_pressed();

    void on_addImageButton_pressed();

    void on_addVideoButton_pressed();

    void on_addSoundButton_pressed();

    void on_actionSetup_Canvas_triggered();

    void on_actionWebcam_triggered();

private:
    Ui::MainWindow *ui;
    ulong lastKeyEventTime;
    QObjectList timerElements;
    QTimer *timer;
    QTime elapsed_mainTime;
    bool isPaused;
    bool isPlaying;
    int lastTime;
    int totalMs;
    QMediaPlayer *previewPlayer;
    QVideoWidget *previewVideoWidget;

protected:

    bool eventFilter(QObject *obj, QEvent *event);
};

#endif // MAINWINDOW_H
