#include "image.h"
#include </usr/include/SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
void initBackground(Image *Backg)
{
    Backg->img = IMG_Load("background.jpg");
    /*if( Backg->img == NULL)
    { printf("unable to load bitmap %s \ n " ,SDL_GetError());
    return ;
    }*/

    Backg->pos1.x = 0;
    Backg->pos1.y = 0;
    Backg->pos2.x = 0;
    Backg->pos2.y = 0;
    Backg->pos2.w = (SCREEN_W);
    Backg->pos2.h = (SCREEN_H);
}
void initGameBackground(Image *gameBackg)
{
    gameBackg->img = IMG_Load("gamebackground.jpg");
    /*if( Backg->img == NULL)
    { printf("unable to load bitmap %s \ n " ,SDL_GetError());
    return ;
    }*/

    gameBackg->pos1.x = 0;
    gameBackg->pos1.y = 0;
    gameBackg->pos2.x = 0;
    gameBackg->pos2.y = 0;
    gameBackg->pos2.w = (SCREEN_W);
    gameBackg->pos2.h = (SCREEN_H);
}
void initflousbackground(Image *floubackground)
{
    floubackground->img = IMG_Load("floubackground.jpg");
    floubackground->pos1.x = 0;
    floubackground->pos1.y = 0;
    floubackground->pos2.x = 0;
    floubackground->pos2.y = 0;
    floubackground->pos2.w = (SCREEN_W);
    floubackground->pos2.h = (SCREEN_H);
}
void initbouton01(Image *bouton01)
{
    bouton01->img = IMG_Load("newgame0.jpg");
    

    bouton01->pos1.x = 369;
    bouton01->pos1.y = 361;
    bouton01->pos2.x = 0;
    bouton01->pos2.y = 0;
    bouton01->pos2.w = (SCREEN_W);
    bouton01->pos2.h = (SCREEN_H);
}
void initbouton02(Image *bouton02)
{
    bouton02->img = IMG_Load("continue0.jpg");
    

    bouton02->pos1.x = 369;
    bouton02->pos1.y = 395;
    bouton02->pos2.x = 0;
    bouton02->pos2.y = 0;
    bouton02->pos2.w = (SCREEN_W);
    bouton02->pos2.h = (SCREEN_H);
}
void initbouton03(Image *bouton03)
{
    bouton03->img = IMG_Load("options0.jpg");
    

    bouton03->pos1.x = 369;
    bouton03->pos1.y = 445;
    bouton03->pos2.x = 0;
    bouton03->pos2.y = 0;
    bouton03->pos2.w = (SCREEN_W);
    bouton03->pos2.h = (SCREEN_H);
}
void initbouton04(Image *bouton04)
{
    bouton04->img = IMG_Load("quit0.jpg");
    

    bouton04->pos1.x = 397;
    bouton04->pos1.y = 497;
    bouton04->pos2.x = 0;
    bouton04->pos2.y = 0;
    bouton04->pos2.w = (SCREEN_W);
    bouton04->pos2.h = (SCREEN_H);
}
void initbouton1(Image *bouton1)
{
    bouton1->img = IMG_Load("newgame.jpg");
    /*if( Backg->img == NULL)
    { printf("unable to load bitmap %s \ n " ,SDL_GetError());
    return ;
    }*/

    bouton1->pos1.x = 369;
    bouton1->pos1.y = 361;
    bouton1->pos2.x = 0;
    bouton1->pos2.y = 0;
    bouton1->pos2.w = (SCREEN_W);
    bouton1->pos2.h = (SCREEN_H);
}
void initbouton2(Image *bouton2)
{
    bouton2->img = IMG_Load("continue.jpg");
    

    bouton2->pos1.x = 369;
    bouton2->pos1.y = 395;
    bouton2->pos2.x = 0;
    bouton2->pos2.y = 0;
    bouton2->pos2.w = (SCREEN_W);
    bouton2->pos2.h = (SCREEN_H);
}
void initbouton3(Image *bouton3)
{
    bouton3->img = IMG_Load("options.jpg");
    

    bouton3->pos1.x = 369;
    bouton3->pos1.y = 445;
    bouton3->pos2.x = 0;
    bouton3->pos2.y = 0;
    bouton3->pos2.w = (SCREEN_W);
    bouton3->pos2.h = (SCREEN_H);
}
void initbouton4(Image *bouton4)
{
    bouton4->img = IMG_Load("quit.jpg");
    

    bouton4->pos1.x = 397;
    bouton4->pos1.y = 497;
    bouton4->pos2.x = 0;
    bouton4->pos2.y = 0;
    bouton4->pos2.w = (SCREEN_W);
    bouton4->pos2.h = (SCREEN_H);
}
void initboutonvolume1(Image *volume1)
{
    volume1->img = IMG_Load("volume1.jpg");
    

    volume1->pos1.x = 570;
    volume1->pos1.y = 216;
    volume1->pos2.x = 0;
    volume1->pos2.y = 0;
    volume1->pos2.w = (SCREEN_W);
    volume1->pos2.h = (SCREEN_H);
}
void initboutonadjustvolume1(Image *adjustvolume1)
{
    adjustvolume1->img = IMG_Load("adjustvolume1.jpg");
    

    adjustvolume1->pos1.x = 570;
    adjustvolume1->pos1.y = 216;
    adjustvolume1->pos2.x = 0;
    adjustvolume1->pos2.y = 0;
    adjustvolume1->pos2.w = (SCREEN_W);
    adjustvolume1->pos2.h = (SCREEN_H);
}
void initboutonscreenmode1(Image *screenmode1)
{
    screenmode1->img = IMG_Load("screenmode1.jpg");
    

    screenmode1->pos1.x = 397;
    screenmode1->pos1.y = 497;
    screenmode1->pos2.x = 0;
    screenmode1->pos2.y = 0;
    screenmode1->pos2.w = (SCREEN_W);
    screenmode1->pos2.h = (SCREEN_H);
}
void liberer(Image A)
{
    SDL_FreeSurface(A.img);
}
void afficher(Image p, SDL_Surface *screen)
{
    SDL_BlitSurface(p.img, NULL, screen, &p.pos1);
}