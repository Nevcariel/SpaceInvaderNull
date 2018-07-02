#ifndef CARRE_H
#define CARRE_H

#include "rectangle.h"

class carre : public rectangle
{
protected:

public:
    carre();
    carre(float, float, float, int);
    ~carre();
    void affiche(BITMAP*&);
};

#endif // CARRE_H
