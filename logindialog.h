#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include <QCryptographicHash> //包含MD5的算法库

namespace Ui {
class logInDialog;
}

class logInDialog : public QDialog
{
    Q_OBJECT

public:
    explicit logInDialog(QWidget *parent = nullptr);
    ~logInDialog();

    //将口令字符串转换为MD5加密
    QString strToMd5(QString str);
    //外界获得会员账号
    QString getMemberID()
    {return memberid;}
private slots:
    void on_logInPushButton_clicked();

    void on_exitPushButton_clicked();

private:
    Ui::logInDialog *ui;
    QString memberid;
};

#endif // LOGINDIALOG_H
