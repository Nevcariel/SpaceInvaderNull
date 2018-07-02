#ifndef MULTIFORMES_H
#define MULTIFORMES_H


#include <list>
#include "forme.h"


using namespace std;

class multiformes : public forme
{
protected:
    list<forme*> l;
    list<forme*>::iterator it;
public:
    multiformes();
    virtual ~multiformes();
    void ajoute(forme*);
    void supprime(forme*);
    void affiche(BITMAP*&);
    void mouvement();
};

#endif // MULTIFORMES_H
