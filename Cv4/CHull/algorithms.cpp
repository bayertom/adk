#include "algorithms.h"
#include "sortbyy.h"
#include "sortbyx.h"
#include <cmath>

Algorithms::Algorithms()
{

}

double Algorithms::getAngle(QPoint &p1, QPoint &p2, QPoint &p3, QPoint &p4)
{
    //Get vectors u, v
    double ux = p2.x() - p1.x();
    double uy = p2.y() - p1.y();
    double vx = p4.x() - p3.x();
    double vy = p4.y() - p3.y();

    //Norms
    double nu = sqrt(ux * ux + uy * uy);
    double nv = sqrt(vx * vx + vy * vy);

    //Dot product
    double dot = ux * vx + uy * vy;

    return fabs(acos(dot/(nu*nv)));
}


int Algorithms::getPointLinePosition(QPoint &q,QPoint &p1,QPoint &p2)
{
    //Analyze point and line position
    //1 point in the left half plane
    //0 point in the right half plane
    //-1 point on the line
    double ux = p2.x() - p1.x();
    double uy = p2.y() - p1.y();

    double vx = q.x() - p1.x();
    double vy = q.y() - p1.y();

    double t = ux * vy - uy * vx;

    //Point in the left half plane
    if (t>0)
        return 1;
    if (t<0)
        return 0;
    return -1;
}

double Algorithms::getPointLineDist(QPoint &a,QPoint &p1,QPoint &p2)
{
    //Compute distance of point a from line p(p1, p2)
    double numerator = a.x()*(p1.y()-p2.y())+p1.x()*(p2.y()-a.y())+p2.x()*(a.y()-p1.y());

    //Coordinate differences
    double dx = p1.x() - p2.x();
    double dy = p1.y() - p2.y();

    //Point and line distance
    return fabs((numerator/sqrt(dx*dx + dy*dy)));
}


QPolygon Algorithms::jarvis(std::vector<QPoint> &points)
{
    //Create Convex Hull using Jarvis Scan Algorithm
    QPolygon ch;

    //Sort points by y
    std::sort(points.begin(), points.end(), sortByY());

    //Create q
    QPoint q = points[0];

    //Create r
    QPoint r(0,q.y());

    //Initialize pj, pjj
    QPoint pj = q;
    QPoint pjj = r;

    //Add q into Convex Hull
    ch.push_back(q);

    //Find all points of Convex hull
    do {

        //Initialize i_max, om_max
        int i_max = -1;
        double o_max = 0;

        //Find suitable point maximizing angle omega
        for (int i = 0; i < points.size(); i++)
        {
            //Compute omega
            double omega = getAngle(pj, pjj, pj, points[i]);

            //Actualize maximum
            if (omega > o_max)
            {
                o_max = omega;
                i_max = i;
            }
        }

        //Add point to convex hull
        ch.push_back(points[i_max]);

        //Assign points
        pjj = pj;
        pj = points[i_max];

    } while ((pj!=q));

return ch;
}


QPolygon Algorithms::qhull(std::vector<QPoint> &points)
{
    //Create Convex Hull using QHull Algorithm (Global procedure)
    QPolygon ch;
    std::vector<QPoint> upoints, lpoints;

    //Sort points according to x coordinate
    std::sort(points.begin(), points.end(), sortByX());

    //Create q1, q3
    QPoint q1 = points[0];
    QPoint q3 = points.back();

    //Add q1, q3 to upoits/lpoints
    upoints.push_back(q1);
    upoints.push_back(q3);


}
