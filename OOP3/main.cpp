#include <vector>
#include "go.h"
#include "go2.h"
#include "point.h"
#include "pointg.h"
#include "pointg2.h"
#include "line.h"
#include "line2.h"
#include "line3.h"

int main(int argc, char *argv[])
{
    //Vytvoreni nove linie, lokalni promenne
    Line2 l0(1, 2, 3, 0, 0, 10, 10);
    PointG p0(1, 2, 3, 20, 20);
    l0.print();
    p0.print();

    //Vytvoreni kontejneru a pridani objektu
    std::vector<GO> go;
    go.push_back(l0);
    go.push_back(p0);

    //Ziskani objektu z kontejneru (jejich typ je GO)
    GO gg1 = go[0];
    GO gg2 = go[1];
    gg1.print();  //Oba typu GO :-(
    gg2.print();  //Oba typu GO :-(

    //Vytvoreni linii (dynamicke promenne)
    Line3 *l1 = new Line3(1, 2, 3, 0, 0, 10, 10);
    Line3 *l2 = new Line3(1, 2, 3, 17, 42, 29, 10);
    l1->print();
    l2->print();

    //Vytvoreni bodu (dynamicka promenna)
    PointG2 *p1 = new PointG2(5, 6, 7, 20, 20);
    p1->print();

    //Vytvoreni kontejneru a pridani objektu (vyuziti polymorfismu)
    std::vector<GO2*> go2;
    go2.push_back(l1);
    go2.push_back(l2);
    go2.push_back(p1);

    //Ziskani objektu z kontejneru
    GO2 * g1= go2[0];
    GO2 * g2= go2[2];

    g1->print();
    g2->print();

    //Polymorfismus a jeho vyuziti
    GO2 * g3 = new PointG2();
    GO2 * g4 = new Line3();

    //Funkce deklarovana jako virtualni (pozdni vazba)
    //Volana dle typu objektu, na ktery promenna ukazuje
    g3->print();
    g4->print();

    //Funkce neni virtualni (rana vazba)
    //Volana dle typu promenne (GO2)
    g3->test();
    g4->test();

    //Zruseni objektu, volani destruktoru
    delete g4;
    delete g3;
    delete p1;
    delete l1;
    delete l2;

    return 0;
}
