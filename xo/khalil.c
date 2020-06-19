#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "xo.h"
void xo(SDL_Surface *screen)
{
    char M[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'x';
    int i, x, y, c = 0, t, test = 0;
    char B[20];

    TTF_Font *fontTest1;
    fontTest1 = TTF_OpenFont("xo/khal.otf", 30);
    SDL_Color fontColor = {0, 255, 255};
    SDL_Surface *kx = NULL;
    SDL_Rect x_position;
    SDL_Surface *ko = NULL;
    SDL_Rect o_position;
    SDL_Surface *joueur = NULL;
    SDL_Rect tab_position;
    SDL_Surface *khal = NULL;
    SDL_Rect a_position;
    ko = IMG_Load("xo/o.png");
    kx = IMG_Load("xo/x.png");
    joueur = IMG_Load("xo/tab.png");
    SDL_SetColorKey(joueur, SDL_SRCCOLORKEY, SDL_MapRGB(joueur->format, 255, 255, 255));
    tab_position.x = 300;
    tab_position.y = 70;
    SDL_BlitSurface(joueur, NULL, screen, &tab_position);

    SDL_Event event;
    SDL_WaitEvent(&event);

    if (player == 'o')
    {
        play1(&player, M, &c, &t, ko, o_position, screen, test);
    }
    if (event.type == SDL_MOUSEBUTTONDOWN)
    {

        if (event.button.button == SDL_BUTTON_LEFT)
        {
            x = event.button.x;
            y = event.button.y;
            SDL_BlitSurface(joueur, NULL, screen, &tab_position);

            //while (whowin(M) == 0)
            //{
            test = 0;

            if (player == 'x')
            {
                play2(&player, M, x, y, kx, x_position, screen);
            }
            printForMe(M);
            //}
            i = whowin(M);
            if (i != 0)
            {
                switch (i)
                {
                case 1:
                    strcpy(B, "player x win");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("player x win\n");
                    break;
                case 2:
                    strcpy(B, "PC win");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("PC win\n");
                    break;
                case 3:
                    strcpy(B, "matche NULL");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("matche NULL\n");
                    break;
                }
            }
        }
    }
    SDL_Flip(screen);

    SDL_FreeSurface(khal);
    SDL_FreeSurface(kx);
    SDL_FreeSurface(ko);
    SDL_FreeSurface(joueur);
}
