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

        QString servicesList = "<li>Floor Protection </li>"
                               "<li>Wall Hung Items Deinstallation (outlet covers, switch plates, etc.) </li>"
                               "<li>Patching (walls) </li>"
                               "<li>Sanding (by hand and with a Festool MIDI I Dust Extractor) </li>"
                               "<li>Dusting </li>"
                               "<li>Taping </li>"
                               "<li>Masking </li>"
                               "<li>Spot Priming (stains, drywall repairs, and dark spots) </li>"
                               "<li>Full Priming (upstairs bathroom) </li>"
                               "<li>Painting (2 coats) </li>"
                               "<li>Reassembling Wall Hung Items (outlet covers, switch plates, etc.) </li>"
                               "<li>Daily Jobsite cleanup (trash removal and tool organization) </li>"
                               "<li>Final Cleanup (sweeping, vacuum, mopping if needed) </li>"
                               "<li>Touch ups as needed </li>";
        QString services = "<div><strong>Services included within this estimate:</strong> <ul>" + servicesList + "</ul></div>";

        QString suppliesList = "";
        for (int j = 0; j < estimateData.sections.at(i).expectedSupplies.size(); ++j) {
            suppliesList += "<li>" + estimateData.sections.at(i).expectedSupplies.at(j) + "</li>";
        }
        QString supplies = "<div><strong>Expected Supplies needed for this job:</strong> <ul>" + suppliesList + "</ul> </div>";

        QString suppliesCost = "<div><strong>Esitmated cost for all supplies:</strong> ~$" + estimateData.sections.at(i).expectedSuppliesCost + "</div>";

        QString notesList = "";
        for (int j = 0; j < estimateData.sections.at(i).notes.size(); ++j) {
            notesList += "<li>" + estimateData.sections.at(i).notes.at(j) + "</li>";
        }
        QString notes = "<div><strong>Specific Notes about this Section:</strong> <ul>" + notesList + "</ul> </div>";

        // add it all together
        sectionAll += sectionTitle + start + duration + services + supplies + suppliesCost + notes;
    }

    // notes for all four sections
    QString generalNotesList =
        "<li><strong>Defining Trim: window trim, baseboards, and door trims.</strong> This is importantwhen we describe how many colors are included in each section. </li>"
        "<li><strong>Services excluded in all 4 sections of this estimate:</strong> Drywall Repair (None initially detected) <strong>We will professionally complete the drywall repairs for $65/hr plus materials.</strong> </li>"
        "<li><strong>Moving Furniture, wall hung items like mirrors and artwork, rugs, and other decorations will cost $50/hr. </strong></li>";
    QString generalNotes = "<h3><strong>Notes pertaining to all 4 sections of this estimate</strong></h3> <ul>" + generalNotesList + "</ul>";

    // other services
    QString otherOfferedServicesList =
        "<li>Rot Repair </li>"
        "<li>Gutter Cleaning </li>"
        "<li>Pressure Washing </li>"
        "<li>EMP/IRC Lead Inspection </li>"
        "<li>Trim Installation </li>";
    QString otherOfferedServices = "<div><strong>Other services we provide: </strong> <ul>" + otherOfferedServicesList + "</ul> </div>";

    // other details & stipulations
    QString detailsAndStipulationsList =
        "<li>We will require a <strong>50% deposit of the stated price on day 1</strong> when our painters and tools arrive. </li>"
        "<li>We accept cash, check, credit card (3% fee applied), Zelle, and Venmo (2% fee applied). <strong>Invoices are sent over Quickbooks.</strong> </li>"
        "<li><strong>We are a professional painting company.</strong> If we find any spots outside of the scope, within reason, we will take care of these areas at no extra charge. <strong>Spots we deem to be outside of the scope will be communicated immediately with the general contractor and/or client at a $60/hr rate.</strong> There is a minimum <strong>$50 charge for any change order</strong> made during the completion of the job (change of scope, change of color, etc.). </li>"
        "<li>There is no increased overtime labor rate if we have painters in their overtime range. </li>"
        "<li>All other contractors working on this site simultaneously to Painting With Purpose LLC must be approved by Painting With Purpose LLC before the job begins. </li>"
        "<li>As much as we LOVE our furry, four-legged friends, Painting With Purpose LLC is <strong>not liable for any damage, disturbance or destructive behavior from any pet</strong> in or around the jobsite and we strongly suggest that you <strong>please keep your pets away from the jobsite while work is in progress.</strong> </li>"
        "<li>Painting With Purpose offers a <strong>1 year warranty</strong> on all work done with Benjamin Moore and Sherwin Williams products. </li>"
        "<li>We are <strong>EPA lead certified.</strong> </li>"
        "<li>We are <strong>EMP/IRC certified.</strong> </li>"
        "<li>We are <strong>registered Vermont contractors.</strong> </li>"
        "<li>We are <strong>fully insured</strong>. We possess general liability up to 2 million dollars, workers comp, commercial auto with a non-hired auto addition, and short & long term disability with life insurance. </li>"
        "<li>Our standard working hours are <strong>8AM-4PM Monday-Friday and 9-4 on Saturday.</strong> </li>"
        "<li>A portion of profits made on this job, like any job Painting With Purpose takes on, will be donated to CVOEO, helping the homeless of Chittenden and Franklin County find andmake rent, utility, and security payments on secure housing. Since our founding, we have <strong>raised over $14000 for our cause. Learn more on our website, cited at the bottom of this estimate.</strong> </li>";
    QString detailsAndStipulations = "<div><u><strong>Other Important Details & Stipulations </strong></u> <ul>" + detailsAndStipulationsList + "</ul> </div>";

    // references
    QString referencesList =
        "<li>Jeff Ellison (Building Manager, Middlebury Congregational Church) 802-388-7634 buildingmanager@midducc.org </li>"
        "<li>Joel Ribout (Facilities Manager, Saint Michael’s College) 802-654-2365 jribout@smcvt.edu </li>"
        "<li>Patric Walker (Owner, New Foundations Construction) 802-734-6879 </li>"
        "<li>Ieshia Harris (Property Manager, Champlain Housing Trust) 802-310-9711 Ieshia.Harris@champlainhousingtrust.org </li>"
        "<li>Adam Marchessault (Owner of ‘Summit and Shore of VT’, Vocational Educator at ‘BRIGHTality Specialized Educational School’) 802-324-8838 summitpropertyadam@gmail.com </li>"
        "<li>Esther Lotz (Owner, Esther Lotz Commercial and Industrial Real Estate) 802-343-0363 estherlotz@aol.com </li>"
        "<li>Kathy Mraz (Client of our most labor intensive job) 510-708-5787 razanonti@yahoo.com </li>";
    QString references = "<div><strong>We will provide you with a few reference contacts. </strong> <ul> " + referencesList + "</div>";

    // insurance
    QString insurance = "<div>Insurance Contact: David Palmer (Palmer Insurance LLC) 802-482-5678</div> <br>";

    // closing words
    QString closingWords = "<div>Let us know any other questions you may have and <strong>Thank You</strong> for your time. </div> <br>";

    // signature
    QString signature = "<div>Zach Dunn, Painting With Purpose <br> 802-724-6837 | Office@pwpvt.com</div>";

    // website and project plugs
    QString plug = "<h4><strong>Visit PWPVT.com to learn more and see past projects! </strong></h4>";

    // signature picture because lines are hard

    // lead-safe picture

    // put it all together
    html += header + title + date + address + opener + numSections + sectionAll + generalNotes + otherOfferedServices + detailsAndStipulations + references + insurance + closingWords + signature + plug;

    QTextDocument document;
    document.setHtml(html);

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize::A4);
    printer.setOutputFileName(documentName);
    printer.setPageMargins(QMarginsF(15, 15, 15, 15));

    // finish editing
    document.print(&printer);

    return 0;
}
