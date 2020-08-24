#include "global.h"

int globalIndex = 0;
QString userName;
QString userID;

GlobalFunc::GlobalFunc()
{

}

GlobalFunc::~GlobalFunc()
{

}

void GlobalFunc::saveLog(QString filePath, QString fileText)
{
    QFile file(filePath);
    // 以追加的形式写入文件中
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    file.write(fileText.toUtf8());
    file.close();
}
