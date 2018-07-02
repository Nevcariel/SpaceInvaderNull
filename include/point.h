#ifndef POINT_H
#define POINT_H

#include "forme.h"


using namespace std;

class point : public forme
{
    float x, y, rho, theta;
    void majpol();
    void majcarth();
public :
    point();
    point(float);
    point(float, float);
    ~point();
    void init(float, float);
    void affiche(BITMAP*&);
    void deplace(float, float);
    void homothetie(float);
    void rotation(float);
    void mouvement(){};
    int getx();
    int gety();
    void setx(float);
    void sety(float);
};

#endif // POINT_H
