#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "cercle.h"
#include "invaderManager.h"

using namespace std;

class projectile : public cercle
{
protected:

public:
    projectile();
    projectile(float, float, float, int);
    virtual ~projectile();
    projectile& operator=(const projectile&);
    bool mouvement(class invaderManager&);
    void affiche(BITMAP*&);
    point getM1();
    point getM2();
};
#endif // PROJECTILE_H
