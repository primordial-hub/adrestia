#include "enigmes.h"


void enregistrer_enigme(FILE *fic)
{
    int i, n;
    char enigme[100];
    char choix_A[20];
    char choix_B[20];
    char choix_C[20];
    printf("donner le nombre d enigme a ajouter cette foix SVP \n");
    scanf("%d", &n);
    fic = fopen("fichier_enigme", "a");
    if (fic != NULL)
    {
        for (i = 0; i < n; i++)
        {
            printf("Donner l enigme %d\n", i + 1);
            fflush(stdin);
            scanf("%s", enigme);
            printf("Donner le choix A \n");
            fflush(stdin);
            scanf("%s", choix_A);
            printf("Donner le choix B \n");
            fflush(stdin);
            scanf("%s", choix_B);
            printf("Donner le choix C \n");
            fflush(stdin);
            scanf("%s", choix_C);
            fprintf(fic, "%s %s %s %s\n", enigme, choix_A, choix_B, choix_C);
            fclose(fic);
        }
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_enigme  \n");
    }
}
void extrere_enigme(FILE *fic, Enigme *enig)
{
    fic = fopen("fichier_enigme", "r");
    if (fic != NULL)
    {
        fseek(fic, enig->nb_enig, SEEK_SET);
        fscanf(fic, "%s %s %s %s", enig->enigme_extr, enig->choix_extr.choix_A, enig->choix_extr.choix_B, enig->choix_extr.choix_C);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier fichier_enigme\n");
    }
    fclose(fic);
}
void enregistrer_reponse_corr(FILE *fic1)
{
    char reponse_corr[3];
    printf("Donner la reponse d enigme\n");
    scanf("%s", reponse_corr);
    fic1 = fopen("fichier_reponse", "a");
    if (fic1 != NULL)
    {
        fprintf(fic1, "%c", reponse_corr[0]);
        printf("%c est la reponse \n", reponse_corr[0]);
        fclose(fic1);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_reponse  \n");
    }
}
void extrere_reponse(FILE *fic1, Enigme *enig)
{
    fic1 = fopen("fichier_reponse", "r");
    if (fic1 != NULL)
    {   rewind(fic1);
        //fseek(fic1, enig->nb_enig, SEEK_SET);
        enig->reponse_corr = fgetc(fic1);
        fclose(fic1);
        //(enig->nb_enig)++;
    }
    else
    {
        printf("Impossible d'ouvrir le fichier_reponse  \n");
    }
}

////////////////////////////////////////////////////////////////////////////////

int resolution_math(Enigme *enig)
{
    int test, n = 0;
    char reponse_corr[5];
    
    
   
        SDL_Event event;
        SDL_PollEvent(&event);
        if (event.type == SDL_KEYDOWN)
        {

            if (event.key.keysym.sym == SDLK_b)
            {
                n = 1;
            }
           else if (event.key.keysym.sym != SDLK_b)
                n=0;


            return n;
        }
   
}

int resolution(FILE *fic1, Enigme *enig)
{
    int test, x, y, n;
    char reponse_corr[5];
    enig->resolution = 0;
   /* if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }
    Mix_AllocateChannels(32);
    Mix_Chunk *sonWin;
    sonWin = Mix_LoadWAV("sonWin.wav");
    Mix_Chunk *sonLose;
    sonLose = Mix_LoadWAV("sonLose.wav");*/

   /* extrere_reponse(fic1, enig);
    printf("%c",enig->reponse_corr );

    if (enig->reponse_corr == 'a')
        test = 1;

    else if (enig->reponse_corr == 'b')
        test = 2;

    else if (enig->reponse_corr == 'c')
        test = 3;
*/test=2;
        SDL_Event event;
        SDL_WaitEvent(&event);
        if (event.type == SDL_KEYDOWN)//event.type == SDL_MOUSEBUTTONDOWN
        {
           /*if (event.button.button == SDL_BUTTON_LEFT)
            {
                x = event.button.x;
                y = event.button.y;
*/
                switch (test)
                {
                case 1:
                    if (/*((x > enig->choix_A_position.x && x < enig->choix_A_position.x + 20) && (y > enig->choix_A_position.y && y < enig->choix_A_position.y + 50)) || (*/event.key.keysym.sym == SDLK_a)//)
                    {
                        n = 1;
                        //Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_a)
                        {//Mix_PlayChannel(1, sonLose, 0);
                        n=0;}
                    break;

                case 2:
                    if (/*((x > enig->choix_B_position.x && x < enig->choix_B_position.x + 20) && (y > enig->choix_B_position.y && y < enig->choix_B_position.y + 50)) || */(event.key.keysym.sym == SDLK_b))
                    {
                        n = 1;
                        //Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_b)
                        {//Mix_PlayChannel(1, sonLose, 0);
                        n=0;}
                    break;

                case 3:
                    if (/*((x > enig->choix_C_position.x && x < enig->choix_C_position.x + 20) && (y > enig->choix_C_position.y && y < enig->choix_C_position.y + 50)) || */(event.key.keysym.sym == SDLK_c))
                    {
                        n = 1;
                        //Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_c)
                       {n=0;
                        //Mix_PlayChannel(1, sonLose, 0);
                        }
                }
                return n;
            //}
        
    }
    /*Mix_FreeChunk(sonLose);
    Mix_FreeChunk(sonWin);
    SDL_CloseAudio();*/
    
}

///////////////////////////////////////////////////////////////////////////////

void polynome_2(char eq1[11])
{
    char A[2], B[2], C[2];
    int a, b, delta, c;
    float x1, x2;
    srand(time(0));
    a = (rand() % 7);
    b = (rand() % 7);
    c = (rand() % 7);
    delta = b * b - (4 * a * c);
    if (delta < 0)
    {
        printf("le polynome n a pas du solution reel\n");
    }
    else if (delta > 0)
    {
        x1 = -b - sqrt(delta) / 2 * a;
        x2 = -b + sqrt(delta) / 2 * a;
        printf("x1=%.2f\n x2=%.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / 2 * a;
        printf("x= %.2f", x1);
    }
    sprintf(A, "%d", a);
    sprintf(B, "%d", b);
    sprintf(C, "%d", c);
    eq1[0] = A[0];
    eq1[1] = 'X';
    eq1[2] = '^';
    eq1[3] = '2';
    eq1[4] = '+';
    eq1[5] = B[0];
    eq1[6] = 'X';
    eq1[7] = '+';
    eq1[8] = C[0];
    eq1[9] = '=';
    eq1[10] = '0';
}

void eq_linaire(float *res_lin, char eq[20])
{
    int i;
    int a, b;
    char A[3], B[3];
    srand(time(0));
    a = (rand() % 20);
    sprintf(A, "%d", a);
    b = (rand() % 5);
    sprintf(B, "%d", b);
printf("%s|%c\n",B,B[0]);
    (*res_lin) = (float)b / a;
    for (i = 0; i < strlen(A); i++)
    {
        eq[i] = A[i];
    }
    eq[strlen(A)] = 'X';
    eq[strlen(A) + 1] = '=';
    eq[strlen(A) + 2]=B[0];
    eq[strlen(A) + 3]='\0';
}
void suite_arithmetique(char general[20], int *U0, int *U1, int *Un, int *n)
{
    int i;
char B[4];
    (*U1) = 2;
    (*U0) = 1;
    strcpy(general, "Un+1=Un+2*Un-1");
    srand(time(0));
    (*n) = (rand() % 5) + 2;
    for (i = 2; i <= (*n); i++)
    {
        (*Un) = (*U1) + 2 * (*U0);
        (*U0) = (*U1);
        (*U1) = (*Un);
    }
}

/////////////////////////5edmet rima\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\



int gestion_temp_jeu(SDL_Surface *screen)
{

    TTF_Init();
    TTF_Font *fontTest1;
    fontTest1 = TTF_OpenFont("khal.otf", 30);
    SDL_Color fontColor = {0, 255, 255};

    char tempsjeu[1000];
    sprintf(tempsjeu, "%d", SDL_GetTicks());
    SDL_Surface *chrono;
    chrono = TTF_RenderText_Solid(fontTest1, tempsjeu, fontColor);
    SDL_Rect tmp_position;
    tmp_position.x = 0;
    tmp_position.y = 0;
    SDL_BlitSurface(chrono, NULL, screen, &tmp_position);
    SDL_Flip(screen);
    int intervall = 100, tempsPrecedent = 0, tempsActuel = 0;
    while (1)
    {
        SDL_Event event;
        tempsActuel = SDL_GetTicks();
        if (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                break;
            }
            else if (event.type == SDL_KEYDOWN)
            {
                if (event.key.keysym.sym == SDLK_ESCAPE)
                {
                    break;
                }
            }
            if (tempsActuel - tempsPrecedent < intervall)
            {
                SDL_Delay(intervall - (tempsActuel - tempsPrecedent));
            }

            SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
            sprintf(tempsjeu, "%d ", tempsActuel);
            chrono = TTF_RenderText_Solid(fontTest1, tempsjeu, fontColor);
            SDL_BlitSurface(chrono, NULL, screen, &tmp_position);

            SDL_Flip(screen);

        
            tempsPrecedent = tempsActuel;
        }
    }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(chrono);
    TTF_Quit();
    SDL_Quit();
    return tempsActuel;
}
/*******************************************************************/
int gestion_temp_enigme(Enigme *enig, SDL_Surface *screen, FILE *fic1)
{

    int continuer = 1, tempsPrecedent = 0, tempsActuel = 0;

    

            tempsActuel = SDL_GetTicks();

           if (enig->test == 0)
                enig->resolution = resolution(fic1, enig);

            else if (enig->test == 1)
                enig->resolution = resolution_math(enig);
                   
                 if(enig->resolution == 1)              
                    return 1;
               
                 if ((tempsActuel > enig->tmp_enig)||(enig->resolution == 0))
                     return 0;

    
}

/*******************************************************************/

void afficher_texte(Enigme *enig, SDL_Surface *screen, FILE *fic1, FILE *fic)
{
    int tmp_enig=2;
    enig->test = 0;
    TTF_Font *fontTest;
    fontTest = TTF_OpenFont("khal.otf", 10);
    SDL_Color Color_enigme = {0, 255, 255};

    extrere_enigme(fic, enig);
printf("%s",enig->enigme_extr);
    enig->surf_enig = TTF_RenderText_Solid(fontTest, enig->enigme_extr, Color_enigme);
    enig->enigme_position.x = 0;
    enig->enigme_position.y = 0;
    SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    

    enig->surf_choix_A = TTF_RenderText_Solid(fontTest, enig->choix_extr.choix_A, Color_enigme);
    enig->choix_A_position.x = 0;
    enig->choix_A_position.y = 100;
    SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
    

    enig->surf_choix_B = TTF_RenderText_Solid(fontTest, enig->choix_extr.choix_B, Color_enigme);
    enig->choix_B_position.x = 50;
    enig->choix_B_position.y = 100;
    SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
    

    enig->surf_choix_C = TTF_RenderText_Solid(fontTest, enig->choix_extr.choix_C, Color_enigme);
    enig->choix_C_position.x = 150;
    enig->choix_C_position.y = 100;
    SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
   

    while (1)
    {
        SDL_Event event;
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            break;
        }
        else if (event.type == SDL_KEYDOWN)
        {
            if (event.key.keysym.sym == SDLK_ESCAPE)
            {
                break;
            }
        }
if(tmp_enig == 2){
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
        SDL_Flip(screen);}
SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
 tmp_enig = gestion_temp_enigme(enig, screen, fic1);
    if (tmp_enig == 0)
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest, "echec", Color_enigme);
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    }
    else
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest, "bravo", Color_enigme);
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    }
SDL_Flip(screen);
       }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(enig->surf_enig);
    SDL_FreeSurface(enig->surf_choix_A);
    SDL_FreeSurface(enig->surf_choix_B);
    SDL_FreeSurface(enig->surf_choix_C);
    SDL_Quit();
}

void afficher_img(Enigme *enig, SDL_Surface *screen, FILE *fic1,int yossri)
{ 
   
    int tmp_enig=2;
    enig->test = 0;
   /* enig->surf_enig = IMG_Load("enig/enigme.png");
    SDL_SetColorKey(enig->surf_enig, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_enig->format, 255, 255, 255));
    enig->enigme_position.x = 0;
    enig->enigme_position.y = 0;
    SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    

    enig->surf_choix_A = IMG_Load("enig/1.png");
    SDL_SetColorKey(enig->surf_choix_A, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_A->format, 255, 255, 255));
    enig->choix_A_position.x = 0;
    enig->choix_A_position.y = 120 + enig->surf_enig->h;
    SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
    

    enig->surf_choix_B = IMG_Load("enig/2.png");
    SDL_SetColorKey(enig->surf_choix_B, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_B->format, 255, 255, 255));
    enig->choix_B_position.x = 10+enig->surf_choix_A->w;
    enig->choix_B_position.y = 120 + enig->surf_enig->h;
    SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
    

    enig->surf_choix_C = IMG_Load("enig/3.png");
    SDL_SetColorKey(enig->surf_choix_C, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_C->format, 255, 255, 255));
    enig->choix_C_position.x = 20 + (enig->surf_choix_A->w * 2);
    enig->choix_C_position.y = 120 + enig->surf_enig->h;
    SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
    */

   
   

if(tmp_enig ==2){
    
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
        //SDL_Flip(screen);
        }
 tmp_enig = gestion_temp_enigme(enig, screen, fic1);
  
    if (tmp_enig == 0 && yossri==0)
    {
        enig->surf_enig = IMG_Load("enig/echec.png");
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        enig->surf_choix_A = IMG_Load("");
        enig->surf_choix_B = IMG_Load("");
        enig->surf_choix_C = IMG_Load("");
yossri=1;
    }

    else
    if (tmp_enig == 1 && yossri==0)
    {
        enig->surf_enig = IMG_Load("enig/bravo.png");
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        enig->surf_choix_A = IMG_Load("");
        enig->surf_choix_B = IMG_Load("");
        enig->surf_choix_C = IMG_Load("");
yossri=1;
    }
   

    

   
}
void afficher_suite(Enigme *enig, SDL_Surface *screen, char general[20], int *U0, int *U1, int *Un, int *n, FILE *fic1)
{
    int tmp_enig=2;
    char B[20];
  enig->test = 1;
    TTF_Font *fontTest;
    fontTest = TTF_OpenFont("khal.otf", 20);
    SDL_Color Color_enigme = {0, 255, 255};
    
   suite_arithmetique(general, U0, U1, Un, n);
printf("%s",general);
     SDL_Surface *surf_enig;
    surf_enig = TTF_RenderText_Solid(fontTest,general, Color_enigme);
    SDL_Rect enigme_position;
     enigme_position.x = 100;
    enigme_position.y = 100;
    SDL_BlitSurface(surf_enig, NULL, screen, &enigme_position);


    SDL_Surface *surf_choix_A;
    surf_choix_A = TTF_RenderText_Solid(fontTest, "20", Color_enigme);
    SDL_Rect choix_A_position;     
    choix_A_position.x = 100;
    choix_A_position.y = 200;
    SDL_BlitSurface(surf_choix_A, NULL, screen, &choix_A_position);

    sprintf(B, "%d", *Un);
    SDL_Surface *surf_choix_B;
    surf_choix_B = TTF_RenderText_Solid(fontTest, B, Color_enigme);
    SDL_Rect choix_B_position; 
    choix_B_position.x = 150;
    choix_B_position.y = 200;
    SDL_BlitSurface(surf_choix_B, NULL, screen, &choix_B_position);
    
    SDL_Surface *surf_choix_C;
    surf_choix_C = TTF_RenderText_Solid(fontTest, "15", Color_enigme);
     SDL_Rect choix_C_position;
    choix_C_position.x = 200;
    choix_C_position.y = 200;
    SDL_BlitSurface(surf_choix_C, NULL, screen, &choix_C_position);
//SDL_Flip(screen);
    
    
   
           if(tmp_enig ==2){
      // SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
       surf_enig = TTF_RenderText_Solid(fontTest, general, Color_enigme);
        SDL_BlitSurface(surf_enig, NULL, screen, &enigme_position);
        surf_choix_A = TTF_RenderText_Solid(fontTest, "20", Color_enigme);
        SDL_BlitSurface(surf_choix_A, NULL, screen, &choix_A_position);
        surf_choix_B = TTF_RenderText_Solid(fontTest, B, Color_enigme);
        SDL_BlitSurface(surf_choix_B, NULL, screen, &choix_B_position);
        surf_choix_C = TTF_RenderText_Solid(fontTest, "15", Color_enigme);
        SDL_BlitSurface(surf_choix_C, NULL, screen, &choix_C_position);
       //SDL_Flip(screen);
       }

//SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
tmp_enig = gestion_temp_enigme(enig, screen, fic1);
    if (tmp_enig == 0)
    {
        surf_enig = TTF_RenderText_Solid(fontTest,"echec", Color_enigme);
        SDL_BlitSurface(surf_enig, NULL, screen, &enigme_position);
    }
    if(tmp_enig == 1)
    {
        surf_enig = TTF_RenderText_Solid(fontTest,"bravo", Color_enigme);
        SDL_BlitSurface(surf_enig, NULL, screen, &enigme_position); 
    }


    SDL_FreeSurface(surf_enig);
    SDL_FreeSurface(surf_choix_A);
    SDL_FreeSurface(surf_choix_B);
    SDL_FreeSurface(surf_choix_C);

    
}

void afficher_lin(Enigme *enig, SDL_Surface *screen, float *res_lin, char eq[20], FILE *fic1)
{ 
    int tmp_enig;
    char B[10];
    enig->test = 1;
    TTF_Font *fontTest;
    fontTest = TTF_OpenFont("enig/khal.otf",20);
    SDL_Color Color_enigme = {0, 255, 255};

    eq_linaire(res_lin, eq);
    printf("%s",eq);
    enig->surf_enig = TTF_RenderText_Solid(fontTest, eq, Color_enigme);
    enig->enigme_position.x = 100;
    enig->enigme_position.y = 100;
    SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);

    enig->surf_choix_A = TTF_RenderText_Solid(fontTest, "10", Color_enigme);
    enig->choix_A_position.x = 100;
    enig->choix_A_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);

    sprintf(B, "%.2f", *res_lin);
    enig->surf_choix_B = TTF_RenderText_Solid(fontTest, B, Color_enigme);
    enig->choix_B_position.x = 150;
    enig->choix_B_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);

    enig->surf_choix_C = TTF_RenderText_Solid(fontTest, "15", Color_enigme);
    enig->choix_C_position.x = 200;
    enig->choix_C_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
SDL_Flip(screen);

   

    
if(tmp_enig ==2){

        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
        SDL_Flip(screen);}

//SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    tmp_enig = gestion_temp_enigme(enig, screen, fic1);
    if (tmp_enig == 0)
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest,"echec", Color_enigme);
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    }
    if(tmp_enig == 1)
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest,"bravo", Color_enigme);
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    }

    SDL_FreeSurface(enig->surf_enig);
    SDL_FreeSurface(enig->surf_choix_A);
    SDL_FreeSurface(enig->surf_choix_B);
    SDL_FreeSurface(enig->surf_choix_C);
    
}


//////////////////////////////xo//////////////
void initXo(char M[3][3])
{
    int k = 0, i, j;
    char n[2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            k++;
            sprintf(n, "%d", k);
            M[i][j] = n[0];
        }
    }
}
void printForMe(char M[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", M[i][j]);
        }
        printf("\n");
    }
}
void play1(char *player, char M[3][3], int *c, int *t, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int test)
{
    printf("c est le tour de l ordinateur\n");
    printf("%d",*c);
    if ((*c) == 0)
    {
        o_position.x = 312;
        o_position.y = 110;
        SDL_BlitSurface(ko, NULL, screen, &o_position);
        M[0][0] = 'o';
        (*c)++;
        test=1;
    }
    else if ((*c) == 1 && test==0)
    {
        (*c)++;
        if (M[2][0] == '7')
        {
            o_position.x = 312;
            o_position.y = 498;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[2][0] = 'o';
            (*t) = 1;
        }
        else
        {
            o_position.x = 760;
            o_position.y = 116;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][2] = 'o';
            (*t) = 2;
        }
        test=1;
    }
    else if ((*c) == 2 && test==0)
    {
        (*c)++;
        test=1;
        if ((*t) == 1)
        {
            if (M[1][0] == '4')
            {
                o_position.x = 312;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][0] = 'o';
            }
            else if (M[1][1] == 'x')
            {
                o_position.x = 760;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][2] = 'o';
                (*t) = 3;
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
        if ((*t) == 2)
        {
            if (M[0][1] == '2')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
    }
    else if ((*c) == 3 && test==0)
    { test=1;
        if ((*t) == 1)
        {
            if (M[1][1] == '5')
            {
                o_position.x = 536;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][1] = 'o';
            }
            else if (M[2][1] == '8')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
            }
        }
        if ((*t) == 2)
        {
            if (M[1][1] == '5')
            {
                o_position.x = 536;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][1] = 'o';
            }
            else if (M[0][1] == '2')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
        }
        if ((*t) == 3)
            (*c)++;
        {
            if (M[2][1] == 'x')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
                (*t) = 4;
            }
            else if (M[0][1] == 'x')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
                (*t) = 5;
            }
            else if (M[2][2] == 'x')
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
                (*t) = 6;
            }
            else if (M[0][2] == 'x')
            {
                o_position.x = 536;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][1] = 'o';
                (*t) = 7;
            }
        }
    }
    else if ((*c) == 4 && test==0)
    {
        if ((*t) == 4)
        {
            if (M[0][2] == '3')
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
        }
        else if ((*t) == 5)
        {
            if (M[2][2] == '9')
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
        }
        else if ((*t) == 6)
        {
            if (M[0][2] == '3')
            {
                o_position.x = 760;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][2] = 'o';
            }
            else
            {
                o_position.x = 760;
                o_position.y = 308;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[1][2] = 'o';
            }
        }
        else if ((*t) == 7)
        {
            if (M[2][2] == '9')
            {
                o_position.x = 760;
                o_position.y = 498;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[2][2] = 'o';
            }
            else
            {
                o_position.x = 536;
                o_position.y = 116;
                SDL_BlitSurface(ko, NULL, screen, &o_position);
                M[0][1] = 'o';
            }
        }
    }
    (*player) = 'x';
}
void play3(char *player, char M[3][3], int *c, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int testk)
{
    int Xc = 0, Oc = 0, i, j, test = 0;
    printf("c est le tour de l ordinateur\n");
    if ((*c) == 0)
    {
        if (M[1][1] == '5')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
        else
        {
            o_position.x = 312;
            o_position.y = 110;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][0] = 'o';
        }
        (*c)++;
testk=1;
    }
    if ((*c) > 0 && testk==0)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (M[i][j] == 'x')
                    Xc++;
                else if (M[j][i] == 'o')
                    Oc++;
                if (Oc == 2)
                {
                    if (M[i][0] != 'x' && M[i][0] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][0] = 'o';
                        test = 1;
                    }
                    else if (M[i][1] != 'x' && M[i][1] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][1] = 'o';
                        test = 1;
                    }
                    else if (M[i][2] != 'x' && M[i][2] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][2] = 'o';
                        test = 1;
                    }
                }
                if (Xc == 2)
                {
                    if (M[i][0] != 'x' && M[i][0] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][0] = 'o';
                        test = 1;
                    }
                    else if (M[i][1] != 'x' && M[i][1] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][1] = 'o';
                        test = 1;
                    }
                    else if (M[i][2] != 'x' && M[i][2] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[i][2] = 'o';
                        test = 1;
                    }
                }
            }
            Xc = 0;
            Oc = 0;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (M[j][i] == 'x')
                    Xc++;
                else if (M[j][i] == 'o')
                    Oc++;
                if (Oc == 2)
                {
                    if (M[0][i] != 'x' && M[0][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[0][i] = 'o';
                        test = 1;
                    }
                    else if (M[1][i] != 'x' && M[1][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[1][i] = 'o';
                        test = 1;
                    }
                    else if (M[2][i] != 'x' && M[2][i] != 'o' && test == 0)
                    {
                        M[2][i] = 'o';
                        test = 1;
                    }
                }
                if (Xc == 2)
                {
                    if (M[0][i] != 'x' && M[0][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[0][i] = 'o';
                        test = 1;
                    }
                    else if (M[1][i] != 'x' && M[1][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[1][i] = 'o';
                        test = 1;
                    }
                    else if (M[2][i] != 'x' && M[2][i] != 'o' && test == 0)
                    {
                        o_position.x = 312;
                        o_position.y = 110;
                        SDL_BlitSurface(ko, NULL, screen, &o_position);
                        M[2][i] = 'o';
                        test = 1;
                    }
                }
            }
            Xc = 0;
            Oc = 0;
        }
        if (M[0][0] == 'x' && M[1][1] == 'x')
            o_position.x = 760;
        o_position.y = 498;
        SDL_BlitSurface(ko, NULL, screen, &o_position);
        M[2][2] = 'o';
        if (M[1][1] == 'x' && M[2][2] == 'x')
        {
            o_position.x = 312;
            o_position.y = 110;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][0] = 'o';
        }
        if (M[0][0] == 'x' && M[2][2] == 'x')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
        if (M[0][2] == 'x' && M[1][1] == 'x')
        {
            o_position.x = 312;
            o_position.y = 498;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[2][0] = 'o';
        }
        if (M[1][1] == 'x' && M[2][0] == 'x')
        {
            o_position.x = 760;
            o_position.y = 116;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[0][2] = 'o';
        }
        if (M[0][2] == 'x' && M[2][0] == 'x')
        {
            o_position.x = 536;
            o_position.y = 308;
            SDL_BlitSurface(ko, NULL, screen, &o_position);
            M[1][1] = 'o';
        }
    }
    (*player) = 'x';
}
void playk2(char *player, char M[3][3], int x, int y, SDL_Surface *kx, SDL_Rect x_position, SDL_Surface *screen)
{
    int i, j;
    char pos;
    /* printf("c est votre tour \n");*/
    printf("choisir une position joueur %c\n",*player);

if((y>106 && y<260 )&&(x>302 && x<489 ))
{
        x_position.x = 312;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][0] = 'x';
}   
if((y>106 && y<260 )&&(x>526 && x<713 ))
{
        x_position.x = 526;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][1] = 'x';
} 
if((y>106 && y<260 )&&(x>750 && x<937 ))
{
        x_position.x = 760;
        x_position.y = 110;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[0][2] = 'x';
} 
if((y>298 && y<452 )&&(x>302 && x<489 ))
{
        x_position.x = 312;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][0] = 'x';
} 
if((y>298 && y<452 )&&(x>526 && x<713 ))
{
        x_position.x = 536;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][1] = 'x';
} 
if((y>298 && y<452 )&&(x>750 && x<937 ))
{
        x_position.x = 760;
        x_position.y = 308;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[1][2] = 'x';
} 
if((y>488 && y<642 )&&(x>302 && x<489))
{
        x_position.x = 312;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][0] = 'x';
} 
if((y>488 && y<642 )&&(x>526 && x<713))
{
        x_position.x = 536;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][1] = 'x';
} 
if((y>488 && y<642 )&&(x>750 && x<937))
{
        x_position.x = 760;
        x_position.y = 498;
        SDL_BlitSurface(kx, NULL, screen, &x_position);
        M[2][2] = 'x';
} 
    
    (*player)='o';
}
int whowin(char M[3][3])
{
    int Xc = 0, Oc = 0, i, j, cp = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (M[i][j] == 'x')
                Xc++;
            else if (M[i][j] == 'o')
                Oc++;
            if (Xc == 3)
                return 1;
            if (Oc == 3)
                return 2;
        }
        Xc = 0;
        Oc = 0;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (M[j][i] == 'x')
                Xc++;
            else if (M[j][i] == 'o')
                Oc++;
            if (Xc == 3)
                return 1;
            if (Oc == 3)
                return 2;
        }
        Xc = 0;
        Oc = 0;
    }
    if (M[0][0] == 'x' && M[1][1] == 'x' && M[2][2] == 'x')
        return 1;
    if (M[0][2] == 'x' && M[1][1] == 'x' && M[2][0] == 'x')
        return 1;
    if (M[0][0] == 'o' && M[1][1] == 'o' && M[2][2] == 'o')
        return 2;
    if (M[0][2] == 'o' && M[1][1] == 'o' && M[2][0] == 'o')
        return 2;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((M[i][j] != 'x') && (M[i][j] != 'o'))
                cp++;
        }
    }
    if (cp == 0)
        return 3;
    return 0;
}
void xo(SDL_Surface *screen,char *player,int *c,int *t, char M[3][3])
{
   
    
    int i, x, y,test=0;
    char B[20];
    
    
    TTF_Font *fontTest1;
    fontTest1 = TTF_OpenFont("xo/khal.otf", 30);
    SDL_Color fontColor = {0, 255, 255};
    SDL_Surface *kx = NULL;
    SDL_Rect x_position;
    SDL_Surface *ko = NULL;
    SDL_Rect o_position;
    ko = IMG_Load("xo/o.png");
    kx = IMG_Load("xo/x.png");
 
    SDL_Surface *khal=NULL;
    SDL_Rect a_position;
                SDL_Surface *joueur = NULL;
                SDL_Rect tab_position;
                joueur = IMG_Load("xo/tab.png");
                SDL_SetColorKey(joueur, SDL_SRCCOLORKEY, SDL_MapRGB(joueur->format, 255, 255, 255));
                tab_position.x = 300;
                tab_position.y = 70;
               SDL_BlitSurface(joueur, NULL, screen, &tab_position);
   
        SDL_Event event;
        SDL_WaitEvent(&event);
        
       
        if (event.type == SDL_MOUSEBUTTONDOWN)
        {
            
                    
            if (event.button.button == SDL_BUTTON_LEFT)
            {
                x = event.button.x;
                y = event.button.y;
                SDL_BlitSurface(joueur, NULL, screen, &tab_position);
  
                
                /*while (whowin(M) == 0)
                { */ 
                    test=0;
                    if ((*player) == 'o')
                    {
                        play1(player,M,c,t,ko,o_position,screen,test);
                    }
                     else if ((*player) == 'x')
                    {
                        playk2(player, M, x, y,kx, x_position, screen);
                    }
                    printForMe(M);
                //}
i=whowin(M);
    if(i!=0)
                {switch (i)
                {
                case 1:
                    strcpy(B, "player x win");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("player x win\n");
                    break;
                case 2:
                    strcpy(B, "PC win");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("PC win\n");
                    break;
                case 3:
                    strcpy(B, "matche NULL");
                    khal = TTF_RenderText_Solid(fontTest1, B, fontColor);
                    a_position.x = 200;
                    a_position.y = 200;
                    SDL_BlitSurface(khal, NULL, screen, &a_position);
                    printf("matche NULL\n");
                    break;}
                }
            }
        }
        SDL_Flip(screen);
    
    SDL_FreeSurface(khal);
    SDL_FreeSurface(kx);
    SDL_FreeSurface(ko);
    SDL_FreeSurface(joueur);
  
}