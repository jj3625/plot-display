#include <QApplication>
#include "mainwindow.h"
#include "multichanneltablewidget.h"
#include "drowline.h"
#include "chanelselect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MultichannelTableWidget w;
    w.show();
    
    return a.exec();
}
