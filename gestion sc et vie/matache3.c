#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_video.h>
//#include "personnage.h"
int tellmewhy(int x, int c)
{
    if (c == 1)
    {
        x = x +1;
    }
    else if(c==2)
    {
        x=x-1;
    }

    return x;
}
int main(int argv, char **argc[])
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_DOUBLEBUF);

    SDL_Surface *screen = NULL, *personnage = NULL;

    int  continuer = 1, i = 0, r = 0, test = 0;

    SDL_Event event;
    screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE);
    SDL_Rect pospersonnage;

    //****************positions des images***********************

    /*p.pospersonnage*/ pospersonnage.x = 0;
    /*p.pospersonnage*/ pospersonnage.y = 800 - /*p.personnage->h*/ 520;
    personnage = IMG_Load("2.png");
    SDL_SetColorKey(personnage, SDL_SRCCOLORKEY, SDL_MapRGB(personnage->format, 255, 255, 255));
    SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);

    while (continuer)
    {
        personnage = IMG_Load("2.png");
        SDL_Flip(screen);
        SDL_PollEvent(&event);

        switch (event.type)
        {
        case SDL_QUIT:
            continuer = 0;
            break;

          
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer = 0;
                break;
            }
            break;

           
        case SDL_MOUSEBUTTONDOWN:

            switch (event.button.button)
            {

            case SDL_BUTTON_LEFT:
                r = event.button.x;
                
                break;
            }
            break;
        }
        if (pospersonnage.x < r) 
        {
            test = 1;
        }
        else if(pospersonnage.x > r) 
        {
            test = 2;
        }
       
        if (pospersonnage.x == r)
        {
            test = 0;
        }

        pospersonnage.x = tellmewhy(pospersonnage.x, test);
        if ((tellmewhy(pospersonnage.x, test) % 2 == 0)&&(test==1))
        {
            personnage = IMG_Load("1.png");
            SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);
        }
        else if ((tellmewhy(pospersonnage.x, test) % 2 != 0)&&(test==1))
        {
            personnage = IMG_Load("2.png");
            SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);
        }
           if ((tellmewhy(pospersonnage.x, test) % 2 == 0)&&(test==2))
        {
            personnage = IMG_Load("1l.png");
            SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);
        }
        else if ((tellmewhy(pospersonnage.x, test) % 2 != 0)&&(test==2))
        {
            personnage = IMG_Load("2l.png");
            SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);
        }
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        SDL_BlitSurface(personnage, NULL, screen, &pospersonnage);
        SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(personnage);
    Mix_FreeChunk(son);
    SDL_CloseAudio();
    SDL_Quit();
    return 0;
}