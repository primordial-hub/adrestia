#include "defs.h"

struct Personnage1
{
  SDL_Surface *perso;
  SDL_Rect posperso;
  
  SDL_Rect position_init;
 };
typedef struct Personnage1 personnage1;



 personnage1 per;

 personnage1 init_perso ();


 //personnage1 domagic ();
  int tellmewhattodo (SDL_Surface *map,int xx,int yy, int hh, int ww);

  int DoCollision (SDL_Surface *map,int xx,int yy, int hh, int ww);
