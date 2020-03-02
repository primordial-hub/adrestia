#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "main.h"

int main ( int argc, char** argv )
{  SDL_Surface *screen=NULL,*lvl1=NULL;
   SDL_Event event;
   SDL_Rect poslvl1;
   enemy enemy1,enemy2,enemy3;
   box box1,box2,box3,box4;
   personnage mario;
    poslvl1.x=0;poslvl1.y=0;
    enemy1.posen.x=1700;enemy1.posen.y=655.5;
    enemy2.posen.x=2716;enemy2.posen.y=655.5;
    enemy3.posen.x=3069;enemy3.posen.y=628;
    box1.posbox.x=1578;box1.posbox.y=600;
    mario.posperso.x=1578;mario.posperso.y=514;
    mario.h=86;mario.w=61;
   int continuer=1,x,y,access=1;
   enemy1.distance=390;enemy2.distance=292;enemy3.distance=109;
   enemy1.position_initiale=1700;enemy2.position_initiale=2716;enemy3.position_initiale=3069;
  enemy1.direction = 1;enemy2.direction = 1;enemy3.direction = 1;
   SDL_Init(SDL_INIT_VIDEO);
   screen = SDL_SetVideoMode(5356,800,32,SDL_HWSURFACE);
      lvl1=IMG_Load("lvl1.png");  enemy1.en=IMG_Load("en1.png");enemy2.en=IMG_Load("en1.png");box1.box=IMG_Load("lvl1box1.png");mario.perso=IMG_Load("en2.png");
    SDL_BlitSurface(lvl1,NULL,screen,&poslvl1);
     SDL_BlitSurface( enemy1.en,NULL,screen,&enemy1.posen);SDL_BlitSurface( enemy2.en,NULL,screen,&enemy2.posen);SDL_BlitSurface( enemy3.en,NULL,screen,&enemy3.posen);
   SDL_Flip(screen);
     SDL_EnableKeyRepeat(10,10);
   while(continuer)
   {  
      SDL_PollEvent(&event);
     
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
             case SDL_MOUSEBUTTONUP:
                x=event.button.x;
                y=event.button.y;
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
                   case SDLK_DOWN:
                     access=2;
                     break;
                  case SDLK_ESCAPE: 
                    continuer=0;
                    break;
                   }
               }

        break;
                

                    
        } 
           enemy1 = deplacement_aleatoire(enemy1);
           enemy2 = deplacement_aleatoire(enemy2);

        SDL_BlitSurface(lvl1,NULL,screen,&poslvl1); SDL_BlitSurface( enemy1.en,NULL,screen,&enemy1.posen);SDL_BlitSurface( enemy2.en,NULL,screen,&enemy2.posen);
     mario=access_box1 (box1,mario,access);
       SDL_BlitSurface(mario.perso,NULL,screen,&mario.posperso);
    SDL_BlitSurface( box1.box,NULL,screen,&box1.posbox);
if (enemy3.direction % 2 == 0 )
 {      enemy3.en=IMG_Load("en2.png");     
enemy3 = deplacement_aleatoire(enemy3);
SDL_BlitSurface( enemy3.en,NULL,screen,&enemy3.posen);}
 else if (enemy3.direction %2 == 1 )
 {      enemy3.en=IMG_Load("en21.png");     
enemy3 = deplacement_aleatoire(enemy3);
SDL_BlitSurface( enemy3.en,NULL,screen,&enemy3.posen);SDL_BlitSurface( box1.box,NULL,screen,&box1.posbox);}
   SDL_Flip(screen);
   }
   SDL_FreeSurface(lvl1);
SDL_FreeSurface(enemy1.en);SDL_FreeSurface(enemy2.en);SDL_FreeSurface(enemy3.en);SDL_FreeSurface(box1.box);
   SDL_FreeSurface(screen);
     SDL_Quit();
 printf("%d  %d ",x,y);
    return 0;
}
