#ifndef MULTICHANNELTABLEWIDGET_H
#define MULTICHANNELTABLEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPoint>
#include"drowline.h"
#include <QGridLayout>
/*
 *
 *
 */





namespace Ui {
class MultichannelTableWidget;
}

class MultichannelTableWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit MultichannelTableWidget(QWidget *parent = 0);
    ~MultichannelTableWidget();
    void initWidgetIco();
 //   void paintEvent(QPaintEvent *);                 //»æÍ¼ÊÂ¼þ
    void initCrontl();
    
private slots:
    void on_Button_turn_upper_clicked();
    void on_Button_text_dis_clicked();
    void on_Button_text_nodis_clicked();
    void on_Button_text_reset_clicked();

private:
    void on_Button_turn_low_clicked();
    void on_Button_turn_reset_clicked();
    Ui::MultichannelTableWidget *ui;
    DrowLine* m_drowPlot;

};

#endif // MULTICHANNELTABLEWIDGET_H
