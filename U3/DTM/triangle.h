#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "qpoint3d.h"

class Triangle
{

private:
    QPoint3D p1, p2, p3;
    double slope;
    int aspect;

public:
    Triangle(QPoint3D p1_, QPoint3D p2_, QPoint3D p3_, double slope_, int aspect_):p1(p1_), p2(p2_), p3(p3_), slope(slope_), aspect(aspect_){}
    QPoint3D getP1(){return p1;}
    QPoint3D getP2(){return p2;}
    QPoint3D getP3(){return p3;}
    double getSlope(){return slope;}
    double getAspect(){return aspect;}
    void setP1(QPoint3D &p1_){p1=p1_;}
    void setP2(QPoint3D &p2_){p2=p2_;}
    void setP3(QPoint3D &p3_){p3=p3_;}

    void setSlope(double slope_){slope = slope_;}
    void setAspect(int aspect_){aspect = aspect_;}

};

#endif // TRIANGLE_H
