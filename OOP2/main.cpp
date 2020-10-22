#include "go.h"
#include "point.h"
#include "line.h"

int main(int argc, char *argv[])
{
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
    //Atributy si neodpovidaji
    l1.print();

    return 0;
}
