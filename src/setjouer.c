#include "setjouer.h"

SDL_Surface *setjouer = NULL,*setjouer1=NULL;
SDL_Rect possetjouer;
int sett = 0, x3, y3, setj = -1;
SDL_Rect possetj,posexitj;
void setjouersouris(int *jouer)
{possetj.x=13;possetj.y=606;
   posexitj.x=13;posexitj.y=695;
    SDL_Event eventj1;
    SDL_WaitEvent(&eventj1);
    switch (eventj1.type)
    {

    case SDL_MOUSEBUTTONUP:
        x3 = eventj1.button.x;
        y3 = eventj1.button.y;
        x1 = eventj1.button.x;
        y1 = eventj1.button.y;
        break;
    case SDL_MOUSEMOTION:
        if (sett == 1)
        {
            x = eventj1.button.x;
            y = eventj1.button.y;
        }
        break;
    case SDL_KEYDOWN:
    {
        switch (eventj1.key.keysym.sym)
        {
        case SDLK_UP:
            if (sett != 1)
            {
                setj++;
            }

            break;
        case SDLK_DOWN:

            if (sett != 1)
            {
                setj++;
            }
            break;
        case SDLK_RETURN:
            if (setj % 2 == 1)
            {
                *jouer = 0;
            }
            if (setj % 2 == 0)
            {
                sett = 1;
            }
            break;
        case SDLK_ESCAPE:
            if (sett == 1)
            {
                sett = 0;
            }
            break;
        }
    }
    break;
    case SDL_QUIT:
        *jouer = 0;
        break;
    }

    possetjouer.x = 0;
    possetjouer.y = 0;
    setjouer = IMG_Load("images/setjouer0.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);

    if (setj == -1)
    {
      
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }

    if (setj % 2 == 0)
    {
          setjouer1=IMG_Load("images/settingsjouer.png");
          SDL_BlitSurface(setjouer,NULL,screen,&possetjouer);
          SDL_BlitSurface(setjouer1,NULL,screen,&possetj);
    }

    if (setj % 2 == 1)
    {
        
          setjouer1=IMG_Load("images/exitjouer.png");
          SDL_BlitSurface(setjouer,NULL,screen,&possetjouer);
          SDL_BlitSurface(setjouer1,NULL,screen,&posexitj);
    }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 594) && (y3 < 594 + 68))
    {
        sett = 1;
        setj = 0;
        x3 = 0;
        y3 = 0;
        setjouer = IMG_Load("images/settingsjouer.png");
        SDL_BlitSurface(setjouer1, NULL, screen, &possetj);
    }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 682) && (y3 < 682 + 68))
    {
        setj = 1;
        x3 = 0;
        y3 = 0;
        *jouer = 0;
        setjouer1= IMG_Load("images/exitjouer.png");
        SDL_BlitSurface(setjouer1, NULL, screen, &posexitj);
    }
    if ((x1 > posredb.x) && (x1 < posredb.x + 31) && (y1 > posredb.y) && (y1 < posredb.y + 27))
    {
        sett = 0;
    }

    if (sett == 1)
    {
        s1 = 2;
        settings();
    }
    if (sett == 0)
    {
        s1 = 1;
        exitsetting = 1;
        SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    }

    SDL_Flip(screen);
   SDL_FreeSurface(setjouer); SDL_FreeSurface(setjouer1); 
}
