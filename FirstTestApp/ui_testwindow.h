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
#include <QtWidgets/QLabel>
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
    QLabel *label_fps;
    QPushButton *pushButton_Color;

    void setupUi(QMainWindow *TestWindow)
    {
        if (TestWindow->objectName().isEmpty())
            TestWindow->setObjectName(QStringLiteral("TestWindow"));
        TestWindow->resize(441, 465);
        mainWindow = new QWidget(TestWindow);
        mainWindow->setObjectName(QStringLiteral("mainWindow"));
        myglwidget = new MyGLWidget(mainWindow);
        myglwidget->setObjectName(QStringLiteral("myglwidget"));
        myglwidget->setGeometry(QRect(20, 20, 400, 400));
        label_fps = new QLabel(myglwidget);
        label_fps->setObjectName(QStringLiteral("label_fps"));
        label_fps->setGeometry(QRect(269, 10, 121, 31));
        QPalette palette;
        QBrush brush(QColor(85, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_fps->setPalette(palette);
        QFont font;
        font.setPointSize(18);
        label_fps->setFont(font);
        label_fps->setAutoFillBackground(true);
        label_fps->setMidLineWidth(3);
        label_fps->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_Color = new QPushButton(mainWindow);
        pushButton_Color->setObjectName(QStringLiteral("pushButton_Color"));
        pushButton_Color->setGeometry(QRect(40, 430, 361, 23));
        TestWindow->setCentralWidget(mainWindow);

        retranslateUi(TestWindow);

        QMetaObject::connectSlotsByName(TestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestWindow)
    {
        TestWindow->setWindowTitle(QApplication::translate("TestWindow", "TestWindow", 0));
        label_fps->setText(QApplication::translate("TestWindow", "FPS", 0));
        pushButton_Color->setText(QApplication::translate("TestWindow", "Color", 0));
    } // retranslateUi

};

namespace Ui {
    class TestWindow: public Ui_TestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H
