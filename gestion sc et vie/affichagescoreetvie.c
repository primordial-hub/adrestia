#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "personnage.h"
void afficherpersonnage()
{
    TTF_Init();
    TTF_Font *bigpolice;
    bigpolice = TTF_OpenFont(".ttf", 95);
    SDL_Color couleurrouge = {255, 0, 0};
    SDL_Rect posimg, posimg1, postxt;
    personnage p;
    char scorech[50];
    SDL_Surface *texte;
    SDL_Rect postxt;

    int i, j;

    //****************positions des images***********************
    postxt.x = 810;
    postxt.y = 10;
    posimg.x = 0;
    posimg.y = 10;
    posimg1.x = 1300-img1->w-postxt.x;
    posimg1.y = 10;

    //expl : chargement+transparence+Blit(background) et texte ***********************
    img = IMG_Load("lives.png");
    img1 = IMG_Load("sc.png");
    SDL_SetColorKey(img1, SDL_SRCCOLORKEY, SDL_MapRGB(img1->format, 255, 255, 255));
    SDL_SetColorKey(img, SDL_SRCCOLORKEY, SDL_MapRGB(img->format, 255, 255, 255));
    SDL_BlitSurface(img, NULL, screen, &posimg);
    SDL_BlitSurface(img1, NULL, screen, &posimg1);
    strcpy("0000", scorech);
    texte = TTF_RenderText_Blended(bigpolice, scorech, couleurrouge);
    SDL_Flip(screen);

    i = gestionvie();
    j = gestionscore();
    sprintf(scorech, "Score du joueur :", j);
    SDL_BlitSurface(texte, NULL, screen, &postxt);
    if (i == 2)
    { 
        img = IMG_Load("lives2.png");
        SDL_BlitSurface(img, NULL, screen, &posimg);
    }
    if (i == 1)
    {
        img = IMG_Load("lives1.png");
        SDL_BlitSurface(img, NULL, screen, &posimg);
    }
    if (i == 0)
    {
        img = IMG_Load("no.png");
        SDL_BlitSurface(img, NULL, screen, &posimg);
    }

SDL_Flip(screen);

SDL_FreeSurface(screen);
SDL_FreeSurface(img1);
SDL_FreeSurface(img);

SDL_Quit();
}
