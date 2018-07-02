#include <iostream>
#include "allegro.h"
#include "invaderManager.h"
#include "multiformes.h"
#include "projectile.h"
#include "vaisseau.h"


using namespace std;

BITMAP* page;

void initfenetre()
{
    allegro_init();
    install_keyboard();   //installe le clavier
    install_mouse();      //installe la souris

    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0)!=0)
    {   // sélectionner un driver graphique approprié +initialisation de la résolution de l'écran (tailles 640-480)
        allegro_message(allegro_error);
            //allegro_message("mode graphique") ;
        allegro_exit();
        return;
    }

    set_mouse_sprite(NULL);
    show_mouse(screen);
    set_keyboard_rate(0,0);

    page=create_bitmap(SCREEN_W,SCREEN_H);

    if ( !page )
    {
        allegro_message("pb bitmap") ;
        allegro_exit();
        return;
    }
}

int main()
{
    cout << "début prog" << endl;
    multiformes* t = new multiformes();
    projectile* p;
    vaisseau v(350,455,20,makecol(0,0,255));//bug
    invaderManager im(10);

    t->ajoute(&v);
    t->ajoute(&im);
    initfenetre();

    p = NULL;

    //t.ajoute(new vaisseau(page->w/2,page->h-taille_vaisseau,taille_vaisseau,makecol(0,0,255)));
    //t.ajoute(new invaderManager(10));
    do
    {
        clear_bitmap(page);
        t->mouvement();
        t->affiche(page);
        if(key[KEY_SPACE] && v.getBombes() > 0)
        {
            v.tir();
            p = new projectile(v.getM1().getx() + (v.getM2().getx() - v.getM1().getx())/2,v.getM1().gety(),3,makecol(0,0,255));
        }
        if(p != NULL)
        {
            p->affiche(page);
            if(!p->mouvement(im))
            {
                delete p;
                v.resetTir();
                p = NULL;
            }
        }
        blit(page,screen,0,0,0,0,page->w,page->h);
    }
    while(!key[KEY_ESC]);

    destroy_bitmap(page);
    set_gfx_mode(GFX_TEXT,0,0,0,0);

    cout << "fin prog" << endl;

    return 0;

} END_OF_MAIN() ;
