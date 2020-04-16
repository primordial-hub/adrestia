#include <stdio.h>
#include <SDL/SDL.h>
typedef struct 
{
    SDL_Surface* personnage;
    SDL_Rect pospersonnage;
    h=personnage->h;
    w=personnage->w;
    int score;
    int vie;
}personnage;
personnage p;
p.personnage=NULL;
