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
typedef struct{
char choix_A[20];
char choix_B[20];
char choix_C[20];
}CHOIX;
typedef struct{
int resolution;
char enig_choisi[100];
SDL_Surface *surf_enig;
SDL_Surface *surf_choix_A;
SDL_Surface *surf_choix_B;
SDL_Surface *surf_choix_C;
SDL_Rect enigme_position;
SDL_Rect choix_A_position;
SDL_Rect choix_B_position;
SDL_Rect choix_C_position;
char reponse_corr;
int tmp_enig;
int nb_enig;
char enigme_extr[100];
CHOIX choix_extr;
}Enigme;
Enigme enig;
FILE *fic;
FILE *fic1;
char eq1[11];
char eq[20];
char general[20];
int U0,U1,Un,n;
float res_lin;
void enregistrer_enigme(FILE *fic);
void extrere_enigme(FILE *fic,Enigme *enig);
void enregistrer_reponse_corr(FILE *fic1);
int resolution(FILE *fic1,Enigme *enig);
int resolution_image(FILE *fic1,Enigme *enig);
/*int temps_enigme();
void afficher_img();
void afficher_text();*/
void extrere_reponse(FILE *fic1,Enigme *enig);
void eq_linaire (float *res_lin,char eq[20]);
void suite_arithmetique(char general[20],int *U0, int *U1,int *Un, int *n);
void polynome_2(char eq1[11]);

