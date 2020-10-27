#ifndef POINTG_H
#define POINTG_H

#include "point2.h"
#include "go.h"

class PointG: public GO, public Point2
{
    public:
        PointG() : GO(), Point2(0, 0) {};
        PointG(double x_, double y_): GO(), Point2(x_, y_) {}
        PointG(int color, int style, int width, double x_, double y_) : GO(color, style, width), Point2(x_, y_) {}
        void print()
        {
            GO::print();
            Point2::print();
        }
};

#endif // POINTG_H
