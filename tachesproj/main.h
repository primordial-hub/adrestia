
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
struct perso
 { SDL_Surface *perso;
  SDL_Rect posperso;
  int h;
  int w;
      
  }; 
typedef struct perso personnage;

struct Enemy
{
  SDL_Surface *en;
  SDL_Rect posen;
  int direction;
  int distance;
  int position_initiale;
 };
typedef struct Enemy enemy;
enemy deplacement_aleatoire(enemy enemy1);
