/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionSetup_Canvas;
    QAction *actionSave;
    QAction *actionImage;
    QAction *actionVideo;
    QAction *actionSound;
    QAction *actionWebcam;
    QWidget *centralWidget;
    QGroupBox *videoBox;
    QGroupBox *eventListBox;
    QTableWidget *eventListTable;
    QGroupBox *timeLineBox;
    QLabel *label;
    QTimeEdit *timeEdit;
    QCheckBox *checkBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *stop_Button;
    QPushButton *backward_Button;
    QPushButton *play_Button;
    QPushButton *forward_Button;
    QPushButton *pause_Button;
    QLabel *time_label;
    QGroupBox *addEventBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addImageButton;
    QPushButton *addVideoButton;
    QPushButton *addSoundButton;
    QSlider *progressBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuFile;
    QMenu *menuSettings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(934, 630);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSetup_Canvas = new QAction(MainWindow);
        actionSetup_Canvas->setObjectName(QStringLiteral("actionSetup_Canvas"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionImage = new QAction(MainWindow);
        actionImage->setObjectName(QStringLiteral("actionImage"));
        actionVideo = new QAction(MainWindow);
        actionVideo->setObjectName(QStringLiteral("actionVideo"));
        actionSound = new QAction(MainWindow);
        actionSound->setObjectName(QStringLiteral("actionSound"));
        actionWebcam = new QAction(MainWindow);
        actionWebcam->setObjectName(QStringLiteral("actionWebcam"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        videoBox = new QGroupBox(centralWidget);
        videoBox->setObjectName(QStringLiteral("videoBox"));
        videoBox->setGeometry(QRect(360, 10, 561, 331));
        eventListBox = new QGroupBox(centralWidget);
        eventListBox->setObjectName(QStringLiteral("eventListBox"));
        eventListBox->setGeometry(QRect(10, 80, 341, 431));
        eventListTable = new QTableWidget(eventListBox);
        if (eventListTable->columnCount() < 4)
            eventListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        eventListTable->setObjectName(QStringLiteral("eventListTable"));
        eventListTable->setGeometry(QRect(10, 20, 321, 401));
        eventListTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        eventListTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        eventListTable->setRowCount(0);
        eventListTable->horizontalHeader()->setDefaultSectionSize(76);
        timeLineBox = new QGroupBox(centralWidget);
        timeLineBox->setObjectName(QStringLiteral("timeLineBox"));
        timeLineBox->setGeometry(QRect(360, 350, 441, 161));
        label = new QLabel(timeLineBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 61, 16));
        timeEdit = new QTimeEdit(timeLineBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(10, 120, 81, 22));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setTime(QTime(0, 5, 0));
        checkBox = new QCheckBox(timeLineBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(380, 120, 51, 17));
        horizontalLayoutWidget = new QWidget(timeLineBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 100, 331, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stop_Button = new QPushButton(horizontalLayoutWidget);
        stop_Button->setObjectName(QStringLiteral("stop_Button"));

        horizontalLayout->addWidget(stop_Button);

        backward_Button = new QPushButton(horizontalLayoutWidget);
        backward_Button->setObjectName(QStringLiteral("backward_Button"));

        horizontalLayout->addWidget(backward_Button);

        play_Button = new QPushButton(horizontalLayoutWidget);
        play_Button->setObjectName(QStringLiteral("play_Button"));

        horizontalLayout->addWidget(play_Button);

        forward_Button = new QPushButton(horizontalLayoutWidget);
        forward_Button->setObjectName(QStringLiteral("forward_Button"));

        horizontalLayout->addWidget(forward_Button);

        pause_Button = new QPushButton(horizontalLayoutWidget);
        pause_Button->setObjectName(QStringLiteral("pause_Button"));

        horizontalLayout->addWidget(pause_Button);

        time_label = new QLabel(timeLineBox);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(10, 30, 421, 61));
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        time_label->setPalette(palette);
        QFont font;
        font.setPointSize(22);
        time_label->setFont(font);
        time_label->setAutoFillBackground(true);
        time_label->setTextFormat(Qt::PlainText);
        time_label->setAlignment(Qt::AlignCenter);
        addEventBox = new QGroupBox(centralWidget);
        addEventBox->setObjectName(QStringLiteral("addEventBox"));
        addEventBox->setGeometry(QRect(10, 10, 341, 61));
        horizontalLayoutWidget_2 = new QWidget(addEventBox);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 321, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addImageButton = new QPushButton(horizontalLayoutWidget_2);
        addImageButton->setObjectName(QStringLiteral("addImageButton"));

        horizontalLayout_2->addWidget(addImageButton);

        addVideoButton = new QPushButton(horizontalLayoutWidget_2);
        addVideoButton->setObjectName(QStringLiteral("addVideoButton"));

        horizontalLayout_2->addWidget(addVideoButton);

        addSoundButton = new QPushButton(horizontalLayoutWidget_2);
        addSoundButton->setObjectName(QStringLiteral("addSoundButton"));

        horizontalLayout_2->addWidget(addSoundButton);

        progressBar = new QSlider(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 550, 911, 22));
        progressBar->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 934, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(actionAbout);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuSettings->addAction(actionSetup_Canvas);
        menuSettings->addAction(actionWebcam);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionSetup_Canvas->setText(QApplication::translate("MainWindow", "Setup Canvas...", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save...", 0));
        actionImage->setText(QApplication::translate("MainWindow", "Image...", 0));
        actionVideo->setText(QApplication::translate("MainWindow", "Video...", 0));
        actionSound->setText(QApplication::translate("MainWindow", "Sound...", 0));
        actionWebcam->setText(QApplication::translate("MainWindow", "Webcam...", 0));
        videoBox->setTitle(QApplication::translate("MainWindow", "Preview", 0));
        eventListBox->setTitle(QApplication::translate("MainWindow", "Events", 0));
        QTableWidgetItem *___qtablewidgetitem = eventListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Event", 0));
        QTableWidgetItem *___qtablewidgetitem1 = eventListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Start", 0));
        QTableWidgetItem *___qtablewidgetitem2 = eventListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "End", 0));
        QTableWidgetItem *___qtablewidgetitem3 = eventListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Type", 0));
        timeLineBox->setTitle(QApplication::translate("MainWindow", "Timeline", 0));
        label->setText(QApplication::translate("MainWindow", "End Time:", 0));
        timeEdit->setDisplayFormat(QApplication::translate("MainWindow", "HH:mm:ss", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Loop", 0));
        stop_Button->setText(QApplication::translate("MainWindow", "[ ]", 0));
        backward_Button->setText(QApplication::translate("MainWindow", "<<", 0));
        play_Button->setText(QApplication::translate("MainWindow", ">", 0));
        forward_Button->setText(QApplication::translate("MainWindow", ">>", 0));
        pause_Button->setText(QApplication::translate("MainWindow", "I I", 0));
        time_label->setText(QApplication::translate("MainWindow", "00:00:00:000", 0));
        addEventBox->setTitle(QApplication::translate("MainWindow", "Add Media", 0));
        addImageButton->setText(QApplication::translate("MainWindow", "Add Image", 0));
        addVideoButton->setText(QApplication::translate("MainWindow", "Add Video", 0));
        addSoundButton->setText(QApplication::translate("MainWindow", "Add Sound", 0));
        menu->setTitle(QApplication::translate("MainWindow", "?", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
