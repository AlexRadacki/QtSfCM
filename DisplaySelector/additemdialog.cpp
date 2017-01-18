#include "additemdialog.h"
#include "ui_additemdialog.h"
#include <QMessageBox>
#include <QFileDialog>

AddItemDialog::AddItemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemDialog)
{
    ui->setupUi(this);
}

AddItemDialog::~AddItemDialog()
{
    delete ui;
}

void AddItemDialog::on_loadFileButton_pressed()
{
    if(mediaType == "Image") fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.bmp *.jpg *.png)"));
    else if (mediaType == "Video") fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.avi *.mp4 *.mov)"));
    else if (mediaType == "Sound") fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.wav *.ogg *.mp3)"));
}

void AddItemDialog::on_cancelButton_pressed()
{
    this->~AddItemDialog();
}

void AddItemDialog::on_applyButton_pressed()
{
    if(QTime(0,0,0).secsTo(ui->timeEdit_start->time())>= QTime(0,0,0).secsTo(ui->timeEdit_end->time())) QMessageBox::information(this, "Error", "Error: Endtime less or equal to Starttime");
    else
    {
        mainWindow->createItem(ui->nameLineEdit->text() ,fileName, mediaType, ui->timeEdit_start->time(),ui->timeEdit_end->time());
        this->~AddItemDialog();
    }
}
