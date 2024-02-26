/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDark_Mode;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *selectInputFileBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *inputFileLbl;
    QLineEdit *inputFileText;
    QGridLayout *gridLayout_2;
    QLineEdit *outputFileText;
    QLabel *outputFileLbl;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QPushButton *processDataBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *confirmDataChbx;
    QPushButton *generateDocumentBtn;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(652, 791);
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName("actionDark_Mode");
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 631, 201));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 611, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        selectInputFileBtn = new QPushButton(widget);
        selectInputFileBtn->setObjectName("selectInputFileBtn");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectInputFileBtn->sizePolicy().hasHeightForWidth());
        selectInputFileBtn->setSizePolicy(sizePolicy);

        gridLayout->addWidget(selectInputFileBtn, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputFileLbl = new QLabel(widget);
        inputFileLbl->setObjectName("inputFileLbl");

        horizontalLayout->addWidget(inputFileLbl);

        inputFileText = new QLineEdit(widget);
        inputFileText->setObjectName("inputFileText");
        inputFileText->setReadOnly(true);

        horizontalLayout->addWidget(inputFileText);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        outputFileText = new QLineEdit(widget);
        outputFileText->setObjectName("outputFileText");
        outputFileText->setReadOnly(false);

        gridLayout_2->addWidget(outputFileText, 0, 1, 1, 1);

        outputFileLbl = new QLabel(widget);
        outputFileLbl->setObjectName("outputFileLbl");

        gridLayout_2->addWidget(outputFileLbl, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 220, 631, 451));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 30, 611, 331));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 370, 611, 71));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        processDataBtn = new QPushButton(widget1);
        processDataBtn->setObjectName("processDataBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(processDataBtn->sizePolicy().hasHeightForWidth());
        processDataBtn->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(processDataBtn, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        confirmDataChbx = new QCheckBox(widget1);
        confirmDataChbx->setObjectName("confirmDataChbx");

        gridLayout_3->addWidget(confirmDataChbx, 0, 3, 1, 1);

        generateDocumentBtn = new QPushButton(centralwidget);
        generateDocumentBtn->setObjectName("generateDocumentBtn");
        generateDocumentBtn->setGeometry(QRect(160, 680, 331, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 652, 23));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionDark_Mode);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDark_Mode->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "File Settings", nullptr));
        selectInputFileBtn->setText(QCoreApplication::translate("MainWindow", "Select Input File", nullptr));
        inputFileLbl->setText(QCoreApplication::translate("MainWindow", "Input Filename:", nullptr));
        outputFileLbl->setText(QCoreApplication::translate("MainWindow", "Output Filename:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Process and Verfiy Data", nullptr));
        processDataBtn->setText(QCoreApplication::translate("MainWindow", "Process Input Data", nullptr));
        confirmDataChbx->setText(QCoreApplication::translate("MainWindow", "Confirm Data", nullptr));
        generateDocumentBtn->setText(QCoreApplication::translate("MainWindow", "Generate Document", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
