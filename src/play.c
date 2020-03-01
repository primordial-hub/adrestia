#include "play.h"

void play(int *jouer)
{

  SDL_Surface *logoo = NULL;
  SDL_Rect poslogoo;
  SDL_Event jj;
  int a = 1;
  poslogoo.x = 0;
  poslogoo.y = 0;
  logoo = IMG_Load("images/st.jpg");
  SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
  while (*jouer == 1)
  {
    SDL_WaitEvent(&jj);
    SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
    if (jj.type == SDL_KEYDOWN)
    {
      if ((jj.key.keysym.sym == SDLK_ESCAPE) && (sett != 1))
      {
        a++;
      }
    }
    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }
    SDL_Flip(screen);
  }
  if (*jouer == 0)
  {
    a = 1;
    exitsetting = 1;
    s1 = 1;
    sett = 0;
    sb1 = 1;
    sb2 = 2;
    sb3 = 1;
    sb4 = 1;
  }
}
