#include "additemdialog.h"
#include "ui_additemdialog.h"

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

}

void AddItemDialog::on_cancelButton_pressed()
{
    this->~AddItemDialog();
}

void AddItemDialog::on_applyButton_pressed()
{
    if(QTime(0,0,0).secsTo(ui->timeEdit_start->time())>= QTime(0,0,0).secsTo(ui->timeEdit_end->time())) qDebug() << "Start and end time less or equal";
    else mainWindow->createItem("C:\test.avi", 0,ui->timeEdit_start->time(),ui->timeEdit_end->time());
}
