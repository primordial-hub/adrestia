#include "setjouer.h"

SDL_Surface *setjouer = NULL;
SDL_Rect possetjouer;
int x3, y3, x4, y4;

void setjouersouris(int *jouer)
{
    SDL_Event eventj;
    SDL_WaitEvent(&eventj);
    switch (eventj.type)
    {
    case SDL_MOUSEMOTION:
        x3 = eventj.motion.x;
        y3 = eventj.motion.y;
        break;
    case SDL_MOUSEBUTTONUP:
        x4 = eventj.motion.x;
        y4 = eventj.motion.y;
        break;
    case SDL_QUIT:
        *jouer = 0;
        break;
    }

    possetjouer.x = 0;
    possetjouer.y = 0;
    setjouer = IMG_Load("images/setjouer0.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);

    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 594) && (y3 < 594 + 68))
    {
        setjouer = IMG_Load("images/setjouer1.png");
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 682) && (y3 < 682 + 68))
    {
        setjouer = IMG_Load("images/setjouer2.png");
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }
    if ((x4 > 10) && (x4 < 10 + 64) && (y4 > 682) && (y4 < 682 + 68))
    {
        *jouer = 0;
        x4=0;
        y4=0;
    }
}
