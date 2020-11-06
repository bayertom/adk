#ifndef CIRCLE_H
#define CIRCLE_H

#include "ellipse.h"

class Circle: public Ellipse
{
    public:
        Circle(double r): Ellipse(r, r){};

        void virtual resize(double a_, double b_)
        {
            a = a_; b = a_;
        }

        //void resize(double r_) { a = r_; b = r_;}
};

#endif // CIRCLE_H
