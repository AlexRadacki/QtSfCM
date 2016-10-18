/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <myglwidget.h>

QT_BEGIN_NAMESPACE

class Ui_TestWindow
{
public:
    QWidget *mainWindow;
    MyGLWidget *myglwidget;
    QPushButton *pushButton_Color;

    void setupUi(QMainWindow *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QStringLiteral("TestWindow"));
        TestWindow->resize(460, 471);
        mainWindow = new QWidget(TestWindow);
        mainWindow->setObjectName(QStringLiteral("mainWindow"));
        myglwidget = new MyGLWidget(mainWindow);
        myglwidget->setObjectName(QStringLiteral("myglwidget"));
        myglwidget->setGeometry(QRect(30, 20, 400, 400));
        pushButton_Color = new QPushButton(mainWindow);
        pushButton_Color->setObjectName(QStringLiteral("pushButton_Color"));
        pushButton_Color->setGeometry(QRect(50, 430, 361, 23));
        TestWindow->setCentralWidget(mainWindow);

        retranslateUi(TestWindow);

        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestWindow)
    {
        TestWindow->setWindowTitle(QApplication::translate("TestWindow", "TestWindow", 0));
        pushButton_Color->setText(QApplication::translate("TestWindow", "Color", 0));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
