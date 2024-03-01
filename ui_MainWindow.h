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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDark_Mode;
    QAction *actionAbout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QLabel *nameLbl;
    QLineEdit *nameText;
    QLabel *currentDateLbl;
    QLineEdit *currentDateText;
    QLabel *estStartDateLbl;
    QLineEdit *estStartDateText;
    QLabel *customerAddressLbl;
    QLineEdit *customerAddressText;
    QGroupBox *groupBox_4;
    QFrame *line;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *titleLbl;
    QLineEdit *titleText;
    QDoubleSpinBox *numManHoursSbx;
    QLabel *numPaintersLbl;
    QLabel *billingPriceLbl;
    QDoubleSpinBox *estSuppliesCostSbx;
    QSpinBox *numPaintersSbx;
    QLabel *numManHoursLbl;
    QDoubleSpinBox *billingPriceSbx;
    QLabel *estSuppliesCostLbl;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QTextEdit *excludedAreasText;
    QTextEdit *includedAreasText;
    QLabel *notesLbl;
    QLabel *includedAreasLbl;
    QTextEdit *notesText;
    QLabel *excludedAreasLbl;
    QLabel *expectedSuppliesLbl;
    QTextEdit *expectedSuppliesText;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_8;
    QLabel *numSectionsLbl;
    QSpinBox *numSectionsSbx;
    QLabel *currentSectionLbl;
    QSpinBox *currentSectionSbx;
    QGridLayout *gridLayout_9;
    QPushButton *nextSectionBtn;
    QPushButton *previousSectionBtn;
    QGroupBox *groupBox_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *outputFileLblInput;
    QLineEdit *outputFileTextInput;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *generateDocumentBtnInput;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *selectInputFileBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *inputFileLbl;
    QLineEdit *inputFileText;
    QGridLayout *gridLayout_2;
    QLineEdit *outputFileTextImport;
    QLabel *outputFileLbl;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidget;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_3;
    QPushButton *processDataBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *confirmDataChbx;
    QPushButton *generateDocumentBtnImport;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 850);
        MainWindow->setMinimumSize(QSize(700, 850));
        MainWindow->setMaximumSize(QSize(700, 850));
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName("actionDark_Mode");
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 681, 791));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 10, 661, 181));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 641, 141));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        nameLbl = new QLabel(layoutWidget);
        nameLbl->setObjectName("nameLbl");

        gridLayout_7->addWidget(nameLbl, 0, 0, 1, 1);

        nameText = new QLineEdit(layoutWidget);
        nameText->setObjectName("nameText");

        gridLayout_7->addWidget(nameText, 0, 1, 1, 1);

        currentDateLbl = new QLabel(layoutWidget);
        currentDateLbl->setObjectName("currentDateLbl");

        gridLayout_7->addWidget(currentDateLbl, 1, 0, 1, 1);

        currentDateText = new QLineEdit(layoutWidget);
        currentDateText->setObjectName("currentDateText");

        gridLayout_7->addWidget(currentDateText, 1, 1, 1, 1);

        estStartDateLbl = new QLabel(layoutWidget);
        estStartDateLbl->setObjectName("estStartDateLbl");

        gridLayout_7->addWidget(estStartDateLbl, 2, 0, 1, 1);

        estStartDateText = new QLineEdit(layoutWidget);
        estStartDateText->setObjectName("estStartDateText");

        gridLayout_7->addWidget(estStartDateText, 2, 1, 1, 1);

        customerAddressLbl = new QLabel(layoutWidget);
        customerAddressLbl->setObjectName("customerAddressLbl");

        gridLayout_7->addWidget(customerAddressLbl, 3, 0, 1, 1);

        customerAddressText = new QLineEdit(layoutWidget);
        customerAddressText->setObjectName("customerAddressText");

        gridLayout_7->addWidget(customerAddressText, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 200, 661, 431));
        line = new QFrame(groupBox_4);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 100, 611, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 120, 641, 71));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        titleLbl = new QLabel(layoutWidget1);
        titleLbl->setObjectName("titleLbl");

        gridLayout_4->addWidget(titleLbl, 0, 0, 1, 1);

        titleText = new QLineEdit(layoutWidget1);
        titleText->setObjectName("titleText");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleText->sizePolicy().hasHeightForWidth());
        titleText->setSizePolicy(sizePolicy);
        titleText->setMinimumSize(QSize(250, 0));

        gridLayout_4->addWidget(titleText, 0, 1, 1, 4);

        numManHoursSbx = new QDoubleSpinBox(layoutWidget1);
        numManHoursSbx->setObjectName("numManHoursSbx");
        numManHoursSbx->setMaximum(9999.000000000000000);

        gridLayout_4->addWidget(numManHoursSbx, 0, 8, 1, 1);

        numPaintersLbl = new QLabel(layoutWidget1);
        numPaintersLbl->setObjectName("numPaintersLbl");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(numPaintersLbl->sizePolicy().hasHeightForWidth());
        numPaintersLbl->setSizePolicy(sizePolicy1);
        numPaintersLbl->setMinimumSize(QSize(80, 0));
        numPaintersLbl->setMaximumSize(QSize(85, 16777215));

        gridLayout_4->addWidget(numPaintersLbl, 1, 7, 1, 1);

        billingPriceLbl = new QLabel(layoutWidget1);
        billingPriceLbl->setObjectName("billingPriceLbl");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(billingPriceLbl->sizePolicy().hasHeightForWidth());
        billingPriceLbl->setSizePolicy(sizePolicy2);
        billingPriceLbl->setMinimumSize(QSize(85, 0));
        billingPriceLbl->setMaximumSize(QSize(85, 16777215));

        gridLayout_4->addWidget(billingPriceLbl, 1, 0, 1, 1);

        estSuppliesCostSbx = new QDoubleSpinBox(layoutWidget1);
        estSuppliesCostSbx->setObjectName("estSuppliesCostSbx");
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(estSuppliesCostSbx->sizePolicy().hasHeightForWidth());
        estSuppliesCostSbx->setSizePolicy(sizePolicy3);
        estSuppliesCostSbx->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(estSuppliesCostSbx, 1, 5, 1, 1);

        numPaintersSbx = new QSpinBox(layoutWidget1);
        numPaintersSbx->setObjectName("numPaintersSbx");
        sizePolicy3.setHeightForWidth(numPaintersSbx->sizePolicy().hasHeightForWidth());
        numPaintersSbx->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(numPaintersSbx, 1, 8, 1, 1);

        numManHoursLbl = new QLabel(layoutWidget1);
        numManHoursLbl->setObjectName("numManHoursLbl");

        gridLayout_4->addWidget(numManHoursLbl, 0, 7, 1, 1);

        billingPriceSbx = new QDoubleSpinBox(layoutWidget1);
        billingPriceSbx->setObjectName("billingPriceSbx");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(billingPriceSbx->sizePolicy().hasHeightForWidth());
        billingPriceSbx->setSizePolicy(sizePolicy4);
        billingPriceSbx->setMaximum(99999.000000000000000);

        gridLayout_4->addWidget(billingPriceSbx, 1, 1, 1, 2);

        estSuppliesCostLbl = new QLabel(layoutWidget1);
        estSuppliesCostLbl->setObjectName("estSuppliesCostLbl");
        sizePolicy2.setHeightForWidth(estSuppliesCostLbl->sizePolicy().hasHeightForWidth());
        estSuppliesCostLbl->setSizePolicy(sizePolicy2);
        estSuppliesCostLbl->setMinimumSize(QSize(100, 0));
        estSuppliesCostLbl->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(estSuppliesCostLbl, 1, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 5, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 200, 641, 300));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        excludedAreasText = new QTextEdit(layoutWidget2);
        excludedAreasText->setObjectName("excludedAreasText");

        gridLayout_5->addWidget(excludedAreasText, 2, 1, 1, 1);

        includedAreasText = new QTextEdit(layoutWidget2);
        includedAreasText->setObjectName("includedAreasText");

        gridLayout_5->addWidget(includedAreasText, 1, 1, 1, 1);

        notesLbl = new QLabel(layoutWidget2);
        notesLbl->setObjectName("notesLbl");

        gridLayout_5->addWidget(notesLbl, 3, 0, 1, 1);

        includedAreasLbl = new QLabel(layoutWidget2);
        includedAreasLbl->setObjectName("includedAreasLbl");

        gridLayout_5->addWidget(includedAreasLbl, 1, 0, 1, 1);

        notesText = new QTextEdit(layoutWidget2);
        notesText->setObjectName("notesText");

        gridLayout_5->addWidget(notesText, 3, 1, 1, 1);

        excludedAreasLbl = new QLabel(layoutWidget2);
        excludedAreasLbl->setObjectName("excludedAreasLbl");

        gridLayout_5->addWidget(excludedAreasLbl, 2, 0, 1, 1);

        expectedSuppliesLbl = new QLabel(layoutWidget2);
        expectedSuppliesLbl->setObjectName("expectedSuppliesLbl");

        gridLayout_5->addWidget(expectedSuppliesLbl, 0, 0, 1, 1);

        expectedSuppliesText = new QTextEdit(layoutWidget2);
        expectedSuppliesText->setObjectName("expectedSuppliesText");

        gridLayout_5->addWidget(expectedSuppliesText, 0, 1, 1, 1);

        layoutWidget3 = new QWidget(groupBox_4);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 30, 641, 64));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        numSectionsLbl = new QLabel(layoutWidget3);
        numSectionsLbl->setObjectName("numSectionsLbl");

        gridLayout_8->addWidget(numSectionsLbl, 0, 0, 1, 1);

        numSectionsSbx = new QSpinBox(layoutWidget3);
        numSectionsSbx->setObjectName("numSectionsSbx");
        numSectionsSbx->setMinimum(1);

        gridLayout_8->addWidget(numSectionsSbx, 0, 1, 1, 1);

        currentSectionLbl = new QLabel(layoutWidget3);
        currentSectionLbl->setObjectName("currentSectionLbl");

        gridLayout_8->addWidget(currentSectionLbl, 1, 0, 1, 1);

        currentSectionSbx = new QSpinBox(layoutWidget3);
        currentSectionSbx->setObjectName("currentSectionSbx");
        currentSectionSbx->setReadOnly(true);
        currentSectionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        currentSectionSbx->setMinimum(1);

        gridLayout_8->addWidget(currentSectionSbx, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_8);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        nextSectionBtn = new QPushButton(layoutWidget3);
        nextSectionBtn->setObjectName("nextSectionBtn");

        gridLayout_9->addWidget(nextSectionBtn, 0, 1, 1, 1);

        previousSectionBtn = new QPushButton(layoutWidget3);
        previousSectionBtn->setObjectName("previousSectionBtn");

        gridLayout_9->addWidget(previousSectionBtn, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_9);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 640, 661, 111));
        widget = new QWidget(groupBox_5);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(11, 28, 641, 71));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        outputFileLblInput = new QLabel(widget);
        outputFileLblInput->setObjectName("outputFileLblInput");
        sizePolicy2.setHeightForWidth(outputFileLblInput->sizePolicy().hasHeightForWidth());
        outputFileLblInput->setSizePolicy(sizePolicy2);
        outputFileLblInput->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_3->addWidget(outputFileLblInput);

        outputFileTextInput = new QLineEdit(widget);
        outputFileTextInput->setObjectName("outputFileTextInput");
        outputFileTextInput->setMinimumSize(QSize(350, 0));
        outputFileTextInput->setReadOnly(false);

        horizontalLayout_3->addWidget(outputFileTextInput);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        generateDocumentBtnInput = new QPushButton(widget);
        generateDocumentBtnInput->setObjectName("generateDocumentBtnInput");
        sizePolicy2.setHeightForWidth(generateDocumentBtnInput->sizePolicy().hasHeightForWidth());
        generateDocumentBtnInput->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(generateDocumentBtnInput);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 661, 201));
        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 30, 641, 161));
        gridLayout = new QGridLayout(layoutWidget4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        selectInputFileBtn = new QPushButton(layoutWidget4);
        selectInputFileBtn->setObjectName("selectInputFileBtn");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(selectInputFileBtn->sizePolicy().hasHeightForWidth());
        selectInputFileBtn->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(selectInputFileBtn, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputFileLbl = new QLabel(layoutWidget4);
        inputFileLbl->setObjectName("inputFileLbl");

        horizontalLayout->addWidget(inputFileLbl);

        inputFileText = new QLineEdit(layoutWidget4);
        inputFileText->setObjectName("inputFileText");
        inputFileText->setReadOnly(true);

        horizontalLayout->addWidget(inputFileText);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        outputFileTextImport = new QLineEdit(layoutWidget4);
        outputFileTextImport->setObjectName("outputFileTextImport");
        outputFileTextImport->setReadOnly(false);

        gridLayout_2->addWidget(outputFileTextImport, 0, 1, 1, 1);

        outputFileLbl = new QLabel(layoutWidget4);
        outputFileLbl->setObjectName("outputFileLbl");

        gridLayout_2->addWidget(outputFileLbl, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 230, 661, 451));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 30, 641, 331));
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 370, 641, 71));
        gridLayout_3 = new QGridLayout(layoutWidget5);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        processDataBtn = new QPushButton(layoutWidget5);
        processDataBtn->setObjectName("processDataBtn");
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(processDataBtn->sizePolicy().hasHeightForWidth());
        processDataBtn->setSizePolicy(sizePolicy6);

        gridLayout_3->addWidget(processDataBtn, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        confirmDataChbx = new QCheckBox(layoutWidget5);
        confirmDataChbx->setObjectName("confirmDataChbx");

        gridLayout_3->addWidget(confirmDataChbx, 0, 3, 1, 1);

        generateDocumentBtnImport = new QPushButton(tab_2);
        generateDocumentBtnImport->setObjectName("generateDocumentBtnImport");
        generateDocumentBtnImport->setGeometry(QRect(170, 690, 331, 61));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 23));
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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDark_Mode->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "General Information", nullptr));
        nameLbl->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        currentDateLbl->setText(QCoreApplication::translate("MainWindow", "Current Date:", nullptr));
        estStartDateLbl->setText(QCoreApplication::translate("MainWindow", "Est. Start Date:", nullptr));
        customerAddressLbl->setText(QCoreApplication::translate("MainWindow", "Customer Address:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Section Information", nullptr));
        titleLbl->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        numPaintersLbl->setText(QCoreApplication::translate("MainWindow", "# Painters:", nullptr));
        billingPriceLbl->setText(QCoreApplication::translate("MainWindow", "Billing Price:", nullptr));
        numManHoursLbl->setText(QCoreApplication::translate("MainWindow", "# Man Hours:", nullptr));
        estSuppliesCostLbl->setText(QCoreApplication::translate("MainWindow", "Est Supplies $:", nullptr));
        excludedAreasText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate areas with a comma!", nullptr));
        includedAreasText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate areas with a comma!", nullptr));
        notesLbl->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        includedAreasLbl->setText(QCoreApplication::translate("MainWindow", "Included Areas:", nullptr));
        notesText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate indiviual notes with a comma!", nullptr));
        excludedAreasLbl->setText(QCoreApplication::translate("MainWindow", "Excluded Areas:", nullptr));
        expectedSuppliesLbl->setText(QCoreApplication::translate("MainWindow", "Expected Supplies:", nullptr));
        expectedSuppliesText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate supplies with a comma!", nullptr));
        numSectionsLbl->setText(QCoreApplication::translate("MainWindow", "# Sections:", nullptr));
        currentSectionLbl->setText(QCoreApplication::translate("MainWindow", "Current Section:", nullptr));
        nextSectionBtn->setText(QCoreApplication::translate("MainWindow", "Next Section", nullptr));
        previousSectionBtn->setText(QCoreApplication::translate("MainWindow", "Previous Section", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "File Information and Generation", nullptr));
        outputFileLblInput->setText(QCoreApplication::translate("MainWindow", "Output Filename:", nullptr));
        generateDocumentBtnInput->setText(QCoreApplication::translate("MainWindow", "Generate Document", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Input Data", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "File Settings", nullptr));
        selectInputFileBtn->setText(QCoreApplication::translate("MainWindow", "Select Input File", nullptr));
        inputFileLbl->setText(QCoreApplication::translate("MainWindow", "Input Filename:", nullptr));
        outputFileLbl->setText(QCoreApplication::translate("MainWindow", "Output Filename:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Process and Verfiy Data", nullptr));
        processDataBtn->setText(QCoreApplication::translate("MainWindow", "Process Input Data", nullptr));
        confirmDataChbx->setText(QCoreApplication::translate("MainWindow", "Confirm Data", nullptr));
        generateDocumentBtnImport->setText(QCoreApplication::translate("MainWindow", "Generate Document", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Import a File", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
