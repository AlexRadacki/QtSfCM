/********************************************************************************
** Form generated from reading UI file 'webcampreview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBCAMPREVIEW_H
#define UI_WEBCAMPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_WebcamPreview
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;

    void setupUi(QDialog *WebcamPreview)
    {
        if (WebcamPreview->objectName().isEmpty())
            WebcamPreview->setObjectName(QStringLiteral("WebcamPreview"));
        WebcamPreview->resize(400, 366);
        buttonBox = new QDialogButtonBox(WebcamPreview);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(WebcamPreview);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 381, 301));

        retranslateUi(WebcamPreview);
        QObject::connect(buttonBox, SIGNAL(accepted()), WebcamPreview, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WebcamPreview, SLOT(reject()));

        QMetaObject::connectSlotsByName(WebcamPreview);
    } // setupUi

    void retranslateUi(QDialog *WebcamPreview)
    {
        WebcamPreview->setWindowTitle(QApplication::translate("WebcamPreview", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("WebcamPreview", "Webcam ", 0));
    } // retranslateUi

};

namespace Ui {
    class WebcamPreview: public Ui_WebcamPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBCAMPREVIEW_H
