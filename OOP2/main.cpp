#include <vector>
#include "go.h"
#include "point.h"
#include "pointg.h"
#include "line.h"
#include "line2.h"
#include "line3.h"

int main(int argc, char *argv[])
{
    //Vytvoreni linii
    Line3 *l1 = new Line3(1, 2, 3, 0, 0, 10, 10);
    Line3 *l2 = new Line3(1, 2, 3, 17, 42, 29, 10);
    //l1->print();
    //l2->print();

    //Vytvoreni bodu
    PointG *p1 = new PointG(5, 6, 7, 20, 20);

    //Vytvoreni kontejneru
    std::vector<GO*> go;

    go.push_back(l1);
    go.push_back(l2);
    go.push_back(p1);

    GO * g1= go[0];
    GO * g2= go[2];

    g1->print();
    g2->print();

    //Polymorfismus
    GO * g3 = new PointG();
    GO * g4 = new Line3();

    g3->print();
    g4->print();

    g3->test();
    g4->test();

    //Zruseni objektu
    delete g4;
    delete g3;
    delete p1;
    delete l1;
    delete l2;



    /*
    GO g;
    g.print();


    //Varianty vytvoreni bodu
    Point p1;                    //GRA = 0, 0, 0, GEO (0, 0)
    Point p2(10, 10);            //GRA = 0, 0, 0, GEO (10, 10)
    Point p3(1, 2, 3, 10, 10);   //GRA = 1, 2, 3, GEO (10, 10)
    p1.print();
    p2.print();
    p3.print();

    //Varianty vytvoreni linie
    Line l0;
    Line l1(1, 2, 3, 0, 0, 10, 10);

    //Vytisknou se GRA cele linie, GRA/GEO pocatecniho a GRA/GEO koncoveho bodu,
    //Atributy si neodpovidaji, pro p1, p2 inicializovany implicitnim konstruktorem
    l1.print();

    //Modifikovany priklad: tridy s indexem2
    PointG p4(1, 2, 3, 10, 10);
    p4.print();

    //Vytisknou se GRA cele linie, GEO pocatecniho a GEO koncoveho bodu,
    Line2 l2;
    Line2 l3(1, 2, 3, 0, 0, 10, 10);
    l3.print();

    //Prace s kontejnery GO
    std::vector <GO> go;
    go.push_back(p4);
    go.push_back(l3);


    GO g0 = go[0];
    GO g1 = go[1];

    g0.print();
    g1.print();

    //Dynamicka alokace
    PointG *p5 = new PointG();
    PointG *p6 = new PointG(1, 2, 3, 10, 10);
    p5->print();
    p6->print();
    delete p6;
    delete p5;

*/








/*
    //Prace s kontejnerem
    std::vector<GO> go;
    go.push_back(l2);
    go.push_back(p1);

    GO gg = go[0];
    gg.print();
    //Point2 pn(7, 7);
    //go.push_back(pn);
*/
    return 0;
}
