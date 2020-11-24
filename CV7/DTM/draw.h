#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <vector>

#include "qpoint3d.h"
#include "edge.h"

class Draw : public QWidget
{
    Q_OBJECT
private:
    std::vector<QPoint3D> points;
    std::vector <Edge> dt;


public:
    explicit Draw(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void setPoints(std::vector<QPoint3D> &points_){points=points_;}
    std::vector<QPoint3D> & getPoints(){return points;}
    void setDT(std::vector<Edge> &dt_){dt = dt_;}
    std::vector<Edge> & getDT(){return dt;}

signals:

public slots:
};

#endif // DRAW_H
