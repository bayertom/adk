#ifndef ELLIPSE_H
#define ELLIPSE_H


class Ellipse
{
    protected:
        double a, b;

    public:
        Ellipse(double a_, double b_): a(a_), b(b_){};
        virtual void resize(double a_, double b_) {a = a_; b = b_;}

};

#endif // ELLIPSE_H
