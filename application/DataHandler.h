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
#include <QTextDocument>
#include <QTextCursor>
#include <QTextEdit>
#include <QFont>
#include <QPdfWriter>
#include <QPainter>
#include <QtPrintSupport/QPrinter>

// typedefs
typedef struct EstimateSectionStruct {
    QString title;
    QString manHours;
    QString numPeople;
    QString billingPrice;
    QString jobDeposit;
    QString timeline;
    QString expectedSuppliesCost;
    QVector<QString> includedAreas;
    QVector<QString> excludedAreas;
    QVector<QString> expectedSupplies;
    QVector<QString> notes;
} EstimateSection;

typedef struct EstimateDataStruct {
    QString name;
    QString address;
    QString date;
    QString startDate;
    QString numSections;
    QVector<EstimateSection> sections;
} EstimateData;


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
    EstimateData getEstimateData();

    // setters
    void setInputFilename(QString name);
    void setOutputFilename(QString name);
    void setData(QStringList data);
    void setEstimateData(EstimateData data);

    // functions
    int ProcessData(QString filename);
    int GenerateDocument(QString filename);


private:
    QString inputFilename;
    QString outputFilename;
    QStringList data;
    EstimateData estimateData;

    // document
    QTextDocument* textDocument;
    QTextCursor* cursor;

};


#endif // DATAHANDLER_H
