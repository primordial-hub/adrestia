#include "setjouer.h"

SDL_Surface *setjouer = NULL;
SDL_Rect possetjouer;
int  x3, y3,x4, y4,setj=-1;

void setjouersouris(int *jouer)
{
    SDL_Event eventj;
    SDL_WaitEvent(&eventj);
    switch (eventj.type)
    {
    case SDL_MOUSEBUTTONUP:
        x4 = eventj.button.x;
        y4 = eventj.button.y;
        break;
    case SDL_MOUSEBUTTONDOWN:
        x3 = eventj.button.x;
        y3 = eventj.button.y;
        break;
     case SDL_KEYDOWN:
         {
                   switch(eventj.key.keysym.sym)
                   {
                    case SDLK_UP:
                      setj++;
                     break;
                    case SDLK_DOWN:
                      setj++;
                      break;
                    case SDLK_RETURN:
                     if (setj % 2 == 1){ *jouer = 0;}
                    break;
                  
                   }}
        break;
    case SDL_QUIT:
        *jouer = 0;
        break;
    }

    possetjouer.x = 0;
    possetjouer.y = 0;
    setjouer = IMG_Load("images/setjouer0.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);

   if (setj==-1)
     {
          setjouer=IMG_Load("images/setjouer0.png");
          SDL_BlitSurface(setjouer,NULL,screen,&possetjouer);
     }
       
   if (setj % 2 ==0)
     {
          setjouer=IMG_Load("images/setjouer1.png");
          SDL_BlitSurface(setjouer,NULL,screen,&possetjouer);
     }
       
   if (setj % 2 == 1)
     {
          setjouer=IMG_Load("images/setjouer2.png");
          SDL_BlitSurface(setjouer,NULL,screen,&possetjouer);
     }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 594) && (y3 < 594 + 68))
    {    setj=0;
        x3=0;
        y3=0;
        
    }
    if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 682) && (y3 < 682 + 68))
    {setj=1;
       x3=0;
        y3=0;
       
    }
    if ((x4 > 10) && (x4 < 10 + 64) && (y4 > 682) && (y4 < 682 + 68))
    {*jouer = 0;
       x4=0;
        y4=0;
       
    }
 SDL_Flip(screen);
}
