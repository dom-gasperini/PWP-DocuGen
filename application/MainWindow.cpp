/**
 * Dominic Gasperini
 * PWP DocuGen Software
 *
 * Main Window
*/


// includes
#include "MainWindow.h"
#include "ui_MainWindow.h"


// defines
#define DISPLAY_UPDATE_INTERVAL   200     // in milliseconds


/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // setup UI
    ui->setupUi(this);
    this->setWindowTitle("PWP DocuGen");
    this->setWindowIcon(QIcon(":/images/pwp-logo.ico"));
    m_currentPalette = qApp->palette();

    // setup about dialog
    m_aboutDialog = new AboutDlg();

    // setup data handler
    dataHandler = new DataHandler();

    // setup timers
    m_displayUpdateTimer = new QTimer(this);
    connect(m_displayUpdateTimer, SIGNAL(timeout()), this, SLOT(UpdateDisplay()));
    m_displayUpdateTimer->start(DISPLAY_UPDATE_INTERVAL);
}


/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * @brief MainWindow::UpdateDisplay
 */
void MainWindow::UpdateDisplay()
{
    // update filenames
    ui->inputFileText->setText(dataHandler->getInputFilename());

    dataHandler->setOutputFilename(ui->outputFileText->text());

    // proces data button logic
    if (ui->inputFileText->text() != "") {
        ui->processDataBtn->setEnabled(true);
    }
    else {
        ui->processDataBtn->setEnabled(false);
    }

    // generate document logic
    if (ui->confirmDataChbx->isChecked() && ui->outputFileText->text() != "") {
        ui->generateDocumentBtn->setEnabled(true);
    }
    else {
        ui->generateDocumentBtn->setEnabled(false);
    }
}


/**
 * @brief MainWindow::ParseData
 */
void MainWindow::ParseData() {
    // inits
    QList<QString> tmpData;
    EstimateData tmpEstimate;

    // clear
    ui->tableWidget->clear();

    tmpData = dataHandler->getData();

    qDebug() << "tmp data" << tmpData;

    // parse out data
    tmpEstimate.name = tmpData.at(0).split(",").at(1);
    qDebug() << "name: " << tmpEstimate.name;

    tmpEstimate.address = tmpData.at(1).split(",").at(1).split("\"").at(1);
    tmpEstimate.address += "," + tmpData.at(1).split(",").at(2).split("\"").at(0);
    qDebug() << "address: " << tmpEstimate.address;

    tmpEstimate.date = tmpData.at(2).split(",").at(1).split("\"").at(1);
    tmpEstimate.date += "," + tmpData.at(2).split(",").at(2).split("\"").at(0);
    qDebug() << "date: " << tmpEstimate.date;

    tmpEstimate.startDate = tmpData.at(3).split(",").at(1);
    qDebug() << "start date: " << tmpEstimate.startDate;

    tmpEstimate.numSections = tmpData.at(4).split(",").at(1);
    qDebug() << "num sections: " << tmpEstimate.numSections;

    // add sections
    for (int i = 0; i < tmpEstimate.numSections.toInt(); ++i) {
        // inits
        EstimateSection tmpSection;
        QList<QString> tmpList;

        if (i == 0) {
            // parse out section data
            tmpSection.title = tmpData.at(5).split(",").at(1);
            qDebug() << "section title: " << tmpSection.title;

            tmpSection.billingPrice = tmpData.at(6).split(",").at(1);
            qDebug() << "est price: " << tmpSection.billingPrice;

            tmpSection.manHours = tmpData.at(7).split(",").at(1);
            qDebug() << "man hours: " << tmpSection.manHours;

            tmpSection.numPeople = tmpData.at(8).split(",").at(1);
            qDebug() << "num people: " << tmpSection.numPeople;

            // included areas
            tmpList = tmpData.at(9).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {     // start at 1 to not include data title
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.includedAreas.append(tmp);
                }
            }
            if (tmpSection.includedAreas.size() > numColumns) {
                numColumns = tmpSection.includedAreas.size();
            }
            qDebug() << "included areas: " << tmpSection.includedAreas;

            // excluded areas
            tmpList = tmpData.at(10).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {     // start at 1 to not include data title
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.excludedAreas.append(tmp);
                }
            }
            if (tmpSection.excludedAreas.size() > numColumns) {
                numColumns = tmpSection.excludedAreas.size();
            }
            qDebug() << "excluded areas: " << tmpSection.excludedAreas;

            // expected supplies
            tmpList = tmpData.at(11).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.expectedSupplies.append(tmp);
                }
            }
            if (tmpSection.expectedSupplies.size() > numColumns) {
                numColumns = tmpSection.expectedSupplies.size();
            }
            qDebug() << "expected supplies: " << tmpSection.expectedSupplies;

            // expected supplies cost
            tmpSection.expectedSuppliesCost = tmpData.at(12).split(",").at(1);
            qDebug() << "expected supplies cost: " << tmpSection.expectedSuppliesCost;

            // notes
            tmpList = tmpData.at(13).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.notes.append(tmp);
                }
            }
            if (tmpSection.notes.size() > numColumns) {
                numColumns = tmpSection.notes.size();
            }
            qDebug() << "notes: " << tmpSection.notes;
        }
        else {
            // parse out section data
            tmpSection.title = tmpData.at(5 + 9*i).split(",").at(1);
            qDebug() << "section title: " << tmpSection.title;

            tmpSection.billingPrice = tmpData.at(6 + 9*i).split(",").at(1);
            qDebug() << "est price: " << tmpSection.billingPrice;

            tmpSection.manHours = tmpData.at(7 + 9*i).split(",").at(1);
            qDebug() << "man hours: " << tmpSection.manHours;

            tmpSection.numPeople = tmpData.at(8 + 9*i).split(",").at(1);
            qDebug() << "num people: " << tmpSection.numPeople;

            // included areas
            tmpList = tmpData.at(9 + 9*i).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {     // start at 1 to not include data title
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.includedAreas.append(tmp);
                }
            }
            if (tmpSection.includedAreas.size() > numColumns) {
                numColumns = tmpSection.includedAreas.size();
            }
            qDebug() << "included areas: " << tmpSection.includedAreas;

            // excluded areas
            tmpList = tmpData.at(10 + 9*i).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {     // start at 1 to not include data title
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.excludedAreas.append(tmp);
                }
            }
            if (tmpSection.excludedAreas.size() > numColumns) {
                numColumns = tmpSection.excludedAreas.size();
            }
            qDebug() << "excluded areas: " << tmpSection.excludedAreas;

            // expected supplies
            tmpList = tmpData.at(11 + 9*i).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.expectedSupplies.append(tmp);
                }
            }
            if (tmpSection.expectedSupplies.size() > numColumns) {
                numColumns = tmpSection.expectedSupplies.size();
            }
            qDebug() << "expected supplies: " << tmpSection.expectedSupplies;

            // expected supplies cost
            tmpSection.expectedSuppliesCost = tmpData.at(12 + 9*i).split(",").at(1);
            qDebug() << "expected supplies cost: " << tmpSection.expectedSuppliesCost;

            // notes
            tmpList = tmpData.at(13 + 9*i).split(",");
            for (int i = 1; i < tmpList.size(); ++i) {
                if (tmpList.at(i) != "") {
                    QString tmp = tmpList.at(i);
                    tmp.replace("\"", "");
                    tmpSection.notes.append(tmp);
                }
            }
            if (tmpSection.notes.size() > numColumns) {
                numColumns = tmpSection.notes.size();
            }
            qDebug() << "notes: " << tmpSection.notes;

        }

        // add to overall data
        tmpEstimate.sections.append(tmpSection);
    }

    // save estimate
    dataHandler->setEstimateData(tmpEstimate);
}


/**
 * @brief MainWindow::PopulateTable
 */
void MainWindow::PopulateTable()
{
    // parse the raw data
    ParseData();

    // reset the table
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->tableWidget->clear();
    ui->tableWidget->clearContents();

    // calculate rows
    numRows = (5 + (dataHandler->getEstimateData().numSections.toInt() * 11)) - 2;

    // add rows and columns
    for (int i = 0; i < numRows; ++i) {
        ui->tableWidget->insertRow(i);
    }
    for (int i = 0; i < numColumns; ++i) {
        ui->tableWidget->insertColumn(i);
    }

    // input row data
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Name", QTableWidgetItem::Type));
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Address", QTableWidgetItem::Type));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Date", QTableWidgetItem::Type));
    ui->tableWidget->setItem(3, 0, new QTableWidgetItem("Start Date", QTableWidgetItem::Type));
    ui->tableWidget->setItem(4, 0, new QTableWidgetItem("# Sections", QTableWidgetItem::Type));
    // sections
    for (int i = 0; i < dataHandler->getEstimateData().numSections.toInt(); ++i) {
        if (i == 0) {
            ui->tableWidget->setItem(5, 0, new QTableWidgetItem("Title", QTableWidgetItem::Type));
            ui->tableWidget->setItem(6, 0, new QTableWidgetItem("Est $", QTableWidgetItem::Type));
            ui->tableWidget->setItem(7, 0, new QTableWidgetItem("Man Hours", QTableWidgetItem::Type));
            ui->tableWidget->setItem(8, 0, new QTableWidgetItem("# Painters", QTableWidgetItem::Type));
            ui->tableWidget->setItem(9, 0, new QTableWidgetItem("Included Areas", QTableWidgetItem::Type));
            ui->tableWidget->setItem(10, 0, new QTableWidgetItem("Excluded Areas", QTableWidgetItem::Type));
            ui->tableWidget->setItem(11, 0, new QTableWidgetItem("Expected Supplies", QTableWidgetItem::Type));
            ui->tableWidget->setItem(12, 0, new QTableWidgetItem("Expected Supplies $", QTableWidgetItem::Type));
            ui->tableWidget->setItem(13, 0, new QTableWidgetItem("Notes", QTableWidgetItem::Type));
        }
        else {
            ui->tableWidget->setItem(5 + 9*i, 0, new QTableWidgetItem("Title", QTableWidgetItem::Type));
            ui->tableWidget->setItem(6 + 9*i, 0, new QTableWidgetItem("Est $", QTableWidgetItem::Type));
            ui->tableWidget->setItem(7 + 9*i, 0, new QTableWidgetItem("Man Hours", QTableWidgetItem::Type));
            ui->tableWidget->setItem(8 + 9*i, 0, new QTableWidgetItem("# Painters", QTableWidgetItem::Type));
            ui->tableWidget->setItem(9 + 9*i, 0, new QTableWidgetItem("Included Areas", QTableWidgetItem::Type));
            ui->tableWidget->setItem(10 + 9*i, 0, new QTableWidgetItem("Excluded Areas", QTableWidgetItem::Type));
            ui->tableWidget->setItem(11 + 9*i, 0, new QTableWidgetItem("Expected Supplies", QTableWidgetItem::Type));
            ui->tableWidget->setItem(12 + 9*i, 0, new QTableWidgetItem("Expected Supplies $", QTableWidgetItem::Type));
            ui->tableWidget->setItem(13 + 9*i, 0, new QTableWidgetItem("Notes", QTableWidgetItem::Type));
        }
    }

    // input data into table
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem(dataHandler->getEstimateData().name, QTableWidgetItem::Type));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem(dataHandler->getEstimateData().address, QTableWidgetItem::Type));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem(dataHandler->getEstimateData().date, QTableWidgetItem::Type));
    ui->tableWidget->setItem(3, 1, new QTableWidgetItem(dataHandler->getEstimateData().startDate, QTableWidgetItem::Type));
    ui->tableWidget->setItem(4, 1, new QTableWidgetItem(dataHandler->getEstimateData().numSections, QTableWidgetItem::Type));

    // sections
    for (int i = 0; i < dataHandler->getEstimateData().numSections.toInt(); ++i) {
        if (i == 0) {
            ui->tableWidget->setItem(5, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).title, QTableWidgetItem::Type));
            ui->tableWidget->setItem(6, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).billingPrice, QTableWidgetItem::Type));
            ui->tableWidget->setItem(7, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).manHours, QTableWidgetItem::Type));
            ui->tableWidget->setItem(8, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).numPeople, QTableWidgetItem::Type));
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).includedAreas.size(); ++j) {
                ui->tableWidget->setItem(9, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).includedAreas.at(j), QTableWidgetItem::Type));
            }
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).excludedAreas.size(); ++j) {
                ui->tableWidget->setItem(10, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).excludedAreas.at(j), QTableWidgetItem::Type));
            }
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).expectedSupplies.size(); ++j) {
                ui->tableWidget->setItem(11, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).expectedSupplies.at(j), QTableWidgetItem::Type));
            }

            ui->tableWidget->setItem(12, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).expectedSuppliesCost, QTableWidgetItem::Type));

            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).notes.size(); ++j) {
                ui->tableWidget->setItem(13, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).notes.at(j), QTableWidgetItem::Type));
            }
        }
        else {
            ui->tableWidget->setItem(5 + 9*i, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).title, QTableWidgetItem::Type));
            ui->tableWidget->setItem(6 + 9*i, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).billingPrice, QTableWidgetItem::Type));
            ui->tableWidget->setItem(7 + 9*i, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).manHours, QTableWidgetItem::Type));
            ui->tableWidget->setItem(8 + 9*i, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).numPeople, QTableWidgetItem::Type));
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).includedAreas.size(); ++j) {
                ui->tableWidget->setItem(9 + 9*i, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).includedAreas.at(j), QTableWidgetItem::Type));
            }
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).excludedAreas.size(); ++j) {
                ui->tableWidget->setItem(10 + 9*i, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).excludedAreas.at(j), QTableWidgetItem::Type));
            }
            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).expectedSupplies.size(); ++j) {
                ui->tableWidget->setItem(11 + 9*i, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).expectedSupplies.at(j), QTableWidgetItem::Type));
            }

            ui->tableWidget->setItem(12 + 9*i, 1, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).expectedSuppliesCost, QTableWidgetItem::Type));

            for (int j = 1; j < dataHandler->getEstimateData().sections.at(i).notes.size(); ++j) {
                ui->tableWidget->setItem(13 + 9*i, j, new QTableWidgetItem(dataHandler->getEstimateData().sections.at(i).notes.at(j), QTableWidgetItem::Type));
            }
        }
    }
}


/**
 * @brief MainWindow::on_selectInputFileBtn_clicked
 */
void MainWindow::on_selectInputFileBtn_clicked()
{
    // inits
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setNameFilter(tr("*.csv"));
    dialog.setViewMode(QFileDialog::Detail);
    QString selectedFilename;

    // select file
    if (dialog.exec()) {
        selectedFilename = dialog.selectedFiles().at(0);
    }

    qDebug() << "input file: " << selectedFilename;

    // save filename
    dataHandler->setInputFilename(selectedFilename);
}


/**
 * @brief MainWindow::on_processDataBtn_clicked
 */
void MainWindow::on_processDataBtn_clicked()
{
    // parse data from input file
    dataHandler->ProcessData(dataHandler->getInputFilename());

    // populate the table
    PopulateTable();
}


/**
 * @brief MainWindow::on_generateDocumentBtn_clicked
 */
void MainWindow::on_generateDocumentBtn_clicked()
{
    // inits
    int result;

    // generate the document and save it
    result = dataHandler->GenerateDocument(dataHandler->getOutputFilename());

    // reset
    ui->confirmDataChbx->setChecked(false);

    if (result == 0) {
        QMessageBox::information(this, "Document Generation", "The document has been successfully generated!");
    }
    if (result != 0) {
        QMessageBox::critical(this, "Document Generation", "The document generation failed!");
    }
}


/**
 * @brief MainWindow::on_actionAbout_triggered
 */
void MainWindow::on_actionAbout_triggered()
{
    // show the about dialog
    m_aboutDialog->show();
}

/**
 * @brief MainWindow::on_actionDark_Mode_triggered
 * @param checked
 */
void MainWindow::on_actionDark_Mode_triggered(bool checked)
{
    // switch between dark mode and light mode
    if (checked) {
        // Set Style
        qApp->setStyle(QStyleFactory::create("Fusion"));
        // Init a Dark Mode Palette
        QPalette darkPalette;
        darkPalette.setColor(QPalette::Window,QColor(53,53,53));
        darkPalette.setColor(QPalette::WindowText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::WindowText,QColor(127,127,127));
        darkPalette.setColor(QPalette::Base,QColor(42,42,42));
        darkPalette.setColor(QPalette::AlternateBase,QColor(66,66,66));
        darkPalette.setColor(QPalette::ToolTipBase,Qt::white);
        darkPalette.setColor(QPalette::ToolTipText,Qt::white);
        darkPalette.setColor(QPalette::Text,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::Text,QColor(127,127,127));
        darkPalette.setColor(QPalette::Dark,QColor(35,35,35));
        darkPalette.setColor(QPalette::Shadow,QColor(20,20,20));
        darkPalette.setColor(QPalette::Button,QColor(53,53,53));
        darkPalette.setColor(QPalette::ButtonText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText,QColor(127,127,127));
        darkPalette.setColor(QPalette::BrightText,Qt::red);
        darkPalette.setColor(QPalette::Link,QColor(42,130,218));
        darkPalette.setColor(QPalette::Highlight, QColor(142,45,197));
        darkPalette.setColor(QPalette::Disabled,QPalette::Highlight,QColor(80,80,80));
        darkPalette.setColor(QPalette::HighlightedText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::HighlightedText,QColor(127,127,127));

        // Set to Dark Mode
        qApp->setPalette(darkPalette);

        // Change Progress Bar Color to Green
        QPalette progressBarPalette;
        progressBarPalette.setColor(QPalette::Highlight, Qt::green);
    }

    else {
        // Reset Style to Windows Vista
        qApp->setStyle(QStyleFactory::create("windowsvista"));

        // Reset to Light Mode
        m_currentPalette.setColor(QPalette::Text, Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::ButtonText, Qt::black);
        m_currentPalette.setColor(QPalette::ButtonText,Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::Text, Qt::black);
        m_currentPalette.setColor(QPalette::WindowText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::WindowText, Qt::black);
        m_currentPalette.setColor(QPalette::ToolTipBase,Qt::black);
        m_currentPalette.setColor(QPalette::ToolTipText,Qt::black);
        m_currentPalette.setColor(QPalette::Disabled,QPalette::Highlight, Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText,Qt::black);
        m_currentPalette.setColor(QPalette::Disabled,QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::All, QPalette::ButtonText, Qt::black);
        m_currentPalette.setColor(QPalette::All, QPalette::Text, Qt::black);
        qApp->setPalette(m_currentPalette);
    }
}
