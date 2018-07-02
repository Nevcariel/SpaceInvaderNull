#include "invaderManager.h"
#include "projectile.h"

invaderManager::invaderManager():forme()
{
}

invaderManager::invaderManager(int n):forme()
{
    for(int i=0 ; i<n ; i++)
    {
        ajoute(new invader(20 * i + 10 * i,1,20,makecol(255,0,0)));
    }
}

invaderManager::~invaderManager()
{

}

void invaderManager::ajoute(invader* p)
{
    troops.push_back(p);
}

void invaderManager::supprime(invader* p)
{
    troops.remove(p);
}

void invaderManager::affiche(BITMAP*& page)
{
    for(it=troops.begin() ; it!=troops.end() ; it++)
    {
        (*it)->affiche(page);
        //cout << "-----------------------------------" << endl;
    }
    //cout << "nb d'obj ds la liste = " << l.size() << endl;
}

void invaderManager::mouvement()
{
    if(troops.front()->getLeftx() <= 0)
    {
        droite = false;
        gauche = true;
        for(it=troops.begin() ; it!=troops.end() ; it++)
        {
            (*it)->bas();
        }
    }
    else if(troops.back()->getRightx() >= SCREEN_W)
    {
        droite = true;
        gauche = false;
        for(it=troops.begin() ; it!=troops.end() ; it++)
        {
            (*it)->bas();
        }
    }
    if(droite)
    {
        for(it=troops.begin() ; it!=troops.end() ; it++)
        {
            (*it)->droite();
        }
    }
    else if(gauche)
    {
        for(it=troops.begin() ; it!=troops.end() ; it++)
        {
            (*it)->gauche();
        }
    }

}

bool invaderManager::collision(float sx, float sy)
{
    for(it=troops.begin() ; it!=troops.end() ; it++)
    {
        if((*it)->collision(sx, sy))
        {
            supprime(*it);
            delete *it;
            return true;
        }

    }
    return false;
}
