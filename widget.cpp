#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QCryptographicHash>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(mySlot_createSerialNum(QString)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mySlot_createSerialNum(QString computerName)
{
    QByteArray byte_array;
    byte_array.append(computerName + "eton");

    qDebug() << tr("about to code to md5:") << byte_array;
    QByteArray hash_byte_array = QCryptographicHash::hash(byte_array, QCryptographicHash::Md5);

    QString md5 = hash_byte_array.toHex();
    qDebug() << tr("get md5:") << md5;

    ui->lineEdit_2->setText(md5);
}
