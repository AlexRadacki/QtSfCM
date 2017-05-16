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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QLineEdit *nameLineEdit;
    QLabel *label;
    QGroupBox *displayOptionsBox;
    QComboBox *comboBox;
    QLabel *label_2;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_Alpha;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QStringLiteral("AddItemDialog"));
        AddItemDialog->resize(658, 300);
        loadFileButton = new QPushButton(AddItemDialog);
        loadFileButton->setObjectName(QStringLiteral("loadFileButton"));
        loadFileButton->setGeometry(QRect(20, 30, 171, 23));
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
        nameLineEdit = new QLineEdit(AddItemDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(80, 70, 113, 20));
        label = new QLabel(AddItemDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 47, 13));
        displayOptionsBox = new QGroupBox(AddItemDialog);
        displayOptionsBox->setObjectName(QStringLiteral("displayOptionsBox"));
        displayOptionsBox->setGeometry(QRect(390, 20, 221, 231));
        comboBox = new QComboBox(displayOptionsBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 171, 22));
        label_2 = new QLabel(displayOptionsBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 16));
        checkBox = new QCheckBox(displayOptionsBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 90, 70, 17));
        groupBox = new QGroupBox(displayOptionsBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 201, 101));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 47, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 47, 13));
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(31, 40, 51, 22));
        spinBox->setMaximum(9999);
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(31, 70, 51, 22));
        spinBox_2->setMaximum(9999);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 40, 47, 13));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 70, 47, 13));
        spinBox_3 = new QSpinBox(groupBox);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(141, 40, 51, 22));
        spinBox_3->setMaximum(9999);
        spinBox_3->setValue(0);
        spinBox_4 = new QSpinBox(groupBox);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(141, 70, 51, 22));
        spinBox_4->setMaximum(9999);
        spinBox_Alpha = new QSpinBox(displayOptionsBox);
        spinBox_Alpha->setObjectName(QStringLiteral("spinBox_Alpha"));
        spinBox_Alpha->setGeometry(QRect(131, 90, 51, 22));
        spinBox_Alpha->setMaximum(100);

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
        label->setText(QApplication::translate("AddItemDialog", "Name:", 0));
        displayOptionsBox->setTitle(QApplication::translate("AddItemDialog", "Display options", 0));
        label_2->setText(QApplication::translate("AddItemDialog", "Display on", 0));
        checkBox->setText(QApplication::translate("AddItemDialog", "Fullscreen", 0));
        groupBox->setTitle(QApplication::translate("AddItemDialog", "Rect", 0));
        label_3->setText(QApplication::translate("AddItemDialog", "X", 0));
        label_4->setText(QApplication::translate("AddItemDialog", "Y", 0));
        label_5->setText(QApplication::translate("AddItemDialog", "Width:", 0));
        label_6->setText(QApplication::translate("AddItemDialog", "Height:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
