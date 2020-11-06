#ifndef POINTG2_H
#define POINTG2_H

#include "point2.h"
#include "go2.h"

//Bod s grafickymi atributy, potomek 2 trid (aktualizovany model za domaci ukol)
//Obsahuje virtualni metodu print
class PointG2: public GO2, public Point2
{
    public:
        PointG2() : GO2(), Point2(0, 0) {};
        PointG2(double x_, double y_): GO2(), Point2(x_, y_) {}
        PointG2(int color, int style, int width, double x_, double y_) : GO2(color, style, width), Point2(x_, y_) {}
        virtual ~PointG2() {};
        virtual void print()
        {
            std::cout << ">>>>Point: ";
            std::cout << "Color>: " << color << ", style: " << style << ", width:" << width << '\n';
            Point2::print();
        }

        bool operator < (PointG2 &p)
        {
            return x < p.x;
        }
        /*virtual*/ void test(){std::cout << "Point\n";} //Rana vazba

};
#endif // POINTG2_H
