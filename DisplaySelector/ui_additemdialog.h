/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QPushButton *loadFileButton;
    QTimeEdit *timeEdit_start;
    QTimeEdit *timeEdit_end;
    QLabel *startLabel;
    QLabel *endLabel;
    QGroupBox *previewBox;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QStringLiteral("AddItemDialog"));
        AddItemDialog->resize(400, 300);
        loadFileButton = new QPushButton(AddItemDialog);
        loadFileButton->setObjectName(QStringLiteral("loadFileButton"));
        loadFileButton->setGeometry(QRect(20, 30, 75, 23));
        timeEdit_start = new QTimeEdit(AddItemDialog);
        timeEdit_start->setObjectName(QStringLiteral("timeEdit_start"));
        timeEdit_start->setGeometry(QRect(250, 30, 118, 22));
        timeEdit_end = new QTimeEdit(AddItemDialog);
        timeEdit_end->setObjectName(QStringLiteral("timeEdit_end"));
        timeEdit_end->setGeometry(QRect(250, 60, 118, 22));
        startLabel = new QLabel(AddItemDialog);
        startLabel->setObjectName(QStringLiteral("startLabel"));
        startLabel->setGeometry(QRect(210, 30, 47, 13));
        endLabel = new QLabel(AddItemDialog);
        endLabel->setObjectName(QStringLiteral("endLabel"));
        endLabel->setGeometry(QRect(210, 60, 47, 13));
        previewBox = new QGroupBox(AddItemDialog);
        previewBox->setObjectName(QStringLiteral("previewBox"));
        previewBox->setGeometry(QRect(20, 100, 361, 151));
        cancelButton = new QPushButton(AddItemDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(300, 260, 75, 23));
        applyButton = new QPushButton(AddItemDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(220, 260, 75, 23));

        retranslateUi(AddItemDialog);

        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QApplication::translate("AddItemDialog", "Dialog", 0));
        loadFileButton->setText(QApplication::translate("AddItemDialog", "load file", 0));
        timeEdit_start->setDisplayFormat(QApplication::translate("AddItemDialog", "HH:mm:ss", 0));
        timeEdit_end->setDisplayFormat(QApplication::translate("AddItemDialog", "HH:mm:ss", 0));
        startLabel->setText(QApplication::translate("AddItemDialog", "Start", 0));
        endLabel->setText(QApplication::translate("AddItemDialog", "End", 0));
        previewBox->setTitle(QApplication::translate("AddItemDialog", "Preview", 0));
        cancelButton->setText(QApplication::translate("AddItemDialog", "Cancel", 0));
        applyButton->setText(QApplication::translate("AddItemDialog", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
