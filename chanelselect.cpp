#include "chanelselect.h"
#include "ui_chanelselect.h"

chanelselect::chanelselect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chanelselect)
{
    ui->setupUi(this);
}

chanelselect::~chanelselect()
{
    delete ui;
}

/*ͼ�α�˫����ԭʼ���ݣ�
 *
 */

void chanelselect::on_listWidget_SelectTolist_itemDoubleClicked(QListWidgetItem *item)
{
    QMessageBox msgBox;
     msgBox.setText(item->text());
     msgBox.setInformativeText("Do you want to save your changes?");
     msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
     msgBox.setDefaultButton(QMessageBox::Save);
     int ret = msgBox.exec();

}
/*ͼ�α�˫����ѡ������ݣ�
 *
 */

void chanelselect::on_listWidget_list_itemDoubleClicked(QListWidgetItem *item)
{

}
