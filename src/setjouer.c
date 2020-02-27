#include "setjouer.h"

SDL_Surface *setjouer = NULL;
SDL_Rect possetjouer;
int x3, y3, setj = -1;

void setjouersouris(int *jouer)
{
  SDL_Event eventj;
  SDL_WaitEvent(&eventj);
  switch (eventj.type)
  {

  case SDL_MOUSEBUTTONUP:
    x3 = eventj.button.x;
    y3 = eventj.button.y;
    break;
  case SDL_KEYDOWN:
  {
    switch (eventj.key.keysym.sym)
    {
    case SDLK_UP:
      setj++;
      break;
    case SDLK_DOWN:
      setj++;
      break;
    case SDLK_RETURN:
      if (setj % 2 == 1)
      {
        *jouer = 0;
      }
      break;
    }
    x3 = 0;
    y3 = 0;
  }
  break;
  case SDL_QUIT:
    *jouer = 0;
    break;
  }

  possetjouer.x = 0;
  possetjouer.y = 0;
  setjouer = IMG_Load("images/setjouer0.png");
  SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);

  if (setj == -1)
  {
    setjouer = IMG_Load("images/setjouer0.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }

  if (setj % 2 == 0)
  {
    setjouer = IMG_Load("images/setjouer1.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }

  if (setj % 2 == 1)
  {
    setjouer = IMG_Load("images/setjouer2.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }
  if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 594) && (y3 < 594 + 68))
  {
    setj = 0;
    x3 = 0;
    y3 = 0;
    setjouer = IMG_Load("images/setjouer1.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }
  if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 682) && (y3 < 682 + 68))
  {

    setj = 1;
    x3 = 0;
    y3 = 0;
    *jouer = 0;
     setjouer = IMG_Load("images/setjouer2.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }

  SDL_Flip(screen);
}
