#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>
#include <QtDebug>
#include <QFile>
#include <QSqlRelationalTableModel>

extern int globalIndex;
extern QString userName;
extern QString userID;
const QString LOGFILEPATH = "./orderInfo.log";  // 日志文件地址

class GlobalFunc
{
public:
    GlobalFunc();
    ~GlobalFunc();
    static void saveLog(QString filePath, QString fileText);
};
#endif // GLOBAL_H
