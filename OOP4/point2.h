#ifndef POINT2_H
#define POINT2_H

#include <iostream>

//Modifikovany bod bez grafickych atributu
class Point2
{
    protected:
        static int count;   //Dat. polozka tridy
        int point_id;       //Dat. polozka objektu
        double x, y;        //Dat. polozka objektu

    public:
        Point2(): x(0), y(0), point_id(count++) {};
        Point2(double x_, double y_) : point_id(count++), x(x_), y(y_) {}
        ~Point2(){}
        void print()
        {
            std::cout << ">>>>Point: ";
            std::cout << "ID=" << point_id << ", x=" << x << ", y=" << y << '\n';
        }

        double getX(){return x;}
        double getY(){return y;}
        void setX(double x_){x=x_;}
        void setY(double y_){y=y_;}
        static int getCount(){return count;}
};

#endif // POINT2_H
