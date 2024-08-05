#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QDebug>
MainWindow::MainWindow(QString member_id,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //初始化会员账号
    this->memberId=member_id;
    initAll();

    //设置皮肤
    QFile file(":/Ubuntu.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet=filetext.readAll();
    this->setStyleSheet(stylesheet);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initAll()
{   
    //初始化各个界面
    firstInit();
    secondInit();
    thirdInit();
    forthInit();
    fifthInit();
    sixthInit();
    seventhInit();
    eighthInit();
    ninthInit();
    tenthInit();
    eleventhInit();
    TwelfthInit();

//    initPurchaseReceiptCommodityMessage();
//    addPurchaseReceiptDocuments();

//    initSalesOutboundCommodityMessage();
//    addSalesOutboundDocuments();

//    initSalesReturnCommodityMessage();
//    addSalesReturnDocuments();

//    initPurchaseReturnCommodityMessage();
//    addPurchaseReturnDocuments();

    ui->firstInPutStoreTreeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->firstInPutStoreTreeView->header()->setDefaultAlignment(Qt::AlignCenter);

    ui->firstOutPutStoreTreeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->firstOutPutStoreTreeView->header()->setDefaultAlignment(Qt::AlignCenter);

    ui->forthInStoreTreeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->forthInStoreTreeView->header()->setDefaultAlignment(Qt::AlignCenter);

    ui->fifthOutStoreTreeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->fifthOutStoreTreeView->header()->setDefaultAlignment(Qt::AlignCenter);

    ui->sixthCommodityTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->seventhTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->eighthVendorTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->ninthtTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}
//初始化采购入库商品信息
void MainWindow::initPurchaseReceiptCommodityMessage()
{
    int countfluctuationRange=5;
    int moneyfluctuationRange=3;

    int countvec[5]={50,60,70,80,90};
    double moneyvec[9]={10.60,20.99,30.50,40.99,50.20,60.80,80.50,199.80,250.50};

    purchaseInStoreCommodityMap[6].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[6].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[7].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[7].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[8].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[8].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[9].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[9].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[10].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[10].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[11].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[11].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[12].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[12].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[13].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[13].second=moneyvec[4]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[14].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[14].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[15].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[15].second=moneyvec[6]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[16].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[16].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[17].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[17].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[18].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[18].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[20].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[20].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[21].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[21].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[22].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[22].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[23].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[23].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[24].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[24].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[25].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[25].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[26].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[26].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseInStoreCommodityMap[27].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseInStoreCommodityMap[27].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    QSqlQuery query;

    std::map<int,std::pair<int,double>>::iterator s=purchaseInStoreCommodityMap.begin();

//    while(s!=purchaseInStoreCommodityMap.end())
//    {
//        int commodityid=s->first;
//        query.exec(QString("select commodityName from commodity where commodityID=%1")
//                       .arg(commodityid));
//        query.next();
//        QString commodityname=query.value(0).toString();
//        qDebug()<<commodityid<<" "<<commodityname<<" "<<s->second.first<<" "<<s->second.second;
//        s++;
    //    }
}
//初始化销售出库商品信息
void MainWindow::initSalesOutboundCommodityMessage()
{
    int countfluctuationRange=5;
    int moneyfluctuationRange=3;

    int countvec[5]={20,25,30,35,40};
    double moneyvec[9]={15.60,25.99,35.50,46.99,60.20,70.80,90.50,250.80,350.50};

    salesOutStoreCommodityMap[6].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[6].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[7].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[7].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[8].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[8].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[9].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[9].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[10].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[10].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[11].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[11].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[12].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[12].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[13].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[13].second=moneyvec[4]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[14].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[14].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[15].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[15].second=moneyvec[6]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[16].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[16].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[17].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[17].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[18].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[18].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[20].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[20].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[21].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[21].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[22].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[22].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[23].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[23].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[24].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[24].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[25].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[25].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[26].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[26].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    salesOutStoreCommodityMap[27].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    salesOutStoreCommodityMap[27].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    QSqlQuery query;

    query.exec(QString("select clientName from client"));
    while(query.next())
    {
        clientVec.push_back(query.value(0).toString());
    }

    for(auto s:clientVec)
        qDebug()<<s;

    std::map<int,std::pair<int,double>>::iterator s=salesOutStoreCommodityMap.begin();

//    while(s!=salesOutStoreCommodityMap.end())
//    {
//        int commodityid=s->first;
//        query.exec(QString("select commodityName from commodity where commodityID=%1")
//                       .arg(commodityid));
//        query.next();
//        QString commodityname=query.value(0).toString();
//        qDebug()<<commodityid<<" "<<commodityname<<" "<<s->second.first<<" "<<s->second.second;
//        s++;
//    }
}
//初始化销售退货商品信息
void MainWindow::initSalesReturnCommodityMessage()
{
    int countfluctuationRange=5;
    int moneyfluctuationRange=3;

    int countvec[5]={1,2,3,4,5};
    double moneyvec[9]={15.60,25.99,35.50,46.99,60.20,70.80,90.50,250.80,350.50};

    SalesReturnCommodityMap[6].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[6].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[7].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[7].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[8].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[8].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[9].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[9].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[10].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[10].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[11].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[11].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[12].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[12].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[13].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[13].second=moneyvec[4]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[14].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[14].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[15].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[15].second=moneyvec[6]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[16].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[16].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[17].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[17].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[18].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[18].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[20].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[20].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[21].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[21].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[22].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[22].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[23].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[23].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[24].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[24].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[25].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[25].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[26].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[26].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    SalesReturnCommodityMap[27].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    SalesReturnCommodityMap[27].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    QSqlQuery query;

    query.exec(QString("select clientName from client"));
    while(query.next())
    {
        clientVec.push_back(query.value(0).toString());
    }

    for(auto s:clientVec)
        qDebug()<<s;

    std::map<int,std::pair<int,double>>::iterator s=SalesReturnCommodityMap.begin();

    while(s!=SalesReturnCommodityMap.end())
    {
        int commodityid=s->first;
        query.exec(QString("select commodityName from commodity where commodityID=%1")
                       .arg(commodityid));
        query.next();
        QString commodityname=query.value(0).toString();
        qDebug()<<commodityid<<" "<<commodityname<<" "<<s->second.first<<" "<<s->second.second;
        s++;
    }
}
//初始化采购退货商品信息
void MainWindow::initPurchaseReturnCommodityMessage()
{
    int countfluctuationRange=5;
    int moneyfluctuationRange=3;

    int countvec[5]={1,2,3,4,5};
    double moneyvec[9]={10.60,20.99,30.50,40.99,50.20,60.80,80.50,199.80,250.50};

    purchaseReturnCommodityMap[6].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[6].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[7].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[7].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[8].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[8].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[9].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[9].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[10].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[10].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[11].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[11].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[12].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[12].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[13].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[13].second=moneyvec[4]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[14].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[14].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[15].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[15].second=moneyvec[6]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[16].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[16].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[17].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[17].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[18].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[18].second=moneyvec[7]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[20].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[20].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[21].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[21].second=moneyvec[2]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[22].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[22].second=moneyvec[1]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[23].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[23].second=moneyvec[3]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[24].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[24].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[25].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[25].second=moneyvec[5]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[26].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[26].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    purchaseReturnCommodityMap[27].first=countvec[QRandomGenerator::global()->bounded(countfluctuationRange)];
    purchaseReturnCommodityMap[27].second=moneyvec[8]+QRandomGenerator::global()->bounded(moneyfluctuationRange);

    QSqlQuery query;

//    query.exec(QString("select clientName from client"));
//    while(query.next())
//    {
//        clientVec.push_back(query.value(0).toString());
//    }

//    for(auto s:clientVec)
//        qDebug()<<s;

    std::map<int,std::pair<int,double>>::iterator s=purchaseReturnCommodityMap.begin();

        while(s!=purchaseReturnCommodityMap.end())
        {
            int commodityid=s->first;
            query.exec(QString("select commodityName from commodity where commodityID=%1")
                           .arg(commodityid));
            query.next();
            QString commodityname=query.value(0).toString();
            qDebug()<<commodityid<<" "<<commodityname<<" "<<s->second.first<<" "<<s->second.second;
            s++;
        }
}
//添加采购入库单据
void MainWindow::addPurchaseReceiptDocuments()
{

    QSqlQuery queryvendor,querycommodity,querycommodityID;
    QDate startdate=QDate(2022,10,1);
    QDate enddate=QDate(2022,10,1);

    //入库类型
    m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentText(QString("采购入库"));

    //日期范围内
    while(startdate!=enddate)
    {
        //入库日期
        m_inStoreRegisterWidget->inOutStoreDateEdit->setDate(startdate);

        //查询出所有供应商
        QString vendorquerystr=QString("select vendorName from vendor where "
                                         "memberID='%1'")
            .arg(this->memberId);
        queryvendor.exec(vendorquerystr);

        //一个供应商生成一个单据
        while(queryvendor.next())
        {
            //查询出该供应商的所有商品
            QString vendorname=queryvendor.value(0).toString();
            QString commodityquerystr=QString("select commodityName "
                                                "from vendor,commodity where "
                                                "vendor.vendorID=commodity.vendorID and "
                                                "vendor.memberID='%1' and "
                                                "vendorName='%2'")
                                                .arg(this->memberId)
                                                .arg(vendorname);
            querycommodity.exec(commodityquerystr);

            m_currentInStoreMessageItem->tradingPartnerComboBox->setCurrentText(vendorname);

            //单据下该供应商的每种商品入库
            while(querycommodity.next())
            {
                QString commodityname=querycommodity.value(0).toString();
                //单据项信息录入数组
                DocumentItem item;
                //入库类型
                item.transferStoreType=m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
                //交易对象
                item.tradingPartner=vendorname;
                //供应商
                item.vendorName=vendorname;
                //产品类别
                item.commodityCategory="";
                //产品名称
                item.commodityName=commodityname;

                int commodityid=0;
                querycommodityID.exec(QString("select commodityID from commodity where commodityName='%1'")
                                      .arg(commodityname));
                querycommodityID.next();
                commodityid=querycommodityID.value(0).toInt();

                //交易数量
                item.tradingNumber=purchaseInStoreCommodityMap[commodityid].first
                                     +QRandomGenerator::global()->bounded(3);
                //交易价格
                item.tradingPrice=purchaseInStoreCommodityMap[commodityid].second
                                     +QRandomGenerator::global()->bounded(3);

                //录入数组
                inStoreReceiptDocumentItems.push_back(item);
            }

            //单据入库
            on_secondInStorePushButton_clicked();
        }

        for(auto item:inStoreReceiptDocumentItems)
        {
            qDebug()<<"transferStoreType:"<<item.transferStoreType;
            qDebug()<<"tradingPartner:"<<item.tradingPartner;
            qDebug()<<"vendorName:"<<item.vendorName;
            qDebug()<<"commodityName:"<<item.commodityName;
            qDebug()<<"tradingNumber:"<<item.tradingNumber;
            qDebug()<<"tradingPrice:"<<item.tradingPrice;
            qDebug()<<endl;
        }

        qDebug()<<startdate.toString("yyyy-MM-dd");
        startdate=startdate.addDays(1);
    }
}
//添加销售出库单据
void MainWindow::addSalesOutboundDocuments()
{
    QSqlQuery queryvendor,querycommodity,querycommodityID;
    QDate startdate=QDate(2022,10,1);
    QDate enddate=QDate(2022,10,1);

    //出库类型
    m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentText(QString("销售出库"));

    //日期范围内
    while(startdate!=enddate)
    {
        //入库日期
        m_outStoreRegisterWidget->inOutStoreDateEdit->setDate(startdate);

        //查询出所有供应商
        QString vendorquerystr=QString("select vendorName from vendor where "
                                         "memberID='%1'")
                                     .arg(this->memberId);
        queryvendor.exec(vendorquerystr);

        //一个供应商生成一个单据
        while(queryvendor.next())
        {
            //查询出该供应商的所有商品
            QString vendorname=queryvendor.value(0).toString();
            QString commodityquerystr=QString("select commodityName "
                                                "from vendor,commodity where "
                                                "vendor.vendorID=commodity.vendorID and "
                                                "vendor.memberID='%1' and "
                                                "vendorName='%2'")
                                            .arg(this->memberId)
                                            .arg(vendorname);
            querycommodity.exec(commodityquerystr);

            int range=this->clientVec.size();
            QString tradingPartner=clientVec[QRandomGenerator::global()->bounded(range)];
            m_currentOutStoreMessageItem->tradingPartnerComboBox->setCurrentText(tradingPartner);

            //单据下该供应商的每种商品入库
            while(querycommodity.next())
            {
                QString commodityname=querycommodity.value(0).toString();
                //单据项信息录入数组
                DocumentItem item;
                //入库类型
                item.transferStoreType=m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
                //交易对象
                item.tradingPartner=tradingPartner;
                //供应商
                item.vendorName=vendorname;
                //产品类别
                item.commodityCategory="";
                //产品名称
                item.commodityName=commodityname;

                int commodityid=0;
                querycommodityID.exec(QString("select commodityID from commodity where commodityName='%1'")
                                          .arg(commodityname));
                querycommodityID.next();
                commodityid=querycommodityID.value(0).toInt();

                //交易数量
                item.tradingNumber=salesOutStoreCommodityMap[commodityid].first
                                     +QRandomGenerator::global()->bounded(3);
                //交易价格
                item.tradingPrice=salesOutStoreCommodityMap[commodityid].second
                                    +QRandomGenerator::global()->bounded(3);

                //录入数组
                outStoreReceiptDocumentItems.push_back(item);
            }

            //单据入库
            on_thirdOutStorePushButton_clicked();
        }

        for(auto item:outStoreReceiptDocumentItems)
        {
            qDebug()<<"transferStoreType:"<<item.transferStoreType;
            qDebug()<<"tradingPartner:"<<item.tradingPartner;
            qDebug()<<"vendorName:"<<item.vendorName;
            qDebug()<<"commodityName:"<<item.commodityName;
            qDebug()<<"tradingNumber:"<<item.tradingNumber;
            qDebug()<<"tradingPrice:"<<item.tradingPrice;
            qDebug()<<endl;
        }

        qDebug()<<startdate.toString("yyyy-MM-dd");
        startdate=startdate.addDays(1);
    }
}
//添加销售退货单据
void MainWindow::addSalesReturnDocuments()
{
    QSqlQuery queryvendor,querycommodity,querycommodityID;
    QDate startdate=QDate(2024,10,1);
    QDate enddate=QDate(2024,10,1);

    //入库类型
    m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentText(QString("销售退货"));

    //日期范围内
    while(startdate!=enddate)
    {
        //入库日期
        m_inStoreRegisterWidget->inOutStoreDateEdit->setDate(startdate);

        //查询出所有供应商
        QString vendorquerystr=QString("select vendorName from vendor where "
                                         "memberID='%1'")
                                     .arg(this->memberId);
        queryvendor.exec(vendorquerystr);

        //一个供应商生成一个单据
        while(queryvendor.next())
        {
            //查询出该供应商的所有商品
            QString vendorname=queryvendor.value(0).toString();
            QString commodityquerystr=QString("select commodityName "
                                                "from vendor,commodity where "
                                                "vendor.vendorID=commodity.vendorID and "
                                                "vendor.memberID='%1' and "
                                                "vendorName='%2'")
                                            .arg(this->memberId)
                                            .arg(vendorname);
            querycommodity.exec(commodityquerystr);

            int range=this->clientVec.size();
            QString tradingPartner=clientVec[QRandomGenerator::global()->bounded(range)];
            m_currentInStoreMessageItem->tradingPartnerComboBox->setCurrentText(tradingPartner);

            //单据下该供应商的每种商品入库
            while(querycommodity.next())
            {
                QString commodityname=querycommodity.value(0).toString();
                //单据项信息录入数组
                DocumentItem item;
                //入库类型
                item.transferStoreType=m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
                //交易对象
                item.tradingPartner=tradingPartner;
                //供应商
                item.vendorName=vendorname;
                //产品类别
                item.commodityCategory="";
                //产品名称
                item.commodityName=commodityname;

                int commodityid=0;
                querycommodityID.exec(QString("select commodityID from commodity where commodityName='%1'")
                                          .arg(commodityname));
                querycommodityID.next();
                commodityid=querycommodityID.value(0).toInt();

                //交易数量
                item.tradingNumber=SalesReturnCommodityMap[commodityid].first
                                     +QRandomGenerator::global()->bounded(3);
                //交易价格
                item.tradingPrice=SalesReturnCommodityMap[commodityid].second
                                    +QRandomGenerator::global()->bounded(3);

                //录入数组
                inStoreReceiptDocumentItems.push_back(item);
            }

            //单据入库
            on_secondInStorePushButton_clicked();
        }

        for(auto item:inStoreReceiptDocumentItems)
        {
            qDebug()<<"transferStoreType:"<<item.transferStoreType;
            qDebug()<<"tradingPartner:"<<item.tradingPartner;
            qDebug()<<"vendorName:"<<item.vendorName;
            qDebug()<<"commodityName:"<<item.commodityName;
            qDebug()<<"tradingNumber:"<<item.tradingNumber;
            qDebug()<<"tradingPrice:"<<item.tradingPrice;
            qDebug()<<endl;
        }

        qDebug()<<startdate.toString("yyyy-MM-dd");
        startdate=startdate.addDays(1);
    }
}
//添加采购退货单据
void MainWindow::addPurchaseReturnDocuments()
{
    QSqlQuery queryvendor,querycommodity,querycommodityID;
    QDate startdate=QDate(2024,10,1);
    QDate enddate=QDate(2024,10,1);

    //入库类型
    m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentText(QString("采购退货"));

    //日期范围内
    while(startdate!=enddate)
    {
        //入库日期
        m_outStoreRegisterWidget->inOutStoreDateEdit->setDate(startdate);

        //查询出所有供应商
        QString vendorquerystr=QString("select vendorName from vendor where "
                                         "memberID='%1'")
                                     .arg(this->memberId);
        queryvendor.exec(vendorquerystr);

        //一个供应商生成一个单据
        while(queryvendor.next())
        {
            //查询出该供应商的所有商品
            QString vendorname=queryvendor.value(0).toString();
            QString commodityquerystr=QString("select commodityName "
                                                "from vendor,commodity where "
                                                "vendor.vendorID=commodity.vendorID and "
                                                "vendor.memberID='%1' and "
                                                "vendorName='%2'")
                                            .arg(this->memberId)
                                            .arg(vendorname);
            querycommodity.exec(commodityquerystr);

            m_currentOutStoreMessageItem->tradingPartnerComboBox->setCurrentText(vendorname);

            //单据下该供应商的每种商品入库
            while(querycommodity.next())
            {
                QString commodityname=querycommodity.value(0).toString();
                //单据项信息录入数组
                DocumentItem item;
                //入库类型
                item.transferStoreType=m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
                //交易对象
                item.tradingPartner=vendorname;
                //供应商
                item.vendorName=vendorname;
                //产品类别
                item.commodityCategory="";
                //产品名称
                item.commodityName=commodityname;

                int commodityid=0;
                querycommodityID.exec(QString("select commodityID from commodity where commodityName='%1'")
                                          .arg(commodityname));
                querycommodityID.next();
                commodityid=querycommodityID.value(0).toInt();

                //交易数量
                item.tradingNumber=purchaseReturnCommodityMap[commodityid].first
                                     +QRandomGenerator::global()->bounded(3);
                //交易价格
                item.tradingPrice=purchaseReturnCommodityMap[commodityid].second
                                    +QRandomGenerator::global()->bounded(3);

                //录入数组
                outStoreReceiptDocumentItems.push_back(item);
            }

            //单据入库
            on_thirdOutStorePushButton_clicked();
        }

        for(auto item:outStoreReceiptDocumentItems)
        {
            qDebug()<<"transferStoreType:"<<item.transferStoreType;
            qDebug()<<"tradingPartner:"<<item.tradingPartner;
            qDebug()<<"vendorName:"<<item.vendorName;
            qDebug()<<"commodityName:"<<item.commodityName;
            qDebug()<<"tradingNumber:"<<item.tradingNumber;
            qDebug()<<"tradingPrice:"<<item.tradingPrice;
            qDebug()<<endl;
        }

        qDebug()<<startdate.toString("yyyy-MM-dd");
        startdate=startdate.addDays(1);
    }
}


//页面切换
void MainWindow::on_actiontoday_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_actionstorein_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_actionstoreout_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_actioninstorequery_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_actionoutstorequery_triggered()
{
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_actioncommoditymanage_triggered()
{
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_actionclientmanage_triggered()
{
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_actionvendormanage_triggered()
{
    ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow::on_actionstorestatus_triggered()
{
    ui->stackedWidget->setCurrentIndex(8);
}
void MainWindow::on_actioninventorystatistics_triggered()
{
    ui->stackedWidget->setCurrentIndex(9);
}
void MainWindow::on_actioninstorestatistics_triggered()
{
    ui->stackedWidget->setCurrentIndex(10);
}
void MainWindow::on_actionoutstorestatistics_triggered()
{
    ui->stackedWidget->setCurrentIndex(11);
}


//"今日情况"页面
//日期与四个信息项的联动
void MainWindow::firstDateChangeFourItems(const QDate &date)
{
    QString otime=date.toString("yyyy-MM-dd");
    QSqlQuery query;
    //入库
    int procureinlistcount=0,returngoodsinlistcount=0;
    query.exec(QString("select count(*) as inStorePaySum from procureinlists "
                       "where OTime='%1' and memberID='%2'")
                   .arg(otime).arg(this->memberId));

    query.next();
    procureinlistcount=query.value(0).toInt();
    query.exec(QString("select count(*) as inStorePaySum from returngoodsinlists "
                       "where OTime='%1' and memberID='%2'")
                   .arg(otime).arg(this->memberId));

    query.next();
    returngoodsinlistcount=query.value(0).toInt();
    ui->firstInStoreLabel->setText(QString("%1").arg(procureinlistcount+returngoodsinlistcount));
    //出库
    int saleordercount=0,returngoodsordercount=0;
    query.exec(QString("select count(*) as outStorePaySum from saleorders "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    query.next();
    saleordercount=query.value(0).toInt();
    query.exec(QString("select count(*) as outStorePaySum from returngoodsorders "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    query.next();
    returngoodsordercount=query.value(0).toInt();
    ui->firstOutStoreLabel->setText(QString("%1").arg(saleordercount+returngoodsordercount));
    //利润
    double inSum=0,outSum=0;
    query.exec(QString("select sum(paySum) as inStorePaySum from procureinlists "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    if(query.next())
        inSum+=query.value(0).toDouble();
    query.exec(QString("select sum(paySum) as inStorePaySum from returngoodsinlists "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    if(query.next())
        inSum+=query.value(0).toDouble();

    query.exec(QString("select sum(paySum) as outStorePaySum from saleorders "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    if(query.next())
        outSum+=query.value(0).toDouble();
    query.exec(QString("select sum(paySum) as outStorePaySum from returngoodsorders "
                       "where OTime='%1' and memberID='%2'").arg(otime).arg(this->memberId));
    if(query.next())
        outSum+=query.value(0).toDouble();
    ui->firstProfitLabel->setText(QString::number(inSum));
    //销售
    ui->firstSalesLabel->setText(QString::number(outSum));
}
//日期与入库记录的联动
void MainWindow::firstDateChangeInStoreList(const QDate &date)
{
    firstInStoreModel=new QStandardItemModel();
    firstInStoreQueryInListID(QString("采购入库"));
    firstInStoreQueryInListID(QString("销售退货"));
    //设置表头
    QStringList labellist;
    labellist<<QStringLiteral("      入库类型      ")
              <<QStringLiteral("      入库日期      ")
              <<QStringLiteral("      订单号      ")
              <<QStringLiteral("      交易对象           ")
              <<QStringLiteral("      总金额      ")
              <<QStringLiteral("      供应商      ")
              <<QStringLiteral("      商品名      ")
              <<QStringLiteral("      类别      ")
              <<QStringLiteral("      进价      ")
              <<QStringLiteral("      数量      ")
              <<QStringLiteral("      计量单位      ");
    firstInStoreModel->setHorizontalHeaderLabels(labellist);

    //加载数据模型
    ui->firstInPutStoreTreeView->setModel(firstInStoreModel);
    ui->firstInPutStoreTreeView->show();

}
//日期与出库记录的联动
void MainWindow::firstDateChangeOutStoreList(const QDate &date)
{
    firstOutStoreModel=new QStandardItemModel();
    firstOutStoreQueryOrderID(QString("销售出库"));
    firstOutStoreQueryOrderID(QString("采购退货"));
    //设置表头
    QStringList labellist;
    labellist<<QStringLiteral("      出库类型      ")
              <<QStringLiteral("      出库日期      ")
              <<QStringLiteral("      订单号      ")
              <<QStringLiteral("      交易对象           ")
              <<QStringLiteral("      总金额      ")
              <<QStringLiteral("      供应商      ")
              <<QStringLiteral("      商品名      ")
              <<QStringLiteral("      类别      ")
              <<QStringLiteral("      进价      ")
              <<QStringLiteral("      数量      ")
              <<QStringLiteral("      计量单位      ");
    firstOutStoreModel->setHorizontalHeaderLabels(labellist);

    //加载数据模型
    ui->firstOutPutStoreTreeView->setModel(firstOutStoreModel);
    ui->firstOutPutStoreTreeView->show();
}
//页面初始化
void MainWindow::firstInit()
{
    //设置日期
    ui->firstdateEdit->setDate(QDate::currentDate());
    QDate date=QDate::currentDate();
    //日期与四项关联
    firstDateChangeFourItems(date);
    //日期与入库记录关联
    firstDateChangeInStoreList(date);
    //日期与出库记录关联
    firstDateChangeOutStoreList(date);
}
//刷新"今日情况"页面
void MainWindow::refreshFirstPage()
{
    QDate date=ui->firstdateEdit->date();
    //日期与四项关联
    firstDateChangeFourItems(date);
    //日期与入库记录关联
    firstDateChangeInStoreList(date);
    //日期与出库记录关联
    firstDateChangeOutStoreList(date);
}
//查询当日入库情况
void MainWindow::firstInStoreQueryInListID(QString inStoreType)
{
    //目标视图
    QSqlQuery queryinlists,queryinlistitems;
    QStandardItem *rootItem=firstInStoreModel->invisibleRootItem();

    //单据号集合
    std::set<int> inlistidset;

    //父项、子项查询要素
    QString querytable,queryview;
    int parentitemcount=0,childrenitemcount=0;


    //主句 出库日期、订单号、供应商、应付总金额、商品名、类别、进价、数量、计量单位
    //主句 出库日期、订单号、退货客户、供应商、应付总金额、商品名、类别、进价、数量、计量单位

    //不同的入库方式采用不同的数据模型
    if(inStoreType==QString("采购入库"))
    {
        querytable="procureinlists";
        queryview="commodity_procureinlists_procureinlistitems_inf";
        parentitemcount=5;
        childrenitemcount=11;
    }
    else if(inStoreType==QString("销售退货"))
    {
        querytable="returngoodsinlists";
        queryview="commodity_returngoodsinlists_returngoodsinlistitems_inf";
        parentitemcount=5;
        childrenitemcount=11;
    }

    //找到所有合适的单据号到集合中

    if(inStoreType==QString("采购入库"))
    {
        QString querydocumentstr;
        querydocumentstr=QString("select inListID from procureinlists where "
                                   "OTime='%1' and procureinlists.memberID='%2'")
                               .arg(ui->firstdateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->memberId);
        queryinlists.exec(querydocumentstr);
        while(queryinlists.next())
            inlistidset.insert(queryinlists.value(0).toInt());
    }
    else if(inStoreType==QString("销售退货"))
    {
        QString querydocumentstr;
        querydocumentstr=QString("select inListID from returngoodsinlists where "
                                   "OTime='%1' and returngoodsinlists.memberID='%2'")
                               .arg(ui->firstdateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->memberId);
        queryinlists.exec(querydocumentstr);
        while(queryinlists.next())
            inlistidset.insert(queryinlists.value(0).toInt());
    }

    for(auto inlistid:inlistidset)
        qDebug()<<"inlistid:"<<inlistid;

    //根据单据号集合建立数据模型
    for(auto inlistid:inlistidset)
    {
        QString queryinlistsstr,queryinlistitemsstr;
        //查询采购入库单据
        if(inStoreType==QString("采购入库"))
            queryinlistsstr=QString("select OTime,inListID,vendorName,paySum from %1,vendor "
                                      "where %2.vendorID=vendor.vendorID and vendor.memberID='%3' "
                                      "and inListID=%4")
                                  .arg(querytable)
                                  .arg(querytable)
                                  .arg(this->memberId)
                                  .arg(inlistid);
        else if(inStoreType==QString("销售退货"))
            queryinlistsstr=QString("select OTime,inListID,clientName,paySum from %1,client "
                                      "where %2.clientID=client.clientID and client.memberID='%3' "
                                      "and inListID=%4")
                                  .arg(querytable)
                                  .arg(querytable)
                                  .arg(this->memberId)
                                  .arg(inlistid);
        queryinlists.exec(queryinlistsstr);
        queryinlists.next();
        //添加入库订单父项
        QList<QStandardItem*> parentitemlist;
        QStandardItem* parentfirstitem=new QStandardItem(inStoreType);
        parentitemlist<<parentfirstitem;
        for(int i=0;i<parentitemcount-1;i++)
        {
            QStandardItem* parentitem=new QStandardItem(queryinlists.value(i).toString());
            parentitemlist<<parentitem;
            std::cout<<queryinlists.value(i).toString().toStdString()<<" ";
        }
        std::cout<<std::endl;

        rootItem->appendRow(parentitemlist);
        //添加入库订单子项 商品名 类别 进价 数量 计量单位
        if(inStoreType==QString("采购入库"))
            queryinlistitemsstr=QString("select vendorName,commodityName,categoryName,purchasePrice,"
                                          "inStoreCount,unitName "
                                          "from %1 "
                                          "where inListID='%2'")
                                      .arg(queryview)
                                      .arg(inlistid);
        else if(inStoreType==QString("销售退货"))
            queryinlistitemsstr=QString("select vendorName,commodityName,categoryName,purchasePrice,"
                                          "inStoreCount,unitName "
                                          "from %1 "
                                          "where inListID='%2'")
                                      .arg(queryview)
                                      .arg(inlistid);
        queryinlistitems.exec(queryinlistitemsstr);
        while(queryinlistitems.next())
        {
            QList<QStandardItem*> childrenitemlist;
            for(int j=0;j<childrenitemcount;j++)
            {
                if(j<parentitemcount)
                    childrenitemlist<<new QStandardItem(QString(""));
                else
                {
                    //std::cout<<queryinlistitems.value(j).toString().toStdString()<<" ";
                    childrenitemlist<<new QStandardItem(queryinlistitems.value(j-parentitemcount).toString());
                }
            }
            //std::cout<<std::endl;

            parentfirstitem->appendRow(childrenitemlist);
        }
    }


}
//查询当日出库情况
void MainWindow::firstOutStoreQueryOrderID(QString outStoreType)
{
    //目标视图
    QSqlQuery queryorders,queryorderitems;

    QStandardItem *rootItem=firstOutStoreModel->invisibleRootItem();

    //单据号集合
    std::set<int> orderidset;

    //父项、子项查询要素
    QString querytable,queryview;
    int parentitemcount=0,childrenitemcount=0;


    //主句 出库日期、订单号、供应商、应付总金额、商品名、类别、进价、数量、计量单位
    //主句 出库日期、订单号、退货客户、供应商、应付总金额、商品名、类别、进价、数量、计量单位

    //不同的入库方式采用不同的数据模型
    if(outStoreType==QString("销售出库"))
    {
        querytable="saleorders";
        queryview="commodity_saleorders_saleorderitems_inf";
        parentitemcount=5;
        childrenitemcount=11;
    }
    else if(outStoreType==QString("采购退货"))
    {
        querytable="returngoodsorders";
        queryview="commodity_returngoodsorders_returngoodsorderitems_inf";
        parentitemcount=5;
        childrenitemcount=11;
    }

    //找到所有合适的单据号到集合中
    if(outStoreType==QString("销售出库"))
    {
        QString querydocumentstr;
        querydocumentstr=QString("select orderID from saleorders where "
                                   "OTime='%1' and saleorders.memberID='%2'")
                               .arg(ui->firstdateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->memberId);
        queryorders.exec(querydocumentstr);
        while(queryorders.next())
            orderidset.insert(queryorders.value(0).toInt());
    }
    else if(outStoreType==QString("采购退货"))
    {
        QString querydocumentstr;
        querydocumentstr=QString("select orderID from returngoodsorders where "
                                   "OTime='%1' and returngoodsorders.memberID='%2'")
                               .arg(ui->firstdateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->memberId);
        queryorders.exec(querydocumentstr);
        while(queryorders.next())
            orderidset.insert(queryorders.value(0).toInt());
    }

    for(auto orderid:orderidset)
        qDebug()<<"orderid:"<<orderid;

    //根据单据号集合建立数据模型
    for(auto orderid:orderidset)
    {
        QString queryordersstr,queryorderitemsstr;
        //查询采购入库单据
        if(outStoreType==QString("销售出库"))
            queryordersstr=QString("select OTime,orderID,clientName,paySum from %1,client "
                                     "where %2.clientID=client.clientID and client.memberID='%3' "
                                     "and orderID=%4")
                                 .arg(querytable)
                                 .arg(querytable)
                                 .arg(this->memberId)
                                 .arg(orderid);
        else if(outStoreType==QString("采购退货"))
            queryordersstr=QString("select OTime,orderID,vendorName,paySum from %1,vendor "
                                     "where %2.vendorID=vendor.vendorID and vendor.memberID='%3' "
                                     "and orderID=%4")
                                 .arg(querytable)
                                 .arg(querytable)
                                 .arg(this->memberId)
                                 .arg(orderid);
        queryorders.exec(queryordersstr);
        queryorders.next();
        //添加入库订单父项
        QList<QStandardItem*> parentitemlist;
        QStandardItem* parentfirstitem=new QStandardItem(outStoreType);
        parentitemlist<<parentfirstitem;
        for(int i=0;i<parentitemcount-1;i++)
        {
            QStandardItem* parentitem=new QStandardItem(queryorders.value(i).toString());
            parentitemlist<<parentitem;
            std::cout<<queryorders.value(i).toString().toStdString()<<" ";
        }
        std::cout<<std::endl;

        rootItem->appendRow(parentitemlist);
        //添加入库订单子项 商品名 类别 进价 数量 计量单位
        if(outStoreType==QString("销售出库"))
            queryorderitemsstr=QString("select vendorName,commodityName,categoryName,sellingPrice,"
                                         "outStoreCount,unitName "
                                         "from %1 "
                                         "where orderID='%2'")
                                     .arg(queryview)
                                     .arg(orderid);
        else if(outStoreType==QString("采购退货"))
            queryorderitemsstr=QString("select vendorName,commodityName,categoryName,sellingPrice,"
                                         "outStoreCount,unitName "
                                         "from %1 "
                                         "where orderID='%2'")
                                     .arg(queryview)
                                     .arg(orderid);
        queryorderitems.exec(queryorderitemsstr);
        while(queryorderitems.next())
        {
            QList<QStandardItem*> childrenitemlist;
            for(int j=0;j<childrenitemcount;j++)
            {
                if(j<parentitemcount)
                    childrenitemlist<<new QStandardItem(QString(""));
                else
                {
                    //std::cout<<queryinlistitems.value(j).toString().toStdString()<<" ";
                    childrenitemlist<<new QStandardItem(queryorderitems.value(j-parentitemcount).toString());
                }
            }
            //std::cout<<std::endl;

            parentfirstitem->appendRow(childrenitemlist);
        }
    }
}
//日期事件槽
void MainWindow::on_firstdateEdit_userDateChanged(const QDate &date)
{
    //日期与四项关联
    firstDateChangeFourItems(date);
    //日期与入库记录关联
    firstDateChangeInStoreList(date);
    //日期与出库记录关联
    firstDateChangeOutStoreList(date);
}


//默认出入库价格
double MainWindow::getDefaultInOutStorePrice(QString valueType, QString vendorName, QString commodityName)
{
    QSqlQuery query;
    QString queryvaluestr;

    //统计单据，计算平均进价
    int count=0;
    double money=0;

    if(valueType=="进价")
        queryvaluestr=QString("select inStoreCount,purchasePrice from "
                                        "commodity_procureinlists_procureinlistitems_inf "
                                        "where memberID='%1' and "
                                        "vendorName='%2' and "
                                        "commodityName='%3'")
                                    .arg(this->memberId)
                                    .arg(vendorName)
                                    .arg(commodityName);

    else if(valueType=="售价")
        queryvaluestr=QString("select outStoreCount,sellingPrice from "
                                "commodity_saleorders_saleorderitems_inf "
                                "where memberID='%1' and "
                                "vendorName='%2' and "
                                "commodityName='%3'")
                            .arg(this->memberId)
                            .arg(vendorName)
                            .arg(commodityName);

    query.exec(queryvaluestr);
    while(query.next())
    {
        count+=query.value(0).toInt();
        money+=query.value(0).toInt()*query.value(1).toDouble();
    }

    return money/count;
}


//"入库登记"页面
//初始化
void MainWindow::secondInit()
{
    //初始化两种出库页面

    //创建实例
    m_inStoreRegisterWidget=new InOutStoreRegisterWidget();
    m_inStoreRegisterWidget->typeInit("入库登记");
    m_purchaseInStoreMessageItem=m_inStoreRegisterWidget->lessitemwidget;
    m_returnGoodsInStoreMessageItem=m_inStoreRegisterWidget->moreitemwidget;

    //建立信号链
    secondInStoreAddPurchaseGoodsMode();
    secondInStoreAddReturnGoodsMode();

    //设置默认页面
    secondInStoreStackLayout=m_inStoreRegisterWidget->stacklayout;
    m_currentInStoreMessageItem=m_purchaseInStoreMessageItem;

    //日期
    m_inStoreRegisterWidget->inOutStoreDateEdit->setDate(QDate::currentDate());

    //加载窗口
    QVBoxLayout* vboxlayout=new QVBoxLayout();
    vboxlayout->addWidget(m_inStoreRegisterWidget);
    ui->secondInStoreWidget->setLayout(vboxlayout);

    //是否在生成入库单据
    ifInStoreInvoices=false;
    //单据总金额
    myPaySum=0;
    //单据ID
    inlist_id=0;

    //产品类别
    secondCommodityCategoryModel=new QSqlQueryModel(this);
    //产品名称数据模型
    secondCommodityNameModel=new QSqlQueryModel(this);
    //供应商名/退货客户称数据模型
    secondVendorOrClientNameModel=new QSqlQueryModel(this);
    //退货入库供应商
    secondReturnGoodsVendorNameModel=new QSqlQueryModel(this);

    //初始化信息项
    m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentIndex(-1);

    QHBoxLayout* hboxlayout=qobject_cast<QHBoxLayout*>(ui->inStoreWidget->layout());
    hboxlayout->setStretch(0,1);
    hboxlayout->setStretch(1,5);
}
//退货入库商品名联动数量最大值
void MainWindow::returnGoodsInStoreCommodityNameChangeMaxCount()
{
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        m_currentInStoreMessageItem->transactionQuantitySpinBox->setMaximum(9999999999);
        return;
    }
    QSqlQuery query;
    int purchaseCount=0,returnCount=0,addedcount=0;

    //选定客户已经购买的某项商品的数量
    query.exec(QString("select sum(outStoreCount) from commodity_saleorders_saleorderitems_inf where "
                       "memberID='%1' and clientName='%2' and vendorName='%3' and commodityName='%4'")
               .arg(this->memberId)
               .arg(m_currentInStoreMessageItem->tradingPartnerComboBox->currentText())
               .arg(m_currentInStoreMessageItem->vendorNameComboBox->currentText())
               .arg(m_currentInStoreMessageItem->commodityNameComboBox->currentText()));
    query.next();
    purchaseCount=query.value(0).toInt();

    //选定客户已经退货的某项商品的数量
    query.exec(QString("select sum(inStoreCount) from commodity_returngoodsinlists_returngoodsinlistitems_inf "
                       "where memberID='%1' and clientName='%2' and vendorName='%3' and commodityName='%4'")
                   .arg(this->memberId)
                   .arg(m_currentInStoreMessageItem->tradingPartnerComboBox->currentText())
                   .arg(m_currentInStoreMessageItem->vendorNameComboBox->currentText())
                   .arg(m_currentInStoreMessageItem->commodityNameComboBox->currentText()));
    query.next();
    returnCount=query.value(0).toInt();

    //已经加入单据的数量
    DocumentItem currentitem;
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
        currentitem.vendorName=m_currentInStoreMessageItem->tradingPartnerComboBox->currentText();
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
        currentitem.vendorName=m_currentInStoreMessageItem->vendorNameComboBox->currentText();
    currentitem.commodityName=m_currentInStoreMessageItem->commodityNameComboBox->currentText();
    for(auto s:inStoreReceiptDocumentItems)
    {
        if(s==currentitem)
            addedcount+=s.tradingNumber;
    }

    m_currentInStoreMessageItem->transactionQuantitySpinBox->setMaximum(purchaseCount-returnCount-addedcount);
}
//刷新"入库登记"页面
void MainWindow::refreshSecondPage()
{
    //进货价格
    m_purchaseInStoreMessageItem->transactionPriceDoubleSpinBox->setValue(0);
    //入库数量
    m_purchaseInStoreMessageItem->transactionQuantitySpinBox->setValue(0);
    //产品类别
    m_purchaseInStoreMessageItem->commodityCategoryComboBox->clear();
    //产品名称
    m_purchaseInStoreMessageItem->commodityNameComboBox->clear();

    //进货价格
    m_returnGoodsInStoreMessageItem->transactionPriceDoubleSpinBox->setValue(0);
    //入库数量
    m_returnGoodsInStoreMessageItem->transactionQuantitySpinBox->setValue(0);
    //产品类别
    m_returnGoodsInStoreMessageItem->commodityCategoryComboBox->clear();
    //产品名称
    m_returnGoodsInStoreMessageItem->commodityNameComboBox->clear();
}
//默认入库价格
void MainWindow::setDefaultInStorePrice()
{
    QString valuetype,vendorname,commodityname;

    //供应商、商品
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        valuetype="进价";
        vendorname=m_currentInStoreMessageItem->tradingPartnerComboBox->currentText();
    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        valuetype="售价";
        vendorname=m_currentInStoreMessageItem->vendorNameComboBox->currentText();
    }
    commodityname=m_currentInStoreMessageItem->commodityNameComboBox->currentText();

    //统计单据，计算平均进价
    double averageprice=getDefaultInOutStorePrice(valuetype,vendorname,commodityname);

    m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->setValue(averageprice);
    m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->setMaximum(999999999);
}
//添加退货入库模式
void MainWindow::secondInStoreAddReturnGoodsMode()
{
    //入库类型改变
    connect(m_inStoreRegisterWidget->inOutStoreCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_categoryComboBox_currentTextChanged);
    //交易对象改变
    connect(m_returnGoodsInStoreMessageItem->tradingPartnerComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_tradingPartnerComboBox_currentTextChanged);
    //供应商改变
    connect(m_returnGoodsInStoreMessageItem->vendorNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_vendorName_change_commodityCategory);
    //产品类别改变
    connect(m_returnGoodsInStoreMessageItem->commodityCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_commodityCategoryComboBox_change_commodityName);
    //产品名称改变
    connect(m_returnGoodsInStoreMessageItem->commodityNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_commodityNameComboBox_change_maxCountAndDefaultInStorePrice);
}
//添加采购入库模式
void MainWindow::secondInStoreAddPurchaseGoodsMode()
{
    //交易对象改变
    connect(m_purchaseInStoreMessageItem->tradingPartnerComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_vendorName_change_commodityCategory);
    //产品类别改变
    connect(m_purchaseInStoreMessageItem->commodityCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_commodityCategoryComboBox_change_commodityName);
    //产品名称改变
    connect(m_purchaseInStoreMessageItem->commodityNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_inStore_commodityNameComboBox_change_maxCountAndDefaultInStorePrice);
}

//入库类别改变
void MainWindow::slot_inStore_categoryComboBox_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    //采购入库
    if(arg1==QString("采购入库"))
    {        
        //切换信息项页
        secondInStoreStackLayout->setCurrentIndex(0);
        //交易对象数据模型
        m_currentInStoreMessageItem=m_purchaseInStoreMessageItem;
        secondVendorOrClientNameModel->setQuery(QString
                                          ("select distinct vendorName from vendor where "
                                           "vendor.memberID='%1';")
                                              .arg(this->memberId));
    }
    //销售退货
    else if(arg1==QString("销售退货"))
    {        
        //切换信息项页
        secondInStoreStackLayout->setCurrentIndex(1);

        //交易对象数据模型
        m_currentInStoreMessageItem=m_returnGoodsInStoreMessageItem;
        secondVendorOrClientNameModel->setQuery(QString
                                          ("select distinct clientName from client,saleorders where "
                                           "client.clientID=saleorders.clientID and client.memberID='%1'")
                                              .arg(this->memberId));
    }
    else
        return;
    m_currentInStoreMessageItem->tradingPartnerComboBox->setModel(secondVendorOrClientNameModel);
    m_currentInStoreMessageItem->tradingPartnerComboBox->show();

//    QHBoxLayout* hboxlayout=qobject_cast<QHBoxLayout*>(ui->widget_52->layout());
//    hboxlayout->setStretch(0,1);
//    hboxlayout->setStretch(1,5);
}
//交易对象改变(采购入库供应商联动类别、退货入库退货客户联动供应商)
void MainWindow::slot_inStore_tradingPartnerComboBox_currentTextChanged(const QString &arg1)
{
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        return;
    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        secondReturnGoodsVendorNameModel->setQuery(QString
                                         ("select distinct vendorName from "
                                          "commodity_saleorders_saleorderitems_inf where "
                                          "memberID='%1' and clientName='%2'")
                                                   .arg(this->memberId)
                                                   .arg(m_currentInStoreMessageItem->
                                                            tradingPartnerComboBox->currentText()));
        m_currentInStoreMessageItem->vendorNameComboBox->setModel(secondReturnGoodsVendorNameModel);
        m_currentInStoreMessageItem->vendorNameComboBox->show();
    }
}
//供应商联动商品类别
void MainWindow::slot_inStore_vendorName_change_commodityCategory(const QString &arg1)
{
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        secondCommodityCategoryModel->setQuery(QString
                                               ("select distinct categoryName from commodity,vendor where "
                                                "commodity.vendorID=vendor.vendorID and vendorName='%1' and "
                                                "commodity.memberID='%2'")
                                                   .arg(m_currentInStoreMessageItem->
                                                        tradingPartnerComboBox->currentText())
                                                   .arg(this->memberId));

    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        secondCommodityCategoryModel->setQuery(QString
                                               ("select distinct categoryName from "
                                                "commodity_saleorders_saleorderitems_inf where "
                                                "clientName='%1' and vendorName='%2' and memberID='%3'")
                                                   .arg(m_currentInStoreMessageItem->
                                                        tradingPartnerComboBox->currentText())
                                                   .arg(m_currentInStoreMessageItem->
                                                        vendorNameComboBox->currentText())
                                                   .arg(this->memberId));
    }
    m_currentInStoreMessageItem->commodityCategoryComboBox->setModel(secondCommodityCategoryModel);
    m_currentInStoreMessageItem->commodityCategoryComboBox->show();
}
//商品类别联动商品名称
void MainWindow::slot_inStore_commodityCategoryComboBox_change_commodityName(const QString &arg1)
{
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        secondCommodityNameModel->setQuery(QString
                                     ("select distinct commodityName from commodity,vendor where "
                                      "commodity.vendorID=vendor.vendorID and commodity.memberID='%1' "
                                      "and vendorName='%2' and categoryName='%3'")
                                         .arg(this->memberId)
                                         .arg(m_currentInStoreMessageItem->
                                                    tradingPartnerComboBox->currentText())
                                         .arg(m_currentInStoreMessageItem->
                                                    commodityCategoryComboBox->currentText()));

    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        secondCommodityNameModel->setQuery(QString
                                     ("select distinct commodityName from "
                                      "commodity_saleorders_saleorderitems_inf where "
                                      "memberID='%1' and clientName='%2' and "
                                      "categoryName='%3' and vendorName='%4';")
                                         .arg(this->memberId)
                                         .arg(m_currentInStoreMessageItem->
                                                    tradingPartnerComboBox->currentText())
                                         .arg(m_currentInStoreMessageItem->
                                                    commodityCategoryComboBox->currentText())
                                         .arg(m_currentInStoreMessageItem->
                                                    vendorNameComboBox->currentText()));
    }
    m_currentInStoreMessageItem->commodityNameComboBox->setModel(secondCommodityNameModel);
    m_currentInStoreMessageItem->commodityNameComboBox->show();
}
//退货入库商品名称联动库存最大数量、默认入库价格
void MainWindow::slot_inStore_commodityNameComboBox_change_maxCountAndDefaultInStorePrice(const QString &arg1)
{
    returnGoodsInStoreCommodityNameChangeMaxCount();
    setDefaultInStorePrice();
}

//加入单据
void MainWindow::on_secondPreInStorePushButton_clicked()
{
    if(m_currentInStoreMessageItem->transactionQuantitySpinBox->value()==0)
    {
        QMessageBox::information(0,QObject::tr("提示"),"请输入数量！");
        return;
    }

    //初始化单据
    if(!this->ifInStoreInvoices)
    {
        //是否在生成入库单据
        ifInStoreInvoices=true;

        //单据开始，固定日期、出入库类别、交易对象，允许生成单据
        m_currentInStoreMessageItem->tradingPartnerComboBox->setEnabled(false);
        m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(false);
        m_inStoreRegisterWidget->inOutStoreDateEdit->setEnabled(false);
        ui->secondInStorePushButton->setEnabled(true);
    }

    //单据项信息录入数组
    DocumentItem item;
    //入库类型
    item.transferStoreType=m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
    //交易对象
    item.tradingPartner=m_currentInStoreMessageItem->tradingPartnerComboBox->currentText();
    //供应商
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
        item.vendorName=m_currentInStoreMessageItem->tradingPartnerComboBox->currentText();
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
        item.vendorName=m_currentInStoreMessageItem->vendorNameComboBox->currentText();
    //产品类别
    item.commodityCategory=m_currentInStoreMessageItem->commodityCategoryComboBox->currentText();
    //产品名称
    item.commodityName=m_currentInStoreMessageItem->commodityNameComboBox->currentText();
    //交易价格
    item.tradingPrice=m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->value();
    //交易数量
    item.tradingNumber=m_currentInStoreMessageItem->transactionQuantitySpinBox->value();
    //录入数组
    inStoreReceiptDocumentItems.push_back(item);

    //显示记录
    //商品名
    QString commodity_name=m_currentInStoreMessageItem->commodityNameComboBox->currentText();
    //数量
    QString _count=QString::number(m_currentInStoreMessageItem->transactionQuantitySpinBox->value());
    //单价
    QString _price=QString::number(m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->value());
    //供货单位或退货客户
    QString _vendor_or_client=m_currentInStoreMessageItem->tradingPartnerComboBox->currentText();
    //总价
    QString _paysum=QString::number(m_currentInStoreMessageItem->transactionQuantitySpinBox
                             ->value()*m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->value());
//    this->myPaySum+=m_currentInStoreMessageItem->transactionQuantitySpinBox->value()*
//                      m_currentInStoreMessageItem->transactionPriceDoubleSpinBox->value();
    //入库类型
    QString _instorecategory=m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
    //退货客户
    QString s;
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        s="购入："+commodity_name+"    数量："+_count+"    单价："+_price+"￥    总价："
            +_paysum+"    供应商："+_vendor_or_client;
    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        s="退货："+commodity_name+"    数量："+_count+"    单价："+_price+"￥    总价："
            +_paysum+"    退货客户："+_vendor_or_client;
    }

    QListWidgetItem *split=new QListWidgetItem;
    split->setText("———.———.———.———.———.———.———.———.———.———.———.———.———.");
    split->setTextAlignment(Qt::AlignCenter);
    ui->secondListWidget->addItem(split);
    ui->secondListWidget->addItem(s);
    QMessageBox::information(0,QObject::tr("提示"),"已加入订单！");

    //更新最大数量
    returnGoodsInStoreCommodityNameChangeMaxCount();
}
//生成单据
void MainWindow::on_secondInStorePushButton_clicked()
{
    QSqlQuery query;

    QSqlDatabase::database().transaction();

    //添加空单据
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        int vendorid=0;

        //查询供应商id
        query.exec(QString("select vendorID from vendor where vendorName='%1'")
                       .arg(m_currentInStoreMessageItem->tradingPartnerComboBox->currentText()));
        query.next();
        vendorid=query.value(0).toInt();

        //根据供应商id生成空单据
        query.exec(QString("insert into procureinlists(memberID,paySum,OTime,vendorID) "
                           "values('%1',NULL,NULL,%2)")
                       .arg(this->memberId).arg(vendorid));

        //获取空单据的单据号
        query.exec(QString("select inListID from procureinlists where OTime IS NULL"));
        query.next();
        inlist_id=query.value(0).toInt();
    }
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        int clientid=0;

        //查询退货客户id
        query.exec(QString("select clientID from client where clientName='%1'")
                       .arg(m_currentInStoreMessageItem->tradingPartnerComboBox->currentText()));
        query.next();
        clientid=query.value(0).toInt();

        //根据客户id生成空单据
        query.exec(QString("insert into returngoodsinlists(memberID,paySum,OTime,clientID) "
                           "values('%1',NULL,NULL,%2)")
                       .arg(this->memberId).arg(clientid));

        //获取空单据的单据号
        query.exec(QString("select inListID from returngoodsinlists where OTime IS NULL"));
        query.next();
        inlist_id=query.value(0).toInt();
    }

    //录入单据项
    bool itemsok=true;   
    for(auto s:inStoreReceiptDocumentItems)
    {       
        bool insOk=true,uptOk=true;
        int commodityid=0;

        //查询商品id
        query.exec(QString("select commodityID from commodity_inf where memberID='%1' "
                           "and commodityName='%2' and vendorName='%3'")
                            .arg(this->memberId)
                            .arg(s.commodityName)
                            .arg(s.vendorName));
        query.next();
        commodityid=query.value(0).toInt();

        //入库单据项表增加记录
        if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
            insOk=query.exec(QString("insert into procureinlistitems"
                                   "(inListID,commodityID,inStoreCount,purchasePrice) "
                                   "values(%1,%2,%3,%4)")
                                    .arg(inlist_id)
                                    .arg(commodityid)
                                    .arg(s.tradingNumber)
                                    .arg(s.tradingPrice));
        else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
            insOk=query.exec(QString("insert into returngoodsinlistitems"
                                       "(inListID,commodityID,inStoreCount,purchasePrice) "
                                       "values(%1,%2,%3,%4)")
                                        .arg(inlist_id)
                                        .arg(commodityid)
                                        .arg(s.tradingNumber)
                                        .arg(s.tradingPrice));

        //库存表更新库存量
        query.exec(QString("select storeCount from store where commodityID=%1").arg(commodityid));
        query.next();
        int inStoreCount=s.tradingNumber;
        inStoreCount+=query.value(0).toInt();
        qDebug()<<"inStoreCount:"<<inStoreCount;
        uptOk=query.exec(QString("update store set storeCount=%1 where commodityID=%2")
                               .arg(inStoreCount).arg(commodityid));
        if(!uptOk)
            qDebug()<<"store update wrong!";

        //确保两张表的更新都是成功的
        if((!insOk)||(!uptOk))
        {
            itemsok=false;
            break;
        }
    }

    //完善单据
    bool inlOk=false;
    this->myPaySum=0;
    for(auto s:inStoreReceiptDocumentItems)
        this->myPaySum+=s.tradingPrice*s.tradingNumber;
    if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购入库"))
        inlOk=query.exec(QString("update procureinlists set paySum=%1,OTime='%2' where inListID=%3")
                                .arg(this->myPaySum)
                                .arg(m_inStoreRegisterWidget->inOutStoreDateEdit->date().toString("yyyy-MM-dd"))
                                .arg(this->inlist_id));
    else if(m_inStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售退货"))
        inlOk=query.exec(QString("update returngoodsinlists set paySum=%1,OTime='%2' where inListID=%3")
                               .arg(this->myPaySum)
                               .arg(m_inStoreRegisterWidget->inOutStoreDateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->inlist_id));
    if(itemsok&&inlOk)
    {
        QSqlDatabase::database().commit();
        ui->secondInStorePushButton->setEnabled(false);

    //显示下单记录
        QString otime=QDate::currentDate().toString("yyyy-MM-dd");
        QString inlist_record="日期："+otime+"\r\n入 库 单 号："+QString("%1").arg(this->inlist_id)
                                +"\r\n支出金额："+QString(" %1￥").arg(this->myPaySum);
        QListWidgetItem *split=new QListWidgetItem;
        split->setText("***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.");
        split->setTextAlignment(Qt::AlignCenter);
        ui->secondListWidget->addItem(split);
        ui->secondListWidget->addItem(inlist_record);

        this->myPaySum=0;
        ifInStoreInvoices=false;
        //QMessageBox::information(0,QObject::tr("提示"),"下单成功！");


    //刷新数据网格
        refreshFirstPage();
        refreshSecondPage();
        refreshThirdPage();
        refreshForthPage();
        refreshFifthPage();
        refreshSixthPage();
        refreshSeventhPage();
        refreshEighthPage();
        refreshNinthPage();

    }
    else
        QSqlDatabase::database().rollback();

    //单据重置
    inStoreReceiptDocumentItems.clear();
    m_currentInStoreMessageItem->tradingPartnerComboBox->setEnabled(true);
    m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(true);
    m_inStoreRegisterWidget->inOutStoreDateEdit->setEnabled(true);
}
//重置单据
void MainWindow::on_secondResetInStorePushButton_clicked()
{
    if(!inStoreReceiptDocumentItems.empty())
    {
        qDebug()<<inStoreReceiptDocumentItems.size();
        QString inlist_record="单据取消!";
        QListWidgetItem *split=new QListWidgetItem;
        split->setText("***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.");
        split->setTextAlignment(Qt::AlignCenter);
        ui->secondListWidget->addItem(split);
        ui->secondListWidget->addItem(inlist_record);
    }

    this->myPaySum=0;
    ifInStoreInvoices=false;
    ui->secondInStorePushButton->setEnabled(false);
    inStoreReceiptDocumentItems.clear();
    m_currentInStoreMessageItem->tradingPartnerComboBox->setEnabled(true);
    m_inStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(true);
    m_inStoreRegisterWidget->inOutStoreDateEdit->setEnabled(true);   

    refreshSecondPage();
}


//"出库登记"页面
//初始化
void MainWindow::thirdInit()
{
    //初始化两种出库页面

    //创建实例
    m_outStoreRegisterWidget=new InOutStoreRegisterWidget();
    m_outStoreRegisterWidget->typeInit("出库登记");
    m_saleOutStoreMessageItem=m_outStoreRegisterWidget->lessitemwidget;
    m_returnGoodsOutStoreMessageItem=m_outStoreRegisterWidget->moreitemwidget;

    //建立信号链
    thirdOutStoreSwitchToSaleGoodsMode();
    thirdOutStoreSwitchToReturnGoodsMode();

    //设置默认页面
    thirdOutStoreStackLayout=m_outStoreRegisterWidget->stacklayout;    
    m_currentOutStoreMessageItem=m_saleOutStoreMessageItem;

    //日期
    m_outStoreRegisterWidget->inOutStoreDateEdit->setDate(QDate::currentDate());

    //加载窗口
    QVBoxLayout* vboxlayout=new QVBoxLayout();
    vboxlayout->addWidget(m_outStoreRegisterWidget);
    ui->thirdOutStoreWidget->setLayout(vboxlayout);


    //是否在生成出库单据
    ifOutStoreInvoices=false;
    //单据总金额
    youPaySum=0;
    //单据ID
    order_id=0;

    //产品类别
    thirdCommodityCategoryModel=new QSqlQueryModel(this);
    //产品名称数据模型
    thirdCommodityNameModel=new QSqlQueryModel(this);
    //购买客户/退货供应商名称数据模型
    thirdVendorOrClientNameModel=new QSqlQueryModel(this);
    //销售出库供应商
    thirdSaleGoodsVendorNameModel=new QSqlQueryModel(this);

    //初始化信息项
    m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setCurrentIndex(-1);

    QHBoxLayout* hboxlayout=qobject_cast<QHBoxLayout*>(ui->outStoreWidget->layout());
    hboxlayout->setStretch(0,1);
    hboxlayout->setStretch(1,5);
}
//设置最大数量值
void MainWindow::saleOutStoreCommodityNameChangeMaxCount()
{
    //确定供应商名称和商品名称
    QString commodity_name=m_currentOutStoreMessageItem->commodityNameComboBox->currentText();
    QString vendor_name;
    QSqlQuery query;
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
        vendor_name=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="采购退货")
        vendor_name=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();

    //查询库存量
    query.exec(QString("select storeCount from commodity_store_inf where "
                       "memberID='%1' and commodityName='%2' "
                       "and vendorName='%3'")
                   .arg(this->memberId)
                   .arg(commodity_name)
                   .arg(vendor_name));

    //已经加入单据的数量
    int addedcount=0;
    DocumentItem currentitem;
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
        currentitem.vendorName=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    else
        currentitem.vendorName=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();
    currentitem.commodityName=m_currentOutStoreMessageItem->commodityNameComboBox->currentText();
    for(auto s:outStoreReceiptDocumentItems)
    {
        if(s==currentitem)
            addedcount+=s.tradingNumber;
    }

    //设置最大出库量
    if(query.next())
    {
        m_currentOutStoreMessageItem->transactionQuantitySpinBox
            ->setMaximum(query.value(0).toInt()-addedcount);
    }
}
//更新页面
void MainWindow::refreshThirdPage()
{
    //产品类别
    m_saleOutStoreMessageItem->commodityCategoryComboBox->clear();
    //产品名称
    m_saleOutStoreMessageItem->commodityNameComboBox->clear();
    //出库单价
    m_saleOutStoreMessageItem->transactionPriceDoubleSpinBox->setValue(0);
    //出库数量
    m_saleOutStoreMessageItem->transactionQuantitySpinBox->setValue(0);

    //产品类别
    m_returnGoodsOutStoreMessageItem->commodityCategoryComboBox->clear();
    //产品名称
    m_returnGoodsOutStoreMessageItem->commodityNameComboBox->clear();
    //出库单价
    m_returnGoodsOutStoreMessageItem->transactionPriceDoubleSpinBox->setValue(0);
    //出库数量
    m_returnGoodsOutStoreMessageItem->transactionQuantitySpinBox->setValue(0);
}
//默认出库价格
void MainWindow::setDefaultOutStorePrice()
{
    QString valuetype,vendorname,commodityname;

    //供应商、商品
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售出库"))
    {
        valuetype="售价";
        vendorname=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    }
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购退货"))
    {
        valuetype="进价";
        vendorname=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();
    }
    commodityname=m_currentOutStoreMessageItem->commodityNameComboBox->currentText();

    //统计单据，计算平均进价
    double averagepurchaseprice=getDefaultInOutStorePrice(valuetype,vendorname,commodityname);

    m_currentOutStoreMessageItem->transactionPriceDoubleSpinBox->setValue(averagepurchaseprice);
    m_currentOutStoreMessageItem->transactionPriceDoubleSpinBox->setMaximum(999999999);
}
//切换为销售出库模式
void MainWindow::thirdOutStoreSwitchToSaleGoodsMode()
{
    //入库类型改变
    connect(m_outStoreRegisterWidget->inOutStoreCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_categoryComboBox_currentTextChanged);
    //交易对象改变
    connect(m_saleOutStoreMessageItem->tradingPartnerComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_tradingPartnerComboBox_currentTextChanged);
    //供应商改变
    connect(m_saleOutStoreMessageItem->vendorNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_vendorName_change_commodityCategory);
    //产品类别改变
    connect(m_saleOutStoreMessageItem->commodityCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_commodityCategoryComboBox_change_commodityName);
    //产品名称改变
    connect(m_saleOutStoreMessageItem->commodityNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_commodityNameComboBox_change_maxCountAndOutStorePrice);
}
//切换为采购退货模式
void MainWindow::thirdOutStoreSwitchToReturnGoodsMode()
{
    //交易对象改变
    connect(m_returnGoodsOutStoreMessageItem->tradingPartnerComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_vendorName_change_commodityCategory);
    //产品类别改变
    connect(m_returnGoodsOutStoreMessageItem->commodityCategoryComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_commodityCategoryComboBox_change_commodityName);
    //产品名称改变
    connect(m_returnGoodsOutStoreMessageItem->commodityNameComboBox,&QComboBox::currentTextChanged,
            this,&MainWindow::slot_outStore_commodityNameComboBox_change_maxCountAndOutStorePrice);
}

//出库类别
void MainWindow::slot_outStore_categoryComboBox_currentTextChanged(const QString &arg1)
{
    //销售出库
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
    {
        thirdOutStoreStackLayout->setCurrentIndex(0);
        m_currentOutStoreMessageItem=m_saleOutStoreMessageItem;
        thirdVendorOrClientNameModel->setQuery(QString("select clientName from client where "
                                                       "memberID='%1'")
                                               .arg(this->memberId));
    }
    //采购退货
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="采购退货")
    {
        thirdOutStoreStackLayout->setCurrentIndex(1);
        m_currentOutStoreMessageItem=m_returnGoodsOutStoreMessageItem;
        thirdVendorOrClientNameModel->setQuery(QString("select distinct vendorName from "
                                                       "commodity_store_inf "
                                                       "where memberID='%1' and storeCount>0")
                                               .arg(this->memberId));
    }
    else
        return;    
    m_currentOutStoreMessageItem->tradingPartnerComboBox->setModel(thirdVendorOrClientNameModel);
    m_currentOutStoreMessageItem->tradingPartnerComboBox->show();
}
//采购客户联动供应商
void MainWindow::slot_outStore_tradingPartnerComboBox_currentTextChanged(const QString &arg1)
{
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="采购退货")
        return;
    thirdSaleGoodsVendorNameModel->setQuery(QString
                                            ("select distinct vendorName from commodity_store_inf "
                                             "where memberID='%1' and storeCount>0")
                                            .arg(this->memberId));
    m_currentOutStoreMessageItem->vendorNameComboBox->setModel(thirdSaleGoodsVendorNameModel);
    m_currentOutStoreMessageItem->vendorNameComboBox->show();
}
//供应商联动商品类别
void MainWindow::slot_outStore_vendorName_change_commodityCategory(const QString &arg1)
{
    //获得供应商名称
    QString vendor_name;
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
        vendor_name=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="采购退货")
        vendor_name=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();

    //根据供应商确定类别
    thirdCommodityCategoryModel->setQuery(QString("select distinct categoryName from commodity_store_inf "
                                                  "where memberID='%1' and vendorName='%2' "
                                                  "and storeCount>0")
                                          .arg(this->memberId)
                                          .arg(vendor_name));

    //设置类别模型
    m_currentOutStoreMessageItem->commodityCategoryComboBox->setModel(thirdCommodityCategoryModel);
    m_currentOutStoreMessageItem->commodityCategoryComboBox->show();
}
//商品类别与名称联动
void MainWindow::slot_outStore_commodityCategoryComboBox_change_commodityName(const QString &arg1)
{
    //获得供应商名称
    QString vendor_name;
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
        vendor_name=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="采购退货")
        vendor_name=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();

    //根据供应商名称和类别名称确定商品名
    secondCommodityNameModel->setQuery(QString("select commodityName from commodity_inf where "
                                               "memberID='%1' and vendorName='%2' and categoryName='%3'")
                                     .arg(this->memberId)
                                     .arg(vendor_name)
                                     .arg(m_currentOutStoreMessageItem->commodityCategoryComboBox->currentText()));

    //设置商品模型
    m_currentOutStoreMessageItem->commodityNameComboBox->setModel(secondCommodityNameModel);
    m_currentOutStoreMessageItem->commodityNameComboBox->show();
}
//商品名称联动最大出库数量
void MainWindow::slot_outStore_commodityNameComboBox_change_maxCountAndOutStorePrice(const QString &arg1)
{
    saleOutStoreCommodityNameChangeMaxCount();
    setDefaultOutStorePrice();
}

//加入单据按钮
void MainWindow::on_thirdPreOutStorePushButton_clicked()
{
    if(m_currentOutStoreMessageItem->transactionQuantitySpinBox->value()==0)
    {
        QMessageBox::information(0,QObject::tr("提示"),"请输入数量！");
        return;
    }

    //初始化单据
    if(!this->ifOutStoreInvoices)
    {
        ifOutStoreInvoices=true;
        m_currentOutStoreMessageItem->tradingPartnerComboBox->setEnabled(false);
        m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(false);
        m_outStoreRegisterWidget->inOutStoreDateEdit->setEnabled(false);
    }

    //单据项信息录入数组
    DocumentItem item;
    //出入库类型
    item.transferStoreType=m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText();
    //交易对象
    item.tradingPartner=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();
    //供应商名称
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()=="销售出库")
        item.vendorName=m_currentOutStoreMessageItem->vendorNameComboBox->currentText();
    else
        item.vendorName=m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText();
    //商品类型
    item.commodityCategory=m_currentOutStoreMessageItem->commodityCategoryComboBox->currentText();
    //商品名称
    item.commodityName=m_currentOutStoreMessageItem->commodityNameComboBox->currentText();
    //交易价格
    item.tradingPrice=m_currentOutStoreMessageItem->transactionPriceDoubleSpinBox->value();
    //交易数量
    item.tradingNumber=m_currentOutStoreMessageItem->transactionQuantitySpinBox->value();
    //录入数组
    outStoreReceiptDocumentItems.push_back(item);

    //显示记录
    //商品名
    QString commodity_name=item.commodityName;
    //数量
    QString _count=QString::number(item.tradingNumber);
    //单价
    QString _price=QString::number(item.tradingPrice);
    //供货单位或退货客户
    QString _vendor_or_client=item.tradingPartner;
    //总价
    QString _paysum=QString::number(item.tradingNumber*item.tradingPrice);
    //this->youPaySum+=(item.tradingNumber*item.tradingPrice);
    //退货客户
    QString s,m;
    if(item.transferStoreType==QString("销售出库"))
    {
        s="商品名："+commodity_name+"    供应商："+item.vendorName+"    数量："+_count+"    单价："
            +_price+"￥    总价："+_paysum;
        if(!this->ifOutStoreInvoices)
        {
            m=_vendor_or_client+"购入\n";
            s=m+s;
        }
    }
    else
    {
        s="商品名："+commodity_name+"    供应商："+item.vendorName+"    数量："+_count+"    单价："
            +_price+"￥    总价："+_paysum;
        if(!this->ifOutStoreInvoices)
        {
            m=_vendor_or_client+"退货\n";
            s=m+s;
        }
    }
    QListWidgetItem *split=new QListWidgetItem;
    split->setText("———.———.———.———.———.———.———.———.———.———.———.———.———.");
    split->setTextAlignment(Qt::AlignCenter);
    ui->thirdListWidget->addItem(split);
    ui->thirdListWidget->addItem(s);

    //切换至单据可生成状态
    ui->thirdOutStorePushButton->setEnabled(true);
    ifOutStoreInvoices=true;

    //提示
    QMessageBox::information(0,QObject::tr("提示"),"已加入订单！");

    //更新最大数量
    saleOutStoreCommodityNameChangeMaxCount();
}
//生成单据按钮
void MainWindow::on_thirdOutStorePushButton_clicked()
{
    QSqlQuery query;
    //开启事务把orders和orderitems的记录补充完整
    QSqlDatabase::database().transaction();

    //添加空单据
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售出库"))
    {
        //获取采购客户
        int clientid=0;
        query.exec(QString("select clientID from client where clientName='%1'")
                       .arg(m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText()));
        query.next();
        clientid=query.value(0).toInt();
        qDebug()<<"clientid:"<<clientid;

        //添加空记录
        query.exec(QString("insert into saleorders(memberID,paySum,OTime,clientID) "
                           "values('%1',NULL,NULL,%2)")
                       .arg(this->memberId).arg(clientid));

        //查询空记录单据号
        query.exec(QString("select orderID from saleorders where OTime IS NULL"));
        query.next();
        order_id=query.value(0).toInt();
        qDebug()<<"order_id:"<<order_id;
    }
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购退货"))
    {
        //获取退货供应商
        int vendorid=0;
        query.exec(QString("select vendorID from vendor where vendorName='%1'")
                       .arg(m_currentOutStoreMessageItem->tradingPartnerComboBox->currentText()));
        query.next();
        vendorid=query.value(0).toInt();
        qDebug()<<"vendorid:"<<vendorid;

        //添加空记录
        query.exec(QString("insert into returngoodsorders(memberID,paySum,OTime,vendorID) "
                           "values('%1',NULL,NULL,%2)")
                       .arg(this->memberId).arg(vendorid));

        //查询空记录单据号
        query.exec(QString("select orderID from returngoodsorders where OTime IS NULL"));
        query.next();
        order_id=query.value(0).toInt();
        qDebug()<<"order_id:"<<order_id;
    }

    //录入单据项
    bool itemsok=true;
    for(auto s:outStoreReceiptDocumentItems)
    {

        bool insOk=true,uptOk=true;
        int commodityid=0;

        //查询商品id
        query.exec(QString("select commodityID from commodity_inf where memberID='%1' "
                           "and commodityName='%2' and vendorName='%3'")
                       .arg(this->memberId)
                       .arg(s.commodityName)
                       .arg(s.vendorName));
        query.next();
        commodityid=query.value(0).toInt();
        qDebug()<<"commodityid:"<<commodityid;

        //出库单据项表添加记录
        if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售出库"))
            insOk=query.exec(QString("insert into saleorderitems"
                                       "(orderID,commodityID,outStoreCount,sellingPrice) "
                                       "values(%1,%2,%3,%4)")
                                   .arg(order_id)
                                   .arg(commodityid)
                                   .arg(s.tradingNumber)
                                   .arg(s.tradingPrice));
        else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购退货"))
            insOk=query.exec(QString("insert into returngoodsorderitems"
                                       "(orderID,commodityID,outStoreCount,sellingPrice) "
                                       "values(%1,%2,%3,%4)")
                                   .arg(order_id)
                                   .arg(commodityid)
                                   .arg(s.tradingNumber)
                                   .arg(s.tradingPrice));
        qDebug()<<"insok:"<<insOk;

        //库存表更新库存量
        query.exec(QString("select storeCount from store where commodityID=%1").arg(commodityid));
        query.next();
        int outStoreCount=query.value(0).toInt()-s.tradingNumber;
        uptOk=query.exec(QString("update store set storeCount=%1 where commodityID=%2")
                               .arg(outStoreCount).arg(commodityid));

        //确保两张表的更新都是成功的
        if((!insOk)||(!uptOk))
        {
            itemsok=false;
            qDebug()<<"item is wrong!";
            break;
        }
    }

    //完善单据
    bool outlOk=false;
    this->youPaySum=0;
    for(auto s:outStoreReceiptDocumentItems)
        this->youPaySum+=s.tradingPrice*s.tradingNumber;
    if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("销售出库"))
        outlOk=query.exec(QString("update saleorders set paySum=%1,OTime='%2' where orderID=%3")
                                .arg(this->youPaySum)
                                .arg(m_outStoreRegisterWidget->inOutStoreDateEdit->date().toString("yyyy-MM-dd"))
                                .arg(this->order_id));
    else if(m_outStoreRegisterWidget->inOutStoreCategoryComboBox->currentText()==QString("采购退货"))
        outlOk=query.exec(QString("update returngoodsorders set paySum=%1,OTime='%2' where orderID=%3")
                               .arg(this->youPaySum)
                               .arg(m_outStoreRegisterWidget->inOutStoreDateEdit->date().toString("yyyy-MM-dd"))
                               .arg(this->order_id));
    if(itemsok&&outlOk)
    {
        QSqlDatabase::database().commit();
        ui->thirdOutStorePushButton->setEnabled(false);

        //显示下单记录
        QString otime=m_outStoreRegisterWidget->inOutStoreDateEdit->date().toString("yyyy-MM-dd");
        QString order_record="日期："+otime+"\r\n订 单 号："+QString("%1").arg(order_id)+
                             "\r\n应付款总额："+QString("%1￥")
                             .arg(this->youPaySum)+"\r\n下 单 成 功！";
        QListWidgetItem *split=new QListWidgetItem;
        split->setText("***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.");
        split->setTextAlignment(Qt::AlignCenter);
        ui->thirdListWidget->addItem(split);
        ui->thirdListWidget->addItem(order_record);

        //提示
        //QMessageBox::information(0,QObject::tr("提示"),"下单成功!");


    //刷新数据网格
        refreshFirstPage();
        refreshSecondPage();
        refreshThirdPage();
        refreshForthPage();
        refreshFifthPage();
        refreshSixthPage();
        refreshSeventhPage();
        refreshEighthPage();
        refreshNinthPage();

    }
    else
    {
        QSqlDatabase::database().rollback();
        qDebug()<<"wrong!";
    }

    //重置单据（维持基本信息项不变）
    youPaySum=0;
    ifOutStoreInvoices=false;
    outStoreReceiptDocumentItems.clear();
    m_currentOutStoreMessageItem->tradingPartnerComboBox->setEnabled(true);
    m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(true);
    m_outStoreRegisterWidget->inOutStoreDateEdit->setEnabled(true);
}
//重置单据
void MainWindow::on_thirdResetOutStorePushButton_clicked()
{
    if(!outStoreReceiptDocumentItems.empty())
    {
        QString inlist_record="单据取消!";
        QListWidgetItem *split=new QListWidgetItem;
        split->setText("***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.");
        split->setTextAlignment(Qt::AlignCenter);
        ui->thirdListWidget->addItem(split);
        ui->thirdListWidget->addItem(inlist_record);
    }

    this->youPaySum=0;
    ifOutStoreInvoices=false;
    ui->thirdOutStorePushButton->setEnabled(false);
    outStoreReceiptDocumentItems.clear();
    m_currentOutStoreMessageItem->tradingPartnerComboBox->setEnabled(true);
    m_outStoreRegisterWidget->inOutStoreCategoryComboBox->setEnabled(true);
    m_outStoreRegisterWidget->inOutStoreDateEdit->setEnabled(true);



    refreshThirdPage();
}


//"入库单据查询"页面
//刷新页面
void MainWindow::refreshForthPage()
{
    //日期
    ui->forthInStoreStardDateEdit->setDate(QDate::currentDate().addDays(-3));
    ui->forthInStoreEndDateEdit->setDate(QDate::currentDate().addDays(4));

    //入库类型
    ui->forthInStoreCategoryComboBox->setCurrentIndex(-1);

    //查询模式
    ui->forthInStoreQueryModeComboBox->setCurrentIndex(-1);

    //清空
    forthInStoreDocumentRange.first=forthInStoreDocumentRange.second=0;
    forthInStoreSelectionTradingPartners.clear();
    forthInStoreSelectionCommodityNames.clear();
}
//初始化
void MainWindow::forthInit()
{
    refreshForthPage();
    forthupdateInStoreDateRange();
}
//查询出符合要求的单据
void MainWindow::forthInStoreQueryInListID()
{
    //目标视图
    QSqlQuery queryinlists,queryinlistitems;

    forthInStoreTreeViewModel=new QStandardItemModel();
    QStandardItem *rootItem=forthInStoreTreeViewModel->invisibleRootItem();

    //单据号集合
    std::set<int> inlistidset;

    //父项、子项查询要素
    QString querytable,queryview;
    int parentitemcount=0,childrenitemcount=0;


    //主句 出库日期、订单号、供应商、应付总金额、商品名、类别、进价、数量、计量单位
    //主句 出库日期、订单号、退货客户、供应商、应付总金额、商品名、类别、进价、数量、计量单位

    //不同的入库方式采用不同的数据模型
    if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        querytable="procureinlists";
        queryview="commodity_procureinlists_procureinlistitems_inf";
        parentitemcount=4;
        childrenitemcount=9;
    }
    else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        querytable="returngoodsinlists";
        queryview="commodity_returngoodsinlists_returngoodsinlistitems_inf";
        parentitemcount=4;
        childrenitemcount=10;
    }

    //找到所有合适的单据号到集合中
    if(ui->forthInStoreQueryModeComboBox->currentText()==QString("单据号范围"))
    {
        //把单据号范围的单据加入单据号集合
        for(int inlistid=forthInStoreDocumentRange.first;inlistid<=forthInStoreDocumentRange.second;inlistid++)
        {
            QSqlQuery query;
            if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
                query.exec(QString("select inListID from procureinlists "
                                   "where inListID=%1 and memberID='%2' and "
                                   "OTime between '%3' and '%4'")
                           .arg(inlistid)
                           .arg(this->memberId)
                           .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                           .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd")));
            else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
                query.exec(QString("select inListID from returngoodsinlists "
                                   "where inListID=%1 and memberID='%2' and "
                                   "OTime between '%3' and '%4'")
                           .arg(inlistid)
                           .arg(this->memberId)
                           .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                           .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd")));
            if(query.next())
                inlistidset.insert(inlistid);
        }
    }
    else if(ui->forthInStoreQueryModeComboBox->currentText()==QString("交易对象"))
    {

        //找到包含选中供应商的采购入库/销售退货单据,加入单据号集合
        QString querydocumentstr;
        for(auto vendororclientname:forthInStoreSelectionTradingPartners)
        {
            if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
                querydocumentstr=QString("select inListID from procureinlists,vendor where "
                                     "procureinlists.vendorID=vendor.vendorID and "
                                     "OTime between '%1' and '%2' and vendorName='%3' "
                                     "and vendor.memberID='%4'")
                    .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                    .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                    .arg(vendororclientname)
                    .arg(this->memberId);
            else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
                querydocumentstr=QString("select inListID from returngoodsinlists,client where "
                                           "returngoodsinlists.clientID=client.clientID and "
                                           "OTime between '%1' and '%2' and clientName='%3' "
                                           "and client.memberID='%4'")
                                       .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(vendororclientname)
                                       .arg(this->memberId);
            queryinlists.exec(querydocumentstr);
            while(queryinlists.next())
                inlistidset.insert(queryinlists.value(0).toInt());
        }
    }
    else if(ui->forthInStoreQueryModeComboBox->currentText()==QString("包含商品"))
    {
        QString querydocumentstr;
        QString vendorname;
        QString commodityname;

        for(auto s:forthInStoreSelectionCommodityNames)
            std::cout<<s.first.toStdString()<<" "<<s.second.toStdString()<<std::endl;

        //找到包含选中商品的采购入库/销售退货单据,加入单据号集合
        std::vector<std::pair<QString,QString>>::iterator vendororcommodityname
            =forthInStoreSelectionCommodityNames.begin();
        while(vendororcommodityname!=forthInStoreSelectionCommodityNames.end())
        {
            //获得供应商名称和商品名称
            vendorname=(*vendororcommodityname).first;
            commodityname=(*vendororcommodityname).second;
            ++vendororcommodityname;

            //查询符合要求的单据号
            if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
                querydocumentstr=QString("select inListID from "
                                           "commodity_procureinlists_procureinlistitems_inf "
                                           "where vendorName='%1' "
                                           "and commodityName='%2' "
                                           "and OTime between '%3' and '%4' "
                                           "and memberID='%5'")
                                       .arg(vendorname)
                                       .arg(commodityname)
                                       .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(this->memberId);
            else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
                querydocumentstr=QString("select inListID from "
                                           "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                                           "where vendorName='%1' "
                                           "and commodityName='%2' "
                                           "and OTime between '%3' and '%4' "
                                           "and memberID='%5'")
                                       .arg(vendorname)
                                       .arg(commodityname)
                                       .arg(ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(this->memberId);

            //把查询结果写到数据集中
            queryinlists.exec(querydocumentstr);
            while(queryinlists.next())
                inlistidset.insert(queryinlists.value(0).toInt());
        }
    }

    for(auto inlistid:inlistidset)
        qDebug()<<"inlistid:"<<inlistid;

    //根据单据号集合建立数据模型
    for(auto inlistid:inlistidset)
    {
        QString queryinlistsstr,queryinlistitemsstr;
        //查询采购入库单据
        if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
            queryinlistsstr=QString("select OTime,inListID,vendorName,paySum from %1,vendor "
                                  "where %2.vendorID=vendor.vendorID and vendor.memberID='%3' "
                                  "and inListID=%4")
                              .arg(querytable)
                              .arg(querytable)
                              .arg(this->memberId)
                              .arg(inlistid);
        else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
            queryinlistsstr=QString("select OTime,inListID,clientName,paySum from %1,client "
                                      "where %2.clientID=client.clientID and client.memberID='%3' "
                                      "and inListID=%4")
                                  .arg(querytable)
                                  .arg(querytable)
                                  .arg(this->memberId)
                                  .arg(inlistid);
        queryinlists.exec(queryinlistsstr);
        queryinlists.next();
        //添加入库订单父项
        QList<QStandardItem*> parentitemlist;
        QStandardItem* parentfirstitem;
        for(int i=0;i<parentitemcount;i++)
        {
            QStandardItem* parentitem=new QStandardItem(queryinlists.value(i).toString());
            if(i==0)
                parentfirstitem=parentitem;
            parentitemlist<<parentitem;
            std::cout<<queryinlists.value(i).toString().toStdString()<<" ";
        }
        std::cout<<std::endl;

        rootItem->appendRow(parentitemlist);
        //添加入库订单子项 商品名 类别 进价 数量 计量单位
        if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
            queryinlistitemsstr=QString("select commodityName,categoryName,purchasePrice,"
                                      "inStoreCount,unitName "
                                      "from %1 "
                                      "where inListID='%2'")
                                  .arg(queryview)
                                  .arg(inlistid);
        else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
            queryinlistitemsstr=QString("select vendorName,commodityName,categoryName,purchasePrice,"
                                          "inStoreCount,unitName "
                                          "from %1 "
                                          "where inListID='%2'")
                                      .arg(queryview)
                                      .arg(inlistid);
        queryinlistitems.exec(queryinlistitemsstr);
        while(queryinlistitems.next())
        {
            QList<QStandardItem*> childrenitemlist;
            for(int j=0;j<childrenitemcount;j++)
            {
                if(j<parentitemcount)
                    childrenitemlist<<new QStandardItem(QString(""));
                else
                {
                    //std::cout<<queryinlistitems.value(j).toString().toStdString()<<" ";
                    childrenitemlist<<new QStandardItem(queryinlistitems.value(j-parentitemcount).toString());
                }
            }
            //std::cout<<std::endl;

            parentfirstitem->appendRow(childrenitemlist);
        }
    }

    //设置表头
    QStringList labellist;
    if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
        labellist<<QStringLiteral("      入库日期      ")
                 <<QStringLiteral("      订单号      ")
                 <<QStringLiteral("      供应商           ")
                 <<QStringLiteral("      总金额      ")
                 <<QStringLiteral("      商品名      ")
                 <<QStringLiteral("      类别      ")
                 <<QStringLiteral("      进价      ")
                 <<QStringLiteral("      数量      ")
                 <<QStringLiteral("      计量单位 ");
    else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
        labellist<<QStringLiteral("      入库日期      ")
                 <<QStringLiteral("      订单号      ")
                 <<QStringLiteral("      退货客户           ")
                 <<QStringLiteral("      总金额      ")
                 <<QStringLiteral("      供应商      ")
                 <<QStringLiteral("      商品名      ")
                 <<QStringLiteral("      类别      ")
                 <<QStringLiteral("      进价      ")
                 <<QStringLiteral("      数量      ")
                 <<QStringLiteral("      计量单位      ");
    forthInStoreTreeViewModel->setHorizontalHeaderLabels(labellist);

    //加载数据模型
    ui->forthInStoreTreeView->setModel(forthInStoreTreeViewModel);
    ui->forthInStoreTreeView->show();

    //清空选择项
    forthInStoreDocumentRange.first=forthInStoreDocumentRange.second=0;
    forthInStoreSelectionTradingPartners.clear();
    forthInStoreSelectionCommodityNames.clear();
}
//更新日期范围
void MainWindow::forthupdateInStoreDateRange()
{
    QString startdate=ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd");
    QString enddate=ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购入库查询采购供应商"),
         QString("select DISTINCT vendorName from procureinlists,vendor "
                 "where procureinlists.vendorID=vendor.vendorID "
                 "and OTime between '%1' and '%2' and vendor.memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"采购供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售退货查询退货客户"),
         QString("select DISTINCT clientName from returngoodsinlists,client "
                 "where returngoodsinlists.clientID=client.clientID "
                 "and OTime between '%1' and '%2' and client.memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"退货客户");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购入库查询采购商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_procureinlists_procureinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId)                                   ,
         QStringList()<<"采购供应商"<<"采购商品");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售退货查询退货商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"退货供应商"<<"退货商品");
}

//起始日期改变
void MainWindow::on_forthInStoreStardDateEdit_dateChanged(const QDate &date)
{
    forthupdateInStoreDateRange();
}
//结束日期改变
void MainWindow::on_forthInStoreEndDateEdit_dateChanged(const QDate &date)
{
    forthupdateInStoreDateRange();
}
//入库类型改变
void MainWindow::on_forthInStoreCategoryComboBox_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    QDate mindate,maxdate;

    if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
    {
        query.exec(QString("select MIN(OTime) from procureinlists where memberID='%1'")
                   .arg(this->memberId));
        query.next();
        mindate=query.value(0).toDate();
        query.exec(QString("select MAX(OTime) from procureinlists where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        maxdate=query.value(0).toDate();
    }
    else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
    {
        query.exec(QString("select MIN(OTime) from returngoodsinlists where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        mindate=query.value(0).toDate();
        query.exec(QString("select MAX(OTime) from returngoodsinlists where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        maxdate=query.value(0).toDate();
    }
    ui->forthInStoreStardDateEdit->setDate(mindate);
    ui->forthInStoreEndDateEdit->setDate(maxdate);
    ui->forthInStoreStardDateEdit->setDateRange(mindate,maxdate);
    ui->forthInStoreEndDateEdit->setDateRange(mindate,maxdate);
}
//查询模式改变
void MainWindow::on_forthInStoreQueryModeComboBox_currentTextChanged(const QString &arg1)
{
    if(ui->forthInStoreQueryModeComboBox->currentText()=="单据号范围")
    {
        //运行模态对话框确定单据号范围
        ModalityMessageBoxDialog m(QString("单据号范围"),
                                   ui->forthInStoreStardDateEdit->date().toString("yyyy-MM-dd"),
                                   ui->forthInStoreEndDateEdit->date().toString("yyyy-MM-dd"),
                                   ui->forthInStoreCategoryComboBox->currentText(),
                                   this->memberId);
        m.exec();

        //获取单据号范围
        forthInStoreDocumentRange=m.getDocumentRange();
    }
    else if(ui->forthInStoreQueryModeComboBox->currentText()=="交易对象")
    {
        //运行模态对话框确定选择的供应商
        QString type;
        if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
            type="采购入库查询采购供应商";
        else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
            type="销售退货查询退货客户";
        ModalityMessageBoxDialog m(type);
        m.exec();

        //获取被选择的供应商
        forthInStoreSelectionTradingPartners=m.getSelectedMessageRows();
    }
    else if(ui->forthInStoreQueryModeComboBox->currentText()=="包含商品")
    {
        //运行模态对话框确定选择的商品
        QString type;
        if(ui->forthInStoreCategoryComboBox->currentText()==QString("采购入库"))
            type="采购入库查询采购商品";
        else if(ui->forthInStoreCategoryComboBox->currentText()==QString("销售退货"))
            type="销售退货查询退货商品";
        ModalityMessageBoxDialog m(type);
        m.exec();

        //获取被选择的商品
        int i=0;
        for(auto s:m.getSelectedMessageRows())
        {
            if((i%2)==0)
            {
                forthInStoreSelectionCommodityNames.push_back(std::make_pair(s,QString("")));
            }
            else if((i%2)==1)
            {
                forthInStoreSelectionCommodityNames[i/2].second=(s);
            }
            ++i;
        }
    }
}
//查询按钮事件槽
void MainWindow::on_forthInStoreQueryPushButton_clicked()
{
    //查询出符合要求的单据
    forthInStoreQueryInListID();
}
//清空按钮事件槽
void MainWindow::on_forthInStoreClearpushButton_clicked()
{
    refreshForthPage();
}


//"出库单据查询"页面
//刷新页面
void MainWindow::refreshFifthPage()
{
    //日期
    ui->fifthOutStoreStardDateEdit->setDate(QDate::currentDate().addDays(-3));
    ui->fifthOutStoreEndDateEdit->setDate(QDate::currentDate().addDays(4));

    //入库类型
    ui->fifthOutStoreCategoryComboBox->setCurrentIndex(-1);

    //查询模式
    ui->fifthOutStoreQueryModeComboBox->setCurrentIndex(-1);

    //清空
    fifthOutStoreDocumentRange.first=fifthOutStoreDocumentRange.second=0;
    fifthOutStoreSelectionTradingPartners.clear();
    fifthOutStoreSelectionCommodityNames.clear();
}
//初始化
void MainWindow::fifthInit()
{
    refreshFifthPage();
    fifthupdateOutStoreDateRange();
}
//查询出符合要求的单据
void MainWindow::fifthOutStoreQueryOrderID()
{
    //目标视图
    QSqlQuery queryorders,queryorderitems;

    fifthOutStoreTreeViewModel=new QStandardItemModel();
    QStandardItem *rootItem=fifthOutStoreTreeViewModel->invisibleRootItem();

    //单据号集合
    std::set<int> orderidset;

    //父项、子项查询要素
    QString querytable,queryview;
    int parentitemcount=0,childrenitemcount=0;


    //主句 出库日期、订单号、供应商、应付总金额、商品名、类别、进价、数量、计量单位
    //主句 出库日期、订单号、退货客户、供应商、应付总金额、商品名、类别、进价、数量、计量单位

    //不同的入库方式采用不同的数据模型
    if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
    {
        querytable="saleorders";
        queryview="commodity_saleorders_saleorderitems_inf";
        parentitemcount=4;
        childrenitemcount=10;
    }
    else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
    {
        querytable="returngoodsorders";
        queryview="commodity_returngoodsorders_returngoodsorderitems_inf";
        parentitemcount=4;
        childrenitemcount=9;
    }

    //找到所有合适的单据号到集合中
    if(ui->fifthOutStoreQueryModeComboBox->currentText()==QString("单据号范围"))
    {
        //把单据号范围的单据加入单据号集合
        for(int orderid=fifthOutStoreDocumentRange.first;orderid<=fifthOutStoreDocumentRange.second;orderid++)
        {
            QSqlQuery query;
            if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
                query.exec(QString("select orderID from saleorders "
                                   "where orderID=%1 and memberID='%2' and "
                                   "OTime between '%3' and '%4'")
                               .arg(orderid)
                               .arg(this->memberId)
                               .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                               .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd")));
            else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
                query.exec(QString("select orderID from returngoodsorders "
                                   "where orderID=%1 and memberID='%2' and "
                                   "OTime between '%3' and '%4'")
                               .arg(orderid)
                               .arg(this->memberId)
                               .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                               .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd")));
            if(query.next())
                orderidset.insert(orderid);
        }
    }
    else if(ui->fifthOutStoreQueryModeComboBox->currentText()==QString("交易对象"))
    {
        qDebug()<<"交易对象";
        //找到包含选中供应商的采购入库/销售退货单据,加入单据号集合
        QString querydocumentstr;
        for(auto vendororclientname:fifthOutStoreSelectionTradingPartners)
        {
            if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
                querydocumentstr=QString("select orderID from saleorders,client where "
                                           "saleorders.clientID=client.clientID and "
                                           "OTime between '%1' and '%2' and clientName='%3' "
                                           "and client.memberID='%4'")
                                       .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(vendororclientname)
                                       .arg(this->memberId);
            else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
                querydocumentstr=QString("select orderID from returngoodsorders,vendor where "
                                           "returngoodsorders.vendorID=vendor.vendorID and "
                                           "OTime between '%1' and '%2' and vendorName='%3' "
                                           "and vendor.memberID='%4'")
                                       .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(vendororclientname)
                                       .arg(this->memberId);
            queryorders.exec(querydocumentstr);
            while(queryorders.next())
                orderidset.insert(queryorders.value(0).toInt());
        }
    }
    else if(ui->fifthOutStoreQueryModeComboBox->currentText()==QString("包含商品"))
    {
        QString querydocumentstr;
        QString vendorname;
        QString commodityname;

        for(auto s:fifthOutStoreSelectionCommodityNames)
            std::cout<<s.first.toStdString()<<" "<<s.second.toStdString()<<std::endl;

        //找到包含选中商品的采购入库/销售退货单据,加入单据号集合
        std::vector<std::pair<QString,QString>>::iterator vendororcommodityname
            =fifthOutStoreSelectionCommodityNames.begin();
        while(vendororcommodityname!=fifthOutStoreSelectionCommodityNames.end())
        {
            //获得供应商名称和商品名称
            vendorname=(*vendororcommodityname).first;
            commodityname=(*vendororcommodityname).second;
            ++vendororcommodityname;

            //查询符合要求的单据号
            if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
                querydocumentstr=QString("select orderID from "
                                           "commodity_saleorders_saleorderitems_inf "
                                           "where vendorName='%1' "
                                           "and commodityName='%2' "
                                           "and OTime between '%3' and '%4' "
                                           "and memberID='%5'")
                                       .arg(vendorname)
                                       .arg(commodityname)
                                       .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(this->memberId);
            else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
                querydocumentstr=QString("select orderID from "
                                           "commodity_returngoodsorders_returngoodsorderitems_inf "
                                           "where vendorName='%1' "
                                           "and commodityName='%2' "
                                           "and OTime between '%3' and '%4' "
                                           "and memberID='%5'")
                                       .arg(vendorname)
                                       .arg(commodityname)
                                       .arg(ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd"))
                                       .arg(this->memberId);

            //把查询结果写到数据集中
            queryorders.exec(querydocumentstr);
            while(queryorders.next())
                orderidset.insert(queryorders.value(0).toInt());
        }
    }

    for(auto orderid:orderidset)
        qDebug()<<"orderid:"<<orderid;

    //根据单据号集合建立数据模型
    for(auto orderid:orderidset)
    {
        QString queryordersstr,queryorderitemsstr;
        //查询采购入库单据
        if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
            queryordersstr=QString("select OTime,orderID,clientName,paySum from %1,client "
                                      "where %2.clientID=client.clientID and client.memberID='%3' "
                                      "and orderID=%4")
                                  .arg(querytable)
                                  .arg(querytable)
                                  .arg(this->memberId)
                                  .arg(orderid);
        else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
            queryordersstr=QString("select OTime,orderID,vendorName,paySum from %1,vendor "
                                      "where %2.vendorID=vendor.vendorID and vendor.memberID='%3' "
                                      "and orderID=%4")
                                  .arg(querytable)
                                  .arg(querytable)
                                  .arg(this->memberId)
                                  .arg(orderid);
        queryorders.exec(queryordersstr);
        queryorders.next();
        //添加入库订单父项
        QList<QStandardItem*> parentitemlist;
        QStandardItem* parentfirstitem;
        for(int i=0;i<parentitemcount;i++)
        {
            QStandardItem* parentitem=new QStandardItem(queryorders.value(i).toString());
            if(i==0)
                parentfirstitem=parentitem;
            parentitemlist<<parentitem;
            std::cout<<queryorders.value(i).toString().toStdString()<<" ";
        }
        std::cout<<std::endl;

        rootItem->appendRow(parentitemlist);
        //添加入库订单子项 商品名 类别 进价 数量 计量单位
        if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
            queryorderitemsstr=QString("select vendorName,commodityName,categoryName,sellingPrice,"
                                          "outStoreCount,unitName "
                                          "from %1 "
                                          "where orderID='%2'")
                                      .arg(queryview)
                                      .arg(orderid);
        else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
            queryorderitemsstr=QString("select commodityName,categoryName,sellingPrice,"
                                          "outStoreCount,unitName "
                                          "from %1 "
                                          "where orderID='%2'")
                                      .arg(queryview)
                                      .arg(orderid);
        queryorderitems.exec(queryorderitemsstr);
        while(queryorderitems.next())
        {
            QList<QStandardItem*> childrenitemlist;
            for(int j=0;j<childrenitemcount;j++)
            {
                if(j<parentitemcount)
                    childrenitemlist<<new QStandardItem(QString(""));
                else
                {
                    //std::cout<<queryinlistitems.value(j).toString().toStdString()<<" ";
                    childrenitemlist<<new QStandardItem(queryorderitems.value(j-parentitemcount).toString());
                }
            }
            //std::cout<<std::endl;

            parentfirstitem->appendRow(childrenitemlist);
        }
    }

    //设置表头
    QStringList labellist;
    if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
        labellist<<QStringLiteral("      出库日期      ")
                  <<QStringLiteral("      订单号      ")
                  <<QStringLiteral("      购买客户           ")
                  <<QStringLiteral("      总金额      ")
                  <<QStringLiteral("      供应商      ")
                  <<QStringLiteral("      商品名      ")
                  <<QStringLiteral("      类别      ")
                  <<QStringLiteral("      进价      ")
                  <<QStringLiteral("      数量      ")
                  <<QStringLiteral("      计量单位      ");

    else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
        labellist<<QStringLiteral("      出库日期      ")
                  <<QStringLiteral("      订单号      ")
                  <<QStringLiteral("      供应商           ")
                  <<QStringLiteral("      总金额      ")
                  <<QStringLiteral("      商品名      ")
                  <<QStringLiteral("      类别      ")
                  <<QStringLiteral("      进价      ")
                  <<QStringLiteral("      数量      ")
                  <<QStringLiteral("      计量单位 ");
    fifthOutStoreTreeViewModel->setHorizontalHeaderLabels(labellist);

    //加载数据模型
    ui->fifthOutStoreTreeView->setModel(fifthOutStoreTreeViewModel);
    ui->fifthOutStoreTreeView->show();

    //清空选择项
    fifthOutStoreDocumentRange.first=fifthOutStoreDocumentRange.second=0;
    fifthOutStoreSelectionTradingPartners.clear();
    fifthOutStoreSelectionCommodityNames.clear();
}
//更新日期范围
void MainWindow::fifthupdateOutStoreDateRange()
{
    QString startdate=ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd");
    QString enddate=ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售出库查询购买客户"),
         QString("select DISTINCT clientName from saleorders,client "
                 "where saleorders.clientID=client.clientID "
                 "and OTime between '%1' and '%2' and client.memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"购买客户");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购退货查询退货供应商"),
         QString("select DISTINCT vendorName from returngoodsorders,vendor "
                 "where returngoodsorders.vendorID=vendor.vendorID "
                 "and OTime between '%1' and '%2' and vendor.memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"退货供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售出库查询购买商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_saleorders_saleorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId)                                   ,
         QStringList()<<"供应商"<<"商品");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购退货查询退货商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_returngoodsorders_returngoodsorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
                 .arg(startdate)
                 .arg(enddate)
                 .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");
}

//起始日期改变
void MainWindow::on_fifthOutStoreStardDateEdit_dateChanged(const QDate &date)
{
    fifthupdateOutStoreDateRange();
}
//结束日期改变
void MainWindow::on_fifthOutStoreEndDateEdit_dateChanged(const QDate &date)
{
    fifthupdateOutStoreDateRange();
}
//出库类型改变
void MainWindow::on_fifthOutStoreCategoryComboBox_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    QDate mindate,maxdate;

    if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
    {
        query.exec(QString("select MIN(OTime) from saleorders where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        mindate=query.value(0).toDate();
        query.exec(QString("select MAX(OTime) from saleorders where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        maxdate=query.value(0).toDate();
    }
    else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
    {
        query.exec(QString("select MIN(OTime) from returngoodsorders where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        mindate=query.value(0).toDate();
        query.exec(QString("select MAX(OTime) from returngoodsorders where memberID='%1'")
                       .arg(this->memberId));
        query.next();
        maxdate=query.value(0).toDate();
    }
    ui->fifthOutStoreStardDateEdit->setDate(mindate);
    ui->fifthOutStoreEndDateEdit->setDate(maxdate);
    ui->fifthOutStoreStardDateEdit->setDateRange(mindate,maxdate);
    ui->fifthOutStoreEndDateEdit->setDateRange(mindate,maxdate);
}
//查询模式改变
void MainWindow::on_fifthOutStoreQueryModeComboBox_currentTextChanged(const QString &arg1)
{
    if(ui->fifthOutStoreQueryModeComboBox->currentText()=="单据号范围")
    {
        //运行模态对话框确定单据号范围
        ModalityMessageBoxDialog m(QString("单据号范围"),
                                   ui->fifthOutStoreStardDateEdit->date().toString("yyyy-MM-dd"),
                                   ui->fifthOutStoreEndDateEdit->date().toString("yyyy-MM-dd"),
                                   ui->fifthOutStoreCategoryComboBox->currentText(),
                                   this->memberId);
        m.exec();

        //获取单据号范围
        fifthOutStoreDocumentRange=m.getDocumentRange();
    }
    else if(ui->fifthOutStoreQueryModeComboBox->currentText()=="交易对象")
    {
        //运行模态对话框确定选择的供应商
        QString type;
        if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
            type="销售出库查询购买客户";
        else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
            type="采购退货查询退货供应商";
        ModalityMessageBoxDialog m(type);
        m.exec();

        //获取被选择的供应商
        fifthOutStoreSelectionTradingPartners=m.getSelectedMessageRows();
    }
    else if(ui->fifthOutStoreQueryModeComboBox->currentText()=="包含商品")
    {
        //运行模态对话框确定选择的商品
        QString type;
        if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("销售出库"))
            type="销售出库查询购买商品";
        else if(ui->fifthOutStoreCategoryComboBox->currentText()==QString("采购退货"))
            type="采购退货查询退货商品";
        ModalityMessageBoxDialog m(type);
        m.exec();

        //获取被选择的商品
        int i=0;
        for(auto s:m.getSelectedMessageRows())
        {
            if((i%2)==0)
            {
                fifthOutStoreSelectionCommodityNames.push_back(std::make_pair(s,QString("")));
            }
            else if((i%2)==1)
            {
                fifthOutStoreSelectionCommodityNames[i/2].second=(s);
            }
            ++i;
        }
    }
}
//清空按钮事件槽
void MainWindow::on_fifthOutStoreClearpushButton_clicked()
{
    refreshFifthPage();
}
//查询按钮事件槽
void MainWindow::on_fifthOutStoreQueryPushButton_clicked()
{
    fifthOutStoreQueryOrderID();
}


//"商品管理"页面
//刷新页面
void MainWindow::refreshSixthPage()
{    
    //商品类别
    this->sixthCommodityCategoryModel=new QSqlQueryModel(this);
    this->sixthCommodityCategoryModel->setQuery(QString("select categoryName from category"));
    ui->sixthCommodityCategoryComboBox->setModel(sixthCommodityCategoryModel);
    //计量单位
    this->sixthCommodityUnitModel=new QSqlQueryModel(this);
    this->sixthCommodityUnitModel->setQuery("select unitName from unit");
    ui->sixthCommodityUnitComboBox->setModel(sixthCommodityUnitModel);
    //供应商
    this->sixthVendorModel=new QSqlQueryModel(this);
    this->sixthVendorModel->setQuery(QString("select vendorName from vendor where memberID='%1'")
                                         .arg(this->memberId));
    ui->sixthVendorComboBox->setModel(sixthVendorModel);
    //商品信息
    this->sixthCommodityTreeViewModel=new QSqlQueryModel(this);
    this->sixthCommodityTreeViewModel
    ->setQuery(QString("select commodityName,categoryName,unitName,vendorName "
                                "from commodity,vendor where commodity.memberID='%1' "
                                "and commodity.vendorID=vendor.vendorID").arg(this->memberId));

    ui->sixthCommodityCategoryComboBox->setCurrentIndex(-1);
    ui->sixthCommodityNameLineEdit->clear();
    ui->sixthCommodityUnitComboBox->setCurrentIndex(-1);
    ui->sixthVendorComboBox->setCurrentIndex(-1);

    //设置表头
    sixthCommodityTreeViewModel->setHeaderData(0, Qt::Horizontal, "商品名");
    sixthCommodityTreeViewModel->setHeaderData(1, Qt::Horizontal, "类别");
    sixthCommodityTreeViewModel->setHeaderData(2, Qt::Horizontal, "计量单位");
    sixthCommodityTreeViewModel->setHeaderData(3, Qt::Horizontal, "供应商");

    ui->sixthCommodityTableView->setModel(sixthCommodityTreeViewModel);
    ui->sixthCommodityTableView->show();


}
//初始化
void MainWindow::sixthInit()
{
    //刷新页面
    refreshSixthPage();
}

//清空按钮事件槽
void MainWindow::on_sixthClearPushButton_clicked()
{
    refreshSixthPage();
}
//新增商品按钮事件槽
void MainWindow::on_sixthIncreCommodityPushButton_clicked()
{
    QSqlQuery query;
    //判断信息是否完整
    //判断填写信息是否完整
    QString commodityCategoryStr=ui->sixthCommodityCategoryComboBox->currentText();
    QString commodityNameStr=ui->sixthCommodityNameLineEdit->text();
    QString commodityUnit=ui->sixthCommodityUnitComboBox->currentText();
    QString vendorStr=ui->sixthVendorComboBox->currentText();
    if((commodityCategoryStr=="")||(commodityNameStr=="")||(commodityUnit=="")||(vendorStr==""))
    {
        QMessageBox::warning(0,QObject::tr("提示"),"请填写完整信息！");
        return;
    }
    else
    {
        //类别、名称、计量单位、供应商
        QString commoditynamestr;
        int vendorid;

        commoditynamestr=ui->sixthCommodityNameLineEdit->text();

        query.exec(QString("select vendorID from vendor where vendorName='%1'")
                       .arg(ui->sixthVendorComboBox->currentText()));
        query.next();
        vendorid=query.value(0).toInt();

        //插入记录，先判断有没有同名产品，有则提示
        query.exec(QString("select commodityID from commodity_inf where "
                           "memberID='%1' and commodityName='%2' and "
                           "vendorname='%3'")
                       .arg(this->memberId)
                       .arg(commoditynamestr)
                       .arg(ui->sixthVendorComboBox->currentText()));
        if(query.next())
        {
            QMessageBox::warning(0,QObject::tr("提示"),"已有同名产品！");
        }
        else
        {
            //开始事务，更新commodity和store
            QSqlDatabase::database().transaction();
            bool insCommodityOk=query.exec
            (QString("insert into commodity"
                       "(memberID,commodityName,categoryName,unitName,vendorID) "
                       "values('%1','%2','%3','%4',%5)").arg(this->memberId).arg(commoditynamestr)
                        .arg(ui->sixthCommodityCategoryComboBox->currentText())
                        .arg(ui->sixthCommodityUnitComboBox->currentText()).arg(vendorid));
//            qDebug()<<"insCommodityOk:"<<insCommodityOk;
            query.exec(QString("select commodityID from commodity where "
                               "memberID='%1' and commodityName='%2'")
                           .arg(this->memberId).arg(commoditynamestr));
            query.next();
            int commodityID=query.value(0).toInt();
            bool insStroeOk=query.exec(QString("insert into store(commodityID,storeCount) values(%1,%2)")
                                             .arg(commodityID).arg(0));
//            qDebug()<<"insStroeOk:"<<insStroeOk;
            if(insCommodityOk&&insStroeOk)
            {
                QSqlDatabase::database().commit();
                    //刷新显示
                    this->sixthCommodityTreeViewModel->setQuery
                    (QString("select commodityName,categoryName,unitName,vendorName "
                                    "from commodity,vendor where commodity.memberID='%1' "
                                    "and commodity.vendorID=vendor.vendorID").arg(this->memberId));
                    ui->sixthCommodityTableView->setModel(sixthCommodityTreeViewModel);
                    ui->sixthCommodityTableView->show();

                    //刷新库存
                    this->ninthTableViewModel->setQuery(QString
                        ("select categoryName,commodityName,unitName,vendorName,storeCount"
                                " from commodity_store_inf where memberID='%1'").arg(this->memberId));
                    ui->ninthtTableView->setModel(ninthTableViewModel);
                    ui->ninthtTableView->show();

            }
            else
            {
                    QSqlDatabase::database().rollback();
                    QMessageBox::warning(0,QObject::tr("提示"),"商品添加失败！");
            }
        }
        //刷新数据网格
//        refreshFirstPage();
//        refreshSecondPage();
//        refreshThirdPage();
//        refreshForthPage();
//        refreshFifthPage();
//        refreshSixthPage();
//        refreshSeventhPage();
//        refreshEighthPage();
//        refreshNinthPage();
    }
}
//表格回显信息项事件槽
void MainWindow::on_sixthCommodityTableView_clicked(const QModelIndex &index)
{
    //获取行
    int r=ui->sixthCommodityTableView->currentIndex().row();
    QModelIndex _index;

    //商品名
    _index=sixthCommodityTreeViewModel->index(r,0);
    ui->sixthCommodityNameLineEdit->setText(sixthCommodityTreeViewModel->data(_index).toString());

    //类别
    _index=sixthCommodityTreeViewModel->index(r,1);
    ui->sixthCommodityCategoryComboBox->setCurrentText(sixthCommodityTreeViewModel->data(_index).toString());

    //计量单位
    _index=sixthCommodityTreeViewModel->index(r,2);
    ui->sixthCommodityUnitComboBox->setCurrentText(sixthCommodityTreeViewModel->data(_index).toString());

    //供应商
    _index=sixthCommodityTreeViewModel->index(r,3);
    ui->sixthVendorComboBox->setCurrentText(sixthCommodityTreeViewModel->data(_index).toString());
}


//"客户信息"页面
//刷新页面
void MainWindow::refreshSeventhPage()
{
    ui->seventhAdressLineEdit->clear();
    ui->seventhClientLineEdit->clear();
    ui->seventhContactLineEdit->clear();
    ui->seventhPhoneLineEdit->clear();
    //刷新本页
    seventhTableViewModel=new QSqlQueryModel(this);
    this->seventhTableViewModel->setQuery(QString("select clientName,"
                                                  "clientAdress,clientContact,clientPhoneNumber from client where memberID='%1'")
                                              .arg(this->memberId));
    //设置表头
    seventhTableViewModel->setHeaderData(0, Qt::Horizontal, "客户名");
    seventhTableViewModel->setHeaderData(1, Qt::Horizontal, "客户地址");
    seventhTableViewModel->setHeaderData(2, Qt::Horizontal, "联系人");
    seventhTableViewModel->setHeaderData(3, Qt::Horizontal, "电话");

    ui->seventhTableView->setModel(seventhTableViewModel);
    ui->seventhTableView->show();
    ui->seventhTableView->setUpdatesEnabled(true);
}
//初始化
void MainWindow::seventhInit()
{
    refreshSeventhPage();
}

//清空按钮事件槽
void MainWindow::on_seventhClearPushButton_clicked()
{
    refreshSeventhPage();
}
//新增客户事件槽
void MainWindow::on_seventhIncreClientPushButton_clicked()
{
    //判断填写信息是否完整
    QString clientStr=ui->seventhClientLineEdit->text();
    QString adressStr=ui->seventhAdressLineEdit->text();
    QString contactstr=ui->seventhContactLineEdit->text();
    QString phoneStr=ui->seventhPhoneLineEdit->text();
    if((clientStr=="")||(adressStr=="")||(contactstr=="")||(phoneStr==""))
    {
        QMessageBox::warning(0,QObject::tr("提示"),"请填写完整信息！");
        return;
    }
    //判断客户名是否已经存在
    QSqlQuery query;
    query.exec(QString("select clientID from client where memberID='%1' and clientName='%2'")
                   .arg(this->memberId).arg(ui->seventhClientLineEdit->text()));
    if(query.next())
        QMessageBox::warning(0,QObject::tr("提示"),"客户名已存在！");
    else
    {
        query.exec(QString("insert into client(memberID,clientName,clientAdress,clientContact,clientPhoneNumber) "
                           "values('%1','%2','%3','%4','%5')")
                            .arg(this->memberId).arg(ui->seventhClientLineEdit->text())
                            .arg(ui->seventhAdressLineEdit->text()).arg(ui->seventhContactLineEdit->text())
                            .arg(ui->seventhPhoneLineEdit->text()));
        QMessageBox::warning(0,QObject::tr("提示"),"客户已添加！");
        //刷新本页
        this->seventhTableViewModel->setQuery(QString("select clientName,clientAdress,clientContact,clientPhoneNumber from client where memberID='%1'")
                                                  .arg(this->memberId));
        ui->seventhTableView->setModel(seventhTableViewModel);
        ui->seventhTableView->show();
        //刷新数据网格
//        refreshFirstPage();
//        refreshSecondPage();
//        refreshThirdPage();
//        refreshForthPage();
//        refreshFifthPage();
//        refreshSixthPage();
//        refreshSeventhPage();
//        refreshEighthPage();
//        refreshNinthPage();

    }
}
//表格回显信息项事件槽
void MainWindow::on_seventhTableView_clicked(const QModelIndex &index)
{
    int r=ui->seventhTableView->currentIndex().row();
    QModelIndex _index;

    _index=seventhTableViewModel->index(r,0);
    ui->seventhClientLineEdit->setText(seventhTableViewModel->data(_index).toString());

    _index=seventhTableViewModel->index(r,1);
    ui->seventhAdressLineEdit->setText(seventhTableViewModel->data(_index).toString());

    _index=seventhTableViewModel->index(r,2);
    ui->seventhContactLineEdit->setText(seventhTableViewModel->data(_index).toString());

    _index=seventhTableViewModel->index(r,3);
    ui->seventhPhoneLineEdit->setText(seventhTableViewModel->data(_index).toString());

}


//"供应商信息"页面
//刷新页面
void MainWindow::refreshEighthPage()
{
    ui->eighthAdressLineEdit->clear();
    ui->eighthContactLineEdit->clear();
    ui->eighthPhoneLineEdit->clear();
    ui->eighthVendorLineEdit->clear();
    eighthTableViewModel=new QSqlQueryModel(this);
    this->eighthTableViewModel->setQuery
        ("select vendorName,vendorAdress,vendorContact,vendorPhoneNumber from vendor");
    //设置表头 、、、、、、、、、、
    eighthTableViewModel->setHeaderData(0, Qt::Horizontal, "供应商名");
    eighthTableViewModel->setHeaderData(1, Qt::Horizontal, "供应商地址");
    eighthTableViewModel->setHeaderData(2, Qt::Horizontal, "联系人");
    eighthTableViewModel->setHeaderData(3, Qt::Horizontal, "电话");

    ui->eighthVendorTableView->setModel(eighthTableViewModel);
    ui->eighthVendorTableView->show();

}
//初始化
void MainWindow::eighthInit()
{
    refreshEighthPage();
}

//清空按钮事件槽
void MainWindow::on_eighthClearPushButton_clicked()
{
    refreshEighthPage();
}
//新增供应商按钮事件槽
void MainWindow::on_eighthIncreVendorPushButton_clicked()
{
    //判断填写信息是否完整
    QString clientStr=ui->eighthVendorLineEdit->text();
    QString adressStr=ui->eighthAdressLineEdit->text();
    QString contactstr=ui->eighthContactLineEdit->text();
    QString phoneStr=ui->eighthPhoneLineEdit->text();
    if((clientStr=="")||(adressStr=="")||(contactstr=="")||(phoneStr==""))
    {
        QMessageBox::warning(0,QObject::tr("提示"),"请填写完整信息！");
        return;
    }

    QSqlQuery query;
    query.exec(QString("select vendorID from vendor where vendorName='%1' and memberID='%2'")
                   .arg(ui->eighthVendorLineEdit->text()).arg(this->memberId));
    if(query.next())
    {
        QMessageBox::warning(0,QObject::tr("提示"),"供应商已经存在！");
    }
    else
    {
        bool a=query.exec(QString("insert into vendor"
                          "(memberID,vendorName,vendorAdress,vendorContact,vendorPhoneNumber) "
                           "values('%1','%2','%3','%4','%5')")
                            .arg(this->memberId)
                            .arg(ui->eighthVendorLineEdit->text())
                            .arg(ui->eighthAdressLineEdit->text())
                            .arg(ui->eighthContactLineEdit->text())
                            .arg(ui->eighthPhoneLineEdit->text()));
        if(a)
            QMessageBox::information(0,QObject::tr("提示"),"已成功添加供应商！");
        else
            QMessageBox::information(0,QObject::tr("提示"),"联系人名字过长！");
        this->eighthTableViewModel->setQuery("select vendorName,vendorAdress,vendorContact,vendorPhoneNumber from vendor");
        ui->eighthVendorTableView->setModel(eighthTableViewModel);
        ui->eighthVendorTableView->show();

    //刷新数据网格
//        refreshFirstPage();
//        refreshSecondPage();
//        refreshThirdPage();
//        refreshForthPage();
//        refreshFifthPage();
        refreshSixthPage();
//        refreshSeventhPage();
//        refreshEighthPage();
//        refreshNinthPage();
    }
}
//回显
void MainWindow::on_eighthVendorTableView_clicked(const QModelIndex &index)
{
    //vendorName,vendorAdress,vendorContact,vendorPhoneNumber
    int r=ui->eighthVendorTableView->currentIndex().row();
    QModelIndex _index;

    _index=eighthTableViewModel->index(r,0);
    ui->eighthVendorLineEdit->setText(eighthTableViewModel->data(_index).toString());

    _index=eighthTableViewModel->index(r,1);
    ui->eighthAdressLineEdit->setText(eighthTableViewModel->data(_index).toString());

    _index=eighthTableViewModel->index(r,2);
    ui->eighthContactLineEdit->setText(eighthTableViewModel->data(_index).toString());

    _index=eighthTableViewModel->index(r,3);
    ui->eighthPhoneLineEdit->setText(eighthTableViewModel->data(_index).toString());
}


//"现有库存"页面
//刷新页面
void MainWindow::refreshNinthPage()
{
    ninthTableViewModel=new QSqlQueryModel(this);
    this->ninthTableViewModel->setQuery(QString("select categoryName,commodityName,unitName,vendorName,storeCount"
                                                " from commodity_store_inf where memberID='%1'").arg(this->memberId));
    //设置表头 商品类别 商品名称 计量单位 进价 商品名 库存数量
    ninthTableViewModel->setHeaderData(0, Qt::Horizontal, "商品类别");
    ninthTableViewModel->setHeaderData(1, Qt::Horizontal, "商品名称");
    ninthTableViewModel->setHeaderData(2, Qt::Horizontal, "计量单位");
    ninthTableViewModel->setHeaderData(3, Qt::Horizontal, "供应商");
    ninthTableViewModel->setHeaderData(4, Qt::Horizontal, "库存数量");
    ui->ninthtTableView->setModel(ninthTableViewModel);
    ui->ninthtTableView->show();
    ui->ninthtTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}
//初始化
void MainWindow::ninthInit()
{
    refreshNinthPage();
}
//回显
void MainWindow::on_ninthtTableView_clicked(const QModelIndex &index)
{
    int r=ui->ninthtTableView->currentIndex().row();
    QModelIndex _index;

    _index=ninthTableViewModel->index(r,0);
    ui->ninthCategorylineEdit->setText(ninthTableViewModel->data(_index).toString());

    _index=ninthTableViewModel->index(r,1);
    ui->ninthNamelineEdit->setText(ninthTableViewModel->data(_index).toString());

    _index=ninthTableViewModel->index(r,2);
    ui->ninthUnitlineEdit->setText(ninthTableViewModel->data(_index).toString());

    _index=ninthTableViewModel->index(r,3);
    ui->ninthVendorlineEdit->setText(ninthTableViewModel->data(_index).toString());

    _index=ninthTableViewModel->index(r,4);
    ui->ninthCountlineEdit->setText(ninthTableViewModel->data(_index).toString());
}


//绘制柱状图和饼图的通用函数
//绘制柱状图
void MainWindow::drawBarChart(DrawBarData barData)
{
    //初始化图案
    QChart* defaultChart=new QChart();
    defaultChart->setTitle(barData.m_barTitle);
    defaultChart->setAnimationOptions(QChart::SeriesAnimations);
    barData.m_chartview->setChart(defaultChart);
    barData.m_chartview->setRenderHint(QPainter::Antialiasing);

    //数据集
    QBarSet* defaultSet=new QBarSet("数量");
    //横坐标
    QBarCategoryAxis* defaultAxisX=new QBarCategoryAxis();
    //纵坐标
    QValueAxis* defaultAxisY=new QValueAxis();
    //纵坐标范围
    int bigestrange=0;
    //柱状图序列
    QBarSeries* defaultBarSeries=new QBarSeries();

    if(barData.m_axisYValueType==QString("数量"))
    {
        int count=0,bigestcount=0;
        //数据集
        for(auto s:barData.m_intAxisYVector)
        {
            count=(s);
            bigestcount=std::max(bigestcount,count);
            defaultSet->append(count);
        }
        //纵坐标范围
        bigestrange=bigestcount;
    }
    else if(barData.m_axisYValueType==QString("金额"))
    {
        double money=0,bigestmoney=0;
        //数据集
        for(auto s:barData.m_doubleAxisYVector)
        {
            money=(s);
            bigestmoney=std::max(bigestmoney,money);
            defaultSet->append(money);
        }
        //纵坐标范围
        bigestrange=bigestmoney;
    }

    //柱状图序列加载数据集、图表添加柱状图序列
    defaultBarSeries->append(defaultSet);
    defaultChart->addSeries(defaultBarSeries);

    //横坐标
    defaultAxisX->setTitleText(barData.m_axisXTitle);
    for(auto s:barData.m_axisXVector)
    {
        defaultAxisX->append(s);
    }

    //纵坐标(范围、标题、刻度数、字体样式)
    int digits=1,power;
    while (bigestrange>=10)
    {
        power=bigestrange/10;
        bigestrange/= 10;
        digits*=10;
    }
    bigestrange=(power+1)*digits;
    defaultAxisY->setRange(0,bigestrange);
    defaultAxisY->setTitleText(barData.m_axisYTitle);
    defaultAxisY->setTickCount(11);
    defaultAxisY->setLabelFormat("%.0f");

    //图表设置横坐标、纵坐标
    defaultChart->addAxis(defaultAxisX,Qt::AlignBottom);
    defaultChart->addAxis(defaultAxisY,Qt::AlignLeft);

    //柱状图序列关联横坐标纵坐标
    defaultBarSeries->attachAxis(defaultAxisX);
    defaultBarSeries->attachAxis(defaultAxisY);


    // 标注柱状图的数值


    //显示图例
    defaultChart->legend()->setVisible(true);
    //图例显示在下方
    defaultChart->legend()->setAlignment(Qt::AlignBottom);
}
//绘制饼图
void MainWindow::drawPieChart(DrawPieData pieData)
{
    //饼图初始化
    QChart* defaultPieChart = new QChart();
    defaultPieChart->setTitle(pieData.m_pieTitle);
    defaultPieChart->setAnimationOptions(QChart::SeriesAnimations);
    pieData.m_chartview->setChart(defaultPieChart);
    pieData.m_chartview->setRenderHint(QPainter::Antialiasing);

    //创建饼图序列和分块数据
    QPieSeries* defaultPieSeries=new QPieSeries();
    for(int i=0;i<pieData.m_axisXVector.size();i++)
    {
        if(pieData.m_axisYValueType==QString("数量"))
            defaultPieSeries->append(pieData.m_axisXVector[i],pieData.m_intAxisYVector[i]);
        else if(pieData.m_axisYValueType==QString("金额"))
            defaultPieSeries->append(pieData.m_axisXVector[i],pieData.m_doubleAxisYVector[i]);
    }

    //为分快添加标签补充说明信息
    QPieSlice* slice;
    for(int i=0;i<defaultPieSeries->count();i++)
    {
        slice=defaultPieSeries->slices().at(i);
        if(pieData.m_axisYValueType==QString("数量"))
            slice->setLabel(slice->label()+QString::asprintf(":%.0f个,%.1f%%",slice->value(),
                                            slice->percentage()*100));
        else if(pieData.m_axisYValueType==QString("金额"))
            slice->setLabel(slice->label()+QString::asprintf(":%.0f元,%.1f%%",slice->value(),
                                            slice->percentage()*100));
        connect(slice,&QPieSlice::hovered,this,&MainWindow::slotPieSliceHighlight);
    }
    slice->setExploded(true);
    defaultPieSeries->setLabelsVisible(true);
    defaultPieChart->addSeries(defaultPieSeries);
    defaultPieChart->legend()->setVisible(true);
    defaultPieChart->legend()->setAlignment(Qt::AlignRight);
}
//饼图分块活动
void MainWindow::slotPieSliceHighlight(bool show)
{
    //鼠标移入、移出时触发hovered()信号，动态设置setExploded()效果
    QPieSlice *slice;
    slice=(QPieSlice *)sender();
    //    slice->setLabelVisible(show);
    slice->setExploded(show);
}
//时间统计
void MainWindow::timeStatistics(StatisticalInformationItem &statistInfoItem,
                                QStringList& inOutStoreSelectionCategoryOrTradingPartner,
                                std::vector<std::pair<QString,QString>>& inOutStoreSelectionCommoditys)
{
    QSqlQuery query;
    //时间段横坐标
    std::vector<std::pair<QString,QString>> dateRangeVec;

    //横坐标
    if(statistInfoItem.m_inStoreTimeLen==QString("周"))
    {
        statistInfoItem.m_axisXVector.push_back("第一天");
        statistInfoItem.m_axisXVector.push_back("第二天");
        statistInfoItem.m_axisXVector.push_back("第三天");
        statistInfoItem.m_axisXVector.push_back("第四天");
        statistInfoItem.m_axisXVector.push_back("第五天");
        statistInfoItem.m_axisXVector.push_back("第六天");
        statistInfoItem.m_axisXVector.push_back("第七天");
        for(int i=0;i<7;i++)
            dateRangeVec.push_back
                (std::make_pair(statistInfoItem.m_startdate.addDays(i).toString("yyyy-MM-dd"),
                                statistInfoItem.m_startdate.addDays(i).toString("yyyy-MM-dd")));
    }
    else if(statistInfoItem.m_inStoreTimeLen==QString("月"))
    {
        statistInfoItem.m_axisXVector.push_back("第一周");
        statistInfoItem.m_axisXVector.push_back("第二周");
        statistInfoItem.m_axisXVector.push_back("第三周");
        statistInfoItem.m_axisXVector.push_back("第四周");
        QDate indexdate=statistInfoItem.m_startdate;
        for(int i=0;i<4;i++)
        {
            dateRangeVec.push_back
                (std::make_pair(indexdate.toString("yyyy-MM-dd"),
                                indexdate.addDays(6).toString("yyyy-MM-dd")));
            indexdate=indexdate.addDays(7);
        }
    }
    else if(statistInfoItem.m_inStoreTimeLen==QString("季"))
    {
        statistInfoItem.m_axisXVector.push_back("第一月");
        statistInfoItem.m_axisXVector.push_back("第二月");
        statistInfoItem.m_axisXVector.push_back("第三月");
        for(int i=0;i<3;i++)
            dateRangeVec.push_back
                (std::make_pair(statistInfoItem.m_startdate.addMonths(i).toString("yyyy-MM-dd"),
                                statistInfoItem.m_startdate.addMonths(i+1).addDays(-1).toString("yyyy-MM-dd")));
    }
    else if(statistInfoItem.m_inStoreTimeLen==QString("年"))
    {
        statistInfoItem.m_axisXVector.push_back("第一季度");
        statistInfoItem.m_axisXVector.push_back("第二季度");
        statistInfoItem.m_axisXVector.push_back("第三季度");
        statistInfoItem.m_axisXVector.push_back("第四季度");
        for(int i=0;i<4;i++)
            dateRangeVec.push_back
                (std::make_pair(statistInfoItem.m_startdate.addMonths(i*3).toString("yyyy-MM-dd"),
                                statistInfoItem.m_startdate.addMonths((i+1)*3).addDays(-1).toString("yyyy-MM-dd")));
    }

    for(auto s:dateRangeVec)
        qDebug()<<s.first<<" to "<<s.second;

    //数量数值、金额数值
    for(auto daterange:dateRangeVec)
    {
        //查询数量
        QString querycountstr;
        //查询金额
        QString querymoneystr;
        //查询视图
        QString inoutstoreviewstr;
        //查询数量项目
        QString countitemstr;
        //查询金额项目
        QString moneyitemstr;
        //交易对象类型
        QString tradingpartnertype;

        //初始化查询信息
        if(statistInfoItem.m_inStoreCategory==QString("采购入库"))
        {
            inoutstoreviewstr="commodity_procureinlists_procureinlistitems_inf";
            countitemstr="sum(inStoreCount)";
            moneyitemstr="purchasePrice,inStoreCount";
            tradingpartnertype="vendorName";
        }
        else if(statistInfoItem.m_inStoreCategory==QString("销售退货"))
        {
            inoutstoreviewstr="commodity_returngoodsinlists_returngoodsinlistitems_inf";
            countitemstr="sum(inStoreCount)";
            moneyitemstr="purchasePrice,inStoreCount";
            tradingpartnertype="clientName";
        }
        else if(statistInfoItem.m_inStoreCategory==QString("销售出库"))
        {
            inoutstoreviewstr="commodity_saleorders_saleorderitems_inf";
            countitemstr="sum(outStoreCount)";
            moneyitemstr="sellingPrice,outStoreCount";
            tradingpartnertype="clientName";
        }
        else if(statistInfoItem.m_inStoreCategory==QString("采购退货"))
        {
            inoutstoreviewstr="commodity_returngoodsorders_returngoodsorderitems_inf";
            countitemstr="sum(outStoreCount)";
            moneyitemstr="sellingPrice,outStoreCount";
            tradingpartnertype="vendorName";
        }

        if(statistInfoItem.m_inStoreStatisticsOptions==QString("总和——时间"))
        {
            querycountstr=QString("select %1 from "
                                  "%2 where memberID='%3' and OTime between '%4' and '%5'")
                                .arg(countitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second);
            querymoneystr=QString("select %1 from "
                                  "%2 where memberID='%3' and OTime between '%4' and '%5'")
                                .arg(moneyitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second);

            //数量数值
            query.exec(querycountstr);
            query.next();
            statistInfoItem.m_countAxisYVector.push_back(query.value(0).toInt());

            //金额数值
            double totalmoney=0;
            query.exec(querymoneystr);
            while(query.next())
            {
                    double purchaseprice=query.value(0).toDouble();
                    int count=query.value(1).toInt();
                    totalmoney+=purchaseprice*double(count);
            }
            //qDebug()<<"totalmoney:"<<totalmoney;
            statistInfoItem.m_moneyAxisYVector.push_back(totalmoney);
        }
        else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多交易对象——时间"))
        {
            int count=0;
            double money=0;
            for(auto tradingPartner:inOutStoreSelectionCategoryOrTradingPartner)
            {
                querycountstr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "%6='%7'")
                                    .arg(countitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(tradingpartnertype)
                                    .arg(tradingPartner);
                querymoneystr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "%6='%7'")
                                    .arg(moneyitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(tradingpartnertype)
                                    .arg(tradingPartner);

                query.exec(querycountstr);
                query.next();
                count+=query.value(0).toInt();

                double totalmoney=0;
                query.exec(querymoneystr);
                while(query.next())
                {
                    double purchaseprice=query.value(0).toDouble();
                    int count=query.value(1).toInt();
                    totalmoney+=purchaseprice*double(count);
                }
                money+=totalmoney;
            }

            //数量数值
            statistInfoItem.m_countAxisYVector.push_back(count);

            //金额数值
            statistInfoItem.m_moneyAxisYVector.push_back(money);

        }
        else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多类别——时间"))
        {
            int count=0;
            double money=0;
            for(auto tradingPartner:inOutStoreSelectionCategoryOrTradingPartner)
            {
                querycountstr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "categoryName='%6'")
                                    .arg(countitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(tradingPartner);
                querymoneystr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "categoryName='%6'")
                                    .arg(moneyitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(tradingPartner);

                query.exec(querycountstr);
                query.next();
                count+=query.value(0).toInt();

                double totalmoney=0;
                query.exec(querymoneystr);
                while(query.next())
                {
                    double purchaseprice=query.value(0).toDouble();
                    int count=query.value(1).toInt();
                    totalmoney+=purchaseprice*count;
                }
                money+=totalmoney;
            }

            //数量数值
            statistInfoItem.m_countAxisYVector.push_back(count);

            //金额数值
            statistInfoItem.m_moneyAxisYVector.push_back(money);
        }
        else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多商品——时间"))
        {
            int count=0;
            double money=0;
            for(auto vendorandcommodity:inOutStoreSelectionCommoditys)
            {
                querycountstr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "vendorName='%6' and commodityName='%7'")
                                    .arg(countitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(vendorandcommodity.first)
                                    .arg(vendorandcommodity.second);
                querymoneystr=QString("select %1 from %2 "
                                        "where memberID='%3' and "
                                        "OTime between '%4' and '%5' and "
                                        "vendorName='%6' and commodityName='%7'")
                                    .arg(moneyitemstr)
                                    .arg(inoutstoreviewstr)
                                    .arg(this->memberId)
                                    .arg(daterange.first)
                                    .arg(daterange.second)
                                    .arg(vendorandcommodity.first)
                                    .arg(vendorandcommodity.second);

                query.exec(querycountstr);
                query.next();
                count+=query.value(0).toInt();

                double totalmoney=0;
                query.exec(querymoneystr);
                while(query.next())
                {
                    double purchaseprice=query.value(0).toDouble();
                    int count=query.value(1).toInt();
                    totalmoney+=purchaseprice*count;
                }
                money+=totalmoney;
            }

            //数量数值
            statistInfoItem.m_countAxisYVector.push_back(count);

            //金额数值
            statistInfoItem.m_moneyAxisYVector.push_back(money);
        }
        else
            return;
    }

    int index=statistInfoItem.m_axisXVector.size();
    for(int i=0;i<index;i++)
    {
//        qDebug()<<statistInfoItem.m_axisXVector[i]<<"("<<statistInfoItem.m_countAxisYVector[i]
//                 <<statistInfoItem.m_moneyAxisYVector[i]<<")";
    }

    //柱状图标题、饼图标题、横坐标标题   
    if(statistInfoItem.m_inStoreStatisticsOptions==QString("总和——时间"))
    {
        statistInfoItem.m_countTitle=QString("各时间段总和商品的数量占比");
        statistInfoItem.m_moneyTitle=QString("各时间段总和商品金额占比");
        statistInfoItem.m_axisXTitle=QString("时间段");
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多交易对象——时间"))
    {
        statistInfoItem.m_countTitle=QString("各时间段多交易对象商品的数量占比");
        statistInfoItem.m_moneyTitle=QString("各时间段多交易对象商品金额占比");
        statistInfoItem.m_axisXTitle=QString("时间段");
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多类别——时间"))
    {
        statistInfoItem.m_countTitle=QString("各时间段多类别商品的数量占比");
        statistInfoItem.m_moneyTitle=QString("各时间段多类别商品金额占比");
        statistInfoItem.m_axisXTitle=QString("时间段");
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多商品——时间"))
    {
        statistInfoItem.m_countTitle=QString("各时间段多商品的数量占比");
        statistInfoItem.m_moneyTitle=QString("各时间段多商品金额占比");
        statistInfoItem.m_axisXTitle=QString("时间段");
    }
}
//分类统计
void MainWindow::classificationStatistics(StatisticalInformationItem &statistInfoItem,
                                          QStringList &inOutStoreSelectionCategoryOrTradingPartner,
                                          std::vector<std::pair<QString, QString> > &inOutStoreSelectionCommoditys)
{
    //日期范围
    std::pair<QString,QString> daterange;
    QDate startdate;
    QString timelen;
    if(inOutStoreSelectionCategoryOrTradingPartner==eleventhSelectionCategoryOrTradingPartner)
    {
        startdate=ui->eleventhStartDateEdit->date();
        timelen=ui->eleventhTimeLengthComboBox->currentText();
    }
    else if(inOutStoreSelectionCategoryOrTradingPartner==twelfthSelectionCategoryOrTradingPartner)
    {
        startdate=ui->twelfthStartDateEdit->date();
        timelen=ui->twelfthTimeLengthComboBox->currentText();
    }
    daterange.first=startdate.toString("yyyy-MM-dd");
    if(timelen==QString("周"))
        daterange.second=startdate.addDays(7).toString("yyyy-MM-dd");
    else if(timelen==QString("月"))
        daterange.second=startdate.addMonths(1).toString("yyyy-MM-dd");
    else if(timelen==QString("季"))
        daterange.second=startdate.addMonths(4).toString("yyyy-MM-dd");
    else if(timelen==QString("年"))
        daterange.second=startdate.addYears(1).toString("yyyy-MM-dd");

    QSqlQuery query;
    //查询数量
    QString querycountstr;
    //查询金额
    QString querymoneystr;
    //查询视图
    QString inoutstoreviewstr;
    //查询数量项目
    QString countitemstr;
    //查询金额项目
    QString moneyitemstr;
    //交易对象类型
    QString tradingpartnertype;

    //初始化查询信息
    if(statistInfoItem.m_inStoreCategory==QString("采购入库"))
        {
        inoutstoreviewstr="commodity_procureinlists_procureinlistitems_inf";
        countitemstr="sum(inStoreCount)";
        moneyitemstr="purchasePrice,inStoreCount";
        tradingpartnertype="vendorName";
    }
    else if(statistInfoItem.m_inStoreCategory==QString("销售退货"))
        {
        inoutstoreviewstr="commodity_returngoodsinlists_returngoodsinlistitems_inf";
        countitemstr="sum(inStoreCount)";
        moneyitemstr="purchasePrice,inStoreCount";
        tradingpartnertype="clientName";
    }
    else if(statistInfoItem.m_inStoreCategory==QString("销售出库"))
        {
        inoutstoreviewstr="commodity_saleorders_saleorderitems_inf";
        countitemstr="sum(outStoreCount)";
        moneyitemstr="sellingPrice,outStoreCount";
        tradingpartnertype="clientName";
    }
    else if(statistInfoItem.m_inStoreCategory==QString("采购退货"))
        {
        inoutstoreviewstr="commodity_returngoodsorders_returngoodsorderitems_inf";
        countitemstr="sum(outStoreCount)";
        moneyitemstr="sellingPrice,outStoreCount";
        tradingpartnertype="vendorName";
    }

    //数量数值、金额数值
    if(statistInfoItem.m_inStoreStatisticsOptions==QString("多交易对象——交易对象"))
    {
        for(auto tradingPartner:inOutStoreSelectionCategoryOrTradingPartner)
        {
            //横坐标
            statistInfoItem.m_axisXVector.push_back(tradingPartner);

            querycountstr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "%6='%7'")
                                .arg(countitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(tradingpartnertype)
                                .arg(tradingPartner);
            querymoneystr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "%6='%7'")
                                .arg(moneyitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(tradingpartnertype)
                                .arg(tradingPartner);

            //数量数值
            query.exec(querycountstr);
            query.next();
            statistInfoItem.m_countAxisYVector.push_back(query.value(0).toInt());

            //金额数值
            double totalmoney=0;
            query.exec(querymoneystr);
            while(query.next())
            {
                double purchaseprice=query.value(0).toDouble();
                int count=query.value(1).toInt();
                totalmoney+=purchaseprice*count;
            }
            statistInfoItem.m_moneyAxisYVector.push_back(totalmoney);
        }
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多类别——类别"))
    {
        for(auto category:inOutStoreSelectionCategoryOrTradingPartner)
        {
            //横坐标
            statistInfoItem.m_axisXVector.push_back(category);

            querycountstr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "categoryName='%6'")
                                .arg(countitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(category);
            querymoneystr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "categoryName='%6'")
                                .arg(moneyitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(category);

            //数量数值
            query.exec(querycountstr);
            query.next();
            statistInfoItem.m_countAxisYVector.push_back(query.value(0).toInt());

            //金额数值
            double totalmoney=0;
            query.exec(querymoneystr);
            while(query.next())
            {
                double purchaseprice=query.value(0).toDouble();
                int count=query.value(1).toInt();
                totalmoney+=purchaseprice*count;
            }
            statistInfoItem.m_moneyAxisYVector.push_back(totalmoney);
        }
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多商品——商品"))
    {        
        for(auto vendorandcommodity:inOutStoreSelectionCommoditys)
        {
            int count=0,money=0;
            //横坐标
            statistInfoItem.m_axisXVector.push_back(vendorandcommodity.first+"----"+vendorandcommodity.second);
            querycountstr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "vendorName='%6' and commodityName='%7'")
                                .arg(countitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(vendorandcommodity.first)
                                .arg(vendorandcommodity.second);
            querymoneystr=QString("select %1 from %2 "
                                    "where memberID='%3' and "
                                    "OTime between '%4' and '%5' and "
                                    "vendorName='%6' and commodityName='%7'")
                                .arg(moneyitemstr)
                                .arg(inoutstoreviewstr)
                                .arg(this->memberId)
                                .arg(daterange.first)
                                .arg(daterange.second)
                                .arg(vendorandcommodity.first)
                                .arg(vendorandcommodity.second);

            query.exec(querycountstr);
            query.next();
            count+=query.value(0).toInt();

            double totalmoney=0;
            query.exec(querymoneystr);
            while(query.next())
            {
                double purchaseprice=query.value(0).toDouble();
                int count=query.value(1).toInt();
                totalmoney+=purchaseprice*count;
            }
            money+=totalmoney;

            //数量数值
            statistInfoItem.m_countAxisYVector.push_back(count);

            //金额数值
            statistInfoItem.m_moneyAxisYVector.push_back(money);
        }       
    }
    else
        return;

    int index=statistInfoItem.m_axisXVector.size();
    for(int i=0;i<index;i++)
    {
//        qDebug()<<statistInfoItem.m_axisXVector[i]<<"("<<statistInfoItem.m_countAxisYVector[i]
//                 <<statistInfoItem.m_moneyAxisYVector[i]<<")";
    }

    //柱状图标题、饼图标题、横坐标标题
    if(statistInfoItem.m_inStoreStatisticsOptions==QString("多交易对象——交易对象"))
    {
        statistInfoItem.m_countTitle=QString("各交易对象数量占比");
        statistInfoItem.m_moneyTitle=QString("各交易对象金额占比");
        statistInfoItem.m_axisXTitle=QString("交易对象");
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多类别——类别"))
    {
        statistInfoItem.m_countTitle=QString("各类别数量占比");
        statistInfoItem.m_moneyTitle=QString("各类别金额占比");
        statistInfoItem.m_axisXTitle=QString("类别");
    }
    else if(statistInfoItem.m_inStoreStatisticsOptions==QString("多商品——商品"))
    {
        statistInfoItem.m_countTitle=QString("各商品数量占比");
        statistInfoItem.m_moneyTitle=QString("各商品金额占比");
        statistInfoItem.m_axisXTitle=QString("商品");
    }
}

//"库存统计"页面
//绘图
void MainWindow::tenthCreateChart()
{
    QSqlQuery query;
    std::vector<QString> axisXVector;
    std::vector<int> intAxisYVector;
    std::vector<double> doubleAxisYVector;
    QString countTitle,moneyTitle,axisXTitle;

    if(ui->tenthStatisticsComboBox->currentText()==QString("总和——类别"))
    {
        //横坐标
        query.exec(QString("select categoryName from category order by categoryName"));
        while(query.next())
            axisXVector.push_back(query.value(0).toString());

        //数量数值
        for(auto s:axisXVector)
        {
            QString m=QString("select sum(storeCount) from commodity_store_inf "
                                "where memberID='%1' and categoryName='%2'")
                            .arg(this->memberId)
                            .arg(s);
            query.exec(m);
            if(query.next())
                    intAxisYVector.push_back(query.value(0).toInt());
            else
                    intAxisYVector.push_back(0);
        }

        //表格标题和横坐标标题
        countTitle="各类别商品的数量情况";
        moneyTitle="各类别商品的金额情况";
        axisXTitle="类别";
    }
    else if(ui->tenthStatisticsComboBox->currentText()==QString("多供应商——供应商"))
    {
        //横坐标
        for(auto s:tenthSelectionVendors)
            axisXVector.push_back(s);

        //数量数值
        for(auto s:tenthSelectionVendors)
        {           
            QString m=QString("select sum(storeCount) from commodity_store_inf "
                            "where memberID='%1' and vendorName='%2'")
                        .arg(this->memberId)
                        .arg(s);
            query.exec(m);
            if(query.next())
                    intAxisYVector.push_back(query.value(0).toInt());
            else
                    intAxisYVector.push_back(0);
        }

        //表格标题和横坐标标题
        countTitle="各供应商商品的数量情况";
        moneyTitle="各供应商商品的金额情况";
        axisXTitle="供应商";
    }
    else if(ui->tenthStatisticsComboBox->currentText()==QString("多商品——商品"))
    {
        //横坐标
        for(auto s:tenthSelectionCommoditys)
        {
            QString categorystr=s.second+"("+s.first+")";
            axisXVector.push_back(categorystr);
        }

        //数量数值
        for(auto s:tenthSelectionCommoditys)
        {
            QString m=QString("select storeCount from commodity_store_inf "
                                "where memberID='%1' and vendorName='%2' and commodityName='%3'")
                            .arg(this->memberId)
                            .arg(s.first)
                            .arg(s.second);
            query.exec(m);
            if(query.next())
                    intAxisYVector.push_back(query.value(0).toInt());
            else
                    intAxisYVector.push_back(0);
        }

        //表格标题和横坐标标题
        countTitle="各商品的数量情况";
        moneyTitle="各商品的金额情况";
        axisXTitle="商品";
    }
    //金额数值
    moneyValueInit(axisXVector,doubleAxisYVector);
    for(auto s:doubleAxisYVector)
        qDebug()<<s;

    //数量柱状图
    DrawBarData countBar=DrawBarData(countTitle,axisXTitle,axisXVector,
                    "数量/个",intAxisYVector,ui->tenthCountBarGraphicsView);
    drawBarChart(countBar);

    //数量饼图
    DrawPieData countPie=DrawPieData(countTitle,axisXVector,
                    intAxisYVector,ui->tenthCountPieGraphicsView);
    drawPieChart(countPie);

    //金额柱状图
    DrawBarData moneyBar=DrawBarData(moneyTitle,axisXTitle,axisXVector,
                    "金额/元",doubleAxisYVector,ui->tenthMoneyBarGraphicsView);
    drawBarChart(moneyBar);

    //金额饼图
    DrawPieData moneyPie=DrawPieData(moneyTitle,axisXVector,
                    doubleAxisYVector,ui->tenthMoneyPieGraphicsView);
    drawPieChart(moneyPie);
}
//初始化
void MainWindow::tenthInit()
{
    ui->tenthCountBarGraphicsView->setBackgroundBrush(QBrush(QColor(Qt::white)));
    ui->tenthCountPieGraphicsView->setBackgroundBrush(QBrush(QColor(Qt::white)));
    ui->tenthMoneyBarGraphicsView->setBackgroundBrush(QBrush(QColor(Qt::white)));
    ui->tenthMoneyPieGraphicsView->setBackgroundBrush(QBrush(QColor(Qt::white)));

    //注册模态对话框
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("参加统计的供应商"),
         QString("select DISTINCT vendorName from commodity_store_inf "
                 "where memberID='%1'")
             .arg(this->memberId),
         QStringList()<<"供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("参加统计的商品"),
         QString("select vendorName,commodityName from commodity_store_inf "
                 "where memberID='%1'")
             .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");

    ui->tenthStatisticsComboBox->setCurrentIndex(-1);
}
//金额数值
void MainWindow::moneyValueInit(std::vector<QString> &axisXVector, std::vector<double> &doubleAxisYVector)
{
    QSqlQuery query;
    QString entryStr;

    if(ui->tenthStatisticsComboBox->currentText()==QString("总和——类别"))
    {
        entryStr="categoryName";
    }
    else if(ui->tenthStatisticsComboBox->currentText()==QString("多供应商——供应商"))
    {
        entryStr="vendorName";
    }
    else if(ui->tenthStatisticsComboBox->currentText()==QString("多商品——商品"))
    {
        entryStr="";
    }

    int index=0;

    for(auto entry:axisXVector)
    {
        //获取横坐标值
        QString entryname;
        if(ui->tenthStatisticsComboBox->currentText()==QString("总和——类别")||
                            ui->tenthStatisticsComboBox->currentText()==QString("多供应商——供应商"))
            entryname=entry;
        QString vendorname,commodityname;
        if(ui->tenthStatisticsComboBox->currentText()==QString("多商品——商品"))
        {
            vendorname=tenthSelectionCommoditys[index].first;
            commodityname=tenthSelectionCommoditys[index].second;
            index++;
        }

        std::map<std::pair<QString,QString>,std::pair<int,double>> commodityInStoreValueMap;
        int commoditycount=0;

        //找出该条目所有的商品入库记录
        //采购入库
        QString m;
        if(ui->tenthStatisticsComboBox->currentText()==QString("多商品——商品"))
            m=QString("select vendorName,commodityName,purchasePrice,inStoreCount from "
                        "commodity_procureinlists_procureinlistitems_inf "
                        "where memberID='%1' and vendorName='%2' and commodityName='%3'")
                    .arg(this->memberId)
                    .arg(vendorname)
                    .arg(commodityname);
        else
            m=QString("select vendorName,commodityName,purchasePrice,inStoreCount from "
                            "commodity_procureinlists_procureinlistitems_inf "
                            "where memberID='%1' and %2='%3'")
                        .arg(this->memberId)
                        .arg(entryStr)
                        .arg(entryname);
        query.exec(m);
        commoditycount+=query.size();
        while(query.next())
        {
            int instorecount=query.value(3).toInt();
            double commoditysvalue=query.value(2).toDouble()*instorecount;
            commodityInStoreValueMap
                [std::make_pair(query.value(0).toString(),query.value(1).toString())].first+=instorecount;
            commodityInStoreValueMap
                [std::make_pair(query.value(0).toString(),query.value(1).toString())].second+=commoditysvalue;
        }
        //销售退货
        QString n;
        if(ui->tenthStatisticsComboBox->currentText()==QString("多商品——商品"))
            n=QString("select vendorName,commodityName,purchasePrice,inStoreCount from "
                        "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                        "where memberID='%1' and vendorName='%2' and commodityName='%3'")
                    .arg(this->memberId)
                    .arg(vendorname)
                    .arg(commodityname);
        else
            n=QString("select vendorName,commodityName,purchasePrice,inStoreCount from "
                            "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                            "where memberID='%1' and %2='%3'")
                        .arg(this->memberId)
                        .arg(entryStr)
                        .arg(entryname);
        query.exec(n);
        commoditycount+=query.size();
        while(query.next())
        {
            int instorecount=query.value(3).toInt();
            double commoditysvalue=query.value(2).toDouble()*instorecount;
            commodityInStoreValueMap
                [std::make_pair(query.value(0).toString(),query.value(1).toString())].first+=instorecount;
            commodityInStoreValueMap
                [std::make_pair(query.value(0).toString(),query.value(1).toString())].second+=commoditysvalue;
        }

        if(commoditycount==0)
        {
            doubleAxisYVector.push_back(0);
            continue;
        }

        //统计查出的商品，计算出库存里该条目的价值
        //计算出商品的入库单价 更新商品数量为现有库存数量
        std::map<std::pair<QString,QString>,std::pair<int,double>>::iterator commodityiterator
            =commodityInStoreValueMap.begin();
        while(commodityiterator!=commodityInStoreValueMap.end())
        {
            //计算出商品的入库单价
            commodityiterator->second.second=
                commodityiterator->second.second/commodityiterator->second.first;           
            //更新商品数量为现有库存数量
            QString quertstr=QString("select storeCount from commodity_store_inf where "
                                       "vendorName='%1' and "
                                       "commodityName='%2' and "
                                       "memberID='%3'")
                                   .arg(commodityiterator->first.first)
                                   .arg(commodityiterator->first.second)
                                   .arg(this->memberId);
            query.exec(quertstr);
            query.next();
            commodityiterator->second.first=query.value(0).toInt();
            qDebug()<<commodityiterator->second.first<<" "<<query.value(0).toInt();
            ++commodityiterator;
        }

        //计算该供应商的总值
        commodityiterator=commodityInStoreValueMap.begin();
        double totalValue=0;
        while(commodityiterator!=commodityInStoreValueMap.end())
        {
            totalValue+=commodityiterator->second.first*commodityiterator->second.second;
            ++commodityiterator;
        }

        doubleAxisYVector.push_back(totalValue);
    }

    tenthSelectionVendors.clear();
    tenthSelectionCommoditys.clear();
}
//统计对象改变
void MainWindow::on_tenthStatisticsComboBox_currentTextChanged(const QString &arg1)
{
    if(arg1==QString("多供应商——供应商"))
    {
        ModalityMessageBoxDialog m("参加统计的供应商");
        m.exec();
        //获取被选择的供应商
        tenthSelectionVendors=m.getSelectedMessageRows();
        if(!tenthSelectionVendors.empty())
            tenthCreateChart();
    }
    else if(arg1==QString("多商品——商品"))
    {
        ModalityMessageBoxDialog m("参加统计的商品");
        m.exec();
        //获取被选择的商品
        int i=0;
        for(auto s:m.getSelectedMessageRows())
        {
            if((i%2)==0)
            {
                    tenthSelectionCommoditys.push_back(std::make_pair(s,QString("")));
            }
            else if((i%2)==1)
            {
                    tenthSelectionCommoditys[i/2].second=(s);
            }
            ++i;
        }
        if(!tenthSelectionCommoditys.empty())
            tenthCreateChart();
    }
    else if(arg1==QString("总和——类别"))
    {
        tenthCreateChart();
    }
    else
        return;
}


//"入库统计"页面
//入库类型改变
void MainWindow::on_eleventhInStoreCategoryComboBox_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    if(arg1=="采购入库")
    {
        query.exec(QString("select MIN(OTime) from procureinlists where "
                           "memberID='%1'")
                   .arg(this->memberId));
    }
    else if(arg1=="销售退货")
    {
        query.exec(QString("select MIN(OTime) from returngoodsinlists where "
                           "memberID='%1'")
                       .arg(this->memberId));
    }
    else
        return;
    query.next();
    ui->eleventhStartDateEdit->setDate(query.value(0).toDate());
}
//更新日期范围
void MainWindow::eleventhupdateInStoreDateRange()
{
    QDate currentdate=ui->eleventhStartDateEdit->date();
    QString startdate=ui->eleventhStartDateEdit->date().toString("yyyy-MM-dd");
    QString enddate;
    if(ui->eleventhTimeLengthComboBox->currentText()==QString("周"))
        enddate=currentdate.addDays(7).toString("yyyy-MM-dd");
    else if(ui->eleventhTimeLengthComboBox->currentText()==QString("月"))
        enddate=currentdate.addDays(28).toString("yyyy-MM-dd");
    else if(ui->eleventhTimeLengthComboBox->currentText()==QString("季"))
        enddate=currentdate.addMonths(4).toString("yyyy-MM-dd");
    else if(ui->eleventhTimeLengthComboBox->currentText()==QString("年"))
        enddate=currentdate.addMonths(12).toString("yyyy-MM-dd");

//    qDebug()<<"startdate:"<<startdate<<" "<<"enddate:"<<enddate;

    //采购入库
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购入库统计供应商"),
         QString("select DISTINCT vendorName from "
                 "commodity_procureinlists_procureinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购入库统计类别"),
         QString("select DISTINCT categoryName from "
                 "commodity_procureinlists_procureinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"类别");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购入库统计商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_procureinlists_procureinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");

    //销售退货
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售退货统计客户"),
         QString("select DISTINCT clientName from "
                 "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"客户");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售退货统计类别"),
         QString("select DISTINCT categoryName from "
                 "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"类别");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售退货统计商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_returngoodsinlists_returngoodsinlistitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");
}
//刷新页面
void MainWindow::refreshEleventhPage()
{
    //入库类型
    ui->eleventhInStoreCategoryComboBox->setCurrentIndex(-1);
    //时长
    ui->eleventhTimeLengthComboBox->setCurrentIndex(0);
    //日期
    ui->eleventhStartDateEdit->setDate(QDate::currentDate());
    //入库统计选项
    ui->eleventhInStoreStatisticsComboBox->setCurrentIndex(-1);

}
//初始化页面
void MainWindow::eleventhInit()
{
    refreshEleventhPage();
    eleventhupdateInStoreDateRange();
}
//统计、绘制图表
void MainWindow::eleventhCreateChart()
{
    StatisticalInformationItem countstatistInfoItem;

    QString inStoreStatisticsOptions=ui->eleventhInStoreStatisticsComboBox->currentText();

    countstatistInfoItem.m_inStoreStatisticsOptions=inStoreStatisticsOptions;
    countstatistInfoItem.m_inStoreCategory=ui->eleventhInStoreCategoryComboBox->currentText();
    countstatistInfoItem.m_startdate=ui->eleventhStartDateEdit->date();
    countstatistInfoItem.m_inStoreTimeLen=ui->eleventhTimeLengthComboBox->currentText();

    //时间统计
    if(inStoreStatisticsOptions==QString("总和——时间")||inStoreStatisticsOptions==QString("多交易对象——时间")||
        inStoreStatisticsOptions==QString("多类别——时间")||inStoreStatisticsOptions==QString("多商品——时间"))
        timeStatistics(countstatistInfoItem,
                       eleventhSelectionCategoryOrTradingPartner,
                       eleventhSelectionCommoditys);

    //分类统计
    else if(inStoreStatisticsOptions==QString("多交易对象——交易对象")||inStoreStatisticsOptions==QString("多类别——类别")
             ||inStoreStatisticsOptions==QString("多商品——商品"))
        classificationStatistics(countstatistInfoItem,
                                 eleventhSelectionCategoryOrTradingPartner,
                                 eleventhSelectionCommoditys);

    //数量柱状图
    DrawBarData countBar=DrawBarData(countstatistInfoItem.m_countTitle,countstatistInfoItem.m_axisXTitle,
                                     countstatistInfoItem.m_axisXVector,"数量/个",countstatistInfoItem.m_countAxisYVector,
                                     ui->eleventhCountBarGraphicsView);
    drawBarChart(countBar);

    //数量饼图
    DrawPieData countPie=DrawPieData(countstatistInfoItem.m_countTitle,countstatistInfoItem.m_axisXVector,
                                     countstatistInfoItem.m_countAxisYVector,ui->eleventhCountPieGraphicsView);
    drawPieChart(countPie);

    //金额柱状图
    DrawBarData moneyBar=DrawBarData(countstatistInfoItem.m_moneyTitle,countstatistInfoItem.m_axisXTitle,
                                     countstatistInfoItem.m_axisXVector,"金额/元",
                                     countstatistInfoItem.m_moneyAxisYVector,ui->eleventhMoneyBarGraphicsView);
    drawBarChart(moneyBar);

    //金额饼图
    DrawPieData moneyPie=DrawPieData(countstatistInfoItem.m_moneyTitle,countstatistInfoItem.m_axisXVector,
                                     countstatistInfoItem.m_moneyAxisYVector,ui->eleventhMoneyPieGraphicsView);
    drawPieChart(moneyPie);
}
//统计对象改变
void MainWindow::on_eleventhInStoreStatisticsComboBox_currentTextChanged(const QString &arg1)
{
    eleventhSelectionCategoryOrTradingPartner.clear();
    eleventhSelectionCommoditys.clear();

    QString inStoreCategory=ui->eleventhInStoreCategoryComboBox->currentText();

    if(arg1==QString("多交易对象——时间")||arg1==QString("多交易对象——交易对象"))
    {
        QString titlestr;
        if(inStoreCategory==QString("采购入库"))
            titlestr=inStoreCategory+QString("统计供应商");
        else if(inStoreCategory==QString("销售退货"))
            titlestr=inStoreCategory+QString("统计客户");
        ModalityMessageBoxDialog m(titlestr);
        m.exec();
        //获取被选择的供应商
        eleventhSelectionCategoryOrTradingPartner=m.getSelectedMessageRows();
    }
    else if(arg1==QString("多类别——时间")||arg1==QString("多类别——类别"))
    {
        ModalityMessageBoxDialog m(inStoreCategory+QString("统计类别"));
        m.exec();
        //获取被选择的供应商
        eleventhSelectionCategoryOrTradingPartner=m.getSelectedMessageRows();
    }
    else if(arg1==QString("多商品——时间")||arg1==QString("多商品——商品"))
    {
        ModalityMessageBoxDialog m(inStoreCategory+QString("统计商品"));
        m.exec();
        //获取被选择的商品
        int i=0;
        for(auto s:m.getSelectedMessageRows())
        {
            if((i%2)==0)
            {
                    eleventhSelectionCommoditys.push_back(std::make_pair(s,QString("")));
            }
            else if((i%2)==1)
            {
                    eleventhSelectionCommoditys[i/2].second=(s);
            }
            ++i;
        }
    }
    else if(arg1==QString("总和——时间"))
    {
        return;
    }
    else
        return;
}
//起始日期改变
void MainWindow::on_eleventhStartDateEdit_dateChanged(const QDate &date)
{
    eleventhupdateInStoreDateRange();
}
//统计时长改变
void MainWindow::on_eleventhTimeLengthComboBox_currentTextChanged(const QString &arg1)
{
    eleventhupdateInStoreDateRange();
}
//重置信息
void MainWindow::on_eleventhResetPushButton_clicked()
{
    refreshEleventhPage();
}
//统计
void MainWindow::on_eleventhStatisticsPushButton_clicked()
{
    eleventhCreateChart();
}


//"出库统计"页面
//出库类型改变
void MainWindow::on_twelfthOutStoreCategoryComboBox_currentTextChanged(const QString &arg1)
{
    QSqlQuery query;
    if(arg1=="销售出库")
    {
        query.exec(QString("select MIN(OTime) from saleorders where "
                           "memberID='%1'")
                       .arg(this->memberId));
    }
    else if(arg1=="采购退货")
    {
        query.exec(QString("select MIN(OTime) from returngoodsorders where "
                           "memberID='%1'")
                       .arg(this->memberId));
    }
    else
        return;
    query.next();
    ui->twelfthStartDateEdit->setDate(query.value(0).toDate());
}
//更新日期范围
void MainWindow::twelfthupdateOutStoreDateRange()
{
    QDate currentdate=ui->twelfthStartDateEdit->date();
    QString startdate=ui->twelfthStartDateEdit->date().toString("yyyy-MM-dd");
    QString enddate;
    if(ui->twelfthTimeLengthComboBox->currentText()==QString("周"))
        enddate=currentdate.addDays(7).toString("yyyy-MM-dd");
    else if(ui->twelfthTimeLengthComboBox->currentText()==QString("月"))
        enddate=currentdate.addDays(28).toString("yyyy-MM-dd");
    else if(ui->twelfthTimeLengthComboBox->currentText()==QString("季"))
        enddate=currentdate.addMonths(4).toString("yyyy-MM-dd");
    else if(ui->twelfthTimeLengthComboBox->currentText()==QString("年"))
        enddate=currentdate.addMonths(12).toString("yyyy-MM-dd");

//    qDebug()<<"startdate:"<<startdate<<" "<<"enddate:"<<enddate;

    //销售出库
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售出库统计客户"),
         QString("select DISTINCT clientName from "
                 "commodity_saleorders_saleorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售出库统计类别"),
         QString("select DISTINCT categoryName from "
                 "commodity_saleorders_saleorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"类别");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("销售出库统计商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_saleorders_saleorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");

    //采购退货
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购退货统计供应商"),
         QString("select DISTINCT vendorName from "
                 "commodity_returngoodsorders_returngoodsorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购退货统计类别"),
         QString("select DISTINCT categoryName from "
                 "commodity_returngoodsorders_returngoodsorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"类别");
    ModalityMessageBoxDialog::addModalityMessageBox
        (QString("采购退货统计商品"),
         QString("select DISTINCT vendorName,commodityName from "
                 "commodity_returngoodsorders_returngoodsorderitems_inf "
                 "where OTime between '%1' and '%2' and memberID='%3'")
             .arg(startdate)
             .arg(enddate)
             .arg(this->memberId),
         QStringList()<<"供应商"<<"商品");
}
//刷新页面
void MainWindow::refreshTwelfthPage()
{
    //出库类型
    ui->twelfthOutStoreCategoryComboBox->setCurrentIndex(-1);
    //时长
    ui->twelfthTimeLengthComboBox->setCurrentIndex(0);
    //日期
    ui->twelfthStartDateEdit->setDate(QDate::currentDate());
    //出库统计选项
    ui->twelfthOutStoreStatisticsComboBox->setCurrentIndex(-1);
}
//初始化页面
void MainWindow::TwelfthInit()
{
    refreshTwelfthPage();
    twelfthupdateOutStoreDateRange();
}
//统计、绘制图表
void MainWindow::twelfthCreateChart()
{
    StatisticalInformationItem statistInfoItem;

    QString inStoreStatisticsOptions=ui->twelfthOutStoreStatisticsComboBox->currentText();

    statistInfoItem.m_inStoreStatisticsOptions=inStoreStatisticsOptions;
    statistInfoItem.m_inStoreCategory=ui->twelfthOutStoreCategoryComboBox->currentText();
    statistInfoItem.m_startdate=ui->twelfthStartDateEdit->date();
    statistInfoItem.m_inStoreTimeLen=ui->twelfthTimeLengthComboBox->currentText();

    //时间统计
    if(inStoreStatisticsOptions==QString("总和——时间")||inStoreStatisticsOptions==QString("多交易对象——时间")||
        inStoreStatisticsOptions==QString("多类别——时间")||inStoreStatisticsOptions==QString("多商品——时间"))
        timeStatistics(statistInfoItem,
                       twelfthSelectionCategoryOrTradingPartner,
                       twelfthSelectionCommoditys);
    //分类统计
    else if(inStoreStatisticsOptions==QString("多交易对象——交易对象")||inStoreStatisticsOptions==QString("多类别——类别")
             ||inStoreStatisticsOptions==QString("多商品——商品"))
        classificationStatistics(statistInfoItem,
                                 twelfthSelectionCategoryOrTradingPartner,
                                 twelfthSelectionCommoditys);

    //数量柱状图
    DrawBarData countBar=DrawBarData(statistInfoItem.m_countTitle,statistInfoItem.m_axisXTitle,
                                     statistInfoItem.m_axisXVector,"数量/个",statistInfoItem.m_countAxisYVector,
                                     ui->twelfthCountBarGraphicsView);
    drawBarChart(countBar);

    //数量饼图
    DrawPieData countPie=DrawPieData(statistInfoItem.m_countTitle,statistInfoItem.m_axisXVector,
                                     statistInfoItem.m_countAxisYVector,ui->twelfthCountPieGraphicsView);
    drawPieChart(countPie);

    //金额柱状图
    DrawBarData moneyBar=DrawBarData(statistInfoItem.m_moneyTitle,statistInfoItem.m_axisXTitle,
                                     statistInfoItem.m_axisXVector,"金额/元",
                                     statistInfoItem.m_moneyAxisYVector,ui->twelfthMoneyBarGraphicsView);
    drawBarChart(moneyBar);

    //金额饼图
    DrawPieData moneyPie=DrawPieData(statistInfoItem.m_moneyTitle,statistInfoItem.m_axisXVector,
                                     statistInfoItem.m_moneyAxisYVector,ui->twelfthMoneyPieGraphicsView);
    drawPieChart(moneyPie);
}
//统计对象改变
void MainWindow::on_twelfthOutStoreStatisticsComboBox_currentTextChanged(const QString &arg1)
{
    twelfthSelectionCategoryOrTradingPartner.clear();
    twelfthSelectionCommoditys.clear();

    QString outStoreCategory=ui->twelfthOutStoreCategoryComboBox->currentText();

    if(arg1==QString("多交易对象——时间")||arg1==QString("多交易对象——交易对象"))
    {
        QString titlestr;
        if(outStoreCategory==QString("销售出库"))
            titlestr=outStoreCategory+QString("统计客户");
        else if(outStoreCategory==QString("采购退货"))
            titlestr=outStoreCategory+QString("统计供应商");
        ModalityMessageBoxDialog m(titlestr);
        m.exec();
        //获取被选择的供应商
        twelfthSelectionCategoryOrTradingPartner=m.getSelectedMessageRows();
    }
    else if(arg1==QString("多类别——时间")||arg1==QString("多类别——类别"))
    {
        ModalityMessageBoxDialog m(outStoreCategory+QString("统计类别"));
        m.exec();
        //获取被选择的供应商
        twelfthSelectionCategoryOrTradingPartner=m.getSelectedMessageRows();
    }
    else if(arg1==QString("多商品——时间")||arg1==QString("多商品——商品"))
    {
        ModalityMessageBoxDialog m(outStoreCategory+QString("统计商品"));
        m.exec();
        //获取被选择的商品
        int i=0;
        for(auto s:m.getSelectedMessageRows())
        {
            if((i%2)==0)
            {
                    twelfthSelectionCommoditys.push_back(std::make_pair(s,QString("")));
            }
            else if((i%2)==1)
            {
                    twelfthSelectionCommoditys[i/2].second=(s);
            }
            ++i;
        }
    }
    else if(arg1==QString("总和——时间"))
    {
        return;
    }
    else
        return;
}
//起始日期改变
void MainWindow::on_twelfthStartDateEdit_dateChanged(const QDate &date)
{
    twelfthupdateOutStoreDateRange();
}
//统计时长改变
void MainWindow::on_twelfthTimeLengthComboBox_currentTextChanged(const QString &arg1)
{
    twelfthupdateOutStoreDateRange();
}
//重置信息
void MainWindow::on_twelfthResetPushButton_clicked()
{
    refreshTwelfthPage();
}
//统计
void MainWindow::on_twelfthStatisticsPushButton_clicked()
{
    twelfthCreateChart();
}

bool operator==(const DocumentItem &doc1, const DocumentItem &doc2)
{
    if((doc1.vendorName==doc2.vendorName)&&(doc1.commodityName==doc2.commodityName))
        return true;
    else
        return false;
}

bool operator!=(const DocumentItem &doc1, const DocumentItem &doc2)
{
    return !(doc1==doc2);
}

