/**
 * Dominic Gasperini
 * PWP DocuGen Software
 *
 * Data Handler Class
*/

// includes
#include "DataHandler.h"


/**
 * @brief ProductData::ProductData
 */
DataHandler::DataHandler()
{
    // init variables

}

// -------------------------------------------------- //
//                      Getters
// -------------------------------------------------- //


/**
 * @brief DataHandler::getInputFilename
 * @return
 */
QString DataHandler::getInputFilename() {
    return inputFilename;
}


/**
 * @brief DataHandler::getOutputFilename
 * @return
 */
QString DataHandler::getOutputFilename() {
    return outputFilename;
}


/**
 * @brief DataHandler::getData
 * @return
 */
QStringList DataHandler::getData() {
    return data;
}


/**
 * @brief DataHandler::getEstimateData
 * @return
 */
EstimateData DataHandler::getEstimateData() {
    return estimateData;
}


// -------------------------------------------------- //
//                      Setters
// -------------------------------------------------- //


/**
 * @brief DataHandler::setInputFilename
 * @param name
 */
void DataHandler::setInputFilename(QString name) {
    inputFilename = name;
}


/**
 * @brief DataHandler::setOutputFilename
 * @param name
 */
void DataHandler::setOutputFilename(QString name) {
    outputFilename = name;
}


/**
 * @brief DataHandler::setData
 * @param newData
 */
void DataHandler::setData(QStringList newData) {
    data = newData;
}


/**
 * @brief DataHandler::setEstimateData
 * @param data
 */
void DataHandler::setEstimateData(EstimateData data) {
    estimateData = data;
}


// -------------------------------------------------- //
//                      Functions
// -------------------------------------------------- //


/**
 * @brief DataHandler::ReadData
 * @param filename
 * @return error
 */
int DataHandler::ProcessData(QString filename) {
    // create file object
    QFile file(filename);

    // open the file
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return 1;
    }

    // read file
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        data.append(line);
    }

    qDebug() << data;

    return 0;
}


/**
 * @brief DataHandler::GenerateDocument
 * @param filename
 * @return
 */
int DataHandler::GenerateDocument(QString filename) {
    // inits
    QString documentName = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/" + filename + ".pdf";
    qDebug() << "new filename: " << documentName;

    // document content
    QString html = "";

    QString header = "<div align=right>PO Box 9311<br>South Burlington, VT<br>05407-9311</div>";
    QString title = "<h1 align=center>Job Estimate</h1>";
    QString date = "<div align=left><u>" + estimateData.date.toString("MM.dd.yyyy") + "</u></div><br>";
    QString address = "<div align=left><u>" + estimateData.address + "</u></div><br>";
    QString opener = "<div align=left>Hi " + estimateData.name + ",<br><strong>Thank you</strong> for patiently waiting for our estimate.</div><br>";
    QString numSections = "<div align=left>We have broken this estimate down into " + QString::number(estimateData.numSections) + " sections.</div><br>";
    QString content = "<p align=justify>"
        "document content document content document content document content document content document content document content document content document content document content "
        "document content document content document content document content document content document content document content document content document content document content "
        "</p>"
        "<div align=right>sincerly</div>";

    // put it all together
    html += header + title + date + address + opener + content;

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize::A4);
    printer.setOutputFileName(documentName);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    // header with return address

    // pwp logo centered
    // painter.drawImage(r, QImage(":/images/pwp-logo.png"));

    // date underlined

    // customer address underlined

    // Thank you message


    // We broke this down into ___ sections
    // Sections

    /* Section Breakdown
     * After going over measurements and calculating costs, this job comes out to $____ with supplies included.
     *
     * This job will take ___ - ___ days to complete with an average of __ painters per day on site.
     *
     * Services included within this estimate: (THIS IS STANDARD)
     *  ● Floor Protection
     *  ● Wall Hung Items Deinstallation (outlet covers, switch plates, etc.)
     *  ● Patching (walls)
     *  ● Sanding (by hand and with a Festool MIDI I Dust Extractor)
     *  ● Dusting
     *  ● Taping
     *  ● Masking
     *  ● Spot Priming (stains, drywall repairs, and dark spots)
     *  ● Full Priming (upstairs bathroom)
     *  ● Painting (2 coats)
     *  ● Reassembling Wall Hung Items (outlet covers, switch plates, etc.)
     *  ● Daily Jobsite cleanup (trash removal and tool organization)
     *  ● Final Cleanup (sweeping, vacuum, mopping if needed)
     *  ● Touch ups as needed
     *
     *
     *  Expected Supplies needed for this job:
     *  ● _ gallons of Sherwin Williams Duration paint (satin, walls)
     *  ● _ gallons of Sherwin Williams ProMar 400 paint (flat, ceiling)
     *  ● _ gallons of Sherwin Williams Cashmere paint (semi gloss, trim and door)
     *  ● _ gallons of Sherwin Williams Multipurpose Primer (upstairs bathroom)
     *  ● _ quart of Kilz Original oil primer (spot priming)
     *  ● Misc. (Sandpaper, painters plastic, tape, etc.)
     *
     *
     *  Specific Notes about this section:
     *  ● This estimate is computed with 1 wall, 1 ceiling, and 1 trim & door color. Any additional colors will be a $150 charge.
     *  ● We will be using a ⅜ nap roller for the walls, trim, doors and ceilings.
     *
     * notes for all four sections
     * closing stuff which is also all standard
    */

    // finish editing
    document.print(&printer);

    return 0;
}
