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

using  namespace std;

rectangle::rectangle() : forme()
{
    couleur = makecol(255, 0, 0);
}

rectangle::rectangle(float x1, float y1, float x2, float y2, int col):M1(x1,y1), M2(x2, y2)
{
    couleur = col;
}
rectangle::rectangle(point p1, point p2)
{

}
rectangle::rectangle(point p, float x, float y)
{

}
rectangle::~rectangle()
{}

rectangle::rectangle(const rectangle& src)
{
    M1 = src.M1;
    M2 = src.M2;
}
rectangle& rectangle::operator=(const rectangle& src)
{
    if(this != &src)
    {
        M1 = src.M1;
        M2 = src.M2;
    }
    return *this;
}
void rectangle::affiche(BITMAP*& page)
{
    /*cout<< "P1 :" << endl;
    M1.affiche();
    cout<< "P2 :" << endl;
    M2.affiche();*/
    rectfill(page, M1.getx(), M1.gety(), M2.getx(), M2.gety(), couleur);

}
void rectangle::init()
{

}

int rectangle::selection(float sx, float sy)
{
    if((sx >= M1.getx())
        && (sx <= M2.getx())
        && (sy >= M1.gety())
        && (sy <= M2.gety()))
            return 1;
    return 0;
}
