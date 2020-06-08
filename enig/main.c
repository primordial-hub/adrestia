#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enigme.h"
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include <math.h>
#include <time.h>

int main(){
Enigme enig;
FILE *fic1;
FILE *fic;
char B[4];
char eq1[11];
char eq[20];
char general[20];
int U0,U1,Un,n;
float res_lin;
//int r;
enig.tmp_enig=1500;
int k;
SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO);
SDL_Surface *screen=NULL;
screen=SDL_SetVideoMode(1300,800,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_Flip(screen);
//afficher_img(&enig,screen,fic1);
//afficher_suite(&enig,screen,general,&U0,&U1,&Un,&n,fic1);
//afficher_lin(&enig,screen,&res_lin,eq,fic1);
 //test(screen,general,&U0,&U1,&Un,&n);
afficher_texte(&enig,screen,fic1,fic);

/*TTF_Font *fontTest;
    fontTest = TTF_OpenFont("khal.otf", 10);
    SDL_Color Color_enigme = {0, 255, 255};
suite_arithmetique(general,&U0, &U1, &Un, &n);
    enig.surf_enig = TTF_RenderText_Solid(fontTest, general, Color_enigme);
    enig.enigme_position.x = 100;
    enig.enigme_position.y = 100;
    SDL_BlitSurface(enig.surf_enig, NULL, screen, &enig.enigme_position);

do{
do{
    printf("1-temp\n2-aff_text\n3-aff_suite\n4-aff_lin\n");
    scanf("%d",&r);}
while((r<0)||(r>4));
switch(r){
case 1:
k=gestion_temp_jeu(screen);
printf("%d\n",k);/*
break;
case 2:
afficher_texte(enig,screen,fic1,fic);
break;//afficher_img(Enigme enig,SDL_Surface *screen);
case 3:
suite_arithmetique(general,&U0,&U1,&Un,&n);
printf("%s    %d",general,Un);
afficher_suite(&enig,screen,general,&U0,&U1,&Un,&n,fic1);
break;
case 4:
afficher_lin(&enig,screen,&res_lin,eq,fic1);
break;}
}while(r!=0);*/
return 0;
}
