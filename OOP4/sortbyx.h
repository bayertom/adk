#ifndef SORTBYX_H
#define SORTBYX_H

#include "pointg2.h"

class sortByX
{
    public:
        sortByX(){};
        bool operator() (PointG2 &p1, PointG2 &p2)
        {
            return p1.getX() < p2.getX();
        }
};

#endif // SORTBYX_H
