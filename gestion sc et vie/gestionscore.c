#include <SDL/SDL.h>
#include <stdio.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "personnage.h"


int gestionscore()
{

personnage p;
p.score=50;
    while ((tempsJeu != 300000) && (p.score != 0))
    {

        if (perfectpixel() == 1)
        {
            while (tempsEnigme != 30000)
            {
                if (resolutionEnigme == 1)
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
            if ((tempsEnigme == 30000) &&(resolutionEnigme != 1))
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
