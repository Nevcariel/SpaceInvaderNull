#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"
#include "point.h"

class cercle : public forme
{
protected:
    point centre;
    float rayon;
    int couleur;
public:
    cercle();
    cercle(float, float, float,int);
    ~cercle();
    cercle& operator=(const cercle&);
    void affiche(BITMAP*&);
    void mouvement();
    point getCentre();
};
#endif // CERCLE_H
