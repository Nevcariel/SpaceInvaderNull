#include <iostream>
#include "allegro.h"
#include <list>
#include <cmath>
#include "carre.h"
#include "cercle.h"
#include "rectangle.h"
#include "forme.h"
#include "invader.h"
#include "invaderManager.h"
#include "multiformes.h"
#include "point.h"
#include "projectile.h"

using namespace std;

cercle::cercle(): centre()
{
    rayon = 0;
}

cercle::cercle(float px, float py, float pr, int col):centre(px, py)
{
    rayon = pr;
    couleur = col;
}

cercle::~cercle()
{

}
cercle& cercle::operator=(const cercle& src)
{
    if(this != &src)
    {
        centre = src.centre;
        couleur = src.couleur;
        rayon = src.rayon;
    }
    return *this;
}

void cercle::affiche(BITMAP*& page)
{
    /*cout << "Cercle"<< endl;
    centre.affiche();
    cout << "Rayon = " << rayon << endl;*/
    circlefill(page, centre.getx(), centre.gety(), rayon, couleur);
}

void cercle::mouvement()
{

}

point cercle::getCentre()
{
    return centre;
}
