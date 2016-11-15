#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QListWidgetItem>
#include <QDebug>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionLoad_triggered();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_pressed();

    void on_checkBox_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
    QUrl fileName;

    bool screen0;
    bool screen1;
};

#endif // MAINWINDOW_H
