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
    //Create DT

    //Get points
    std::vector<QPoint3D> points = ui->Canvas->getPoints();

    //Create DT
    Algorithms a;
    std::vector<Edge> dt=a.DT(points);

    //Set DT
    ui->Canvas->setDT(dt);

    //Repaint
    repaint();
}


void Widget::on_pushButton_11_clicked()
{
    //Clear points

    //Get points
    std::vector<QPoint3D> &points = ui->Canvas->getPoints();

    //Clear points
    points.clear();

    //Repaint
    repaint();
}


void Widget::on_pushButton_12_clicked()
{
    //Clear DT

    //Get points
    std::vector<Edge> &dt = ui->Canvas->getDT();

    //Clear points
    dt.clear();

    //Repaint
    repaint();
}
