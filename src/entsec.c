#include "defs.h"
#include "entsec.h"
enemy deplacement_aleatoire(enemy enemyy)
{
   if (enemyy.direction % 2 == 1)
   {
      if (enemyy.posen.x < enemyy.position_initiale + enemyy.distance)
      {
         enemyy.posen.x += 10;
      }
      else
      {
         enemyy.direction++;
      }
   }
   else if (enemyy.direction % 2 == 0)
   {
      if (enemyy.posen.x > enemyy.position_initiale)
      {
         enemyy.posen.x -= 10;
      }
      else
      {
         enemyy.direction++;
      }
   }
   return (enemyy);
}
personnage access_box1(box boxx, personnage persbox1, int access_box1)
{
   if (access_box1 == 2)
   {
      if ((persbox1.posperso.y < 800) && (persbox1.posperso.x != 1252))
      {
         persbox1.posperso.y += 30;
      }
      else if (persbox1.posperso.y > 800)
      {
         persbox1.posperso.y = 0;
         persbox1.posperso.x = 1252;
      }

      if ((persbox1.posperso.y < 158) && (persbox1.posperso.x == 1252))
      {
         persbox1.posperso.y += 60;
      }
   }

   return persbox1;
}
personnage access_box2(box boxx, personnage persbox2, int access_box1)
{

   if (access_box1 == 2)
   {
      if (persbox2.posperso.x != 2612)
      {
         persbox2.posperso.y += 30;
      }
      else if (persbox2.posperso.y > 800)
      {
         persbox2.posperso.y = 0;
         persbox2.posperso.x = 2612;
      }

      if ((persbox2.posperso.y < 400) && (persbox2.posperso.x == 2612))
      {
         persbox2.posperso.y += 28;
      }
   }

   return persbox2;
}
