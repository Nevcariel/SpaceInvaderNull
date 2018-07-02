#ifndef INVADER_H
#define INVADER_H

#include "carre.h"
#include "projectile.h"


class invader : public carre
{
protected:

public:
    invader();
    invader(float, float, float, int);
    virtual ~invader();
    invader& operator=(const invader&);
    void mouvement();
    void affiche(BITMAP*&);
    void droite();
    void gauche();
    void bas();
    float getLeftx();
    float getRightx();
    bool collision(float, float);
};

#endif // INVADER_H
