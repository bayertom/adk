#ifndef DRAW_H
#define DRAW_H

#include <QWidget>
#include <vector>
#include <QtGui>

class Draw : public QWidget
{
    Q_OBJECT
private:
    std::vector<QPoint> points;     //Input points
    QPolygon ch;                    //Convex Hull

public:
    explicit Draw(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *e);
    void paintEvent(QPaintEvent *e);
    std::vector<QPoint> & getPoints(){return points;}
    QPolygon & getCH() {return ch;}
    void setCH(QPolygon &ch_){ch = ch_;}
signals:

};

#endif // DRAW_H

