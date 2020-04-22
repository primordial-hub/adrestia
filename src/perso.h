#include "defs.h"
#include "entsec.h"

struct Personnage1
{
  SDL_Surface *perso;
  SDL_Rect posperso;

  SDL_Rect position_init;
};
typedef struct Personnage1 personnage1;

personnage1 per;

personnage1 init_perso();

int tellmewhattodo(SDL_Surface *map, SDL_Rect x);

int DoCollision(SDL_Surface *map, int xx, int yy, int hh, int ww);

int graviti(int x, int c);

personnage1 tellmewhy(int check, personnage1 per);
int callenemy(personnage1 per, enemy en);
//int frapjump(personnage1 per, enemy en);
