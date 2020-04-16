#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"
#include "SDL/SDL_image.h"
#include "enigme.h"

void afficher_texte(Enigme enig,SDL_Surface *screen,FILE *fic)
{
int tmp_enig;
TTF_Font *fontTest;
fontTest=TTF_OpenFont("DUSTY RANCH PERSONAL USE.ttf",10);
SDL_Color Color_enigme={0,255,255};

extrere_enigme(fic,&enig);
enig.surf_enig=TTF_RenderText_Solid(fontTest,enig.enigme_extr,Color_enigme);
enig. enigme_position.x=500;
enig. enigme_position.y=100;
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig. enigme_position);
SDL_Flip(screen);

enig.surf_choix_A=TTF_RenderText_Solid(fontTest,enig.choix_extr.choix_A,Color_enigme);
enig.choix_A_position.x=700;
enig.choix_A_position.y=400;
SDL_BlitSurface(enig.surf_choix_A,NULL,screen,&enig.choix_A_position);
SDL_Flip(screen);

enig.surf_choix_B=TTF_RenderText_Solid(fontTest,enig.choix_extr.choix_B,Color_enigme);
enig.choix_B_position.x=700;
enig.choix_B_position.y=600;
SDL_BlitSurface(enig.surf_choix_B,NULL,screen,&enig.choix_B_position);
SDL_Flip(screen);

enig.surf_choix_C=TTF_RenderText_Solid(fontTest,enig.choix_extr.choix_C,Color_enigme);
enig.choix_C_position.x=700;
enig.choix_C_position.y=800;
SDL_BlitSurface(enig.surf_choix_C,NULL,screen,&enig.choix_C_position);
SDL_Flip(screen);


tmp_enig=gestion_temp_enigme_text(enig,screen,fic1); 
if(tmp_enig==0)
{
enig.surf_enig=TTF_RenderText_Solid(fontTest,enig.enigme_extr,Color_enigme);
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);

}
else
{
enig.surf_enig=TTF_RenderText_Solid(fontTest,enig.enigme_extr,Color_enigme);
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);



}

while(1){
SDL_Event event;
SDL_PollEvent(&event);
if(event.type==SDL_QUIT){break;}
else if (event.type==SDL_KEYDOWN){
if(event.key.keysym.sym==SDLK_ESCAPE){break;}
}
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
SDL_BlitSurface(enig.surf_choix_A,NULL,screen,&enig.choix_A_position);
SDL_BlitSurface(enig.surf_choix_B,NULL,screen,&enig.choix_B_position);
SDL_BlitSurface(enig.surf_choix_C,NULL,screen,&enig.choix_C_position);
}

SDL_FreeSurface(screen);
SDL_Flip(screen);
SDL_Quit();
}



void afficher_img(Enigme enig,SDL_Surface *screen)
{     
int tmp_enig;

enig.surf_enig=IMG_Load(enig.nom_img);
SDL_SetColorKey(enig.surf_enig,SDL_SRCCOLORKEY, SDL_MapRGB(enig.surf_enig->format,255,255,255));
enig.enigme_position.x=900;
enig.enigme_position.y=100;
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
SDL_Flip(screen);


enig.surf_choix_A=IMG_Load("A.png");
SDL_SetColorKey(enig.surf_choix_A,SDL_SRCCOLORKEY, SDL_MapRGB(enig.surf_choix_A->format,255,255,255));
enig.choix_A_position.x=900;
enig.choix_A_position.y=120+enig.surf_enig->h;
SDL_BlitSurface(enig.surf_choix_A,NULL,screen,&enig.choix_A_position);
SDL_Flip(screen);

enig.surf_choix_B=IMG_Load("B.png");
SDL_SetColorKey(enig.surf_choix_B,SDL_SRCCOLORKEY, SDL_MapRGB(enig.surf_choix_B->format,255,255,255));
enig.choix_B_position.x=920+enig.surf_choix_A->w;
enig.choix_B_position.y=120+enig.surf_enig->h;
SDL_BlitSurface(enig.surf_choix_B,NULL,screen,&enig.choix_B_position);
SDL_Flip(screen);


enig.surf_choix_C=IMG_Load("C.png");
SDL_SetColorKey(enig.surf_choix_C,SDL_SRCCOLORKEY, SDL_MapRGB(enig.surf_choix_C->format,255,255,255));
enig.choix_C_position.x=940+(enig.surf_choix_A->w*2);
enig.choix_C_position.y=120+enig.surf_enig->h;
SDL_BlitSurface(enig.surf_choix_C,NULL,screen,&enig.choix_C_position);
SDL_Flip(screen);

tmp_enig=gestion_temp_enigme_img(enig,screen,fic1);
if(tmp_enig==0)
{
enig.surf_enig=IMG_Load("echec.png");
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
enig.surf_choix_A=IMG_Load("");
enig.surf_choix_B=IMG_Load("");
enig.surf_choix_C=IMG_Load("");
}
else
{
enig.surf_enig=IMG_Load("bravo.png");
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
enig.surf_choix_A=IMG_Load("");
enig.surf_choix_B=IMG_Load("");
enig.surf_choix_C=IMG_Load("");
}
while(1){
SDL_Event event;
SDL_PollEvent(&event);
if(event.type==SDL_QUIT){break;}
else if (event.type==SDL_KEYDOWN){
if(event.key.keysym.sym==SDLK_ESCAPE){break;}}
SDL_BlitSurface(enig.surf_enig,NULL,screen,&enig.enigme_position);
SDL_BlitSurface(enig.surf_choix_A,NULL,screen,&enig.choix_A_position);
SDL_BlitSurface(enig.surf_choix_B,NULL,screen,&enig.choix_B_position);
SDL_BlitSurface(enig.surf_choix_C,NULL,screen,&enig.choix_C_position);
}
SDL_FreeSurface(screen);
SDL_FreeSurface(enig.surf_enig);
SDL_FreeSurface(enig.surf_choix_A) ;
SDL_FreeSurface(enig.surf_choix_B);
SDL_FreeSurface(enig.surf_choix_C);
SDL_Flip(screen);
SDL_Quit();
}
void polynome_2(char eq1[11])
{
    char A[2],B[2],C[2];
    int a,b,delta,c;
    float x1,x2;
    srand(time(0));
    a=(rand() % 7);
    b=(rand() % 7);
    c=(rand() % 7);
    delta=b*b-(4*a*c);
    if(delta<0)
    {
        printf("le polynome n a pas du solution reel\n");
    }
    else if (delta>0)
    {
        x1=-b-sqrt(delta)/2*a;
        x2=-b+sqrt(delta)/2*a;
        printf("x1=%.2f\n x2=%.2f\n",x1,x2);
    }
    else if (delta==0)
    {
        x1=-b/2*a;
        printf("x= %.2f",x1);
    }
    sprintf(A,"%d",a);
    sprintf(B,"%d",b);
    sprintf(C,"%d",c);
    eq1[0]=A[0];
    eq1[1]='X';
    eq1[2]='^';
    eq1[3]='2';
    eq1[4]='+';
    eq1[5]=B[0];
    eq1[6]='X';
    eq1[7]='+';
    eq1[8]=C[0];
    eq1[9]='=';
    eq1[10]='0';
}
void suite_arithmetique(char general[20],int *U0, int *U1,int *Un, int *n)
{
   int i;
   strcpy(general,"Un+1=Un+2*Un-1");
     srand(time(0));
    (*n)=(rand() % 5)+2;
     for(i=2;i<=(*n);i++)
     {
         (*Un)=(*U1)+2*(*U0);
         (*U0)=(*U1);
         (*U1)=(*Un);
     }
}



