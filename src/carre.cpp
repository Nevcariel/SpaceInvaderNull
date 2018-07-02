
#include "carre.h"


carre::carre():rectangle()
{

}

carre::carre(float px, float py, float pl, int col):rectangle(px, py, px+pl, py+pl, col)
{

}

carre::~carre()
{
    //dtor
}

void carre::affiche(BITMAP*& page)
{
    rectangle::affiche(page);
}
