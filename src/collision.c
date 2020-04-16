#include "collision.h"
SDL_Color GetPixel(SDL_Surface *pSurface,int x, int y)
{
        SDL_Color color;
        Uint32 col=0;
        char* pPosition = (char*) pSurface->pixels;
        pPosition +=(pSurface->pitch*y);
        pPosition +=(pSurface->format->BytesPerPixel*x);
        memcpy(&col, pPosition,pSurface->format->BytesPerPixel);
        SDL_GetRGB(col,pSurface->format, &color.r,&color.g,&color.b);
        return (color);
}


int DoCollision(SDL_Surface *map)
{
        Uint32 Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Ex,Ey,Fx,Fy,Gx,Gy;
        SDL_Color Pixel;
        SDL_LockSurface(map);
        if(imagec.y>84&&imagec.y<684)
        {
                Ax=imagec.x+image->w-Mapc.x;
                Ay=imagec.y+(image->h/2)-84;
                Dx=imagec.x-Mapc.x;
                Dy=imagec.y+(image->h/2)-84;
                Bx=imagec.x-Mapc.x+112;
                By=imagec.y+image->h-84;
                Cx=imagec.x-Mapc.x+17;
                Cy=imagec.y+image->h-84;
                Ex=imagec.x+81-Mapc.x;
                Ey=imagec.y-84;
                Fx=imagec.x+115-Mapc.x;
                Fy=imagec.y+image->h-84-40;
                Gx=imagec.x+20-Mapc.x;
                Gy=imagec.y+image->h-84-40;
                Pixel=GetPixel(map,Fx,Fy);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 2;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Gx,Gy);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 3;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Ax,Ay);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 2;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Dx,Dy);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 3;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Bx,By);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 1;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Cx,Cy);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 1;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;
                Pixel=GetPixel(map,Ex,Ey);
                if(Pixel.r==0&&Pixel.g==200&&Pixel.b==0)
                        return 4;
                if(Pixel.r==1&&Pixel.g==0&&Pixel.b==200)
                        return 5;

                return 0;
        }
        return 0;
        SDL_UnlockSurface(map);
}
