#include "option.h"


void down_menu(int *n, int *l, int *s, int *e, int *e1)
{
    if (*e == 2)
    {
        *n = 2;
        *e = 1;
        *l = 1;
        *s = 1;
        *e1 = 1;
    }
    else if (*n == 2)
    {
        *l = 2;
        *n = 1;
        *s = 1;
        *e = 1;
        *e1 = 1;
    }
    else if (*l == 2)
    {
        *e = 1;
        *l = 1;
        *n = 1;
        *s = 2;
        *e1 = 1;
    }
    else if (*s == 2)
    {
        *e = 2;
        *l = 1;
        *n = 1;
        *s = 1;
        *e1 = 3;
    }
}

void up_menu(int *n, int *l, int *s, int *e, int *e1)
{
    if (*n == 2)
    {
        *e = 2;
        *n = 1;
        *l = 1;
        *s = 1;
        *e1 = 3;
    }
    else if (*e == 2)
    {
        *e = 1;
        *n = 1;
        *l = 1;
        *s = 2;
        *e1 = 1;
    }
    else if (*s == 2)
    {
        *e = 1;
        *n = 1;
        *l = 2;
        *s = 1;
        *e1 = 1;
    }
    else if (*l == 2)
    {
        *e = 1;
        *n = 2;
        *l = 1;
        *s = 1;
        *e1 = 1;
    }
}

void choix_menu0(int n, int l, int s, int s1, int e, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Surface *img0, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1)
{
    if (n == 1)
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME1);
    }
    else if (n == 2)
    {
        SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
    }
    if (l == 1)
    {
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD1);
    }
    else if (l == 2)
    {
        SDL_BlitSurface(imageLOAD, NULL, screen, &posLOAD);
    }
    if (s == 1)
    {
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS1);
    }
    else if (s == 2)
    {
        SDL_BlitSurface(imageSETTINGS, NULL, screen, &posSETTINGS);
    }
    if (e == 1)
    {
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    }
    else if (e == 2)
    {
        SDL_BlitSurface(imageEXIT, NULL, screen, &posEXIT);
    }
}

void choix_menu(int x, int y, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1)
{
    if ((x > box_x) && (x < box_x + box_w) && (y > box_y) && (y < box_y + box_h))
    {
        SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    }
    if ((x > box_x) && (x < box_x + box_w) && (y > box_y1) && (y < box_y1 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    }
    if ((x > box_x) && (x < box_x + box_w) && (y > box_y2) && (y < box_y2 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    }
    if ((x > box_x) && (x < box_x + box_w) && (y > box_y3) && (y < box_y3 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT, NULL, screen, &posEXIT1);
    }
}
void choix_menu1(int *jouer,int *x1, int *y1, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME2, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD2, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT2, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS2, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1, Mix_Chunk *son, int *continuer, int *s1)
{
    if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y) && (*y1 < box_y + box_h))
    {
        SDL_BlitSurface(imageNEWGAME2, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
        *x1 = 0;
        *y1 = 0;
        Mix_PlayChannel(1, son, 0);
        *jouer=1;
    }  
    if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y1) && (*y1 < box_y1 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD2, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        *x1 = 0;
        *y1 = 0;
        Mix_PlayChannel(1, son, 0);
    }
    if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y2) && (*y1 < box_y2 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS2, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
        *x1 = 0;
        *y1 = 0;
        Mix_PlayChannel(1, son, 0);
        *s1 = 2;
    }
    if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y3) && (*y1 < box_y3 + box_h))
    {
        SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
        SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
        SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
        SDL_BlitSurface(imageEXIT2, NULL, screen, &posEXIT1);
        *x1 = 0;
        *y1 = 0;
        Mix_PlayChannel(1, son, 0);
        *continuer = 0;
    }
}

