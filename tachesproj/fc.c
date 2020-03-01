#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "main.h"
enemy deplacement_aleatoire(enemy enemy1)
{ 
 if (enemy1.direction % 2 ==1){  if (enemy1.posen.x<enemy1.position_initiale + enemy1.distance ) {enemy1.posen.x+=10;   }
         else  { enemy1.direction++; } }
        else if (enemy1.direction % 2 ==0)
              {  if (enemy1.posen.x>enemy1.position_initiale ) {enemy1.posen.x-=10;   }
         else  { enemy1.direction++; } }  
   return (enemy1) ;   
}

