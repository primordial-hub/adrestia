#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "main.h"
typedef int bool;
int main ( int argc, char** argv )
{  SDL_Surface *screen=NULL,*lvl1=NULL,*lvll=NULL;
   SDL_Event event;
   SDL_Rect poslvl1;
 SDL_Rect camera;
   enemy enemy1,enemy2,enemy3;
   box box1,box2,box3,box4;
   personnage mario,mario1;
    poslvl1.x=0;poslvl1.y=0;
   const int fps = 30;
    Uint32 start;
    const int vitesse = 5;
    int x = 0, y = 0, j = 0;
    camera.x = 0;
    camera.y = 0;
    camera.w = 1300;
    camera.h = 800;
    bool b[2] = {0, 0};
    enemy1.posen.x=1700;enemy1.posen.y=655.5;
    enemy2.posen.x=2716;enemy2.posen.y=655.5;
    enemy3.posen.x=3069;enemy3.posen.y=628;
    box1.posbox.x=1578;box1.posbox.y=600;box2.posbox.x=2158;box2.posbox.y=544;
    mario.posperso.x=1578;mario.posperso.y=514;mario1.posperso.x=2160;mario1.posperso.y=495;
    mario.h=86;mario.w=61; mario1.h=86;mario1.w=61;
   int continuer=1,x1,y1,access=1,access1=1;
   enemy1.distance=378;enemy2.distance=280;enemy3.distance=109;
   enemy1.position_initiale=1712;enemy2.position_initiale=2716;enemy3.position_initiale=3069;
  enemy1.direction = 1;enemy2.direction = 1;enemy3.direction = 1;
   SDL_Init(SDL_INIT_VIDEO);
   screen = SDL_SetVideoMode(1300,800,32,SDL_HWSURFACE);
      lvl1=IMG_Load("lvl1.png");  enemy1.en=IMG_Load("en1.png");enemy2.en=IMG_Load("en1.png");box1.box=IMG_Load("lvl1box1.png");mario.perso=IMG_Load("en2.png");mario1.perso=IMG_Load("en2.png");
box2.box=IMG_Load("lvl1box2.png");lvll=IMG_Load("lvl1.png");
    SDL_BlitSurface(lvl1, &camera, screen, NULL);
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
break;
                    case SDL_KEYDOWN:
{

                   switch(event.key.keysym.sym)
                   {
                   case SDLK_RIGHT:
                b[0] = 1;
                break;
            case SDLK_LEFT:
                b[1] = 1;
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
 case SDL_KEYUP:
            switch (event.key.keysym.sym)
            {
            case SDLK_RIGHT:
                b[0] = 0;
                break;
            case SDLK_LEFT:
                b[1] = 0;
                break;
            }
            break;
                

                    
        } 
   if ((b[0])&&(camera.x < 5365 - 1300))
        {
            x = x + vitesse;
            camera.x = camera.x + vitesse;
          
        }
        if ((b[1])&&(camera.x > 0))
        {
            x = x - vitesse;
            camera.x = camera.x - vitesse;
            
        }
        SDL_BlitSurface(lvl1,&camera, screen,NULL);SDL_BlitSurface( lvll,NULL,lvl1,&poslvl1);
           enemy1 = deplacement_aleatoire(enemy1);
           enemy2 = deplacement_aleatoire(enemy2);

       SDL_BlitSurface( enemy1.en,NULL,lvl1,&enemy1.posen);SDL_BlitSurface( enemy2.en,NULL,lvl1,&enemy2.posen);
     mario=access_box1 (box1,mario,access);mario1=access_box2(box2,mario1,access);
       SDL_BlitSurface(mario.perso,NULL,lvl1,&mario.posperso);SDL_BlitSurface(mario1.perso,NULL,lvl1,&mario1.posperso);
    SDL_BlitSurface( box1.box,NULL,lvl1,&box1.posbox); SDL_BlitSurface( box2.box,NULL,lvl1,&box2.posbox); 
if (enemy3.direction % 2 == 0 )
 {      enemy3.en=IMG_Load("en2.png");     
enemy3 = deplacement_aleatoire(enemy3);
SDL_BlitSurface( enemy3.en,NULL,lvl1,&enemy3.posen);}
 else if (enemy3.direction %2 == 1 )
 {      enemy3.en=IMG_Load("en21.png");     
enemy3 = deplacement_aleatoire(enemy3);
SDL_BlitSurface( enemy3.en,NULL,lvl1,&enemy3.posen);}
  SDL_Flip(lvl1);
 SDL_Flip(screen);
   ;
   }
   SDL_FreeSurface(lvl1);SDL_FreeSurface(lvll);
SDL_FreeSurface(enemy1.en);SDL_FreeSurface(enemy2.en);SDL_FreeSurface(enemy3.en);SDL_FreeSurface(box1.box);SDL_FreeSurface(box2.box);SDL_FreeSurface(mario.perso);SDL_FreeSurface(mario1.perso);
   SDL_FreeSurface(screen);
     SDL_Quit();
 printf("%d  %d ",x1,y1);
    return 0;
}
