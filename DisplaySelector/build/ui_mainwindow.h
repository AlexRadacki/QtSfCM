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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *displayInfoBox;
    QTableView *displayInfoTable;
    QListWidget *videoAdapterlist;
    QGroupBox *displaySelectorBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *displaySelectorLayout;
    QPushButton *testScreenButton;
    QGroupBox *videoBox;
    QLabel *fileNameLabel;
    QGroupBox *eventListBox;
    QTableView *eventListTable;
    QGroupBox *timeLineBox;
    QSlider *horizontalSlider;
    QLabel *currentTimelabel;
    QLabel *endTimelabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1041, 678);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        displayInfoBox = new QGroupBox(centralWidget);
        displayInfoBox->setObjectName(QStringLiteral("displayInfoBox"));
        displayInfoBox->setGeometry(QRect(10, 10, 321, 521));
        displayInfoTable = new QTableView(displayInfoBox);
        displayInfoTable->setObjectName(QStringLiteral("displayInfoTable"));
        displayInfoTable->setGeometry(QRect(10, 230, 301, 271));
        displayInfoTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        videoAdapterlist = new QListWidget(displayInfoBox);
        videoAdapterlist->setObjectName(QStringLiteral("videoAdapterlist"));
        videoAdapterlist->setGeometry(QRect(10, 20, 301, 191));
        displaySelectorBox = new QGroupBox(centralWidget);
        displaySelectorBox->setObjectName(QStringLiteral("displaySelectorBox"));
        displaySelectorBox->setGeometry(QRect(350, 10, 181, 221));
        verticalLayoutWidget = new QWidget(displaySelectorBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 160, 191));
        displaySelectorLayout = new QVBoxLayout(verticalLayoutWidget);
        displaySelectorLayout->setSpacing(6);
        displaySelectorLayout->setContentsMargins(11, 11, 11, 11);
        displaySelectorLayout->setObjectName(QStringLiteral("displaySelectorLayout"));
        displaySelectorLayout->setSizeConstraint(QLayout::SetMinimumSize);
        displaySelectorLayout->setContentsMargins(0, 0, 0, 0);
        testScreenButton = new QPushButton(centralWidget);
        testScreenButton->setObjectName(QStringLiteral("testScreenButton"));
        testScreenButton->setGeometry(QRect(350, 240, 331, 31));
        videoBox = new QGroupBox(centralWidget);
        videoBox->setObjectName(QStringLiteral("videoBox"));
        videoBox->setGeometry(QRect(350, 290, 331, 211));
        fileNameLabel = new QLabel(centralWidget);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));
        fileNameLabel->setGeometry(QRect(350, 510, 331, 16));
        eventListBox = new QGroupBox(centralWidget);
        eventListBox->setObjectName(QStringLiteral("eventListBox"));
        eventListBox->setGeometry(QRect(689, 10, 341, 491));
        eventListTable = new QTableView(eventListBox);
        eventListTable->setObjectName(QStringLiteral("eventListTable"));
        eventListTable->setGeometry(QRect(10, 20, 321, 461));
        timeLineBox = new QGroupBox(centralWidget);
        timeLineBox->setObjectName(QStringLiteral("timeLineBox"));
        timeLineBox->setGeometry(QRect(10, 540, 1021, 80));
        horizontalSlider = new QSlider(timeLineBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 50, 1001, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        currentTimelabel = new QLabel(timeLineBox);
        currentTimelabel->setObjectName(QStringLiteral("currentTimelabel"));
        currentTimelabel->setGeometry(QRect(430, 20, 71, 16));
        endTimelabel = new QLabel(timeLineBox);
        endTimelabel->setObjectName(QStringLiteral("endTimelabel"));
        endTimelabel->setGeometry(QRect(860, 20, 61, 16));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1041, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu->menuAction());
        menu->addAction(actionAbout);
        menuFile->addAction(actionLoad);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        videoAdapterlist->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load file...", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        displayInfoBox->setTitle(QApplication::translate("MainWindow", "Display Information", 0));
        displaySelectorBox->setTitle(QApplication::translate("MainWindow", "Select Output", 0));
        testScreenButton->setText(QApplication::translate("MainWindow", "Test Screen(s)", 0));
        videoBox->setTitle(QApplication::translate("MainWindow", "Preview", 0));
        fileNameLabel->setText(QApplication::translate("MainWindow", "No file", 0));
        eventListBox->setTitle(QApplication::translate("MainWindow", "Events", 0));
        timeLineBox->setTitle(QApplication::translate("MainWindow", "Timeline", 0));
        currentTimelabel->setText(QApplication::translate("MainWindow", "Current Time:", 0));
        endTimelabel->setText(QApplication::translate("MainWindow", "End Time:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "?", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
