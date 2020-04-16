#include <SDL/SDL.h>
#include <stdio.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "personnage.h"


//initialisation
int gestionvie()
{
personnage p;
p.score=10;
p.vie = 3;
SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_DOUBLEBUF);

if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
{
    printf("%s", Mix_GetError());
}
Mix_AllocateChannels(32);
Mix_Chunk *son;


if ((tempsJeu == 30000) && (p.score == 0))
{ //vie no hearts
    p.vie = 0;
    //son gameover
    son = Mix_LoadWAV(".wav");
    Mix_PlayChannel(1, son, 0);
}
else
{
    while ((tempsJeu != 300000) && (score != 0))
    {
        if (BoundingBox() == 1)
        {
            p.vie--;
            //son vie loss
            son = Mix_LoadWAV(".wav");
            Mix_PlayChannel(1, son, 0);
        }
    }
}
SDL_FreeSurface(son);
SDL_Quit();
return p.vie;
}
