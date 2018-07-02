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

point::point()
{
    x = y = 0;
    majpol();
    //cout << "construct 0 param" << endl;
}
point::point(float p)
{
    x = y = p;
    majpol();
    //cout << "construct 1 param" << endl;
}
point::point(float px, float py)
{
    x = px;     y = py;
    majpol();
    //cout << "construct 2 param" << endl;
}
point::~point()
{
    //cout << "destructeur" << endl;
}
void point::majpol()
{
    rho = sqrt(x*x + y*y);
    theta = atan2(y, x);
}
void point::majcarth()
{
    x = rho * cos(theta);
    y = rho * sin(theta);
}
void point::init(float px, float py)
{
    x = px;     y = py;
    majpol();
}
void point::affiche(BITMAP*& page)
{
    cout << "x = " << x << "\t" << "y = " << y << endl;
    cout << "roh = " << rho << "\t" << "theta = " << theta*180 / M_PI << endl;
}

void point::deplace(float dx, float dy)
{
    x += dx;    y += dy;
    majpol();
}
void point::homothetie(float coef)
{
    x *= coef;  y *= coef;
    majpol();
}
void point::rotation(float deg)
{
    float tmp = (deg * M_PI) / 180;
    theta += tmp;
    majcarth();
}

int point::getx()
{
    return x;
}

int point::gety()
{
    return y;
}

void point::setx(float val)
{
    x += val;
}
void point::sety(float val)
{
    y += val;
}
