#include "play.h"

void play(int *jouer)
{
 
    SDL_Surface *logoo = NULL;
    SDL_Rect poslogoo;
    poslogoo.x = 0;
    poslogoo.y = 0;
    logoo = IMG_Load("images/logo.jpg");
    SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
    while (*jouer == 1)
    {
        SDL_Event eventj;
        SDL_WaitEvent(&eventj);
        switch (eventj.type)
        {
        case SDL_MOUSEMOTION:
            x3 = eventj.motion.x;
            y3 = eventj.motion.y;
            break;
        case SDL_QUIT:
          continuer=0;
          break;
        }
       
        SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
         setjouersouris();
        SDL_Flip(screen);
    }
}
