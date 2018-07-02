#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"
#include "point.h"


class rectangle : public forme
{
protected:
    point M1, M2;
    int couleur;
public:
    rectangle();
    rectangle(float, float, float, float, int);
    rectangle(point, point);
    rectangle(point, float, float);
    ~rectangle();
    rectangle(const rectangle&);
    rectangle& operator=(const rectangle&);
    void affiche(BITMAP*&);
    void mouvement(){};
    void init();
    point getM1();
    point getM2();
    void setM1();
    void setM2();
    int selection(float, float);
};

#endif // RECTANGLE_H
