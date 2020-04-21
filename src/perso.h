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
  int tellmewhattodo (SDL_Surface *map,SDL_Rect x);

  int DoCollision (SDL_Surface *map,int xx,int yy, int hh, int ww);


SDL_Rect rjump_perso(SDL_Surface *sur, SDL_Surface *sec, SDL_Rect x, SDL_Rect y, int test);
SDL_Rect jump_perso(SDL_Surface *sur, SDL_Surface *sec, SDL_Rect x, SDL_Rect y, int test);
int graviti(int x, int c,int b);

personnage1 tellmewhy (int check,int test1,personnage1 per);





