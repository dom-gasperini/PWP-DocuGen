/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *inputFileLbl;
    QLineEdit *inputFileText;
    QPushButton *selectInputFileBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *outputFileText;
    QLabel *outputFileLbl;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *processDataBtn;
    QPushButton *clearAllBtn;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *confirmDataChbx;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *generateDocumentBtn;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(571, 769);
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName("actionDark_Mode");
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 551, 181));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 531, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        inputFileLbl = new QLabel(layoutWidget);
        inputFileLbl->setObjectName("inputFileLbl");

        gridLayout->addWidget(inputFileLbl, 0, 0, 1, 1);

        inputFileText = new QLineEdit(layoutWidget);
        inputFileText->setObjectName("inputFileText");
        inputFileText->setReadOnly(true);

        gridLayout->addWidget(inputFileText, 0, 1, 1, 1);

        selectInputFileBtn = new QPushButton(layoutWidget);
        selectInputFileBtn->setObjectName("selectInputFileBtn");

        gridLayout->addWidget(selectInputFileBtn, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 120, 531, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        outputFileText = new QLineEdit(layoutWidget1);
        outputFileText->setObjectName("outputFileText");
        outputFileText->setReadOnly(false);

        gridLayout_2->addWidget(outputFileText, 0, 1, 1, 1);

        outputFileLbl = new QLabel(layoutWidget1);
        outputFileLbl->setObjectName("outputFileLbl");

        gridLayout_2->addWidget(outputFileLbl, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 200, 551, 401));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 30, 531, 281));
        widget = new QWidget(groupBox_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 320, 531, 71));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        processDataBtn = new QPushButton(widget);
        processDataBtn->setObjectName("processDataBtn");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(processDataBtn->sizePolicy().hasHeightForWidth());
        processDataBtn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(processDataBtn, 0, 2, 1, 1);

        clearAllBtn = new QPushButton(widget);
        clearAllBtn->setObjectName("clearAllBtn");
        sizePolicy.setHeightForWidth(clearAllBtn->sizePolicy().hasHeightForWidth());
        clearAllBtn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(clearAllBtn, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        confirmDataChbx = new QCheckBox(widget);
        confirmDataChbx->setObjectName("confirmDataChbx");

        gridLayout_3->addWidget(confirmDataChbx, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        generateDocumentBtn = new QPushButton(centralwidget);
        generateDocumentBtn->setObjectName("generateDocumentBtn");
        generateDocumentBtn->setGeometry(QRect(100, 610, 331, 101));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 571, 23));
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
        inputFileLbl->setText(QCoreApplication::translate("MainWindow", "Input Filename:", nullptr));
        selectInputFileBtn->setText(QCoreApplication::translate("MainWindow", "Select Input File", nullptr));
        outputFileLbl->setText(QCoreApplication::translate("MainWindow", "Output Filename:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Process and Verfiy Data", nullptr));
        processDataBtn->setText(QCoreApplication::translate("MainWindow", "Process Input Data", nullptr));
        clearAllBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
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
