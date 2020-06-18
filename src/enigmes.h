#include "defs.h"

typedef struct
{
    char choix_A[20];
    char choix_B[20];
    char choix_C[20];
} CHOIX;
typedef struct
{
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
    char nom_img[10];
    char reponse_corr;
    int tmp_enig;
    int nb_enig;
    int test;
    char enigme_extr[100];
    CHOIX choix_extr;
} Enigme;

void xo(SDL_Surface *screen,char *player,int *c,int *t, char M[3][3]);
void initXo(char M[3][3]);
void printForMe(char M[3][3]);
void playk2(char *player, char M[3][3], int x, int y, SDL_Surface *kx, SDL_Rect x_position, SDL_Surface *screen);
void play1(char *player, char M[3][3], int *c, int *t, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int test);
void play3(char *player, char M[3][3], int *c, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen, int test);
int whowin(char M[3][3]);

void enregistrer_enigme(FILE *fic);
void extrere_enigme(FILE *fic, Enigme *enig);
void enregistrer_reponse_corr(FILE *fic1);
void extrere_reponse(FILE *fic1, Enigme *enig);

int resolution_math(Enigme *enig);
int resolution(FILE *fic1, Enigme *enig);

void afficher_texte(Enigme *enig, SDL_Surface *screen, FILE *fic1, FILE *fic);
void afficher_img(Enigme *enig, SDL_Surface *screen, FILE *fic1,int yossri);
void afficher_lin(Enigme *enig, SDL_Surface *screen, float *res_lin, char eq[20], FILE *fic1);
void afficher_suite(Enigme *enig, SDL_Surface *screen, char general[20], int *U0, int *U1, int *Un, int *n, FILE *fic1);

int gestion_temp_enigme(Enigme *enig, SDL_Surface *screen, FILE *fic1);
int gestion_temp_jeu(SDL_Surface *screen);

void eq_linaire(float *res_lin, char eq[20]);
void suite_arithmetique(char general[20], int *U0, int *U1, int *Un, int *n);
void polynome_2(char eq1[11]);
