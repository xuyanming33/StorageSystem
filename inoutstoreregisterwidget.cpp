#include "inoutstoreregisterwidget.h"

InOutStoreRegisterItemWidget::InOutStoreRegisterItemWidget(QString mode, QWidget *parent)
{
    //新建布局
    QGridLayout* itemgridlayout=new QGridLayout();

    //采购入库 销售退货
    if(mode==QString("采购入库")||mode==QString("销售退货"))
    {
        int index=0;

        //交易对象、供应商
        if(mode==QString("采购入库"))
        {
            tradingPartnerLabel=new QLabel("供货单位:");
            tradingPartnerComboBox=new QComboBox();
            itemgridlayout->addWidget(tradingPartnerLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(tradingPartnerComboBox,index,1);
            ++index;
        }
        else if(mode==QString("销售退货"))
        {
            tradingPartnerLabel=new QLabel("退货客户:");
            tradingPartnerComboBox=new QComboBox();
            itemgridlayout->addWidget(tradingPartnerLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(tradingPartnerComboBox,index,1);
            ++index;

            vendorNameLabel=new QLabel("供应商:");
            vendorNameComboBox=new QComboBox();
            itemgridlayout->addWidget(vendorNameLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(vendorNameComboBox,index,1);
            ++index;
        }

        //产品类别
        commodityCategoryLabel=new QLabel("产品类别:");
        commodityCategoryComboBox=new QComboBox();
        itemgridlayout->addWidget(commodityCategoryLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(commodityCategoryComboBox,index,1);
        ++index;

        //产品名称
        commodityNameLabel=new QLabel("产品名称:");
        commodityNameComboBox=new QComboBox();
        itemgridlayout->addWidget(commodityNameLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(commodityNameComboBox,index,1);
        ++index;

        //交易价格
        transactionPriceLabel=new QLabel("交易价格:");
        transactionPriceDoubleSpinBox=new QDoubleSpinBox();
        itemgridlayout->addWidget(transactionPriceLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(transactionPriceDoubleSpinBox,index,1);
        ++index;

        //交易数量
        transactionQuantityLabel=new QLabel("交易数量:");
        transactionQuantitySpinBox=new QSpinBox();
        itemgridlayout->addWidget(transactionQuantityLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(transactionQuantitySpinBox,index,1);
        ++index;
    }
    //销售出库 采购退货
    else if(mode==QString("销售出库")||mode==QString("采购退货"))
    {
        int index=0;

        //交易对象、供应商
        if(mode==QString("销售出库"))
        {
            tradingPartnerLabel=new QLabel("购买客户:");
            tradingPartnerComboBox=new QComboBox();
            itemgridlayout->addWidget(tradingPartnerLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(tradingPartnerComboBox,index,1);
            ++index;

            vendorNameLabel=new QLabel("供应商:");
            vendorNameComboBox=new QComboBox();
            itemgridlayout->addWidget(vendorNameLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(vendorNameComboBox,index,1);
            ++index;
        }
        else if(mode==QString("采购退货"))
        {
            tradingPartnerLabel=new QLabel("退货供应:");
            tradingPartnerComboBox=new QComboBox();
            itemgridlayout->addWidget(tradingPartnerLabel,index,0,Qt::AlignRight);
            itemgridlayout->addWidget(tradingPartnerComboBox,index,1);
            ++index;
        }

        //产品类别
        commodityCategoryLabel=new QLabel("产品类别:");
        commodityCategoryComboBox=new QComboBox();
        itemgridlayout->addWidget(commodityCategoryLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(commodityCategoryComboBox,index,1);
        ++index;

        //产品名称
        commodityNameLabel=new QLabel("产品名称:");
        commodityNameComboBox=new QComboBox();
        itemgridlayout->addWidget(commodityNameLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(commodityNameComboBox,index,1);
        ++index;

        //交易价格
        transactionPriceLabel=new QLabel("交易价格:");
        transactionPriceDoubleSpinBox=new QDoubleSpinBox();
        itemgridlayout->addWidget(transactionPriceLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(transactionPriceDoubleSpinBox,index,1);
        ++index;

        //交易数量
        transactionQuantityLabel=new QLabel("交易数量:");
        transactionQuantitySpinBox=new QSpinBox();
        //transactionQuantitySpinBox->setMaximum(999999999999);
        itemgridlayout->addWidget(transactionQuantityLabel,index,0,Qt::AlignRight);
        itemgridlayout->addWidget(transactionQuantitySpinBox,index,1);
        ++index;
    }

    itemgridlayout->setColumnStretch(0,1);
    itemgridlayout->setColumnStretch(1,2);

    this->setLayout(itemgridlayout);
}

InOutStoreRegisterItemWidget::~InOutStoreRegisterItemWidget()
{

}



InOutStoreRegisterWidget::InOutStoreRegisterWidget(QWidget *parent)
{

}

InOutStoreRegisterWidget::~InOutStoreRegisterWidget()
{

}

void InOutStoreRegisterWidget::typeInit(QString type)
{
    //初始化页面
    titlewidget=new QWidget();
    QGridLayout* titlegridlayout=new QGridLayout();
    itemwidget=new QWidget();
    stacklayout=new QStackedLayout();

    int index=0;

    if(type==QString("入库登记"))
    {
        //标题页
        //入库日期
        inOutStoreDateLabel=new QLabel("入库日期:");
        inOutStoreDateEdit=new QDateEdit();
        titlegridlayout->addWidget(inOutStoreDateLabel,index,0,Qt::AlignRight);
        titlegridlayout->addWidget(inOutStoreDateEdit,index,1);
        ++index;
        //入库类型
        inOutStoreCategoryLabel=new QLabel("入库类型:");
        inOutStoreCategoryComboBox=new QComboBox();
        inOutStoreCategoryComboBox->addItem("采购入库");
        inOutStoreCategoryComboBox->addItem("销售退货");
        titlegridlayout->addWidget(inOutStoreCategoryLabel,index,0,Qt::AlignRight);
        titlegridlayout->addWidget(inOutStoreCategoryComboBox,index,1,1,1);
        ++index;

        //信息页
        //少项页
        lessitemwidget=new InOutStoreRegisterItemWidget(QString("采购入库"));
        //多项页
        moreitemwidget=new InOutStoreRegisterItemWidget(QString("销售退货"));
        stacklayout->addWidget(lessitemwidget);
        stacklayout->addWidget(moreitemwidget);
    }
    else if(type==QString("出库登记"))
    {
        //标题页
        //出库日期
        inOutStoreDateLabel=new QLabel("出库日期:");
        inOutStoreDateEdit=new QDateEdit();
        titlegridlayout->addWidget(inOutStoreDateLabel,index,0,Qt::AlignRight);
        titlegridlayout->addWidget(inOutStoreDateEdit,index,1);
        ++index;
        //出库类型
        inOutStoreCategoryLabel=new QLabel("出库类型:");
        inOutStoreCategoryComboBox=new QComboBox();
        inOutStoreCategoryComboBox->addItem("销售出库");
        inOutStoreCategoryComboBox->addItem("采购退货");
        titlegridlayout->addWidget(inOutStoreCategoryLabel,index,0,Qt::AlignRight);
        titlegridlayout->addWidget(inOutStoreCategoryComboBox,index,1);
        ++index;

        //信息页
        //多项页
        lessitemwidget=new InOutStoreRegisterItemWidget(QString("销售出库"));
        //少项页
        moreitemwidget=new InOutStoreRegisterItemWidget(QString("采购退货"));
        stacklayout->addWidget(lessitemwidget);
        stacklayout->addWidget(moreitemwidget);
    }

    titlegridlayout->setColumnStretch(0,1);
    titlegridlayout->setColumnStretch(1,2);

    //加载布局
    titlewidget->setLayout(titlegridlayout);
    itemwidget->setLayout(stacklayout);
    vboxlayout=new QVBoxLayout();
    vboxlayout->addWidget(titlewidget);
    vboxlayout->addWidget(itemwidget);
    this->setRegisterLayout("采购入库");
    this->setLayout(vboxlayout);
}

void InOutStoreRegisterWidget::setRegisterLayout(QString category)
{
    if(category==QString("采购入库")||category==QString("采购退货"))
    {
        vboxlayout->setStretch(0,2);
        vboxlayout->setStretch(1,5);
    }
    else
    {
        vboxlayout->setStretch(0,2);
        vboxlayout->setStretch(1,6);
    }
}
