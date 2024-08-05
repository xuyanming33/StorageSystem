#ifndef INOUTSTOREREGISTERWIDGET_H
#define INOUTSTOREREGISTERWIDGET_H

#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QComboBox>
#include <QDateEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStackedLayout>

//信息页
class InOutStoreRegisterItemWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InOutStoreRegisterItemWidget(QString mode,QWidget *parent = nullptr);
    ~InOutStoreRegisterItemWidget();

public:
    //交易对象
    QLabel* tradingPartnerLabel;
    QComboBox* tradingPartnerComboBox;
    //供应商
    QLabel* vendorNameLabel;
    QComboBox* vendorNameComboBox;
    //产品类别
    QLabel* commodityCategoryLabel;
    QComboBox* commodityCategoryComboBox;
    //产品名称
    QLabel* commodityNameLabel;
    QComboBox* commodityNameComboBox;
    //交易价格
    QLabel* transactionPriceLabel;
    QDoubleSpinBox* transactionPriceDoubleSpinBox;
    //交易数量
    QLabel* transactionQuantityLabel;
    QSpinBox* transactionQuantitySpinBox;
};

//整体页
class InOutStoreRegisterWidget : public QWidget
{
    Q_OBJECT
public:
    explicit InOutStoreRegisterWidget(QWidget *parent = nullptr);
    ~InOutStoreRegisterWidget();

    //按类型初始化
    void typeInit(QString type);

    //设置布局比例
    void setRegisterLayout(QString category);

signals:

public:

    //标题页
    //标题窗口
    QWidget* titlewidget;
    //出入库日期
    QLabel* inOutStoreDateLabel;
    QDateEdit* inOutStoreDateEdit;
    //出入库类型
    QLabel* inOutStoreCategoryLabel;
    QComboBox* inOutStoreCategoryComboBox;

    //信息页
    //信息窗口
    QWidget* itemwidget;
    //信息窗口布局
    QStackedLayout* stacklayout;
    //整体布局
    QVBoxLayout *vboxlayout;
    //少项页
    InOutStoreRegisterItemWidget* lessitemwidget;
    //多项页
    InOutStoreRegisterItemWidget* moreitemwidget;

};

#endif // INOUTSTOREREGISTERWIDGET_H
