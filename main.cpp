#include "widget.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    QFile file(":/image/my.qss");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());

    return a.exec();
}
