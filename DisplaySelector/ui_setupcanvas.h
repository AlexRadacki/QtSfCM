/********************************************************************************
** Form generated from reading UI file 'setupcanvas.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPCANVAS_H
#define UI_SETUPCANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupCanvas
{
public:
    QTableWidget *displayInfoTable;
    QListWidget *videoAdapterlist;
    QPushButton *testScreenButton;
    QGroupBox *selectOutputBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *canvasXlabel;
    QLabel *canvasYlabel;
    QGroupBox *canvaspreviewBox;

    void setupUi(QDialog *SetupCanvas)
    {
        if (SetupCanvas->objectName().isEmpty())
            SetupCanvas->setObjectName(QStringLiteral("SetupCanvas"));
        SetupCanvas->resize(799, 569);
        displayInfoTable = new QTableWidget(SetupCanvas);
        if (displayInfoTable->columnCount() < 1)
            displayInfoTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayInfoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (displayInfoTable->rowCount() < 8)
            displayInfoTable->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        displayInfoTable->setVerticalHeaderItem(7, __qtablewidgetitem8);
        displayInfoTable->setObjectName(QStringLiteral("displayInfoTable"));
        displayInfoTable->setGeometry(QRect(10, 270, 281, 281));
        videoAdapterlist = new QListWidget(SetupCanvas);
        videoAdapterlist->setObjectName(QStringLiteral("videoAdapterlist"));
        videoAdapterlist->setGeometry(QRect(10, 41, 281, 221));
        testScreenButton = new QPushButton(SetupCanvas);
        testScreenButton->setObjectName(QStringLiteral("testScreenButton"));
        testScreenButton->setGeometry(QRect(510, 40, 171, 23));
        selectOutputBox = new QGroupBox(SetupCanvas);
        selectOutputBox->setObjectName(QStringLiteral("selectOutputBox"));
        selectOutputBox->setGeometry(QRect(310, 30, 171, 231));
        verticalLayoutWidget = new QWidget(selectOutputBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 151, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(SetupCanvas);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(310, 530, 75, 23));
        cancelButton = new QPushButton(SetupCanvas);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(400, 530, 75, 23));
        canvasXlabel = new QLabel(SetupCanvas);
        canvasXlabel->setObjectName(QStringLiteral("canvasXlabel"));
        canvasXlabel->setGeometry(QRect(510, 90, 121, 16));
        canvasYlabel = new QLabel(SetupCanvas);
        canvasYlabel->setObjectName(QStringLiteral("canvasYlabel"));
        canvasYlabel->setGeometry(QRect(510, 130, 121, 16));
        canvaspreviewBox = new QGroupBox(SetupCanvas);
        canvaspreviewBox->setObjectName(QStringLiteral("canvaspreviewBox"));
        canvaspreviewBox->setGeometry(QRect(310, 280, 471, 241));

        retranslateUi(SetupCanvas);

        QMetaObject::connectSlotsByName(SetupCanvas);
    } // setupUi

    void retranslateUi(QDialog *SetupCanvas)
    {
        SetupCanvas->setWindowTitle(QApplication::translate("SetupCanvas", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = displayInfoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SetupCanvas", "Details", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayInfoTable->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("SetupCanvas", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayInfoTable->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("SetupCanvas", "X", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayInfoTable->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("SetupCanvas", "Y", 0));
        QTableWidgetItem *___qtablewidgetitem4 = displayInfoTable->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("SetupCanvas", "Width", 0));
        QTableWidgetItem *___qtablewidgetitem5 = displayInfoTable->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("SetupCanvas", "Height", 0));
        QTableWidgetItem *___qtablewidgetitem6 = displayInfoTable->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("SetupCanvas", "Refresh rate", 0));
        QTableWidgetItem *___qtablewidgetitem7 = displayInfoTable->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("SetupCanvas", "DPI", 0));
        QTableWidgetItem *___qtablewidgetitem8 = displayInfoTable->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("SetupCanvas", "Depth", 0));
        testScreenButton->setText(QApplication::translate("SetupCanvas", "Test Screen(s)", 0));
        selectOutputBox->setTitle(QApplication::translate("SetupCanvas", "Select Output", 0));
        okButton->setText(QApplication::translate("SetupCanvas", "Ok", 0));
        cancelButton->setText(QApplication::translate("SetupCanvas", "Cancel", 0));
        canvasXlabel->setText(QApplication::translate("SetupCanvas", "Canvas X:", 0));
        canvasYlabel->setText(QApplication::translate("SetupCanvas", "Canvas Y:", 0));
        canvaspreviewBox->setTitle(QApplication::translate("SetupCanvas", "Canvas Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class SetupCanvas: public Ui_SetupCanvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPCANVAS_H
