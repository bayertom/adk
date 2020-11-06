#ifndef LINE3_H
#define LINE3_H

#include "go2.h"
#include "point2.h"

//Modifikovana trida pouzivajici bod bez grafickych atributu (Point2)
//Dynamicka alokace koncovych bodu v konstruktoru a dealokace v destruktoru
class Line3: public GO2
{
    private:
        Point2 *p1, *p2;

    public:
        Line3() : GO2(), p1(new Point2()), p2(new Point2()) {}
        Line3(int color_, int level_, int width_, double x1, double y1, double x2, double y2) : GO2(color_, level_, width_),
              p1(new Point2(x1, y1)), p2(new Point2(x2, y2)) {}
        virtual ~Line3()
        {
            delete p1;
            delete p2;
        }

        virtual void print()
        {
            std::cout << ">>>>Line: ";
            std::cout << "Color: " << color << ", style: " << style << ", width:" << width << '\n';       //GRA atributy linie
            std::cout << "p1: ";
            p1->print();                 //GRA/GEO atributy pocat. bodu
            std::cout << "p2: ";
            p2->print();                 //GRA/GEO atributy konc. bodu
        }

        Point2 * getStart(){return p1;}
        Point2 * getEnd(){return p2;}
        void setStart(Point2 *p1_) {p1 = p1_;}
        void setEnd(Point2 *p2_) {p2 = p2_;}
        void setStart(double x1, double y1)
        {
            p1->setX(x1);
            p1->setY(y1);
        }

        /*virtual*/ void test(){std::cout << "Line\n";} //Rana vazba
};

#endif // LINE3_H
