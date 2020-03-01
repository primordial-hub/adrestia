#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "main.h"

int main ( int argc, char** argv )
{  SDL_Surface *screen=NULL,*lvl1=NULL;
   SDL_Event event;
   SDL_Rect poslvl1;
   enemy enemy1;
    poslvl1.x=0;poslvl1.y=0;
    enemy1.posen.x=1700;enemy1.posen.y=655.5;
   int continuer=1;
   enemy1.distance=390;
   enemy1.position_initiale=1700;
  enemy1.direction = 1;
   SDL_Init(SDL_INIT_VIDEO);
   screen = SDL_SetVideoMode(5356,800,32,SDL_HWSURFACE);
      lvl1=IMG_Load("lvl1.png");  enemy1.en=IMG_Load("en1.png");
    SDL_BlitSurface(lvl1,NULL,screen,&poslvl1);
     SDL_BlitSurface( enemy1.en,NULL,screen,&enemy1.posen);
   SDL_Flip(screen);
     SDL_EnableKeyRepeat(10,10);
   while(continuer)
   {  
      SDL_PollEvent(&event);
     
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                    case SDL_KEYDOWN:
{

                   switch(event.key.keysym.sym)
                   {
                   case SDLK_RIGHT:
                      poslvl1.x--;
                     break;
                   case SDLK_LEFT:
                     poslvl1.x++;
                   break;
                  case SDLK_ESCAPE: 
                    continuer=0;
                    break;
                   }
               }

        break;
                

                    
        } 
           enemy1 = deplacement_aleatoire(enemy1);
        SDL_BlitSurface(lvl1,NULL,screen,&poslvl1); SDL_BlitSurface( enemy1.en,NULL,screen,&enemy1.posen);
        SDL_Flip(screen);
   }
   SDL_FreeSurface(lvl1);
SDL_FreeSurface(enemy1.en);
   SDL_FreeSurface(screen);
     SDL_Quit();
    return 0;
}
