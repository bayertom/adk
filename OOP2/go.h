#ifndef GO_H
#define GO_H

#include <iostream>

class GO
{

private:
    int color, style, width;

public:
    GO() : color(0), style(0), width (0) {}
    GO(int color_, int style_, int width_) : color(color_), style(style_), width (width_){}
    int getColor(){return color;}
    int getStyle(){return style;}
    int getWidth(){return width;}
    void setColor(int color_){color = color_;}
    void setStyle(int style_){style = style_;}
    void setWidth(int width_){width = width_;}
    void print()
    {
        std::cout << "Color: " << color << ", style: " << style << ", witdh: " << width << '\n';
    }
};

#endif // GO_H
