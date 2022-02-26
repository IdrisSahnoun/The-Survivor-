#include "image.h"
#include <SDL/SDL_mixer.h>

void UpdateEvents(Sint32 *mousex, Sint32 *mousey, char boutons[8], char key[SDLK_LAST])
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_KEYDOWN:
			key[event.key.keysym.sym] = 1;
			break;
		case SDL_KEYUP:
			key[event.key.keysym.sym] = 0;
			break;
		case SDL_MOUSEMOTION:
			*mousex = event.motion.x;
			*mousey = event.motion.y;
			break;
		case SDL_MOUSEBUTTONDOWN:
			boutons[event.button.button] = 1;
			break;
		case SDL_MOUSEBUTTONUP:
			boutons[event.button.button] = 0;
			break;
		}
	}
}//htht
int a=0;
int main(int argc, char **argv)
{
	Image backg, gameBackg, floubackground,
		bouton1, bouton2, bouton3,
		bouton4, bouton01, bouton02, bouton03, bouton04,
		volume1, adjustvolume1, screenmode1;
	Sint32 mousex = 0;
	Sint32 mousey = 0;
	char boutons[8] = {0};
	char key[SDLK_LAST] = {0};
	int xs, ys;
	int en_train_d_ecrire = 0;
	int y = 0;
	SDL_Init(SDL_INIT_VIDEO);

	// Déclaration des variables
	SDL_Surface *screen;
	// creation d'une fenetre
	screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32, SDL_HWSURFACE | SDL_SRCALPHA);

	// Initialisation des variables
	initBackground(&backg);

	initbouton01(&bouton01);
	initbouton02(&bouton02);
	initbouton03(&bouton03);
	initbouton04(&bouton04);
	afficher(backg, screen);
	// Game loop
	while (!key[SDLK_ESCAPE])
	{
		// Display
		int x = 0;
		int z = 0;
		if (SDL_MUSTLOCK(screen))
			SDL_LockSurface(screen);
		afficher(bouton1, screen);
		afficher(bouton2, screen);
		afficher(bouton3, screen);
		afficher(bouton4, screen);
		UpdateEvents(&mousex, &mousey, boutons, key);
		if (key[SDLK_n])
		{
			y = 1;
		}
		if (key[SDLK_c])
		{
			y = 2;
		}
		if (key[SDLK_o])
		{
			y = 3;
		}
		if (mousex >= 369 && mousex <= 369 + 153 &&
				mousey >= 361 && mousey <= 361 + 23 ||
			key[SDLK_n])
		{
			initbouton1(&bouton1);
			x = 1;
		}
		else
			afficher(bouton01, screen);
		if (mousex >= 369 && mousex <= 369 + 153 &&
			mousey >= 395 && mousey <= 395 + 23)
		{
			initbouton2(&bouton2);
			x = 2;
		}
		else
			afficher(bouton02, screen);
		if (mousex >= 369 && mousex <= 369 + 126 &&
			mousey >= 445 && mousey <= 445 + 22)
		{
			initbouton3(&bouton3);
			x = 3;
		}
		else
			afficher(bouton03, screen);
		if (mousex >= 397 && mousex <= 397 + 66 &&
			mousey >= 497 && mousey <= 497 + 23)
		{
			initbouton4(&bouton4);
			x = 4;
		}
		else
			afficher(bouton04, screen);
		switch (x)
		{
		case 1:
			if (boutons[SDL_BUTTON_LEFT])
			{
				printf("\nclicked on new game!!");
				y = 1;
			}
			break;
		case 2:
			if (boutons[SDL_BUTTON_LEFT])
			{
				printf("\nclicked on continue!!");
				y = 2;
			}
			break;
		case 3:
			if (boutons[SDL_BUTTON_LEFT])
			{
				printf("\nclicked on options!!");
				y = 3;
			}
			break;
		case 4:
			if (boutons[SDL_BUTTON_LEFT])
				exit(1);
			break;
		}
		switch (y)
		{
		case 1:
			afficher(gameBackg, screen);
			initGameBackground(&gameBackg);
			SDL_Flip(screen);
			break;
		case 2:
			afficher(gameBackg, screen);
			initGameBackground(&gameBackg);
			SDL_Flip(screen);
			break;
		case 3:
			afficher(floubackground, screen);
			initflousbackground(&floubackground);
			SDL_Flip(screen);
			z = 1;
			break;
		}
		switch (z)
		{
		case 1:
			if (mousex >= 570 && mousex <= 570 + 262 &&
				mousey >= 216 && mousey <= 216 + 68)
			{
				afficher(volume1, screen);
				initboutonvolume1(&volume1);
				if (boutons[SDL_BUTTON_LEFT])
				{
					afficher(adjustvolume1,screen);
					initboutonadjustvolume1(&adjustvolume1);
				}
			}

			break;
		}
		if (SDL_MUSTLOCK(screen))
			SDL_UnlockSurface(screen);
		SDL_Flip(screen);
	}
	// SDL_FreeSurface(&floubackground);
	/*liberer(backg);
	liberer(floubackground);
	liberer(bouton01);
	liberer(bouton02);
	liberer(bouton03);
	liberer(bouton04);
	liberer(bouton1);
	liberer(bouton2);
	liberer(bouton3);
	liberer(bouton4);
	liberer(gameBackg);*/

	return 0;
}