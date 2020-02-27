#include "play.h"

void play(int *jouer)
{
 
    SDL_Surface *logoo = NULL;
    SDL_Rect poslogoo;
    poslogoo.x = 0;
    poslogoo.y = 0;
    logoo = SDL_LoadBMP("images/img.bmp");
    SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
    while (*jouer == 1)
    {
        SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
         setjouersouris(jouer);
        SDL_Flip(screen);
        
    }
}
