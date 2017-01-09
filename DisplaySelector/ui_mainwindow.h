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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
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
    QTableWidget *displayInfoTable;
    QListWidget *videoAdapterlist;
    QGroupBox *displaySelectorBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *displaySelectorLayout;
    QPushButton *testScreenButton;
    QGroupBox *videoBox;
    QLabel *fileNameLabel;
    QGroupBox *eventListBox;
    QTableWidget *eventListTable;
    QGroupBox *timeLineBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QTimeEdit *timeEdit;
    QCheckBox *checkBox;
    QGroupBox *timerDisplayBox;
    QLCDNumber *currentTimeMinutes;
    QLCDNumber *currentTimeSeconds;
    QLCDNumber *currentTimeSeconds_2;
    QLabel *label_2;
    QGroupBox *addEventBox;
    QPushButton *addImageButton;
    QPushButton *addVideoButton;
    QPushButton *addSoundButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1041, 762);
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
        displayInfoTable = new QTableWidget(displayInfoBox);
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
        displayInfoTable->setEnabled(true);
        displayInfoTable->setGeometry(QRect(10, 230, 301, 271));
        displayInfoTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        displayInfoTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        displayInfoTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        displayInfoTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        displayInfoTable->setTabKeyNavigation(false);
        displayInfoTable->setSelectionMode(QAbstractItemView::NoSelection);
        displayInfoTable->setCornerButtonEnabled(false);
        displayInfoTable->horizontalHeader()->setVisible(true);
        displayInfoTable->horizontalHeader()->setHighlightSections(false);
        displayInfoTable->verticalHeader()->setHighlightSections(false);
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
        eventListTable = new QTableWidget(eventListBox);
        if (eventListTable->columnCount() < 4)
            eventListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        eventListTable->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        if (eventListTable->rowCount() < 1)
            eventListTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        eventListTable->setVerticalHeaderItem(0, __qtablewidgetitem13);
        eventListTable->setObjectName(QStringLiteral("eventListTable"));
        eventListTable->setGeometry(QRect(10, 20, 321, 461));
        eventListTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        eventListTable->setRowCount(1);
        eventListTable->horizontalHeader()->setDefaultSectionSize(76);
        timeLineBox = new QGroupBox(centralWidget);
        timeLineBox->setObjectName(QStringLiteral("timeLineBox"));
        timeLineBox->setGeometry(QRect(10, 540, 1021, 161));
        horizontalSlider = new QSlider(timeLineBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 130, 1001, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(timeLineBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(730, 20, 61, 16));
        timeEdit = new QTimeEdit(timeLineBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(780, 20, 118, 22));
        checkBox = new QCheckBox(timeLineBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(940, 20, 61, 17));
        timerDisplayBox = new QGroupBox(timeLineBox);
        timerDisplayBox->setObjectName(QStringLiteral("timerDisplayBox"));
        timerDisplayBox->setGeometry(QRect(260, 19, 421, 91));
        currentTimeMinutes = new QLCDNumber(timerDisplayBox);
        currentTimeMinutes->setObjectName(QStringLiteral("currentTimeMinutes"));
        currentTimeMinutes->setGeometry(QRect(110, 30, 71, 41));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        currentTimeMinutes->setFont(font);
        currentTimeMinutes->setAutoFillBackground(false);
        currentTimeMinutes->setFrameShape(QFrame::NoFrame);
        currentTimeMinutes->setFrameShadow(QFrame::Plain);
        currentTimeMinutes->setSmallDecimalPoint(true);
        currentTimeMinutes->setDigitCount(2);
        currentTimeMinutes->setMode(QLCDNumber::Dec);
        currentTimeMinutes->setSegmentStyle(QLCDNumber::Flat);
        currentTimeMinutes->setProperty("value", QVariant(88));
        currentTimeMinutes->setProperty("intValue", QVariant(88));
        currentTimeSeconds = new QLCDNumber(timerDisplayBox);
        currentTimeSeconds->setObjectName(QStringLiteral("currentTimeSeconds"));
        currentTimeSeconds->setGeometry(QRect(170, 30, 81, 41));
        currentTimeSeconds->setFont(font);
        currentTimeSeconds->setAutoFillBackground(false);
        currentTimeSeconds->setFrameShape(QFrame::NoFrame);
        currentTimeSeconds->setFrameShadow(QFrame::Plain);
        currentTimeSeconds->setSmallDecimalPoint(true);
        currentTimeSeconds->setDigitCount(2);
        currentTimeSeconds->setMode(QLCDNumber::Dec);
        currentTimeSeconds->setSegmentStyle(QLCDNumber::Flat);
        currentTimeSeconds->setProperty("value", QVariant(88));
        currentTimeSeconds->setProperty("intValue", QVariant(88));
        currentTimeSeconds_2 = new QLCDNumber(timerDisplayBox);
        currentTimeSeconds_2->setObjectName(QStringLiteral("currentTimeSeconds_2"));
        currentTimeSeconds_2->setGeometry(QRect(240, 30, 81, 41));
        currentTimeSeconds_2->setFont(font);
        currentTimeSeconds_2->setAutoFillBackground(false);
        currentTimeSeconds_2->setFrameShape(QFrame::NoFrame);
        currentTimeSeconds_2->setFrameShadow(QFrame::Plain);
        currentTimeSeconds_2->setSmallDecimalPoint(true);
        currentTimeSeconds_2->setDigitCount(3);
        currentTimeSeconds_2->setMode(QLCDNumber::Dec);
        currentTimeSeconds_2->setSegmentStyle(QLCDNumber::Flat);
        currentTimeSeconds_2->setProperty("value", QVariant(888));
        currentTimeSeconds_2->setProperty("intValue", QVariant(888));
        label_2 = new QLabel(timerDisplayBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 10, 101, 71));
        QFont font1;
        font1.setPointSize(26);
        label_2->setFont(font1);
        label_2->raise();
        currentTimeMinutes->raise();
        currentTimeSeconds->raise();
        currentTimeSeconds_2->raise();
        timerDisplayBox->raise();
        horizontalSlider->raise();
        label->raise();
        timeEdit->raise();
        checkBox->raise();
        addEventBox = new QGroupBox(centralWidget);
        addEventBox->setObjectName(QStringLiteral("addEventBox"));
        addEventBox->setGeometry(QRect(540, 10, 141, 221));
        addImageButton = new QPushButton(addEventBox);
        addImageButton->setObjectName(QStringLiteral("addImageButton"));
        addImageButton->setGeometry(QRect(10, 30, 121, 23));
        addVideoButton = new QPushButton(addEventBox);
        addVideoButton->setObjectName(QStringLiteral("addVideoButton"));
        addVideoButton->setGeometry(QRect(10, 60, 121, 23));
        addSoundButton = new QPushButton(addEventBox);
        addSoundButton->setObjectName(QStringLiteral("addSoundButton"));
        addSoundButton->setGeometry(QRect(10, 90, 121, 23));
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
        QTableWidgetItem *___qtablewidgetitem = displayInfoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Details", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayInfoTable->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayInfoTable->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "X", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayInfoTable->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Y", 0));
        QTableWidgetItem *___qtablewidgetitem4 = displayInfoTable->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Width", 0));
        QTableWidgetItem *___qtablewidgetitem5 = displayInfoTable->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Height", 0));
        QTableWidgetItem *___qtablewidgetitem6 = displayInfoTable->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Refresh rate", 0));
        QTableWidgetItem *___qtablewidgetitem7 = displayInfoTable->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "DPI", 0));
        QTableWidgetItem *___qtablewidgetitem8 = displayInfoTable->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Depth", 0));
        displaySelectorBox->setTitle(QApplication::translate("MainWindow", "Select Output", 0));
        testScreenButton->setText(QApplication::translate("MainWindow", "Test Screen(s)", 0));
        videoBox->setTitle(QApplication::translate("MainWindow", "Preview", 0));
        fileNameLabel->setText(QApplication::translate("MainWindow", "No file", 0));
        eventListBox->setTitle(QApplication::translate("MainWindow", "Events", 0));
        QTableWidgetItem *___qtablewidgetitem9 = eventListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Event", 0));
        QTableWidgetItem *___qtablewidgetitem10 = eventListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Start", 0));
        QTableWidgetItem *___qtablewidgetitem11 = eventListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "End", 0));
        QTableWidgetItem *___qtablewidgetitem12 = eventListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem13 = eventListTable->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "1", 0));
        timeLineBox->setTitle(QApplication::translate("MainWindow", "Timeline", 0));
        label->setText(QApplication::translate("MainWindow", "End Time:", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Loop", 0));
        timerDisplayBox->setTitle(QApplication::translate("MainWindow", "Time", 0));
        label_2->setText(QApplication::translate("MainWindow", ":     :", 0));
        addEventBox->setTitle(QApplication::translate("MainWindow", "Add Media", 0));
        addImageButton->setText(QApplication::translate("MainWindow", "Add Image", 0));
        addVideoButton->setText(QApplication::translate("MainWindow", "Add Video", 0));
        addSoundButton->setText(QApplication::translate("MainWindow", "Add Sound", 0));
        menu->setTitle(QApplication::translate("MainWindow", "?", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
