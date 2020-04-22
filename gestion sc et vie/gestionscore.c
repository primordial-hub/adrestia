#include <SDL/SDL.h>
#include <stdio.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "personnage.h"
#include "enigme.h"

int gestionscore(Enigme enig,SDL_Surface *screen,FILE *fic1)
{

personnage p;
p.score=50;
    while ((gestion_temp_jeu(enig,screen)!= 300000) && (p.score != 0))
    {

        if (perfectpixel() == 1)
        {
            while (gestion_temp_jeu(enig,screen)!= 30000)
            {
                if (resolution(fic1,enig)== 1)
                { //son reponse juste
                    son = Mix_LoadWAV(".wav");
                    Mix_PlayChannel(1, son, 0);
                    p.score = p.score + 20;
                    
                }
                else
                { //son reponse incorrecte
                    son = Mix_LoadWAV(".wav");
                    Mix_PlayChannel(1, son, 0);
                    p.score = p.score- 20;
                }
            }
            if ((gestion_temp_jeu(enig,screen)== 30000) &&(resolution(fic1,enig)!= 1))
            {
                son = Mix_LoadWAV(".wav");
                Mix_PlayChannel(1, son, 0);
                p.score= p.score - 20;
            }
        }
    }
        SDL_FreeSurface(texte);
        Mix_FreeChunk(son);
        SDL_CloseAudio();
        SDL_Quit();
        return p.score;
}
