#include "projectile.h"

using namespace std;

projectile::projectile()
{
}

projectile::projectile(float px, float py, float r, int col):cercle(px, py, r, col)
{

}
projectile::~projectile()
{
}

projectile& projectile::operator=(const projectile& src)
{
    if(this != &src)
    {
        centre = src.centre;
        couleur = src.couleur;
        rayon = src.rayon;
    }
    return *this;
}

bool projectile::mouvement(invaderManager& im)
{
    if(centre.gety() <= 0)
        return false;
    if(im.collision(centre.getx(), centre.gety()))
        return false;

    centre.deplace(0, -0.3);
    return true;
}

void projectile::affiche(BITMAP*& page)
{
    cercle::affiche(page);
}

