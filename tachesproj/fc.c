#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "main.h"
enemy deplacement_aleatoire(enemy enemyy)
{ 
 if (enemyy.direction % 2 ==1){  if (enemyy.posen.x<enemyy.position_initiale + enemyy.distance ) {enemyy.posen.x+=10;   }
         else  { enemyy.direction++; } }
        else if (enemyy.direction % 2 ==0)
              {  if (enemyy.posen.x>enemyy.position_initiale ) {enemyy.posen.x-=10;   }
         else  { enemyy.direction++; } }  
   return (enemyy) ;   
}
personnage access_box1 (box boxx,personnage persbox1, int access_box1)
  {
      if (access_box1 == 2)
         {
             if (( persbox1.posperso.y < 800 )&&(persbox1.posperso.x != 1252))
                  {
                     persbox1.posperso.y+=30;
                  }
             else if (persbox1.posperso.y > 800)      
                {
                  persbox1.posperso.y=0;persbox1.posperso.x= 1252;}
                   
                   if ( (persbox1.posperso.y < 158  )&&(persbox1.posperso.x == 1252))
                         { persbox1.posperso.y+=60;}
                
                
           }

  return persbox1 ;
  }
