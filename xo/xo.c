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

void initXo(char M[3][3])
{
    int k = 0, i, j;
    char n[2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            k++;
            sprintf(n, "%d", k);
            M[i][j] = n[0];
        }
    }
}
void printForMe(char M[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", M[i][j]);
        }
        printf("\n");
    }
}
void play1(char *player, char M[3][3], int *c, int *t, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int test)
{
    printf("c est le tour de l ordinateur\n");
    if ((*c) == 0)
    {
        o_position.x = 312;
        o_position.y = 110;
        SDL_BlitSurface(ko, NULL, screen, &o_position);
        M[0][0] = 'o';
        (*c)++;
        test=1;
    }
    else if ((*c) == 1 && test==0)
    {
        (*c)++;
        if (M[2][0] == '7')
        {
            o_position.x = 312;
            o_position.y = 498;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[2][0] = 'o';
            (*t) = 1;
        }
        else
        {
            o_position.x = 760;
            o_position.y = 116;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][2] = 'o';
            (*t) = 2;
        }
        test=1;
    }
    else if ((*c) == 2 && test==0)
    {
        (*c)++;
        test=1;
        if ((*t) == 1)
        {
            if (M[1][0] == '4')
            {
                o_position.x = 312;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][0] = 'o';
            }
            else if (M[1][1] == 'x')
            {
                o_position.x = 760;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][2] = 'o';
                (*t) = 3;
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
        if ((*t) == 2)
        {
            if (M[0][1] == '2')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
    }
    else if ((*c) == 3 && test==0)
    { test=1;
        if ((*t) == 1)
        {
            if (M[1][1] == '5')
            {
                o_position.x = 536;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][1] = 'o';
            }
            else if (M[2][1] == '8')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
            }
        }
        if ((*t) == 2)
        {
            if (M[1][1] == '5')
            {
                o_position.x = 536;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][1] = 'o';
            }
            else if (M[0][1] == '2')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
        }
        if ((*t) == 3)
            (*c)++;
        {
            if (M[2][1] == 'x')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
                (*t) = 4;
            }
            else if (M[0][1] == 'x')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
                (*t) = 5;
            }
            else if (M[2][2] == 'x')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
                (*t) = 6;
            }
            else if (M[0][2] == 'x')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
                (*t) = 7;
            }
        }
    }
    else if ((*c) == 4 && test==0)
    {
        if ((*t) == 4)
        {
            if (M[0][2] == '3')
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
        else if ((*t) == 5)
        {
            if (M[2][2] == '9')
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
        }
        else if ((*t) == 6)
        {
            if (M[0][2] == '3')
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][2] = 'o';
            }
        }
        else if ((*t) == 7)
        {
            if (M[2][2] == '9')
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
            else
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
        }
    }
    (*player) = 'x';
}
void play3(char *player, char M[3][3], int *c, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int testk)
{
    int Xc = 0, Oc = 0, i, j, test = 0;
    printf("c est le tour de l ordinateur\n");
    if ((*c) == 0)
    {
        if (M[1][1] == '5')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
        else
        {
            o_position.x = 312;
            o_position.y = 110;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][0] = 'o';
        }
        (*c)++;
testk=1;
    }
    if ((*c) > 0 && testk==0)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (M[i][j] == 'x')
                    Xc++;
                else if (M[j][i] == 'o')
                    Oc++;
                if (Oc == 2)
                {
                    if (M[i][0] != 'x' && M[i][0] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][0] = 'o';
                        test = 1;
                    }
                    else if (M[i][1] != 'x' && M[i][1] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][1] = 'o';
                        test = 1;
                    }
                    else if (M[i][2] != 'x' && M[i][2] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][2] = 'o';
                        test = 1;
                    }
                }
                if (Xc == 2)
                {
                    if (M[i][0] != 'x' && M[i][0] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][0] = 'o';
                        test = 1;
                    }
                    else if (M[i][1] != 'x' && M[i][1] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][1] = 'o';
                        test = 1;
                    }
                    else if (M[i][2] != 'x' && M[i][2] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][2] = 'o';
                        test = 1;
                    }
                }
            }
            Xc = 0;
            Oc = 0;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (M[j][i] == 'x')
                    Xc++;
                else if (M[j][i] == 'o')
                    Oc++;
                if (Oc == 2)
                {
                    if (M[0][i] != 'x' && M[0][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[0][i] = 'o';
                        test = 1;
                    }
                    else if (M[1][i] != 'x' && M[1][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[1][i] = 'o';
                        test = 1;
                    }
                    else if (M[2][i] != 'x' && M[2][i] != 'o' && test == 0)
                    {
                        M[2][i] = 'o';
                        test = 1;
                    }
                }
                if (Xc == 2)
                {
                    if (M[0][i] != 'x' && M[0][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[0][i] = 'o';
                        test = 1;
                    }
                    else if (M[1][i] != 'x' && M[1][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[1][i] = 'o';
                        test = 1;
                    }
                    else if (M[2][i] != 'x' && M[2][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[2][i] = 'o';
                        test = 1;
                    }
                }
            }
            Xc = 0;
            Oc = 0;
        }
        if (M[0][0] == 'x' && M[1][1] == 'x')
            o_position.x = 760;
        o_position.y = 498;
        SDL_BlitSurface(ko, NULL, screen, &o_position);
        M[2][2] = 'o';
        if (M[1][1] == 'x' && M[2][2] == 'x')
        {
            o_position.x = 312;
            o_position.y = 110;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][0] = 'o';
        }
        if (M[0][0] == 'x' && M[2][2] == 'x')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
        if (M[0][2] == 'x' && M[1][1] == 'x')
        {
            o_position.x = 312;
            o_position.y = 498;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[2][0] = 'o';
        }
        if (M[1][1] == 'x' && M[2][0] == 'x')
        {
            o_position.x = 760;
            o_position.y = 116;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][2] = 'o';
        }
        if (M[0][2] == 'x' && M[2][0] == 'x')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
    }
    (*player) = 'x';
}
void play2(char *player, char M[3][3], int x, int y, SDL_Surface *kx, SDL_Rect x_position, SDL_Surface *screen)
{
    int i, j;
    char pos;
    /* printf("c est votre tour \n");*/
    printf("choisir une position joueur %c\n",*player);

if((y>106 && y<260 )&&(x>302 && x<489 ))
{
        x_position.x = 312;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][0] = 'x';
}   
if((y>106 && y<260 )&&(x>526 && x<713 ))
{
        x_position.x = 526;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][1] = 'x';
} 
if((y>106 && y<260 )&&(x>750 && x<937 ))
{
        x_position.x = 760;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][2] = 'x';
} 
if((y>298 && y<452 )&&(x>302 && x<489 ))
{
        x_position.x = 312;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][0] = 'x';
} 
if((y>298 && y<452 )&&(x>526 && x<713 ))
{
        x_position.x = 536;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][1] = 'x';
} 
if((y>298 && y<452 )&&(x>750 && x<937 ))
{
        x_position.x = 760;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][2] = 'x';
} 
if((y>488 && y<642 )&&(x>302 && x<489))
{
        x_position.x = 312;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][0] = 'x';
} 
if((y>488 && y<642 )&&(x>526 && x<713))
{
        x_position.x = 536;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][1] = 'x';
} 
if((y>488 && y<642 )&&(x>750 && x<937))
{
        x_position.x = 760;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][2] = 'x';
} 
    
    (*player)='o';
}
int whowin(char M[3][3])
{
    int Xc = 0, Oc = 0, i, j, cp = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (M[i][j] == 'x')
                Xc++;
            else if (M[i][j] == 'o')
                Oc++;
            if (Xc == 3)
                return 1;
            if (Oc == 3)
                return 2;
        }
        Xc = 0;
        Oc = 0;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (M[j][i] == 'x')
                Xc++;
            else if (M[j][i] == 'o')
                Oc++;
            if (Xc == 3)
                return 1;
            if (Oc == 3)
                return 2;
        }
        Xc = 0;
        Oc = 0;
    }
    if (M[0][0] == 'x' && M[1][1] == 'x' && M[2][2] == 'x')
        return 1;
    if (M[0][2] == 'x' && M[1][1] == 'x' && M[2][0] == 'x')
        return 1;
    if (M[0][0] == 'o' && M[1][1] == 'o' && M[2][2] == 'o')
        return 2;
    if (M[0][2] == 'o' && M[1][1] == 'o' && M[2][0] == 'o')
        return 2;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((M[i][j] != 'x') && (M[i][j] != 'o'))
                cp++;
        }
    }
    if (cp == 0)
        return 3;
    return 0;
}
