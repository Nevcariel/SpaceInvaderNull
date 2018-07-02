
#include "multiformes.h"

using namespace std;

multiformes::multiformes()
{

}

multiformes::~multiformes()
{

}
void multiformes::ajoute(forme* p)
{
    l.push_back(p);
}

void multiformes::supprime(forme* p)
{
    delete p;
    l.remove(p);
}

void multiformes::affiche(BITMAP*& page)
{
    for(it=l.begin() ; it!=l.end() ; it++)
    {
        (*it)->affiche(page);
        //cout << "-----------------------------------" << endl;
    }
    //cout << "nb d'obj ds la liste = " << l.size() << endl;
}

void multiformes::mouvement()
{
    for(it=l.begin() ; it!=l.end() ; it++)
    {
        (*it)->mouvement();
    }
}
