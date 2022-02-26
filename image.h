#ifndef Image_H
#define Image_h
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define SCREEN_W 1368
#define SCREEN_H 801
struct Image
{
    SDL_Rect pos1;
    SDL_Rect pos2;
    SDL_Surface *img;
};
typedef struct Image Image;
void initBackground(Image *Backg);
void initGameBackground(Image *gameBackg);
void initflousbackground(Image *floubackground);
void initbouton01(Image *bouton01);
void initbouton02(Image *bouton02);
void initbouton03(Image *bouton03);
void initbouton04(Image *bouton04);
void initbouton1(Image *bouton1);
void initbouton2(Image *bouton2);
void initbouton3(Image *bouton3);
void initbouton4(Image *bouton4);
void initboutonvolume1(Image *volume1);
void initboutonadjustvolume1(Image *adjustvolume1);
void initboutonscreenmode1(Image *screenmode1);
void liberer(Image A);
void afficher(Image p, SDL_Surface *screen);
#endif