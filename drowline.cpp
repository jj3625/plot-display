#include "drowline.h"
#include "ui_drowline.h"
#include <QDebug>

DrowLine::DrowLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DrowLine)
{
    ui->setupUi(this);
   // this->setAttribute(Qt::WA_PaintOutsidePaintEvent);

}

DrowLine::~DrowLine()
{
    delete ui;
}
void DrowLine::paintEvent(QPaintEvent *)
{
//基本画线
    int pSide=qMin(width(),height());
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.translate(this->width()/2,this->height()/2); //改变原点
    painter.scale(pSide/200.0,pSide/200.0);              //标尺改变
    painter.setPen(Qt::darkGray);
    QPoint p1(0, 0);
    QPoint p2(50,50);
    painter.drawEllipse(-100,-100,200,200);
    painter.drawLine(0,100,0,-100);
    painter.drawLine(100,0,-100,0);
//数据更改,画图



    qDebug()<<"-------->";



}
bool DrowLine::InsertListTo(QList<LineNumber>*)  //添加数据到类
{




}
QList<LineNumber>*DrowLine::getList()           //获取当前链表
{



}
