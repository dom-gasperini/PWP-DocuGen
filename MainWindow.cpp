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
    this->setWindowTitle("Cross Control Product Manager");
    this->setWindowIcon(QIcon(":/images/cc-logo.ico"));
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

    // update data preview
}


/**
 * @brief MainWindow::on_selectInputFileBtn_clicked
 */
void MainWindow::on_selectInputFileBtn_clicked()
{
    // inits
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    // dialog.setNameFilter(tr("CSV (*.csv"));
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
 * @brief MainWindow::on_selectOutputFileBtn_clicked
 */
void MainWindow::on_selectOutputFileBtn_clicked()
{
    // inits
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    // dialog.setNameFilter(tr("CSV (*.csv"));
    dialog.setViewMode(QFileDialog::Detail);
    QString selectedFilename;

    // select file
    if (dialog.exec()) {
        selectedFilename = dialog.selectedFiles().at(0);
    }

    qDebug() << "output file: " << selectedFilename;

    // save filename
    dataHandler->setOutputFilename(selectedFilename);
}


/**
 * @brief MainWindow::on_generateDocumentBtn_clicked
 */
void MainWindow::on_generateDocumentBtn_clicked()
{
    // generate the document and save it
    dataHandler->GenerateDocument(dataHandler->getOutputFilename());
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

