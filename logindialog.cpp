#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>

logInDialog::logInDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logInDialog)
{
    ui->setupUi(this);
    setFixedSize(400,300);
    setWindowTitle("登录注册");
    ui->adminLineEdit->setFocus();

    //设置皮肤
    QFile file(":/Ubuntu.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet=filetext.readAll();
    this->setStyleSheet(stylesheet);
}

logInDialog::~logInDialog()
{
    delete ui;
}

QString logInDialog::strToMd5(QString str)
{
    QString strMD5;
    QByteArray qba;
    qba=QCryptographicHash::hash(str.toLatin1(),QCryptographicHash::Md5);
    strMD5.append(qba.toHex());
    return strMD5;
}

void logInDialog::on_logInPushButton_clicked()
{
    if(!ui->pwdLineEdit->text().isEmpty())
    {
        QSqlQuery query;
        query.exec("select password from member where memberID='"+ui->adminLineEdit->text()+"'");
        if(!query.next())
            QMessageBox::warning(this,tr("账号错误"),tr("请输入正确账号！"),QMessageBox::Ok);
        else
        {
            //qDebug()<<strToMd5(query.value(0).toString());

            QString pwdMd5=strToMd5(ui->pwdLineEdit->text());
            if(query.value(0).toString()==pwdMd5)
            {
                this->memberid=ui->adminLineEdit->text();
                QDialog::accept();
            }
            else
            {
                QMessageBox::warning(this,tr("口令错误"),tr("请输入正确口令！"),QMessageBox::Ok);
                ui->pwdLineEdit->clear();
                ui->pwdLineEdit->setFocus();
            }
        }
    }
 }


void logInDialog::on_exitPushButton_clicked()
{
    //先看账号存在不存在
    QSqlQuery query;
    query.exec("select password from member where memberID='"+ui->adminLineEdit->text()+"'");
    if(query.next())
    {
        QMessageBox::warning(this,tr("账号已存在"),tr("请输入其它账号！"),QMessageBox::Ok);
        ui->adminLineEdit->clear();
        ui->adminLineEdit->setFocus();
        ui->pwdLineEdit->clear();
    }
    else
    {
        QString str=ui->pwdLineEdit->text();
        if(str.length()<6)
        {
            QMessageBox::warning(this,tr("密码太弱"),tr("请重新输入！"),QMessageBox::Ok);
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();
        }
        else
        {
            QString pwdMd5=strToMd5(str);
            bool ok=query.exec("insert into member(memberID,password) values('"+ui->adminLineEdit->text()+"','"+pwdMd5+"')");
            if(!ok) qDebug()<<"没有写入数据库！";
            ui->adminLineEdit->clear();
            ui->adminLineEdit->setFocus();
            ui->pwdLineEdit->clear();
            QMessageBox::information(this,tr("注册成功"),tr("请登录！"),QMessageBox::Ok);
        }
    }
}

