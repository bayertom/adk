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


void Widget::on_pushButton_clicked()
{
    //Get points
    std::vector<QPoint> points = ui->Canvas->getPoints();

    //Create Convex hull
    QPolygon ch;
    Algorithms alg;

    //Jarvis Scan
    if (ui->comboBox->currentIndex()==0)
        ch = alg.jarvis(points);

    //QHull
    else if (ui->comboBox->currentIndex()==1)
        ch = alg.qhull(points);

    //Sweep line
    else
        ch = alg.sweepLine(points);

    //Set Convex hull
    ui -> Canvas -> setCH(ch);

    //Repaint screen
    repaint();
}

void Widget::on_pushButton_2_clicked()
{
    //Get Convex Hull
    QPolygon &ch = ui->Canvas->getCH();

    //Clear points
    ch.clear();

    //Repaint screen
    repaint();
}
