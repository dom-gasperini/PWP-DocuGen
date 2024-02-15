/**
 * Dominic Gasperini
 * PWP DocuGen Software
 *
 * Main Window Header
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// includes
#include <QMainWindow>
#include <QTimer>
#include <AboutDlg.h>
#include <QStyleFactory>
#include <QMessageBox>
#include <QPalette>
#include <QFileDialog>
#include "DataHandler.h"

// namespace
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    // ui
    Ui::MainWindow *ui;
    QPalette m_currentPalette;

    // windows
    AboutDlg* m_aboutDialog;

    // timers
    QTimer* m_displayUpdateTimer;

    // data
    DataHandler* dataHandler;

private slots:
    void UpdateDisplay();
    void on_actionAbout_triggered();
    void on_actionDark_Mode_triggered(bool checked);
    void on_selectInputFileBtn_clicked();
    void on_selectOutputFileBtn_clicked();
    void on_generateDocumentBtn_clicked();
};
#endif // MAINWINDOW_H
