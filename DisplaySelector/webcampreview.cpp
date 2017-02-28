#include "webcampreview.h"
#include "ui_webcampreview.h"


WebcamPreview::WebcamPreview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WebcamPreview)
{
    ui->setupUi(this);


    if(QCameraInfo::availableCameras().count() > 0)
    {
        camera = new QCamera();
        viewfinder = new QCameraViewfinder();
        camera->setViewfinder(viewfinder);
        viewfinder->setParent(ui->groupBox);
        viewfinder->setGeometry(15,15,ui->groupBox->rect().width()-20, ui->groupBox->rect().height()-20);
        viewfinder->show();
        camera->start(); // to start the viewfinder
    }
}


WebcamPreview::~WebcamPreview()
{
    camera->stop();
    delete ui;
}

void WebcamPreview::on_buttonBox_clicked(QAbstractButton *button)
{
    WebcamPreview::~WebcamPreview();
}
