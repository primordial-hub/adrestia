#include "enigme.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include <math.h>
#include <time.h>
int main() {
int r,ri,c;
do{
do{
printf("choisir\n1-enregistrer_enigme\n2-extrere_enigme\n ");
printf("3-resolution\n4-resolution_image\n5-extrere_reponse\n6\n7\n8\n9\n10\n");
scanf("%d",&c);
}while((c<10)||(c>0));
switch(c){
case 1:
 enregistrer_enigme(fic);
break;
case 2:
 extrere_enigme(fic,&enig);
break;
case 3:
 enregistrer_reponse_corr(fic1);
break;
case 4:
r=resolution(fic1,&enig);
break;
case 5:
ri=resolution_image(fic1,&enig);
break;
case 6:
 extrere_reponse(fic1,&enig);
break;
case 7:
extrere_reponse(fic1,&enig);
break;
case 8:
eq_linaire (&res_lin,eq);
break;
case 9:
suite_arithmetique(general,&U0,&U1,&Un,&n);
break;
case 10:
polynome_2(eq1);
break;
}
}while(c!=0);
return (0);
}
