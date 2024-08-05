#ifndef MYSQLCONNECTION_H
#define MYSQLCONNECTION_H
#include <QtSql/QSqlDatabase>

class mySqlConnection
{
public:
    mySqlConnection();
    bool createMySqlConn();

    //
private:
    QSqlDatabase sqldb;
};

#endif // MYSQLCONNECTION_H
