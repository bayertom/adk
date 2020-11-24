#include "widget.h"
#include "ui_widget.h"
#include "algorithms.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_7_clicked()
{
    Algorithms a;
    std::vector<QPoint3D> points=ui->Canvas->getPoints();
    //std::vector<Edge> dt = a.DT(points);
    //ui->Canvas->setDt(dt);
}
