#ifndef DROWLINE_H
#define DROWLINE_H

#include <QWidget>
#include<QPainter>
/*
 *������ʾ�ṹ��
 */
struct LineNumber
{
    int ChNumber;       //ͨ����
    int size;           //��ֵ��С
    int Angle;          //�Ƕ�
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
    void paintEvent(QPaintEvent *);         //��ͼ�¼�
    bool InsertListTo(QList<LineNumber>*);  //������ݵ���
    QList<LineNumber>*getList();            //��ȡ��ǰ����
   // bool changge
    
private:
    Ui::DrowLine *ui; 
    QList<LineNumber>* m_list;

};

#endif // DROWLINE_H
