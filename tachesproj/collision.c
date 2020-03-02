#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>

SDL_Color GetPixel(SDL_Surface *pSurface, int x, int y)
{
    SDL_Color color;
    Uint32 col = 0;
    //Determine position
    char *pPosition = (char *)pSurface->pixels;
    pPosition += (pSurface->pitch * y);
    pPosition += (pSurface->format->BytesPerPixel * x);
    memcpy(&col, pPosition, pSurface->format->BytesPerPixel);
    //convertir color
    SDL_GetRGB(col, pSurface->format, &color.r, &color.g, &color.b);
    return (color);
}

void cond(SDL_Color c)
{
    SDL_Color com = {0, 0, 0};
    if (&c == com)
    {

    }
}