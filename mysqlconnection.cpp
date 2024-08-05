#include "mysqlconnection.h"
#include <QDebug>
mySqlConnection::mySqlConnection()
{
    sqldb=QSqlDatabase::addDatabase("QMYSQL");
    sqldb.setHostName("localhost");
    sqldb.setDatabaseName("newstoresystem");
    sqldb.setUserName("root");
    sqldb.setPassword("123456");
}

bool mySqlConnection::createMySqlConn()
{
    if(!sqldb.open())
    {
        qDebug()<<"连接失败";
        return false;
    }
    else
    {
        qDebug()<<"连接成功";
        return true;
    }
}
