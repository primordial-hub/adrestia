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

void enregistrer_enigme(FILE *fic)
{
    int i,n;
    char enigme[100];
    char choix_A[20];
    char choix_B[20];
    char choix_C[20];
    
     fic = fopen("fichier_enigme","a+");
    if (fic != NULL)
    {
        for(i=0; i<n; i++)
        {
            printf("Donner l enigme %d\n",i+1);
            fflush(stdin);
            gets(enigme);
            printf("Donner le choix A \n");
            fflush(stdin);
            gets(choix_A);
            printf("Donner le choix B \n");
            fflush(stdin);
            gets(choix_B);
            printf("Donner le choix C \n");
            fflush(stdin);
            gets(choix_C);
     
            fprintf(fic,"%s ? %s %s %s .\n",enigme,choix_A,choix_B,choix_C);
            fclose(fic);
        }
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_enigme  \n");
    }
}
void extrere_enigme(FILE *fic,Enigme *enig)
{
    char tmp_enig[150];
    int i=0,test=0,p1,p2,p3;
    fic = fopen("fichier_enigme","r");
    if (fic!= NULL)
    {
        while((gets(tmp_enig)!=0)||(i==enig->nb_enig))
            i++;
        if(i==enig->nb_enig)
        {
            for(i=0; ((i<strlen(tmp_enig))||(test==1)); i++)
            {
                if(tmp_enig[i]=='?')
                {
                    test==1;
                    p1=i;
                }
                else
                    enig->enigme_extr[i]=tmp_enig[i];
            }
            for(i=p1;((i<strlen(tmp_enig))||(test==1)); i++)
            {
                if(tmp_enig[i]==' ')
                {
                    test==1;
                    p2=i;
                }
                else
                    enig->choix_extr.choix_A[i]=tmp_enig[i];
            }
            for(i=p2;((i<strlen(tmp_enig))||(test==1)); i++)
            {
                if(tmp_enig[i]==' ')
                {
                    test==1;
                    p3=i;
                }
                else
                    enig->choix_extr.choix_B[i]=tmp_enig[i];
            }
            for(i=p3;((i<strlen(tmp_enig))||(test==1)); i++)
            {
                enig->choix_extr.choix_C[i]=tmp_enig[i];
            }
        }
    }
    else
    {
        printf("Impossible d'ouvrir le fichier fichier_enigme\n");
    }
    fclose(fic);
}
void enregistrer_reponse_corr(FILE *fic1)
{
    char reponse_corr[50];
    printf("Donner l enigme \n");
    fflush(stdin);
    gets(reponse_corr);
    fic1 = fopen("fichier_reponse","a+");
    if (fic1 != NULL)
    {
        fprintf(fic1,"%s\n",reponse_corr);
        printf("%s est la reponse \n",reponse_corr);
        fclose(fic1);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_reponse  \n");
    }
}
void extrere_reponse(FILE *fic1,Enigme *enig)
{
    fic1 = fopen("fichier_reponse","r");
    if (fic1 != NULL)
    {
        fseek(fic,enig->nb_enig+1,SEEK_SET);
        enig->reponse_corr=fgetc(fic1);
        fclose(fic1);
        (enig->nb_enig)++;
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_reponse  \n");
    }
}




////////////////////////////////////////////////////////////////////////////////






int resolution(FILE *fic1,Enigme *enig)
{
int test,n=0;
char reponse_corr[5];
SDL_Event event;
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }
    Mix_AllocateChannels(32);
    Mix_Chunk *sonWin;
    sonWin = Mix_LoadWAV(".wav");
    Mix_Chunk *sonLose;
    sonLose = Mix_LoadWAV(".wav");



extrere_reponse(fic1,enig);




if(enig->reponse_corr=='a')
test=1;

else if(enig->reponse_corr=='b')
test=2;

else if(enig->reponse_corr=='c')
test=3;

while(1)
{
SDL_Event event;
SDL_WaitEvent(&event);
 if(event.type==SDL_KEYDOWN){
switch(test){
          case 1:
                if(event.key.keysym.sym==SDLK_a)
                  {n=1;
                  Mix_PlayChannel(1, sonWin, 0);}
               else
                  Mix_PlayChannel(1, sonLose, 0);
            break;

          case 2:
              if(event.key.keysym.sym==SDLK_b)
                {n=1;
                Mix_PlayChannel(1, sonWin, 0);}  
              else
                Mix_PlayChannel(1, sonLose, 0);
          break;

         case 3:
             if(event.key.keysym.sym==SDLK_c)
              {n=1;
              Mix_PlayChannel(1, sonWin, 0);}
             else
              Mix_PlayChannel(1, sonLose, 0);
         }
return n;
}
}
  Mix_FreeChunk(sonLose);
  Mix_FreeChunk(sonWin);
    SDL_CloseAudio();
    SDL_Quit();
}

int resolution_image(FILE *fic1,Enigme *enig)
{
int test,x,y;
char reponse_corr[5];
enig->resolution=0;
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }
    Mix_AllocateChannels(32);
    Mix_Chunk *sonWin;
    sonWin = Mix_LoadWAV(".wav");
    Mix_Chunk *sonLose;
    sonLose = Mix_LoadWAV(".wav");



extrere_reponse(fic1,enig);




if(enig->reponse_corr =='a')
test=1;

else if(enig->reponse_corr =='b')
test=2;

else if(enig->reponse_corr =='c')
test=3;  
    
while(1)
{
SDL_Event event;
SDL_PollEvent(&event);
if( event.type == SDL_MOUSEBUTTONDOWN )
    {   if( event.button.button == SDL_BUTTON_LEFT )
        {   x = event.button.x;
            y = event.button.y;

switch(test){
          case 1:
                if((x>enig->choix_A_position.x && x<enig->choix_A_position.x +20)&&(y>enig->choix_A_position.y&&y<enig->choix_A_position.y +50))
                  {n=1;
                  Mix_PlayChannel(1, sonWin, 0);}
               else
                  Mix_PlayChannel(1, sonLose, 0);
            break;

          case 2:
              if((x>enig->choix_B_position.x && x<enig->choix_B_position.x +20)&&(y>enig->choix_B_position.y&&y<enig->choix_B_position.y +50))
                {n=1;
                Mix_PlayChannel(1, sonWin, 0);}  
              else
                Mix_PlayChannel(1, sonLose, 0);
          break;

         case 3:
             if((x>enig->choix_C_position.x && x<enig->choix_C_position.x +20)&&(y>enig->choix_C_position.y&&y<enig->choix_C_position.y +50))
              {n=1;
              Mix_PlayChannel(1, sonWin, 0);}
             else
              Mix_PlayChannel(1, sonLose, 0);
         }
return n;
}
}
}
  Mix_FreeChunk(sonLose);
  Mix_FreeChunk(sonWin);
    SDL_CloseAudio();
    SDL_Quit();
}


///////////////////////////////////////////////////////////////////////////////


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



void eq_linaire (float *res_lin,char eq[20])
{
    int i;
    int a,b;
    char A[3],B[3];
    srand(time(0));
    a=(rand() % 20);
    sprintf(A,"%d",a);
    b=(rand() % 20);
    sprintf(B,"%d",b);
    (*res_lin)=(float)b/a;
    for(i=0; i<strlen(A); i++)
    {
        eq[i]=A[i];
    }
    eq[strlen(A)]='X';
    eq[strlen(A)+1]='=';
    strcat(eq,B);
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

