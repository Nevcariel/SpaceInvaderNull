#ifndef VAISSEAU_H
#define VAISSEAU_H

#include <carre.h>


class vaisseau : public carre
{
    public:
        vaisseau();
        vaisseau(float, float, float, int);
        virtual ~vaisseau();
        void mouvement();
        void affiche(BITMAP*&);
        void tir();
        int getBombes();
        point getM1();
        point getM2();
        void resetTir();

    protected:
        int bombes = 1;
    private:
};

#endif // VAISSEAU_H
