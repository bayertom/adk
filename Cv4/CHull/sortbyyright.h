#ifndef SORTBYYRIGHT_H
#define SORTBYYRIGHT_H

#include <QtGui>

class sortByYRight
{
public:

    //Sorter by y-coordinate, find the rightmost lowest point
    bool operator () (QPoint &p1, QPoint &p2)
    {
        return (p1.y() < p2.y()) || ((p1.y() == p2.y()) && (p1.x() > p2.x()))  ;
    }
};

#endif // SORTBYYRIGHT_H
