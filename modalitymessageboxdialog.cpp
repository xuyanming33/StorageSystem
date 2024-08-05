#include "modalitymessageboxdialog.h"
#include "ui_modalitymessageboxdialog.h"
#include <QFile>

std::map<QString,std::pair<QString,QStringList>>* ModalityMessageBoxDialog::modalityMessageBox=
    new std::map<QString,std::pair<QString,QStringList>>();

ModalityMessageBoxDialog::ModalityMessageBoxDialog(QString type, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModalityMessageBoxDialog)
{
    ui->setupUi(this);

    //模式
    this->m_type=type;

//    for(auto f=modalityMessageBox->begin();f!=modalityMessageBox->end();f++)
//    {
//        qDebug()<<f->first<<" "<<f->second.first<<f->second.second;
//    }

    auto s=modalityMessageBox->find(type);
    if(s==modalityMessageBox->end())
        qDebug()<<"单据号范围";
    else
    {
        m_querystr=(*s).second.first;
        m_viewtitle=(*s).second.second;

    }
    commonInit();

    //设置皮肤
    QFile file(":/qss/Ubuntu.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet=filetext.readAll();
    this->setStyleSheet(stylesheet);
}

ModalityMessageBoxDialog::ModalityMessageBoxDialog(QString type, QString startdate,
                              QString enddate, QString inoutstorecategory, QString memberid, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModalityMessageBoxDialog)
{
    ui->setupUi(this);

    //模式
    this->m_type=type;
    this->m_memberid=memberid;
    initDocumentNumberRange(startdate,enddate,inoutstorecategory);

    commonInit();

    //设置皮肤
    QFile file(":/qss/Ubuntu.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet=filetext.readAll();
    this->setStyleSheet(stylesheet);
}

ModalityMessageBoxDialog::~ModalityMessageBoxDialog()
{
    delete ui;
}

void ModalityMessageBoxDialog::addModalityMessageBox(QString type, QString querystr, QStringList viewtitle)
{
    (*modalityMessageBox)[type]=std::make_pair(querystr,viewtitle);
}

void ModalityMessageBoxDialog::initDocumentNumberRange(QString startdate, QString enddate, QString inoutstorecategory)
{
    m_start_date=startdate;
    m_end_date=enddate;
    m_inoutstore_category=inoutstorecategory;
    qDebug()<<"m_start_date:"<<m_start_date;
    qDebug()<<"m_end_date:"<<m_end_date;
    qDebug()<<"m_inoutstore_category:"<<m_inoutstore_category;
}

QStringList ModalityMessageBoxDialog::getSelectedMessageRows()
{
    return selectstringlist;
}

std::pair<int, int> ModalityMessageBoxDialog::getDocumentRange()
{
    return documentNumberRange;
}

void ModalityMessageBoxDialog::slot_resetDocumentRange()
{
    setDefaultDocumentRange();
}

void ModalityMessageBoxDialog::slot_confirmDocumentRange()
{
    documentNumberRange.first=documentMinNumberSpinBox->value();
    documentNumberRange.second=documentMaxNumberSpinBox->value();
    QDialog::accept();
}

void ModalityMessageBoxDialog::slot_confirmSelection()
{
    QModelIndexList indexlist=tableview->selectionModel()->selectedIndexes();

    //qDebug()<<indexlist.size();
    for(auto s:indexlist)
    {
        selectstringlist<<s.data(Qt::DisplayRole).toString();
        //qDebug()<<s.data(Qt::DisplayRole).toString();
    }
    QDialog::accept();
}

void ModalityMessageBoxDialog::slot_clearSelection()
{
    tableview->selectionModel()->clear();
}

void ModalityMessageBoxDialog::commonInit()
{
    //单据号范围
    if(m_type==QString("单据号范围"))
    {
        //布局
        gridlayout=new QGridLayout();
        gridlayout->setSpacing(0);

        //控件
        documentMinNumberSpinBox=new QSpinBox();
        documentMinNumberSpinBox->setMaximum(99999999);
        documentNumberRangeLabelTwo=new QLabel("至");
        documentMaxNumberSpinBox=new QSpinBox();
        documentMaxNumberSpinBox->setMaximum(99999999);
        resetbut=new QPushButton("重置");
        confirmbut=new QPushButton("确认");

        //控件加入布局
        gridlayout->addWidget(documentMinNumberSpinBox,0,0,2,2);
        gridlayout->addWidget(documentNumberRangeLabelTwo,0,2,2,2,Qt::AlignCenter);
        gridlayout->addWidget(documentMaxNumberSpinBox,0,4,2,2);
        gridlayout->addWidget(resetbut,2,0,1,1);
        gridlayout->addWidget(confirmbut,2,5,1,1);

        //设置默认单据号范围
        setDefaultDocumentRange();

        connect(resetbut,&QPushButton::clicked,this,&ModalityMessageBoxDialog::slot_resetDocumentRange);
        connect(confirmbut,&QPushButton::clicked,this,&ModalityMessageBoxDialog::slot_confirmDocumentRange);

        //加装布局
        for(auto s:this->children())
            delete s;
        this->setLayout(gridlayout);
        this->setWindowTitle(m_type);
        this->setMinimumSize(180,100);
        this->setMaximumSize(180,100);
    }

    //其它多选项
    else
    {
        //布局
        QGridLayout* gridlayout=new QGridLayout();
        gridlayout->setSpacing(0);

        //控件
        tableview=new QTableView();
        resetbut=new QPushButton("重置");
        resetbut->setGeometry(10,10,30,30);
        confirmbut=new QPushButton("确认");
        confirmbut->setGeometry(10,10,30,30);

        //加入布局
        gridlayout->addWidget(tableview,0,0,2,2);
        gridlayout->addWidget(resetbut,2,0,1,1);
        gridlayout->addWidget(confirmbut,2,1,1,1);

        //初始化数据模型
        QSqlQueryModel *vendorModel=new QSqlQueryModel();
        vendorModel->setQuery(m_querystr);
        int i=0;
        for(auto s:this->m_viewtitle)
            vendorModel->setHeaderData(i++, Qt::Horizontal, s);

        //设置选择模式
        tableview->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableview->setSelectionMode(QAbstractItemView::MultiSelection);

        //水平标头填满
        tableview->horizontalHeader()->setStretchLastSection(true);
        tableview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        QHeaderView* headerview=new QHeaderView(Qt::Horizontal);
        headerview->setSectionResizeMode(QHeaderView::ResizeToContents);
        headerview->resizeSections(QHeaderView::ResizeToContents);
        headerview->setSectionResizeMode(QHeaderView::ResizeToContents);
        headerview->setStretchLastSection(true);
        tableview->setHorizontalHeader(headerview);

        //视图装载数据模型
        tableview->setModel(vendorModel);


        connect(confirmbut,&QPushButton::clicked,this,&ModalityMessageBoxDialog::slot_confirmSelection);
        connect(resetbut,&QPushButton::clicked,this,&ModalityMessageBoxDialog::slot_clearSelection);

        for(auto s:this->children())
            delete s;

        this->setLayout(gridlayout);
        this->setWindowTitle(m_type);
    }
}

void ModalityMessageBoxDialog::setDefaultDocumentRange()
{
    QString targetTable,documentId;
    if(m_inoutstore_category==QString("采购入库"))
        {
        targetTable="procureinlists";
        documentId="inListID";
    }
    else if(m_inoutstore_category==QString("销售退货"))
        {
        targetTable="returngoodsinlists";
        documentId="inListID";
    }
    else if(m_inoutstore_category==QString("销售出库"))
        {
        targetTable="saleorders";
        documentId="orderID";
    }
    else if(m_inoutstore_category==QString("采购退货"))
        {
        targetTable="returngoodsorders";
        documentId="orderID";
    }
    QSqlQuery query;
    QString s;
    s=QString("select MIN(%1) from %2 where "
                "OTime between '%3' and '%4' and memberID='%5'")
            .arg(documentId)
            .arg(targetTable)
            .arg(m_start_date)
            .arg(m_end_date)
            .arg(m_memberid);
    query.exec(s);
    query.next();
    documentMinNumberSpinBox->setValue(query.value(0).toInt());

    s=QString("select MAX(%1) from %2 where "
                "OTime between '%3' and '%4' and memberID='%5'")
            .arg(documentId)
            .arg(targetTable)
            .arg(m_start_date)
            .arg(m_end_date)
            .arg(m_memberid);
    query.exec(s);
    query.next();
    documentMinNumberSpinBox->setMaximum(query.value(0).toInt());
    documentMaxNumberSpinBox->setValue(query.value(0).toInt());
}
