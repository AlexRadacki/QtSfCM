#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>

namespace Ui {
class TestWindow;
}

class TestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestWindow(QWidget *parent = 0);
    ~TestWindow();

     void updateWindow();
     void updateFps();

private slots:
    void on_pushButton_Color_clicked();

private:
     Ui::TestWindow *ui;
};

#endif // TESTWINDOW_H
