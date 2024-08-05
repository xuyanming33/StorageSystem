#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QMessageBox>
#include <QLabel>
#include <QComboBox>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTime>
#include <QStandardItemModel>
#include <QFile>
#include <QtCharts>  //必须这么设置
#include <vector>
#include <set>
#include <map>
#include <iostream>

//#include "inoutstoreregistermessageitem.h"
#include "inoutstoreregisterwidget.h"
#include "modalitymessageboxdialog.h"

QT_CHARTS_USE_NAMESPACE     //使用宏定义
using namespace QtCharts;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//单据项
struct DocumentItem
{
    QString transferStoreType;//出入库类型
    QString tradingPartner;//交易对象
    QString vendorName;//供应商名称
    QString commodityCategory;//商品类型
    QString commodityName;//商品名称
    double tradingPrice;//交易价格
    int tradingNumber;//交易数量
};

//绘制柱状图的数据
struct DrawBarData
{
public:
    DrawBarData(QString barTitle,QString axisXTitle,std::vector<QString> axisXVector,
                QString axisYTitle,std::vector<int> intAxisYVector,QChartView* chartview)
        :m_barTitle(barTitle),m_axisXTitle(axisXTitle),m_axisXVector(axisXVector),
        m_axisYTitle(axisYTitle),m_intAxisYVector(intAxisYVector),m_chartview(chartview)
    {
        m_axisYValueType="数量";
    }
    DrawBarData(QString barTitle,QString axisXTitle,std::vector<QString> axisXVector,
                QString axisYTitle,std::vector<double> doubleAxisYVector,QChartView* chartview)
        :m_barTitle(barTitle),m_axisXTitle(axisXTitle),m_axisXVector(axisXVector),
        m_axisYTitle(axisYTitle),m_doubleAxisYVector(doubleAxisYVector),m_chartview(chartview)
    {
        m_axisYValueType="金额";
    }

    //柱状图标题
    QString m_barTitle;
    //横坐标标题
    QString m_axisXTitle;
    //横坐标查询语句
    std::vector<QString> m_axisXVector;
    //纵坐标标题
    QString m_axisYTitle;
    //纵坐标查询语句
    std::vector<int> m_intAxisYVector;
    std::vector<double> m_doubleAxisYVector;
    //纵坐标数值类型
    QString m_axisYValueType;
    //所属控件
    QChartView* m_chartview;

};

//绘制饼图的数据
struct DrawPieData
{
public:
    DrawPieData(QString pieTitle,std::vector<QString> axisXVector,
                std::vector<int> intAxisYVector,QChartView* chartview)
        :m_pieTitle(pieTitle),m_axisXVector(axisXVector),m_intAxisYVector(intAxisYVector),m_chartview(chartview)
    {
        m_axisYValueType="数量";
    }
    DrawPieData(QString barTitle,std::vector<QString> axisXVector,
                std::vector<double> doubleAxisYVector,QChartView* chartview)
        :m_pieTitle(barTitle),m_axisXVector(axisXVector),
        m_doubleAxisYVector(doubleAxisYVector),m_chartview(chartview)
    {
        m_axisYValueType="金额";
    }

    //柱状图标题
    QString m_pieTitle;
    //横坐标查询语句
    std::vector<QString> m_axisXVector;
    //纵坐标查询语句
    std::vector<int> m_intAxisYVector;
    std::vector<double> m_doubleAxisYVector;
    //纵坐标数值类型
    QString m_axisYValueType;
    //所属控件
    QChartView* m_chartview;
};

//统计信息项
struct StatisticalInformationItem
{
public:
    //出入库统计选项
    QString m_inStoreStatisticsOptions;
    //出入库类型
    QString m_inStoreCategory;
    //起始日期
    QDate m_startdate;
    //统计时长
    QString m_inStoreTimeLen;
    //横坐标
    std::vector<QString> m_axisXVector;
    //数量数值
    std::vector<int> m_countAxisYVector;
    //金额数值
    std::vector<double> m_moneyAxisYVector;
    //数量柱状图、饼图标题
    QString m_countTitle;
    //金额柱状图、饼图标题
    QString m_moneyTitle;
    //横坐标标题
    QString m_axisXTitle;
};

bool operator==(const DocumentItem &doc1,const DocumentItem &doc2);
bool operator!=(const DocumentItem &doc1,const DocumentItem &doc2);

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QString member_id,QWidget *parent = nullptr);
    ~MainWindow();

    //初始化
    void initAll();

    //初始化采购入库商品信息
    void initPurchaseReceiptCommodityMessage();

    //初始化销售出库商品信息
    void initSalesOutboundCommodityMessage();

    //初始化销售退货商品信息
    void initSalesReturnCommodityMessage();

    //初始化采购退货商品信息
    void initPurchaseReturnCommodityMessage();


    //添加采购入库单据
    void addPurchaseReceiptDocuments();

    //添加销售出库单据
    void addSalesOutboundDocuments();

    //添加销售退货单据
    void addSalesReturnDocuments();

    //添加采购退货单据
    void addPurchaseReturnDocuments();

//"今日情况"页面
    //日期与四个信息项的联动
    void firstDateChangeFourItems(const QDate &date);
    //日期与入库记录的联动
    void firstDateChangeInStoreList(const QDate &date);
    //日期与出库记录的联动
    void firstDateChangeOutStoreList(const QDate &date);
    //页面初始化
    void firstInit();
    //刷新"今日情况"页面
    void refreshFirstPage();
    //查询当日入库情况
    void firstInStoreQueryInListID(QString inStoreType);
    //查询当日出库情况
    void firstOutStoreQueryOrderID(QString outStoreType);

//默认出入库价格
    double getDefaultInOutStorePrice(QString valueType,QString vendorName,QString commodityName);

//"入库登记"页面
    //页面初始化
    void secondInit();
    //退货入库商品名联动数量最大值
    void returnGoodsInStoreCommodityNameChangeMaxCount();
    //刷新"入库登记"页面
    void refreshSecondPage();
    //默认入库价格
    void setDefaultInStorePrice();
    //添加退货入库模式
    void secondInStoreAddReturnGoodsMode();
    //添加采购入库模式
    void secondInStoreAddPurchaseGoodsMode();

//"出库登记"页面
    //页面初始
    void thirdInit();
    //销售出库商品名称联动数量最大值
    void saleOutStoreCommodityNameChangeMaxCount();
    //刷新"出库登记"页面
    void refreshThirdPage();
    //默认出库价格
    void setDefaultOutStorePrice();
    //切换为销售出库模式
    void thirdOutStoreSwitchToSaleGoodsMode();
    //切换为采购退货模式
    void thirdOutStoreSwitchToReturnGoodsMode();

//"入库单据查询"页面
    //刷新页面
    void refreshForthPage();
    //初始化
    void forthInit();
    //查询出符合要求的单据
    void forthInStoreQueryInListID();
    //更新日期范围
    void forthupdateInStoreDateRange();


//"出库单据查询"页面
    //刷新页面
    void refreshFifthPage();
    //初始化
    void fifthInit();
    //查询出符合要求的单据
    void fifthOutStoreQueryOrderID();
    //更新日期范围
    void fifthupdateOutStoreDateRange();


//"商品信息"页面
    //刷新页面
    void refreshSixthPage();
    //初始化
    void sixthInit();

//"客户信息"页面
    //刷新页面
    void refreshSeventhPage();
    //初始化
    void seventhInit();

//"供应商信息"页面
    //刷新页面
    void refreshEighthPage();
    //初始化
    void eighthInit();

//"现有库存管理"页面
    //刷新页面
    void refreshNinthPage();
    //初始化
    void ninthInit();

//绘制柱状图和饼图的通用函数
    //绘制柱状图
    void drawBarChart(DrawBarData barData);
    //绘制饼图
    void drawPieChart(DrawPieData pieData);
    //饼图分块活动
    void slotPieSliceHighlight(bool show);

//出入库统计数据
    //时间统计
    void timeStatistics(StatisticalInformationItem& statistInfoItem,
                        QStringList& inOutStoreSelectionCategoryOrTradingPartner,
                        std::vector<std::pair<QString,QString>>& inOutStoreSelectionCommoditys);
    //分类统计
    void classificationStatistics(StatisticalInformationItem& statistInfoItem,
                                  QStringList& inOutStoreSelectionCategoryOrTradingPartner,
                                  std::vector<std::pair<QString,QString>>& inOutStoreSelectionCommoditys);

//"库存统计"页面
    //绘图
    void tenthCreateChart();
    //初始化
    void tenthInit();
    //金额数值
    void moneyValueInit(std::vector<QString>& axisXVector,std::vector<double>& doubleAxisYVector);

//"入库统计"页面
    //更新日期范围
    void eleventhupdateInStoreDateRange();
    //刷新页面
    void refreshEleventhPage();
    //初始化页面
    void eleventhInit();
    //统计、绘制图表
    void eleventhCreateChart();

//"出库统计"页面
    //更新日期范围
    void twelfthupdateOutStoreDateRange();
    //刷新页面
    void refreshTwelfthPage();
    //初始化页面
    void TwelfthInit();
    //统计、绘制图表
    void twelfthCreateChart();

private slots:
//页面切换
    void on_actiontoday_triggered();
    void on_actionstorein_triggered();
    void on_actionstoreout_triggered();
    void on_actioninstorequery_triggered();
    void on_actionoutstorequery_triggered();
    void on_actioncommoditymanage_triggered();
    void on_actionclientmanage_triggered();
    void on_actionvendormanage_triggered();
    void on_actionstorestatus_triggered();
    void on_actioninventorystatistics_triggered();
    void on_actioninstorestatistics_triggered();
    void on_actionoutstorestatistics_triggered();

//"今日情况"页面
    //日期事件槽
        void on_firstdateEdit_userDateChanged(const QDate &date);


//"入库登记"页面
    //入库类别改变
        void slot_inStore_categoryComboBox_currentTextChanged(const QString &arg1);
    //交易对象改变(采购入库供应商联动类别、退货入库退货客户联动供应商)
        void slot_inStore_tradingPartnerComboBox_currentTextChanged(const QString &arg1);
    //供应商联动商品类别
        void slot_inStore_vendorName_change_commodityCategory(const QString &arg1);
    //商品类别与名称联动
        void slot_inStore_commodityCategoryComboBox_change_commodityName(const QString &arg1);
    //退货入库商品名称联动库存最大数量、默认入库价格
        void slot_inStore_commodityNameComboBox_change_maxCountAndDefaultInStorePrice(const QString &arg1);
    //加入单据
        void on_secondPreInStorePushButton_clicked();
    //单据入库
        void on_secondInStorePushButton_clicked();
    //重置单据
        void on_secondResetInStorePushButton_clicked();


//"出库登记"页面
    //出库类别改变
        void slot_outStore_categoryComboBox_currentTextChanged(const QString &arg1);
    //交易对象改变(销售出库客户联动供应商、退货出库供应商联动类别)
        void slot_outStore_tradingPartnerComboBox_currentTextChanged(const QString &arg1);
    //供应商联动商品类别
        void slot_outStore_vendorName_change_commodityCategory(const QString &arg1);
    //商品类别与名称联动
        void slot_outStore_commodityCategoryComboBox_change_commodityName(const QString &arg1);
    //商品名称联动最大出库数量
        void slot_outStore_commodityNameComboBox_change_maxCountAndOutStorePrice(const QString &arg1);
    //加入单据
        void on_thirdPreOutStorePushButton_clicked();
    //单据出库
        void on_thirdOutStorePushButton_clicked();
    //重置单据
        void on_thirdResetOutStorePushButton_clicked();


//"入库单据查询"页面
    //起始日期改变
        void on_forthInStoreStardDateEdit_dateChanged(const QDate &date);
    //结束日期改变
        void on_forthInStoreEndDateEdit_dateChanged(const QDate &date);
    //入库类型改变
        void on_forthInStoreCategoryComboBox_currentTextChanged(const QString &arg1);
    //查询模式改变
        void on_forthInStoreQueryModeComboBox_currentTextChanged(const QString &arg1);
    //清空按钮事件槽
        void on_forthInStoreClearpushButton_clicked();
    //查询按钮事件槽
        void on_forthInStoreQueryPushButton_clicked();

//"出库单据查询"页面
    //起始日期改变
        void on_fifthOutStoreStardDateEdit_dateChanged(const QDate &date);
    //结束日期改变
        void on_fifthOutStoreEndDateEdit_dateChanged(const QDate &date);
    //出库类型改变
        void on_fifthOutStoreCategoryComboBox_currentTextChanged(const QString &arg1);
    //查询模式改变
        void on_fifthOutStoreQueryModeComboBox_currentTextChanged(const QString &arg1);
    //清空按钮事件槽
        void on_fifthOutStoreClearpushButton_clicked();
    //查询按钮事件槽
        void on_fifthOutStoreQueryPushButton_clicked();

//"商品管理"页面
    //清空按钮事件槽
        void on_sixthClearPushButton_clicked();
    //新增商品按钮事件槽
        void on_sixthIncreCommodityPushButton_clicked();
    //表格回显信息项事件槽
        void on_sixthCommodityTableView_clicked(const QModelIndex &index);

//"客户管理"页面
    //清空按钮事件槽
        void on_seventhClearPushButton_clicked();
    //新增客户按钮事件槽
        void on_seventhIncreClientPushButton_clicked();
    //表格回显信息项事件槽
        void on_seventhTableView_clicked(const QModelIndex &index);

//"供应商管理"页面
    //清空按钮事件槽
        void on_eighthClearPushButton_clicked();
    //新增供应商事件槽
        void on_eighthIncreVendorPushButton_clicked();
    //回显
        void on_eighthVendorTableView_clicked(const QModelIndex &index);
//"现有库存管理"页面
    //回显
        void on_ninthtTableView_clicked(const QModelIndex &index);

//"库存统计"页面
    //统计对象改变
        void on_tenthStatisticsComboBox_currentTextChanged(const QString &arg1);
//"入库统计"页面
    //入库类型改变
        void on_eleventhInStoreCategoryComboBox_currentTextChanged(const QString &arg1);
    //统计对象改变
        void on_eleventhInStoreStatisticsComboBox_currentTextChanged(const QString &arg1);
    //起始日期改变
        void on_eleventhStartDateEdit_dateChanged(const QDate &date);
    //统计时长改变
        void on_eleventhTimeLengthComboBox_currentTextChanged(const QString &arg1);
    //重置信息
        void on_eleventhResetPushButton_clicked();
    //统计
        void on_eleventhStatisticsPushButton_clicked();
//"出库统计"页面
    //出库类型改变
        void on_twelfthOutStoreCategoryComboBox_currentTextChanged(const QString &arg1);
    //统计对象改变
        void on_twelfthOutStoreStatisticsComboBox_currentTextChanged(const QString &arg1);
    //起始日期改变
        void on_twelfthStartDateEdit_dateChanged(const QDate &date);
    //统计时长改变
        void on_twelfthTimeLengthComboBox_currentTextChanged(const QString &arg1);
    //重置信息
        void on_twelfthResetPushButton_clicked();
    //统计
        void on_twelfthStatisticsPushButton_clicked();







    private:
    Ui::MainWindow *ui;
    //会员账号
    QString memberId;
//调试用
    bool queryok=false;

    std::vector<QString> clientVec;

    std::map<int,std::pair<int,double>> purchaseInStoreCommodityMap;
    std::map<int,std::pair<int,double>> salesOutStoreCommodityMap;
    std::map<int,std::pair<int,double>> SalesReturnCommodityMap;
    std::map<int,std::pair<int,double>> purchaseReturnCommodityMap;


    //"今日情况"页面
        //今日入库记录数据模型
        QStandardItemModel *firstInStoreModel;
        //今日出库记录数据模型
        QStandardItemModel *firstOutStoreModel;

    //"入库登记"页面
        //产品类别
        QSqlQueryModel *secondCommodityCategoryModel;
        //产品名称数据模型
        QSqlQueryModel *secondCommodityNameModel;
        //供应商名/退货客户称数据模型
        QSqlQueryModel *secondVendorOrClientNameModel;
        //退货入库供应商
        QSqlQueryModel *secondReturnGoodsVendorNameModel;

        //入库登记页面
        InOutStoreRegisterWidget* m_inStoreRegisterWidget;
        //当前入库模式信息项
        InOutStoreRegisterItemWidget* m_currentInStoreMessageItem;
        //采购入库信息项
        InOutStoreRegisterItemWidget* m_purchaseInStoreMessageItem;
        //销售退货信息项
        InOutStoreRegisterItemWidget* m_returnGoodsInStoreMessageItem;
        //入库页面栈布局
        QStackedLayout* secondInStoreStackLayout;

        //是否在生成入库单据
        bool ifInStoreInvoices;
        //单据总金额
        double myPaySum;
        //单据ID
        int inlist_id;
        //入库单据项
        std::vector<DocumentItem> inStoreReceiptDocumentItems;

    //"出库登记"页面(基本信息项数据模型与"入库登记"页面相同）
        //产品类别
        QSqlQueryModel *thirdCommodityCategoryModel;
        //产品名称数据模型
        QSqlQueryModel *thirdCommodityNameModel;
        //购买客户/退货供应商名称数据模型
        QSqlQueryModel *thirdVendorOrClientNameModel;
        //销售出库供应商
        QSqlQueryModel *thirdSaleGoodsVendorNameModel;

        //出库登记页面
        InOutStoreRegisterWidget* m_outStoreRegisterWidget;
        //当前出库模式信息项
        InOutStoreRegisterItemWidget* m_currentOutStoreMessageItem;
        //销售出库信息项
        InOutStoreRegisterItemWidget* m_saleOutStoreMessageItem;
        //采购退货信息项
        InOutStoreRegisterItemWidget* m_returnGoodsOutStoreMessageItem;
        //出库页面栈布局
        QStackedLayout* thirdOutStoreStackLayout;

        //是否在生成出库单据
        bool ifOutStoreInvoices;
        //单据总金额
        double youPaySum;
        //单据ID
        int order_id;
        //出库单据项
        std::vector<DocumentItem> outStoreReceiptDocumentItems;

    //入库单据查询
        //入库单据号范围
        std::pair<int,int> forthInStoreDocumentRange;
        //被选择的交易对象
        QStringList forthInStoreSelectionTradingPartners;
        //被选择的商品
        std::vector<std::pair<QString,QString>> forthInStoreSelectionCommodityNames;

        //入库记录视图显示数据模型
        QStandardItemModel* forthInStoreTreeViewModel;

    //出库单据查询
        //出库单据号范围
        std::pair<int,int> fifthOutStoreDocumentRange;
        //被选择的交易对象
        QStringList fifthOutStoreSelectionTradingPartners;
        //被选择的商品
        std::vector<std::pair<QString,QString>> fifthOutStoreSelectionCommodityNames;

        //出库记录视图显示数据模型
        QStandardItemModel* fifthOutStoreTreeViewModel;

    //商品管理
        //商品类别数据模型
        QSqlQueryModel* sixthCommodityCategoryModel;
        //计量单位数据模型
        QSqlQueryModel* sixthCommodityUnitModel;
        //供应商数据模型
        QSqlQueryModel* sixthVendorModel;
        //商品信息视图数据模型
        QSqlQueryModel* sixthCommodityTreeViewModel;

    //客户管理
        //客户信息视图数据模型
        QSqlQueryModel* seventhTableViewModel;

    //供应商管理
        //供应商信息视图数据模型
        QSqlQueryModel* eighthTableViewModel;

    //现有库存页面
        //库存信息视图数据模型
        QSqlQueryModel *ninthTableViewModel;

    //"库存统计"页面
        //被选择的交易对象
        QStringList tenthSelectionVendors;
        //被选择的商品
        std::vector<std::pair<QString,QString>> tenthSelectionCommoditys;

    //"入库统计"页面
        //被选择的交易对象
        QStringList eleventhSelectionCategoryOrTradingPartner;
        //被选择的商品
        std::vector<std::pair<QString,QString>> eleventhSelectionCommoditys;

    //"出库统计"页面
        //被选择的交易对象
        QStringList twelfthSelectionCategoryOrTradingPartner;
        //被选择的商品
        std::vector<std::pair<QString,QString>> twelfthSelectionCommoditys;
};




#endif // MAINWINDOW_H
