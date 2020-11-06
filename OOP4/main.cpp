#include <vector>
#include <algorithm>
#include "go.h"
#include "go2.h"
#include "point.h"
#include "pointg.h"
#include "pointg2.h"
#include "line.h"
#include "line2.h"
#include "line3.h"
#include "circle.h"
#include "sortbyx.h"

int main(int argc, char *argv[])
{
    //Pretypovani
    GO g1(3, 1, 2);
    Line2 l1(3, 4, 5, 0, 0, 10, 10);
    GO *g2 = new GO(3, 1, 2);
    Line2 *l2 = new Line2(3, 4, 5, 0, 0, 10, 10);

    //1a) Upcasting (potomek -> predek)
    g1 = l1;
    g1.print();
    g2 = l2;
    g2->print();

    //1b) Downcasting (predek -> potomek)
    //l1 = (Line2)g1;
    l2 = (Line2*)g2;                  //Syntakticky OK, z pohledu C++ chybne
    //l2 = dynamic_cast<Line2*>(g2);  //Chybne, GO musi byt polymorfni
    //l2->print();

    //2a) Upcasting (potomek -> predek), abstraktni trida
    GO2 *g3 = new Line3(1, 2, 3, 0, 0, 10, 10);
    Line3 *l3 = new Line3(3, 4, 5, 0, 0, 10, 10);
    //g3 = l3;
    //g3->print();

    //2b) Downcasting (predek -> potomek)
    l3 = dynamic_cast<Line3*>(g3);
    l3->print();

    //3a) Upcasting (potomek -> predek), polymorfni trida
    GO *g4 = new Line2(3, 1, 2, 0, 1, 1, 0);
    Line2 *l4 = new Line2(3, 4, 5, 0, 0, 10, 10);
    g2 = l2;
    g2->print();

    //3b) Downcasting (predek -> potomek)
    l4 = dynamic_cast<Line2*>(g4);                 //Chybne, GO musi byt polymorfni
    l4->print();

    //Priklady: elipsa, kruznice
    Ellipse *e = new Circle(5);

    //Nutno vlozit test a==b do resize nebo pouzit pouze jednu hodnotu, napr. a
    //Zesilovani podminek v odvozene tride, LSP violation
    e->resize (12, 15);

    //Komparatory, setrideni, operator <
    std::vector<PointG2> points;
    sort(points.begin(), points.end());

    //Functor, setrideni
    sortByX s;
    PointG2 pa(1, 1), pb(5, 4);
    bool res = s(pb, pa);
    sort(points.begin(), points.end(), sortByX());

    //Destruktory
    delete e;
    delete g4;
    delete l4;
    delete g3;
    delete l3;
    delete g2;
    delete l2;

    return 0;
}
