#ifndef GO_H
#define GO_H

#include <iostream>

//Abstraktni trida
class GO
{

protected:
    int color, style, width;

public:
    GO() : color(0), style(0), width (0) {}
    GO(int color_, int style_, int width_) : color(color_), style(style_), width (width_){}
    virtual ~GO(){}
    int getColor(){return color;}
    int getStyle(){return style;}
    int getWidth(){return width;}
    void setColor(int color_){color = color_;}
    void setStyle(int style_){style = style_;}
    void setWidth(int width_){width = width_;}
    virtual void print() = 0; //Ciste virtualni metoda
    virtual void test(){std::cout << "GO\n";}

};

#endif // GO_H
