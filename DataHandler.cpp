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
    QString sectionAll = "";

    // header with return address
    QString header = "<div align=right>PO Box 9311<br>South Burlington, VT<br>05407-9311</div>";

    // pwp logo centered


    // title
    QString title = "<h1 align=center>Job Estimate</h1>";

    // date underlined
    QString date = "<div align=left><u>" + estimateData.date + "</u></div>";

    // customer address underlined
    QString address = "<div align=left><u>" + estimateData.address + "</u></div> <br>";

    // Thank you message
    QString opener = "<div align=left>Hi " + estimateData.name + ",<br><strong>Thank you</strong> for patiently waiting for our estimate.</div>";

    // We broke this down into ___ sections
    QString numSections = "<h3 align=left><strong>We have broken this estimate down into " + estimateData.numSections + " section(s).</strong></h3>";

    // do the sections
    for (int i = 0; i < estimateData.numSections.toInt(); ++i) {
        QString sectionTitle = "<h3>" + estimateData.sections.at(i).title + "</h3>";

        QString start = "<div>After going over measurements and calculating costs, this job comes out to <strong>$" + estimateData.sections.at(i).billingPrice + " with supplies included.</strong></div> <br>";

        QString duration = "<div>This job will take " + estimateData.sections.at(i).manHours + " days to complete with <strong>an average of " + estimateData.sections.at(i).numPeople + " painters per day on site.</strong></div> <br>";

        QString services = "<div>Services included within this estimate: <br></div>";

        QString supplies = "<div>Expected Supplies needed for this job: <br></div>";

        QString suppliesCost = "<div><strong>Esitmated cost for all supplies:</strong> ~$" + estimateData.sections.at(i).expectedSuppliesCost + "</div>";

        QString notes = "<div><strong>Specific Notes about this Section:</strong><br></div>";

        // add it all together
        sectionAll += sectionTitle + start + duration + services + supplies + suppliesCost + notes;

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
    }

    // put it all together
    html += header + title + date + address + opener + numSections + sectionAll;

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize::A4);
    printer.setOutputFileName(documentName);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    // painter.drawImage(r, QImage(":/images/pwp-logo.png"));

    // finish editing
    document.print(&printer);

    return 0;
}
