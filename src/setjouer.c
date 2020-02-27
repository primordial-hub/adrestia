#include "setjouer.h"

SDL_Surface *setjouer = NULL;
SDL_Rect possetjouer;
int x3, y3;

void setjouersouris()
{
    possetjouer.x = 0;
    possetjouer.y = 0;
    setjouer = IMG_Load("images/setjouer0.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);

    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 644) && (y3 < 644 + 68))
    {
        setjouer = IMG_Load("images/setjouer1.png");
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 732) && (y3 < 732 + 68))
    {
        setjouer = IMG_Load("images/setjouer2.png");
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }
}
