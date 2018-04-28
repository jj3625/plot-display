#ifndef CHANELSELECT_H
#define CHANELSELECT_H

#include <QWidget>
 #include <QListWidgetItem>
 #include <QMessageBox>







namespace Ui {
class chanelselect;
}

class chanelselect : public QWidget
{
    Q_OBJECT
    
public:
    explicit chanelselect(QWidget *parent = 0);
    ~chanelselect();

private slots:
    void on_listWidget_SelectTolist_itemDoubleClicked(QListWidgetItem *item);
    void on_listWidget_list_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::chanelselect *ui;
};

#endif // CHANELSELECT_H
