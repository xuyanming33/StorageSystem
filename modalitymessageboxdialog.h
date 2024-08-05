#ifndef MODALITYMESSAGEBOXDIALOG_H
#define MODALITYMESSAGEBOXDIALOG_H

#include <QDialog>
#include <QDialog>
#include <QGraphicsView>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QWidget>
#include <QGridLayout>
#include <QTableView>
#include <QPushButton>
#include <QHeaderView>
#include <QStringList>
#include <QStandardItemModel>
#include <map>
#include <QLabel>
#include <QComboBox>
#include <QDateEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class ModalityMessageBoxDialog;
}

class ModalityMessageBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModalityMessageBoxDialog(QString type,QWidget *parent = nullptr);
    explicit ModalityMessageBoxDialog(QString type,QString startdate,
                       QString enddate,QString inoutstorecategory,QString memberid,QWidget *parent = nullptr);
    ~ModalityMessageBoxDialog();

    //增加模态对话框方案
    static void addModalityMessageBox(QString type,QString querystr,QStringList viewtitle);

    //初始话单据号范围对话框
    void initDocumentNumberRange(QString startdate,QString enddate,QString inoutstorecategory);

    //获取选择行
    QStringList getSelectedMessageRows();

    //获取单据号范围
    std::pair<int,int> getDocumentRange();

public slots:
    //重置单据范围
    void slot_resetDocumentRange();
    //确认单据范围
    void slot_confirmDocumentRange();
    //重置选择项目
    void slot_clearSelection();
    //确认选择项目
    void slot_confirmSelection();


private:
    Ui::ModalityMessageBoxDialog *ui;

    //重置、确认按钮
    QPushButton* resetbut;
    QPushButton* confirmbut;

    //单据号范围
    QString m_start_date;
    QString m_end_date;
    QString m_inoutstore_category;
    QString m_memberid;
    QGridLayout* gridlayout;
    QSpinBox* documentMinNumberSpinBox;
    QLabel* documentNumberRangeLabelTwo;
    QSpinBox* documentMaxNumberSpinBox;
    std::pair<int,int> documentNumberRange;

    //其它多选项
    QTableView* tableview;
    QStringList selectstringlist;
    QString m_type;
    QString m_querystr;
    QStringList m_viewtitle;

    static std::map<QString,std::pair<QString,QStringList>>* modalityMessageBox;

    //通用初始化
    void commonInit();

    //设置默认单据号范围
    void setDefaultDocumentRange();
};

#endif // MODALITYMESSAGEBOXDIALOG_H
