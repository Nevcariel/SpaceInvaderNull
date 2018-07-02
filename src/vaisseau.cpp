#include "vaisseau.h"

vaisseau::vaisseau():carre()
{

}

vaisseau::vaisseau(float px, float py, float pl, int col):carre(px, py, pl, col)
{

}

vaisseau::~vaisseau()
{
}

void vaisseau::mouvement()
{
    if ( key[KEY_LEFT] && (M1.getx()>0) )
    {
        M1.setx(-0.3);
        M2.setx(-0.3);
    }
    if ( key[KEY_RIGHT] && (M2.getx()<SCREEN_W) )
    {
        M1.setx(0.3);
        M2.setx(0.3);
    }
}

void vaisseau::affiche(BITMAP*& page)
{
    carre::affiche(page);
}

void vaisseau::tir()
{
    bombes--;
}

int vaisseau::getBombes()
{
    return bombes;
}

void vaisseau::resetTir()
{
    bombes = 1;
}

point vaisseau::getM1()
{
    return M1;
}

point vaisseau::getM2()
{
    return M2;
}
