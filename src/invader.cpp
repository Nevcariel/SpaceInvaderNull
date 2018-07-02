#include "invader.h"

invader::invader():carre()
{}

invader::invader(float px, float py, float pl, int col):carre(px, py, pl, col)
{

}

invader::~invader()
{
}

invader& invader::operator=(const invader& src)
{
    if(this != &src)
    {
        M1 = src.M1;
        M2 = src.M2;
    }
    return *this;
}

void invader::mouvement()
{
}

void invader::affiche(BITMAP*& page)
{
    carre::affiche(page);
}

float invader::getLeftx()
{
    return M1.getx();
}
float invader::getRightx()
{
    return M2.getx();
}

void invader::droite()
{
    M1.setx(-0.1);
    M2.setx(-0.1);
}

void invader::gauche()
{
    M1.setx(0.1);
    M2.setx(0.1);
}

void invader::bas()
{
    M1.sety(3);
    M2.sety(3);
}

bool invader::collision(float sx, float sy)
{
    if(selection(sx, sy))
        return true;
    return false;
}
