#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include"SDL/SDL_ttf.h"
#include "enigme.h"

int gestion_temp_jeu(Enigme enig,SDL_Surface *screen)
{  

TTF_Init();  
TTF_Font *fontTest1;
fontTest1=TTF_OpenFont("DUSTY RANCH PERSONAL USE.ttf",10);
SDL_Color fontColor={0,255,255};

char tempsjeu[50];
sprintf(tempsjeu,"%d",SDL_GetTicks());
enig.surf_enig=TTF_RenderText_Solid(fontTest1,tempsjeu,fontColor);
enig.enigme_position.x=200;
enig.enigme_position.y=200;
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);

int intervall = 1000,tempsPrecedent=0,tempsActuel=0;
while(1){
SDL_Event event;
 tempsActuel = SDL_GetTicks();
if(SDL_PollEvent(&event))
{
if(event.type==SDL_QUIT){break;}
else if (event.type==SDL_KEYDOWN){
if(event.key.keysym.sym==SDLK_ESCAPE){break;}
}
if(tempsActuel - tempsPrecedent <intervall)
{SDL_Delay(intervall-(tempsActuel - tempsPrecedent));}
}
SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format,0, 0, 0));/*?*/
sprintf(tempsjeu," %d",tempsActuel);
enig.surf_enig=TTF_RenderText_Solid(fontTest1,tempsjeu,fontColor);
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
SDL_Flip(screen);
 tempsPrecedent = tempsActuel;
}

    SDL_FreeSurface(screen);
    SDL_FreeSurface(enig.surf_enig);
    SDL_Flip(screen);
    TTF_Quit();
    SDL_Quit();
return tempsActuel ;
}
