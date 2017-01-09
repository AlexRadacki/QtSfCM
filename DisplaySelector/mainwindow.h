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
    QTime elapsed_mainTime;
    int lastTime;

protected:

    bool eventFilter(QObject *obj, QEvent *event);
};

#endif // MAINWINDOW_H
