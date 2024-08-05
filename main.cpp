#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include "logindialog.h"
#include "mysqlconnection.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //数据库连接
    mySqlConnection mysqlconn;
    if(!mysqlconn.createMySqlConn())
    {
        //初次尝试连接不成功就用代码方式启动MySQL服务进程
        QProcess process;
        process.start("C:/Program Files/MySQL/MySQL Server 8.0/bin/mysql.exe");
        if(!mysqlconn.createMySqlConn())
            return 1;
    }

    //登录对话框
    logInDialog login;

    if(login.exec()==QDialog::Accepted)
    {
        qDebug()<<login.getMemberID();
        MainWindow w(login.getMemberID());
        w.show();
        return a.exec();
    }
    else
    {
        return 0;
    }

//    MainWindow w("xuyanming");
//    w.show();
//    a.exec();
}
