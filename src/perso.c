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

int DoCollision(SDL_Surface *map,int xx, int yy,int hh,int ww)
{
    
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Ex, Ey, Fx, Fy, Gx, Gy, Hx, Hy;
    SDL_Color Pixel;
    SDL_LockSurface(map);
   // if (per.posperso.y > 84 && per.posperso.y < 684)
    {
        Ax = xx ;
        Ay = yy ;
        Dx = xx ;
        Dy = hh ;
        Bx = ww ;
        By = yy ;
        Cx = ww ;
        Cy = hh ;
        Ex = (ww/2) ;
        Ey = yy ;
        Fx = (ww/2) ;
        Fy = hh ;
        Gx = ww ;
        Gy = (hh/2) ;
        Hx = xx-1 ;
        Hy = (hh/2) ;
        Pixel = GetPixel(map, Fx, Fy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3;//G milouta fil wist                    3
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milouta fil wist                    5 
        Pixel = GetPixel(map, Gx, Gy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 2;//G milkodam fil wist                   2
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milkodam fil wist                   5
        Pixel = GetPixel(map, Ax, Ay);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 1;//G milfouk 3al isar                    1
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milfouk 3al isar                    5
        Pixel = GetPixel(map, Dx, Dy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3;//G milouta 3al isar                    3 
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milouta 3al isar                    5
        Pixel = GetPixel(map, Bx, By);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 1;//G milfouk 3al imin                    1
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milfouk 3al imin                    5
        Pixel = GetPixel(map, Cx, Cy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 3;//G milouta 3al imin                    3
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milouta 3al imin                    5
        Pixel = GetPixel(map, Ex, Ey);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 1;//G milfouk fil wist                    1
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B milfouk fil wist                    5
             Pixel = GetPixel(map, Hx, Hy);
        if (Pixel.r == 0 && Pixel.g == 200 && Pixel.b == 0)
            return 4;//G miltali fil wist                    4 
        if (Pixel.r == 1 && Pixel.g == 0 && Pixel.b == 200)
            return 5;//B miltali fil wist                    5


SDL_UnlockSurface(map);
        return 0;
    }
}

int tellmewhattodo(SDL_Surface *map,int xx,int yy,int hh,int ww)
{
  if (DoCollision(map,xx,yy,hh,ww)==5)
  {
      return 1;
  }
  if (DoCollision(map,xx,yy,hh,ww)==1 || DoCollision(map,xx,yy,hh,ww)==2 || DoCollision(map,xx,yy,hh,ww)==3)
  {
      return 2;
  }
  if (DoCollision(map,xx,yy,hh,ww)==1 || DoCollision(map,xx,yy,hh,ww)==4 || DoCollision(map,xx,yy,hh,ww)==3)
  {
      return 3;
  }
    return 0;
}
