#include "defs.h"
#include "background.h"
#include "perso.h"
#include "enigmes.h"

personnage1 per;
personnage1 per2;
SDL_Surface *lvl1 = NULL, *lvll = NULL, *vie11 = NULL,*vie2 = NULL, *texte4 = NULL ,*textek4 = NULL, *rotation = NULL, *texte3 = NULL, *texte2 = NULL, *texte1 = NULL, *map = NULL, *textek3 = NULL, *textek2 = NULL, *textek1 = NULL;
SDL_Rect camera,camera2, posvie,posvie2, postexte,postextek,poslvl1_2, poslvl1, postexte2,postextek2, postexte3,postextek3, postexte4,postextek4;
enemy enemy1, enemy2, enemy3,enemyk3,enemyk, enemyk1, enemyk2 ;
SDL_Surface *sauvgarder=NULL;
  SDL_Surface *oui=NULL;
  SDL_Surface *non=NULL;
   SDL_Rect sauvgarderPosition;
  SDL_Rect ouiPosition;
  SDL_Rect nonPosition;
SDL_Surface *chrono;
SDL_Rect tmp_position;
   
    int intervall = 100, tempsPrecedentr = 0, tempsActuelr = 0;
    
    char tempsjeu[1000];



// box box1, box2, box3, box4;
personnage mario, mario1;
TTF_Font *fontTest1, *fontTest2;
SDL_Color fontColor1 = {0, 0, 0};
SDL_Color fontColor2 = {255, 0, 0};
Uint32 start;
double angle = 0;
const int fps = 30;
int a = 1, tempsPrecedent = 0, tempsActuel = 0, pit = 0,pit2 = 0, ii,kk, nitro = 0, vitesse = 10,nitro2 = 0, vitesse2 = 10, x2=0,x = 0, y = 0, j = 0, die = 0,diek = 0, check,check2, testk = 0,test=0, testk1=0,test1 = 0, r = 0, test2 = 370,testk2 = 370, aaa = 0,kkk=0, die1, die2, die3, diek1, diek2, diek3;
char str[12],str2[12];
int sauvg=0 ,ktest=0;
int tests=0;
void down_menu(int *n, int *l, int *s, int *e, int *e1);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void up_menu(int *n, int *l, int *s, int *e, int *e1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void choix_menu0(int n, int l, int s, int s1, int e, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Surface *img0, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void choix_menu(int x, int y, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void choix_menu1(int *jouer, int *x1, int *y1, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME2, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD2, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT2, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS2, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1, Mix_Chunk *son, int *continuer, int *s1);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef int bool;

void play(int *jouer);

SDL_Surface *setjouer = NULL, *setjouer1 = NULL;
SDL_Rect possetjouer;
int sett = 0, x3, y3, setj = -1;
SDL_Rect possetj, posexitj;

extern SDL_Surface *setjouer, *setjouer1;
extern SDL_Rect possetjouer;
extern int sett, x3, y3;
extern SDL_Rect possetj, posexitj;
void setjouersouris(int *jouer);
 
int tmp_enig,yossri=0;
    char B[10];
    float *res_lin;
 char eq[20];

void down_menusettings(int *sb1, int *sb2, int *sb3, int *sb4);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void up_menusettings(int *sb1, int *sb2, int *sb3, int *sb4);

void choix_menusettings(int s1, int sb1, int sb2, int sb3, int sb4, SDL_Surface *screen, SDL_Surface *img0, SDL_Surface *img01, SDL_Surface *img61, SDL_Surface *img62, SDL_Surface *img63, SDL_Surface *img64, SDL_Rect pos0, SDL_Rect pos00, SDL_Rect pos000, SDL_Rect pos61, SDL_Rect pos62, SDL_Rect pos63, SDL_Rect pos64, int BR, int SO, int MU, SDL_Surface *img1, SDL_Surface *img3, SDL_Surface *img5, Mix_Music *musique, SDL_Surface *imageFULLSCREEN1, SDL_Surface *imageNORMAL1, SDL_Surface *imageFULLSCREEN, SDL_Surface *imageNORMAL, SDL_Rect posFULLSCREEN, SDL_Rect posNORMAL, int display, SDL_Surface *imageHIGH, SDL_Surface *imageHIGH1, SDL_Surface *imageMEDIUM, SDL_Surface *imageMEDIUM1, SDL_Surface *imageLOW, SDL_Surface *imageLOW1, SDL_Rect posHIGH, SDL_Rect posMEDIUM, SDL_Rect posLOW, int quality);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void sc_menusettings(int BR, int SO, int MU, int sb2, int sb3, int sb4, SDL_Surface *screen, SDL_Surface *img1, SDL_Surface *img3, SDL_Surface *img5, SDL_Rect pos0, SDL_Rect pos00, SDL_Rect pos000, Mix_Music *musique);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void settings_LEFT();
void settings_RIGHT();
void settings_RETURN();
void settings_affichage();
void settings();
#define TEMPS       30
