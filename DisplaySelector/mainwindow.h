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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QTime mainTime;
    ~MainWindow();

private slots:
    void updateTime();

    void on_videoAdapterlist_itemClicked(QListWidgetItem *item);

    void on_actionLoad_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_testScreenButton_pressed();

    void on_checkBox_clicked();

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_play_Button_pressed();

    void on_pause_Button_pressed();

    void on_stop_Button_pressed();

    void on_backward_Button_pressed();

    void on_forward_Button_pressed();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QUrl fileName;
    bool screen0;
    bool screen1;
    ulong lastKeyEventTime;
    QObjectList timerElements;
    QLCDNumber *m;
    QLCDNumber *s;
    QLCDNumber *ms;
    QTimer *timer;
    QTime elapsed_mainTime;
    bool isPaused;
    bool isPlaying;
    int lastTime;
    int totalMs;

protected:

    bool eventFilter(QObject *obj, QEvent *event);
};

#endif // MAINWINDOW_H
