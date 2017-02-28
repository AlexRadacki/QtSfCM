#ifndef SETUPCANVAS_H
#define SETUPCANVAS_H
#include <QMouseEvent>
#include <QDialog>
#include "mainwindow.h"
#include "mouseeventeater.h"
#include <QList>

namespace Ui {
class SetupCanvas;
}

class SetupCanvas : public QDialog
{
    Q_OBJECT

public:
    explicit SetupCanvas(QWidget *parent = 0);
    MainWindow *mainWindow;
    QFrame *canvasFrame;
    void UpdateCanvasFrame();
    ~SetupCanvas();

private slots:
        void on_videoAdapterlist_itemClicked(QListWidgetItem *item);

        void on_okButton_pressed();

        void on_cancelButton_pressed();

        void on_testScreenButton_pressed();

        void on_checkBox_clicked();

       // void mousePressEvent(QMouseEvent *event);

       // void mouseMoveEvent(QMouseEvent *event);

private:
    Ui::SetupCanvas *ui;
    int canvas_width;
    int canvas_height;
    QList<QFrame*> canvasItems;
    QFrame *child;
    QPoint deltaMouse;
    MouseEventEater *mouseEventEater;
protected:

    //bool eventFilter(QObject *obj, QEvent *event);

};

#endif // SETUPCANVAS_H
