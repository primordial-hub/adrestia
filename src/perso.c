#include "defs.h"
#include "perso.h"

personnage1 init_perso()
{

    per.perso = IMG_Load("imperso/per.png");

    per.position_init.x = 300;
    per.position_init.y = 565;

    return per;
}

SDL_Color GetPixel(SDL_Surface *pSurface, int x, int y)
{
    SDL_Color color;
    Uint32 col = 0;
    char *pPosition = (char *)pSurface->pixels;
    pPosition += (pSurface->pitch * y);
    pPosition += (pSurface->format->BytesPerPixel * x);
    memcpy(&col, pPosition, pSurface->format->BytesPerPixel);
    SDL_GetRGB(col, pSurface->format, &color.r, &color.g, &color.b);
    return (color);
}

int DoCollision(SDL_Surface *map, int xx, int yy, int hh, int ww)
{

    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Ex, Ey, Fx, Fy, Gx, Gy, Hx, Hy, Ix, Iy, Jx, Jy;
    SDL_Color Pixel;
    SDL_LockSurface(map);
    // if (per.posperso.y > 84 && per.posperso.y < 684)
    {
        Ax = xx + 10;
        Ay = yy;
        Dx = xx;
        Dy = hh;
        Bx = ww - 10;
        By = yy;
        Cx = ww;
        Cy = hh;
        Ex = ((ww - xx) / 2) + xx;
        Ey = yy;
        Fx = ((ww - xx) / 2) + xx;
        Fy = hh;
        Gx = ww;
        Gy = ((hh - yy) / 2) + yy;
        Hx = xx;
        Hy = ((hh - yy) / 2) + yy;
        Ix = ww;
        Iy = hh - 10;
        Jx = xx;
        Jy = hh - 10;

        Pixel = GetPixel(map, Gx, Gy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 2; //G milkodam fil wist                   2
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milkodam fil wist                   5
        Pixel = GetPixel(map, Ix, Iy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 6; //G point louta ba7tha issak            6
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B point louta ba7tha issak            5
        Pixel = GetPixel(map, Hx, Hy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 4; //G miltali fil wist                    4
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B miltali fil wist                    5
        Pixel = GetPixel(map, Jx, Jy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 7; //G point louta ba7tha sak ltali        7
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B point louta ba7tha sak ltali        5
        Pixel = GetPixel(map, Ex, Ey);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 1; //G milfouk fil wist                    1
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milfouk fil wist                    5
        Pixel = GetPixel(map, Ax, Ay);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 9; //G milfouk 3al isar                    9
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milfouk 3al isar                    5
        Pixel = GetPixel(map, Bx, By);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 8; //G milfouk 3al imin                    8
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milfouk 3al imin                    5
        Pixel = GetPixel(map, Fx, Fy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3; //G milouta fil wist                    3
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milouta fil wist                    5
        Pixel = GetPixel(map, Dx, Dy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3; //G milouta 3al isar                    3
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milouta 3al isar                    5
        Pixel = GetPixel(map, Cx, Cy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3; //G milouta 3al imin                    3
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5; //B milouta 3al imin                    5

        SDL_UnlockSurface(map);
        return 0;
    }
}

int tellmewhattodo(SDL_Surface *map, SDL_Rect x)
{
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 5)
    {
        return 1;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 2)
    {
        return 2;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 4)
    {
        return 3;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 3)
    {
        return 4;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 1)
    {
        return 5;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 6)
    {
        return 6;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 7)
    {
        return 7;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 8)
    {
        return 8;
    }
    if (DoCollision(map, x.x, x.y, x.h, x.w) == 9)
    {
        return 9;
    }
    return 0;
}

int graviti(int x, int c)
{

    if (c != 4)
    {
        x = x + 20;
    }
    return x;
}

personnage1 tellmewhy(int check, personnage1 per)
{
    if (check == 0)
    {
        SDL_Delay(10);
        per.posperso.y = graviti(per.posperso.y, check);
        per.posperso.h = graviti(per.posperso.h, check);
        per.position_init.h = per.posperso.h;
        per.position_init.y = per.posperso.y;
    }

    if (check == 6)
    {
        per.position_init.h = per.position_init.h - 10;
        per.position_init.y = per.position_init.y - 10;
        per.posperso.y = per.posperso.y - 10;
        per.posperso.h = per.posperso.h - 10;
    }
    if (check == 7)
    {
        per.position_init.h = per.position_init.h - 10;
        per.position_init.y = per.position_init.y - 10;
        per.posperso.y = per.posperso.y - 10;
        per.posperso.h = per.posperso.h - 10;
    }
    if (check == 5 || check == 8 || check == 9)
    {
        per.posperso.y = per.posperso.y + 1;
        per.posperso.h = per.posperso.h + 1;
        per.position_init.h = per.position_init.h + 1;
        per.position_init.y = per.position_init.y + 1;
    }

    return per;
}

int callenemy(personnage1 per, enemy en)
{

    if (((per.posperso.x > en.posen.x) && (per.posperso.x < en.posen.x + en.en->w) &&
         (per.posperso.h - 5 > en.posen.y) && (per.posperso.h - 5 < en.posen.y + en.en->h)) ||
        ((per.posperso.w > en.posen.x) && (per.posperso.w < en.posen.x + en.en->w) &&
         (per.posperso.h - 5 > en.posen.y) && (per.posperso.h - 5 < en.posen.y + en.en->h)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*int frapjump(personnage1 per, enemy en)
{
    if ((((per.posperso.x > en.posen.x) && (per.posperso.x < en.posen.x + en.en->w) &&
         (per.posperso.h  > en.posen.y) && (per.posperso.h  < en.posen.y + en.en->h)) ||
        ((per.posperso.w > en.posen.x) && (per.posperso.w < en.posen.x + en.en->w) &&
         (per.posperso.h  > en.posen.y) && (per.posperso.h  < en.posen.y + en.en->h)))
         || (per.perso->w/2 > en.posen.x) && (per.perso->w/2 < en.posen.x + en.en->w) &&
         (per.posperso.h  > en.posen.y) && (per.posperso.h  < en.posen.y + en.en->h))  
    {
       return 1;   
    }
    else
    {
        return 0;
    }
    
}*/