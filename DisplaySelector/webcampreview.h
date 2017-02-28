#ifndef WEBCAMPREVIEW_H
#define WEBCAMPREVIEW_H

#include <QDialog>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QAbstractButton>

namespace Ui {
class WebcamPreview;
}

class WebcamPreview : public QDialog
{
    Q_OBJECT

public:
    explicit WebcamPreview(QWidget *parent = 0);
    ~WebcamPreview();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::WebcamPreview *ui;
    QCamera *camera;
    QCameraViewfinder *viewfinder ;
};

#endif // WEBCAMPREVIEW_H
