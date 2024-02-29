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
    QWidget *widget;
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
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QLabel *estSuppliesCostLbl;
    QDoubleSpinBox *estSuppliesCostSbx;
    QLabel *numPaintersLbl;
    QDoubleSpinBox *billingPriceSbx;
    QDoubleSpinBox *numManHoursSbx;
    QSpacerItem *horizontalSpacer_5;
    QLabel *titleLbl;
    QLabel *billingPriceLbl;
    QLabel *numManHoursLbl;
    QSpinBox *numPaintersSbx;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *titleText;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget2;
    QGridLayout *gridLayout_5;
    QTextEdit *excludedAreasText;
    QTextEdit *includedAreasText;
    QLabel *notesLbl;
    QLabel *includedAreasLbl;
    QTextEdit *notesText;
    QLabel *excludedAreasLbl;
    QLabel *expectedSuppliesLbl;
    QTextEdit *expectedSuppliesText;
    QWidget *widget3;
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
    QWidget *widget4;
    QGridLayout *gridLayout_6;
    QLabel *outputFileLblInput;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *outputFileTextInput;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *generateDocumentBtnInput;
    QSpacerItem *horizontalSpacer_8;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
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
        MainWindow->resize(675, 850);
        MainWindow->setMinimumSize(QSize(675, 850));
        MainWindow->setMaximumSize(QSize(675, 850));
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName("actionDark_Mode");
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 651, 791));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 10, 631, 181));
        widget = new QWidget(groupBox_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 611, 141));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        nameLbl = new QLabel(widget);
        nameLbl->setObjectName("nameLbl");

        gridLayout_7->addWidget(nameLbl, 0, 0, 1, 1);

        nameText = new QLineEdit(widget);
        nameText->setObjectName("nameText");

        gridLayout_7->addWidget(nameText, 0, 1, 1, 1);

        currentDateLbl = new QLabel(widget);
        currentDateLbl->setObjectName("currentDateLbl");

        gridLayout_7->addWidget(currentDateLbl, 1, 0, 1, 1);

        currentDateText = new QLineEdit(widget);
        currentDateText->setObjectName("currentDateText");

        gridLayout_7->addWidget(currentDateText, 1, 1, 1, 1);

        estStartDateLbl = new QLabel(widget);
        estStartDateLbl->setObjectName("estStartDateLbl");

        gridLayout_7->addWidget(estStartDateLbl, 2, 0, 1, 1);

        estStartDateText = new QLineEdit(widget);
        estStartDateText->setObjectName("estStartDateText");

        gridLayout_7->addWidget(estStartDateText, 2, 1, 1, 1);

        customerAddressLbl = new QLabel(widget);
        customerAddressLbl->setObjectName("customerAddressLbl");

        gridLayout_7->addWidget(customerAddressLbl, 3, 0, 1, 1);

        customerAddressText = new QLineEdit(widget);
        customerAddressText->setObjectName("customerAddressText");

        gridLayout_7->addWidget(customerAddressText, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 200, 631, 431));
        line = new QFrame(groupBox_4);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 100, 611, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 120, 611, 71));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        estSuppliesCostLbl = new QLabel(widget1);
        estSuppliesCostLbl->setObjectName("estSuppliesCostLbl");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(estSuppliesCostLbl->sizePolicy().hasHeightForWidth());
        estSuppliesCostLbl->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(estSuppliesCostLbl, 1, 4, 1, 1);

        estSuppliesCostSbx = new QDoubleSpinBox(widget1);
        estSuppliesCostSbx->setObjectName("estSuppliesCostSbx");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(estSuppliesCostSbx->sizePolicy().hasHeightForWidth());
        estSuppliesCostSbx->setSizePolicy(sizePolicy1);
        estSuppliesCostSbx->setMaximum(999999.000000000000000);

        gridLayout_4->addWidget(estSuppliesCostSbx, 1, 5, 1, 1);

        numPaintersLbl = new QLabel(widget1);
        numPaintersLbl->setObjectName("numPaintersLbl");
        sizePolicy.setHeightForWidth(numPaintersLbl->sizePolicy().hasHeightForWidth());
        numPaintersLbl->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(numPaintersLbl, 1, 7, 1, 1);

        billingPriceSbx = new QDoubleSpinBox(widget1);
        billingPriceSbx->setObjectName("billingPriceSbx");
        sizePolicy1.setHeightForWidth(billingPriceSbx->sizePolicy().hasHeightForWidth());
        billingPriceSbx->setSizePolicy(sizePolicy1);
        billingPriceSbx->setMaximum(999999.000000000000000);

        gridLayout_4->addWidget(billingPriceSbx, 1, 1, 1, 2);

        numManHoursSbx = new QDoubleSpinBox(widget1);
        numManHoursSbx->setObjectName("numManHoursSbx");
        numManHoursSbx->setMaximum(9999.000000000000000);

        gridLayout_4->addWidget(numManHoursSbx, 0, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        titleLbl = new QLabel(widget1);
        titleLbl->setObjectName("titleLbl");

        gridLayout_4->addWidget(titleLbl, 0, 0, 1, 1);

        billingPriceLbl = new QLabel(widget1);
        billingPriceLbl->setObjectName("billingPriceLbl");
        sizePolicy.setHeightForWidth(billingPriceLbl->sizePolicy().hasHeightForWidth());
        billingPriceLbl->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(billingPriceLbl, 1, 0, 1, 1);

        numManHoursLbl = new QLabel(widget1);
        numManHoursLbl->setObjectName("numManHoursLbl");

        gridLayout_4->addWidget(numManHoursLbl, 0, 7, 1, 1);

        numPaintersSbx = new QSpinBox(widget1);
        numPaintersSbx->setObjectName("numPaintersSbx");
        sizePolicy1.setHeightForWidth(numPaintersSbx->sizePolicy().hasHeightForWidth());
        numPaintersSbx->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(numPaintersSbx, 1, 8, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 3, 1, 1);

        titleText = new QLineEdit(widget1);
        titleText->setObjectName("titleText");
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleText->sizePolicy().hasHeightForWidth());
        titleText->setSizePolicy(sizePolicy2);
        titleText->setMinimumSize(QSize(250, 0));

        gridLayout_4->addWidget(titleText, 0, 1, 1, 4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 0, 5, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 0, 6, 1, 1);

        widget2 = new QWidget(groupBox_4);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 200, 611, 221));
        gridLayout_5 = new QGridLayout(widget2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        excludedAreasText = new QTextEdit(widget2);
        excludedAreasText->setObjectName("excludedAreasText");

        gridLayout_5->addWidget(excludedAreasText, 2, 1, 1, 1);

        includedAreasText = new QTextEdit(widget2);
        includedAreasText->setObjectName("includedAreasText");

        gridLayout_5->addWidget(includedAreasText, 1, 1, 1, 1);

        notesLbl = new QLabel(widget2);
        notesLbl->setObjectName("notesLbl");

        gridLayout_5->addWidget(notesLbl, 3, 0, 1, 1);

        includedAreasLbl = new QLabel(widget2);
        includedAreasLbl->setObjectName("includedAreasLbl");

        gridLayout_5->addWidget(includedAreasLbl, 1, 0, 1, 1);

        notesText = new QTextEdit(widget2);
        notesText->setObjectName("notesText");

        gridLayout_5->addWidget(notesText, 3, 1, 1, 1);

        excludedAreasLbl = new QLabel(widget2);
        excludedAreasLbl->setObjectName("excludedAreasLbl");

        gridLayout_5->addWidget(excludedAreasLbl, 2, 0, 1, 1);

        expectedSuppliesLbl = new QLabel(widget2);
        expectedSuppliesLbl->setObjectName("expectedSuppliesLbl");

        gridLayout_5->addWidget(expectedSuppliesLbl, 0, 0, 1, 1);

        expectedSuppliesText = new QTextEdit(widget2);
        expectedSuppliesText->setObjectName("expectedSuppliesText");

        gridLayout_5->addWidget(expectedSuppliesText, 0, 1, 1, 1);

        widget3 = new QWidget(groupBox_4);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(10, 30, 611, 64));
        horizontalLayout_2 = new QHBoxLayout(widget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        numSectionsLbl = new QLabel(widget3);
        numSectionsLbl->setObjectName("numSectionsLbl");

        gridLayout_8->addWidget(numSectionsLbl, 0, 0, 1, 1);

        numSectionsSbx = new QSpinBox(widget3);
        numSectionsSbx->setObjectName("numSectionsSbx");
        numSectionsSbx->setMinimum(1);

        gridLayout_8->addWidget(numSectionsSbx, 0, 1, 1, 1);

        currentSectionLbl = new QLabel(widget3);
        currentSectionLbl->setObjectName("currentSectionLbl");

        gridLayout_8->addWidget(currentSectionLbl, 1, 0, 1, 1);

        currentSectionSbx = new QSpinBox(widget3);
        currentSectionSbx->setObjectName("currentSectionSbx");
        currentSectionSbx->setReadOnly(true);
        currentSectionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        currentSectionSbx->setMinimum(1);

        gridLayout_8->addWidget(currentSectionSbx, 1, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_8);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName("gridLayout_9");
        nextSectionBtn = new QPushButton(widget3);
        nextSectionBtn->setObjectName("nextSectionBtn");

        gridLayout_9->addWidget(nextSectionBtn, 0, 1, 1, 1);

        previousSectionBtn = new QPushButton(widget3);
        previousSectionBtn->setObjectName("previousSectionBtn");

        gridLayout_9->addWidget(previousSectionBtn, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_9);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 640, 631, 111));
        widget4 = new QWidget(groupBox_5);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(10, 30, 611, 81));
        gridLayout_6 = new QGridLayout(widget4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        outputFileLblInput = new QLabel(widget4);
        outputFileLblInput->setObjectName("outputFileLblInput");
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(outputFileLblInput->sizePolicy().hasHeightForWidth());
        outputFileLblInput->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(outputFileLblInput, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        outputFileTextInput = new QLineEdit(widget4);
        outputFileTextInput->setObjectName("outputFileTextInput");
        outputFileTextInput->setReadOnly(false);

        gridLayout_6->addWidget(outputFileTextInput, 0, 2, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        generateDocumentBtnInput = new QPushButton(widget4);
        generateDocumentBtnInput->setObjectName("generateDocumentBtnInput");

        gridLayout_6->addWidget(generateDocumentBtnInput, 1, 1, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 1, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 631, 201));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 611, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        selectInputFileBtn = new QPushButton(layoutWidget);
        selectInputFileBtn->setObjectName("selectInputFileBtn");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(selectInputFileBtn->sizePolicy().hasHeightForWidth());
        selectInputFileBtn->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(selectInputFileBtn, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputFileLbl = new QLabel(layoutWidget);
        inputFileLbl->setObjectName("inputFileLbl");

        horizontalLayout->addWidget(inputFileLbl);

        inputFileText = new QLineEdit(layoutWidget);
        inputFileText->setObjectName("inputFileText");
        inputFileText->setReadOnly(true);

        horizontalLayout->addWidget(inputFileText);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        outputFileTextImport = new QLineEdit(layoutWidget);
        outputFileTextImport->setObjectName("outputFileTextImport");
        outputFileTextImport->setReadOnly(false);

        gridLayout_2->addWidget(outputFileTextImport, 0, 1, 1, 1);

        outputFileLbl = new QLabel(layoutWidget);
        outputFileLbl->setObjectName("outputFileLbl");

        gridLayout_2->addWidget(outputFileLbl, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 230, 631, 451));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 30, 611, 331));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 370, 611, 71));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        processDataBtn = new QPushButton(layoutWidget1);
        processDataBtn->setObjectName("processDataBtn");
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(processDataBtn->sizePolicy().hasHeightForWidth());
        processDataBtn->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(processDataBtn, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        confirmDataChbx = new QCheckBox(layoutWidget1);
        confirmDataChbx->setObjectName("confirmDataChbx");

        gridLayout_3->addWidget(confirmDataChbx, 0, 3, 1, 1);

        generateDocumentBtnImport = new QPushButton(tab_2);
        generateDocumentBtnImport->setObjectName("generateDocumentBtnImport");
        generateDocumentBtnImport->setGeometry(QRect(150, 690, 331, 61));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 675, 23));
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
        estSuppliesCostLbl->setText(QCoreApplication::translate("MainWindow", "Est Supplies $:", nullptr));
        numPaintersLbl->setText(QCoreApplication::translate("MainWindow", "# Painters:", nullptr));
        titleLbl->setText(QCoreApplication::translate("MainWindow", "Title:", nullptr));
        billingPriceLbl->setText(QCoreApplication::translate("MainWindow", "Billing Price:", nullptr));
        numManHoursLbl->setText(QCoreApplication::translate("MainWindow", "# Man Hours:", nullptr));
        excludedAreasText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate areas with a comma!", nullptr));
        includedAreasText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate areas with a comma!", nullptr));
        notesLbl->setText(QCoreApplication::translate("MainWindow", "Notes:", nullptr));
        includedAreasLbl->setText(QCoreApplication::translate("MainWindow", "Included Areas:", nullptr));
        notesText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate indiviual notes with a comma!", nullptr));
        excludedAreasLbl->setText(QCoreApplication::translate("MainWindow", "Excluded Areas:", nullptr));
        expectedSuppliesLbl->setText(QCoreApplication::translate("MainWindow", "Expected Supplies:", nullptr));
        expectedSuppliesText->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seperate supplied with a comma!", nullptr));
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
