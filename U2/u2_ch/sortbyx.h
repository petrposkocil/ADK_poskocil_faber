#ifndef SORTBYX_H
#define SORTBYX_H

#include<QtGui>

class SortbyX
{
public:
    bool operator ()(QPointF &p1, QPointF &p2){

        return p1.x() < p2.x() || (p1.x() == p2.x()) && (p1.y() < p2.y());
     }
};

#endif // SORTBYX_H
