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
//��������
    int pSide=qMin(width(),height());
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.translate(this->width()/2,this->height()/2); //�ı�ԭ��
    painter.scale(pSide/200.0,pSide/200.0);              //��߸ı�
    painter.setPen(Qt::darkGray);
    QPoint p1(0, 0);
    QPoint p2(50,50);
    painter.drawEllipse(-100,-100,200,200);
    painter.drawLine(0,100,0,-100);
    painter.drawLine(100,0,-100,0);
//���ݸ���,��ͼ



    qDebug()<<"-------->";



}
bool DrowLine::InsertListTo(QList<LineNumber>*)  //������ݵ���
{




}
QList<LineNumber>*DrowLine::getList()           //��ȡ��ǰ����
{



}
