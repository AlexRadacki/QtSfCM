#include "additemdialog.h"
#include "ui_additemdialog.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QScreen>

AddItemDialog::AddItemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItemDialog)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Canvas");

    int index = 0;
    for(index = 0; index < QApplication::screens().length(); index++)
    {
        ui->comboBox->addItem("DISPLAY" + QString::number(index));
    }
}

AddItemDialog::~AddItemDialog()
{
    delete ui;
}

void AddItemDialog::on_loadFileButton_pressed()
{
    if(mediaType == "Image")
    {
        fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.bmp *.jpg *.png)"));
        QPixmap file(fileName.toLocalFile());
        QLabel *imageLabel = new QLabel();
        imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        imageLabel->setScaledContents(true);
        imageLabel->setPixmap(file);
        imageLabel->setParent(ui->previewBox);
        imageLabel->setGeometry(ui->previewBox->rect());
        imageLabel->show();
    }
    else if (mediaType == "Video") fileName = QFileDialog::getOpenFileUrl(this, tr("Open Media"), QUrl("/"), tr("Media Files (*.avi *.mp4 *.mov *.mpeg)"));
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
        QRect rect = QRect(ui->spinBox->value(),ui->spinBox_2->value(),ui->spinBox_3->value(),ui->spinBox_4->value());
        mainWindow->createItem(ui->nameLineEdit->text() ,fileName, mediaType, ui->timeEdit_start->time(),ui->timeEdit_end->time(), rect, ui->spinBox_Alpha->value());
        this->~AddItemDialog();
    }
}

void AddItemDialog::on_comboBox_currentIndexChanged(int index)
{
    //select canvas or display
    if(index > 0)
    {
        ui->spinBox->setValue(QApplication::screens().at(index - 1)->geometry().x());
        ui->spinBox_2->setValue(QApplication::screens().at(index - 1)->geometry().y());
        ui->spinBox_3->setValue(QApplication::screens().at(index - 1)->geometry().width());
        ui->spinBox_4->setValue(QApplication::screens().at(index - 1)->geometry().height());
    }
    else if(index == 0)
    {
        //ui->spinBox->setValue( mainWindow->mainCanvas->x);
        //ui->spinBox_2->setValue( mainWindow->mainCanvas->y);
        //ui->spinBox_3->setValue( mainWindow->mainCanvas->width);
        //ui->spinBox_4->setValue( mainWindow->mainCanvas->height);
    }

}

void AddItemDialog::on_checkBox_toggled(bool checked)
{
    if(checked)
    {
        //fullscreen on selected canvas / display
        if(ui->comboBox->currentIndex() == 0)
        {
            ui->spinBox->setValue(mainWindow->mainCanvas->geometry().x());
            ui->spinBox_2->setValue(mainWindow->mainCanvas->geometry().y());
            ui->spinBox_3->setValue(mainWindow->mainCanvas->geometry().width());
            ui->spinBox_4->setValue(mainWindow->mainCanvas->geometry().height());

        }
    }
}
