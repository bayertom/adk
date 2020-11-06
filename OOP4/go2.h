#ifndef GO2_H
#define GO2_H

#include <iostream>

//Abstraktni trida
class GO2
{
    protected:
        int color, style, width;

    public:
        GO2() : color(0), style(0), width (0) {}
        GO2(int color_, int style_, int width_) : color(color_), style(style_), width (width_){}
        virtual ~GO2(){}
        int getColor(){return color;}
        int getStyle(){return style;}
        int getWidth(){return width;}
        void setColor(int color_){color = color_;}
        void setStyle(int style_){style = style_;}
        void setWidth(int width_){width = width_;}
        virtual void print() = 0; //Ciste virtualni metoda, diky ni trida abstraktni
        /*virtual*/ void test(){std::cout << "GO\n";} //Rana vazba

};

#endif // GO2_H
