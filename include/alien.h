#ifndef ALIEN_H
#define ALIEN_H

#include <carre.h>
#include <projectile.h>

class alien : public carre
{
protected:

public:
    alien();
    alien(float, float, float, int);
    virtual ~alien();
    alien& operator=(const alien&);
    void mouvement();
    void affiche(BITMAP*&);
    void droite();
    void gauche();
    void bas();
    float getLeftx();
    float getRightx();
    int collision(class projectile&);
};
#endif // ALIEN_H
