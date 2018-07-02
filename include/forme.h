#ifndef FORME_H
#define FORME_H

#include <iostream>
#include "allegro.h"

class forme
{
protected:

public:
    forme();
    virtual ~forme();
    virtual void affiche(BITMAP*&) = 0;
    virtual void mouvement() = 0;
};


#endif // FORME_H
