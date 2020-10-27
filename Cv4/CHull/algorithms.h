#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <QtGui>
#include <vector>

class Algorithms
{
public:
    Algorithms();

    double getAngle(QPoint &p1, QPoint &p2, QPoint &p3, QPoint &p4);
    int getPointLinePosition(QPoint &q,QPoint &p1,QPoint &p2);
    QPolygon jarvis(std::vector<QPoint> &points);
    double getPointLineDist(QPoint &a,QPoint &p1,QPoint &p2);
    QPolygon qhull(std::vector<QPoint> &points);
};

#endif // ALGORITHMS_H
