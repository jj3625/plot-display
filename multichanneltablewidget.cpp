#include "multichanneltablewidget.h"
#include "ui_multichanneltablewidget.h"




//ArrowUpper  Path
QString gArrowUpperPath="/Res/ArrowUpper.png";
QString gArrowlowPath="/Res/Arrowlow.png";
QString gArrowArrowResetPath="/Res/ArrowReset.png";
//tickPath
QString gDisPath="/Res/DisplTick.png";
QString gNoDisPath="/Res/Noticks.png";
QString gDisReset="/Res/TicksResetl.png";
//ico size
QSize gSize(26,26);



/*************************************************
*Function:        MultichannelTableWidget()
*Description:     构造函数
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
MultichannelTableWidget::MultichannelTableWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultichannelTableWidget)
{
    ui->setupUi(this);
    initWidgetIco();
    initCrontl();
}
/*************************************************
*Function:        ~MultichannelTableWidget()
*Description:     析构
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
MultichannelTableWidget::~MultichannelTableWidget()
{
    delete ui;
}
/*************************************************
*Function:        initWidgetIco()
*Description:     图标文件初始化
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::initWidgetIco()
{
    //
    QIcon pArrowUpper;
    QIcon pArrowlow;
    QIcon pArrowReset;
    QIcon pDis;
    QIcon pNoDis;
    QIcon pDisReset;
    QString  pCurrentPath=QCoreApplication::applicationDirPath();
    //ArrowUpper  Path
    QString pArrowUpperPath=pCurrentPath+gArrowUpperPath;
    QString pArrowlowPath=pCurrentPath+gArrowlowPath;
    QString pArrowArrowResetPath=pCurrentPath+gArrowArrowResetPath;
    //tickPath
    QString pDisPath=pCurrentPath+gDisPath;
    QString pNoDisPath=pCurrentPath+gNoDisPath;
    QString pDisReset_p=pCurrentPath+gDisReset;
    //ico size
    QSize gSize(26,26);
    //ico set
    pArrowUpper.addFile(pArrowUpperPath);
    ui->Button_turn_upper->setIcon(pArrowUpper);
    ui->Button_turn_upper->setIconSize(gSize);
    pArrowlow.addFile(pArrowlowPath);
    ui->Button_turn_low->setIcon(pArrowlow);
    ui->Button_turn_low->setIconSize(gSize);
    pArrowReset.addFile(pArrowArrowResetPath);
    ui->Button_turn_reset->setIcon(pArrowReset);
    ui->Button_turn_reset->setIconSize(gSize);
    pDis.addFile(pDisPath);
    ui->Button_text_dis->setIcon(pDis);
    ui->Button_text_dis->setIconSize(gSize);
    pNoDis.addFile(pNoDisPath);
    ui->Button_text_nodis->setIcon(pNoDis);
    ui->Button_text_nodis->setIconSize(gSize);
    pDisReset.addFile(pDisReset_p);
    ui->Button_text_reset->setIcon(pDisReset);
    ui->Button_text_reset->setIconSize(gSize);
    //

}
/*************************************************
*Function:        initCrontl()
*Description:     画图初始化
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::initCrontl()
{
    ui->widget_display->setStyleSheet("QWidget#widget_display{Background:black;}");  //绘制Qwidget 背景
    QGridLayout * pGridlayout=new QGridLayout;
    m_drowPlot=new DrowLine;
    pGridlayout->addWidget(m_drowPlot);
    ui->widget_display->setLayout(pGridlayout);
}



//绘图事件
//void MultichannelTableWidget::paintEvent(QPaintEvent *)                //绘图事件
//{
//    QPainter painter(ui->widget_display);
//    painter.setRenderHint(QPainter::Antialiasing, true);
//    painter.setPen(Qt::darkBlue);
//    QPoint p1(0, 0);
//    QPoint p2(50,50);
//    painter.drawLine(p1,p2);


//}
/*************************************************
*Function:        on_Button_turn_upper_clicked()
*Description:     upper_clicked
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_turn_upper_clicked()
{

}

/*************************************************
*Function:        on_Button_turn_low_clicked()
*Description:     low_clicked
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_turn_low_clicked()
{

}
/*************************************************
*Function:        on_Button_turn_reset_clicked()
*Description:     reset_Clicked
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_turn_reset_clicked()
{

}
/*************************************************
*Function:        on_Button_text_dis_clicked()
*Description:     text_dis
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_text_dis_clicked()
{

}
/*************************************************
*Function:        on_Button_text_nodis_clicked()
*Description:     text_nodis
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_text_nodis_clicked()
{

}
/*************************************************
*Function:        on_Button_text_reset_clicked()
*Description:     text_reset
*Input:           None
*Output:          None
*Return:          None
*Others:
*************************************************/
void MultichannelTableWidget::on_Button_text_reset_clicked()
{

}
