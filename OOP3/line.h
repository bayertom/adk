#ifndef LINE_H
#define LINE_H

#include "point.h"

class Line: public GO
{
    private:
        Point p1, p2;

    public:
        Line() : GO(), p1(), p2() {}
        Line(int color_, int level_, int width_, double x1, double y1, double x2, double y2) : GO(color_, level_, width_), p1(x1, y1), p2(x2, y2) {}
        Line(int color_, int level_, int width_, Point &p1_, Point &p2_) : GO(color_, level_, width_), p1(p1_), p2(p2_) {}
        virtual ~Line(){}
        virtual void print()
        {
            std::cout << ">>>>Line: ";
            GO::print();                //GRA atributy linie
            std::cout << "p1: ";
            p1.print();                 //GRA/GEO atributy pocat. bodu
            std::cout << "p2: ";
            p2.print();                 //GRA/GEO atributy konc. bodu
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
