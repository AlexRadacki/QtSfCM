#ifndef ADDITEMDIALOG_H
#define ADDITEMDIALOG_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class AddItemDialog;
}

class AddItemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddItemDialog(QWidget *parent = 0);
    MainWindow *mainWindow;
    QString mediaType;
    QString eventName;
    QUrl fileName;
    ~AddItemDialog();

private slots:
    void on_loadFileButton_pressed();

    void on_cancelButton_pressed();

    void on_applyButton_pressed();

    void on_comboBox_currentIndexChanged(int index);

    void on_checkBox_toggled(bool checked);

private:
    Ui::AddItemDialog *ui;
};

#endif // ADDITEMDIALOG_H
