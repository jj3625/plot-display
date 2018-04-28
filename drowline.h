#ifndef DROWLINE_H
#define DROWLINE_H

#include <QWidget>
#include<QPainter>
/*
 *数据显示结构体
 */
struct LineNumber
{
    int ChNumber;       //通道名
    int size;           //数值大小
    int Angle;          //角度
    QColor color;
};



namespace Ui {
class DrowLine;
}
/*
 *
 */
class DrowLine : public QWidget
{
    Q_OBJECT
    
public:
    explicit DrowLine(QWidget *parent = 0);
    ~DrowLine();
    void paintEvent(QPaintEvent *);         //绘图事件
    bool InsertListTo(QList<LineNumber>*);  //添加数据到类
    QList<LineNumber>*getList();            //获取当前链表
   // bool changge
    
private:
    Ui::DrowLine *ui; 
    QList<LineNumber>* m_list;

};

#endif // DROWLINE_H
