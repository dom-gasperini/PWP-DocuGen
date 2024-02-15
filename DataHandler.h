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
#include <QFileDialog>
#include <QStandardPaths>


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
    QString getInputFilename();
    QString getOutputFilename();
    QStringList getData();

    // setters
    void setInputFilename(QString name);
    void setOutputFilename(QString name);
    void setData(QStringList data);

    // functions
    int ProcessData(QString filename);
    int GenerateDocument(QString filename);


private:
    QString inputFilename;
    QString outputFilename;
    QStringList data;

};


#endif // DATAHANDLER_H
