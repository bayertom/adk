#ifndef LINE_H
#define LINE_H

#include "point.h"

class Line
{
    private:
        Point p1, p2;

    public:
        Line() : p1(), p2() {}
        Line(double x1, double y1, double x2, double y2) : p1(x1, y1), p2(x2, y2) {}
        Line(Point &p1_, Point &p2_) : p1(p1_), p2(p2_) {}

        void print()
        {
            std::cout << "Line: ";
            p1.print();
            p2.print();
        }

        Point getStart(){return p1;}
        Point getEnd(){return p2;}
        void setStart(Point &p1_) {p1 = p1_;}
        void setEnd(Point &p2_) {p2 = p2_;}
        void setStart(double x1, double y1)
        {
            p1.setX(x1);
            p1.setY(y1);
        }
};

#endif // LINE_H
