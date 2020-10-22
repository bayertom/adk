#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "go.h"

class Point: public GO
{
    private:
        static int count;   //Dat. polozka tridy
        int point_id;       //Dat. polozka objektu
        double x, y;        //Dat. polozka objektu

    public:
        Point() : GO(), x(0), y(0), point_id(count++) {};
        Point(double x_, double y_): GO(), point_id(count++), x(x_), y(y_) {}
        Point(int color, int style, int width, double x_, double y_) : GO(color, style, width), point_id(count++), x(x_), y(y_) {}
        void print()
        {
            GO::print();  //Metoda rodicovske tridy
            std::cout <<"count=" << count << ", id=" << point_id << ", x=" << x << ", y=" << y << '\n';
        }

        double getX(){return x;}
        double getY(){return y;}
        void setX(double x_){x=x_;}
        void setY(double y_){y=y_;}
        static int getCount(){return count;}
};

#endif // POINT_H
