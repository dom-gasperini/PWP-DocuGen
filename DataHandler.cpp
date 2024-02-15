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

QString DataHandler::getInputFilename() {
    return inputFilename;
}

QString DataHandler::getOutputFilename() {
    return outputFilename;
}

QStringList DataHandler::getData() {
    return data;
}

// -------------------------------------------------- //
//                      Setters
// -------------------------------------------------- //

void DataHandler::setInputFilename(QString name) {
    inputFilename = name;
}

void DataHandler::setOutputFilename(QString name) {
    outputFilename = name;
}

void DataHandler::setData(QStringList newData) {
    data = newData;
}

// -------------------------------------------------- //
//                      Functions
// -------------------------------------------------- //


/**
 * @brief DataHandler::ReadData
 * @param filename
 * @return error
 */
int DataHandler::ReadData(QString filename) {
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


int DataHandler::GenerateDocument(QString filename) {
    // save file
    QString documentName = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/" + filename;
    qDebug() << "new filename: " << documentName;

    // open new file
    QFile document(documentName);

    if (document.open(QIODevice::ReadWrite | QIODevice::Text)) {
        // open text stream
        QTextStream documentData(&document);

        // write document
        documentData << "test";





    }
    else {
        qDebug() << "Failed to write or create/open new file!";
        return 1;
    }

    document.close();

    return 0;
}
