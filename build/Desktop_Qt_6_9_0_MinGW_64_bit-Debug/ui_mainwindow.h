/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelPicture;
    QPushButton *pushButton;
    QPushButton *ButtonResize1;
    QPushButton *ButtonResize2;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QLabel *ScalingLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelPicture = new QLabel(centralwidget);
        labelPicture->setObjectName("labelPicture");
        labelPicture->setGeometry(QRect(10, 10, 351, 281));
        labelPicture->setFrameShape(QFrame::Shape::Box);
        labelPicture->setFrameShadow(QFrame::Shadow::Plain);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 500, 161, 41));
        ButtonResize1 = new QPushButton(centralwidget);
        ButtonResize1->setObjectName("ButtonResize1");
        ButtonResize1->setGeometry(QRect(620, 460, 61, 24));
        ButtonResize2 = new QPushButton(centralwidget);
        ButtonResize2->setObjectName("ButtonResize2");
        ButtonResize2->setGeometry(QRect(700, 460, 75, 24));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(620, 310, 151, 24));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(620, 340, 151, 24));
        ScalingLabel = new QLabel(centralwidget);
        ScalingLabel->setObjectName("ScalingLabel");
        ScalingLabel->setGeometry(QRect(680, 440, 21, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelPicture->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        ButtonResize1->setText(QCoreApplication::translate("MainWindow", "resize x2", nullptr));
        ButtonResize2->setText(QCoreApplication::translate("MainWindow", "resize /2", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \320\261\321\203\321\204\320\265\321\200", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \320\261\321\203\321\204\320\265\321\200\320\260", nullptr));
        ScalingLabel->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
