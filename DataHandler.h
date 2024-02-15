/**
 * Dominic Gasperini
 * PWP DocuGen Software
 *
 * Data Class Header
*/

#ifndef DATAHANDLER_H
#define DATAHANDLER_H


// includes
#include <QObject>
#include <QDateTime>
#include <QFile>


// enumerations


/**
 * @brief The ProductData class
 */
class DataHandler
{
public:
    // constructor
    DataHandler();

    // getters


    // functions
    int ReadData(QString filename);
    int ProcessData();
    int GenerateDocument(QString filename);


private:
    QString inputFilename;
    QString outputFilename;
    QStringList data;

};


#endif // DATAHANDLER_H
