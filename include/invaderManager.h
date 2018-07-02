#ifndef INVADERMANAGER_H
#define INVADERMANAGER_H


#include <invader.h>
#include <list>

class invaderManager : public forme
{
protected:
    list<class invader*> troops;
    list<invader*>::iterator it;
    bool gauche, droite;
public:
    invaderManager();
    invaderManager(int);
    virtual ~invaderManager();
    void affiche(BITMAP*&);
    void mouvement();
    void ajoute(invader*);
    void supprime(invader*);
    class projectile* tir();
    bool collision(float, float);
};

#endif // INVADERMANAGER_H
