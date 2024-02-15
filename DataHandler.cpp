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
