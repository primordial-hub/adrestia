

#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include"SDL/SDL_ttf.h"
#include "enigme.h"

int gestion_temp_enigme_text(Enigme enig,SDL_Surface *screen,FILE *fic1) 
{  

int continuer = 1,tempsPrecedent=0,tempsActuel=0;


   
    /*SDL_WM_SetCaption("Gestion du temps en SDL", NULL);


    SDL_EnableKeyRepeat(10, 10);*/
   
    while (continuer)
    {   SDL_Event event;
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
//printf("sd%dsd",SDL_GetTicks());
         tempsActuel = SDL_GetTicks();
//printf("%d",tempsActuel);
enig.resolution=resolution(fic1,enig);

while((tempsActuel - tempsPrecedent >enig.tmp_enig )||(enig.resolution==0) )/* Si les ms se sont écoulées ou reponse correcte*/
{
if(tempsActuel - tempsPrecedent >enig.tmp_enig )
    return 0;

else
  return 1;
 tempsPrecedent = tempsActuel;
}
       }
        
        SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);
    
    SDL_Quit();

}

int gestion_temp_enigme_img(Enigme enig,SDL_Surface *screen,FILE *fic1) 
{  

int continuer = 1,tempsPrecedent=0,tempsActuel=0;


   
    /*SDL_WM_SetCaption("Gestion du temps en SDL", NULL);


    SDL_EnableKeyRepeat(10, 10);*/
   
    while (continuer)
    {   SDL_Event event;
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
//printf("sd%dsd",SDL_GetTicks());
         tempsActuel = SDL_GetTicks();
//printf("%d",tempsActuel);
enig.resolution=resolution_image(fic1,enig);

while((tempsActuel - tempsPrecedent >enig.tmp_enig )||(enig.resolution==0) )/* Si les ms se sont écoulées ou reponse correcte*/
{
if(tempsActuel - tempsPrecedent >enig.tmp_enig )
    return 0;

else
  return 1;
 tempsPrecedent = tempsActuel;
}
       }
        
        SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);
    
    SDL_Quit();

}




















