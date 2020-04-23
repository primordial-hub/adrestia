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
    {
        fseek(fic1, enig->nb_enig, SEEK_SET);
        enig->reponse_corr = fgetc(fic1);
        fclose(fic1);
        (enig->nb_enig)++;
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
    
    while (1)
    {
        SDL_Event event;
        SDL_PollEvent(&event);
        if (event.type == SDL_KEYDOWN)
        {

            if (event.key.keysym.sym == SDLK_b)
            {printf("n=1\n");
                n = 1;
            }
           else if (event.key.keysym.sym != SDLK_b)
                n=0;

printf("res\n");
            return n;
        }
    }
    
    SDL_Quit();
}

int resolution(FILE *fic1, Enigme *enig)
{
    int test, x, y, n;
    char reponse_corr[5];
    enig->resolution = 0;
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }
    Mix_AllocateChannels(32);
    Mix_Chunk *sonWin;
    sonWin = Mix_LoadWAV("sonWin.wav");
    Mix_Chunk *sonLose;
    sonLose = Mix_LoadWAV("sonLose.wav");

    extrere_reponse(fic1, enig);

    if (enig->reponse_corr == 'a')
        test = 1;

    else if (enig->reponse_corr == 'b')
        test = 2;

    else if (enig->reponse_corr == 'c')
        test = 3;

    while (1)
    {
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
                        Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_a)
                        {Mix_PlayChannel(1, sonLose, 0);
                        n=0;}
                    break;

                case 2:
                    if (/*((x > enig->choix_B_position.x && x < enig->choix_B_position.x + 20) && (y > enig->choix_B_position.y && y < enig->choix_B_position.y + 50)) || */(event.key.keysym.sym == SDLK_b))
                    {
                        n = 1;
                        Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_b)
                        {Mix_PlayChannel(1, sonLose, 0);
                        n=0;}
                    break;

                case 3:
                    if (/*((x > enig->choix_C_position.x && x < enig->choix_C_position.x + 20) && (y > enig->choix_C_position.y && y < enig->choix_C_position.y + 50)) || */(event.key.keysym.sym == SDLK_c))
                    {
                        n = 1;
                        Mix_PlayChannel(1, sonWin, 0);
                    }
                    else if (event.key.keysym.sym != SDLK_c)
                       {n=0;
                        Mix_PlayChannel(1, sonLose, 0);}
                }
                return n;
            //}
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

void test(SDL_Surface *screen,char general[20], int *U0, int *U1, int *Un, int *n)
{
char B[20];
TTF_Init();
    TTF_Font *fontTest1;
    fontTest1 = TTF_OpenFont("khal.otf", 30);
    SDL_Color fontColor = {0, 255, 255};

    SDL_Surface *khalil;
suite_arithmetique(general, U0, U1, Un, n);
    khalil = TTF_RenderText_Solid(fontTest1, general, fontColor);
    SDL_Rect tmp_position;
    tmp_position.x = 0;
    tmp_position.y = 0;
    SDL_BlitSurface(khalil, NULL, screen, &tmp_position);


sprintf(B, "%d", *Un);
SDL_Surface *kh;
 kh = TTF_RenderText_Solid(fontTest1,B, fontColor);
    SDL_Rect kh_position;
    kh_position.x = 0;
    kh_position.y = 100;
    SDL_BlitSurface(kh, NULL, screen, &kh_position);
   SDL_Surface *khal;
    khal = TTF_RenderText_Solid(fontTest1,"20", fontColor);
    SDL_Rect a_position;
    a_position.x = 50;
    a_position.y = 100;
    SDL_BlitSurface(khal, NULL, screen, &a_position);
    
 while (1)
    {
        SDL_Event event;
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

            kh = TTF_RenderText_Solid(fontTest1,B, fontColor);
            SDL_BlitSurface(kh, NULL, screen, &kh_position);
            khalil= TTF_RenderText_Solid(fontTest1,general, fontColor);
            SDL_BlitSurface(khalil, NULL, screen, &tmp_position);
           khal = TTF_RenderText_Solid(fontTest1,"ashrefs", fontColor);
           SDL_BlitSurface(khal, NULL, screen, &a_position);
            SDL_Flip(screen);
        }
    }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(khalil);
    SDL_FreeSurface(kh);
    TTF_Quit();
    SDL_Quit();
    
}

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

            printf("%s\n", tempsjeu);
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

    //SDL_WM_SetCaption("Gestion du temps en SDL", NULL);

    while (continuer)
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

            tempsActuel = SDL_GetTicks();
printf("%d\n",tempsActuel);
           if (enig->test == 0)
                enig->resolution = resolution(fic1, enig);

            else if (enig->test == 1)
                enig->resolution = resolution_math(enig);
                   
                 if(enig->resolution == 1)              
                    return 1;
               
                 if ((tempsActuel > enig->tmp_enig)||(enig->resolution == 0))
                     return 0;

        SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);

    SDL_Quit();
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

void afficher_img(Enigme *enig, SDL_Surface *screen, FILE *fic1)
{ 
   SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO);
    int tmp_enig=2;
    enig->test = 0;
    enig->surf_enig = IMG_Load("khal.png");
    SDL_SetColorKey(enig->surf_enig, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_enig->format, 255, 255, 255));
    enig->enigme_position.x = 0;
    enig->enigme_position.y = 0;
    SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
    

    enig->surf_choix_A = IMG_Load("1.png");
    SDL_SetColorKey(enig->surf_choix_A, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_A->format, 255, 255, 255));
    enig->choix_A_position.x = 0;
    enig->choix_A_position.y = 120 + enig->surf_enig->h;
    SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
    

    enig->surf_choix_B = IMG_Load("2.png");
    SDL_SetColorKey(enig->surf_choix_B, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_B->format, 255, 255, 255));
    enig->choix_B_position.x = 10+enig->surf_choix_A->w;
    enig->choix_B_position.y = 120 + enig->surf_enig->h;
    SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
    

    enig->surf_choix_C = IMG_Load("3.png");
    SDL_SetColorKey(enig->surf_choix_C, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_C->format, 255, 255, 255));
    enig->choix_C_position.x = 20 + (enig->surf_choix_A->w * 2);
    enig->choix_C_position.y = 120 + enig->surf_enig->h;
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
if(tmp_enig ==2){
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
        SDL_Flip(screen);}

 tmp_enig = gestion_temp_enigme(enig, screen, fic1);
    if (tmp_enig == 0)
    {SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        enig->surf_enig = IMG_Load("echec.png");
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        enig->surf_choix_A = IMG_Load("");
        enig->surf_choix_B = IMG_Load("");
        enig->surf_choix_C = IMG_Load("");
    }
    else
    {SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        enig->surf_enig = IMG_Load("bravo.png");
        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        enig->surf_choix_A = IMG_Load("");
        enig->surf_choix_B = IMG_Load("");
        enig->surf_choix_C = IMG_Load("");
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
void afficher_suite(Enigme *enig, SDL_Surface *screen, char general[20], int *U0, int *U1, int *Un, int *n, FILE *fic1)
{TTF_Init();
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

printf("salut");
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
SDL_Flip(screen);
    
    
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
           if(tmp_enig ==2){
       SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
       surf_enig = TTF_RenderText_Solid(fontTest, general, Color_enigme);
        SDL_BlitSurface(surf_enig, NULL, screen, &enigme_position);
        surf_choix_A = TTF_RenderText_Solid(fontTest, "20", Color_enigme);
        SDL_BlitSurface(surf_choix_A, NULL, screen, &choix_A_position);
        surf_choix_B = TTF_RenderText_Solid(fontTest, B, Color_enigme);
        SDL_BlitSurface(surf_choix_B, NULL, screen, &choix_B_position);
        surf_choix_C = TTF_RenderText_Solid(fontTest, "15", Color_enigme);
        SDL_BlitSurface(surf_choix_C, NULL, screen, &choix_C_position);
       SDL_Flip(screen);}

SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
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

SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(surf_enig);
    SDL_FreeSurface(surf_choix_A);
    SDL_FreeSurface(surf_choix_B);
    SDL_FreeSurface(surf_choix_C);
TTF_Quit();    
SDL_Quit();
    
}

void afficher_lin(Enigme *enig, SDL_Surface *screen, float *res_lin, char eq[20], FILE *fic1)
{ TTF_Init();
    int tmp_enig;
    char B[10];
    enig->test = 1;
    TTF_Font *fontTest;
    fontTest = TTF_OpenFont("khal.otf",20);
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
if(tmp_enig ==2){

        SDL_BlitSurface(enig->surf_enig, NULL, screen, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, screen, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, screen, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, screen, &enig->choix_C_position);
        SDL_Flip(screen);}

SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
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
SDL_Flip(screen);
    }

    SDL_FreeSurface(screen);
    SDL_FreeSurface(enig->surf_enig);
    SDL_FreeSurface(enig->surf_choix_A);
    SDL_FreeSurface(enig->surf_choix_B);
    SDL_FreeSurface(enig->surf_choix_C);
    SDL_Quit();
}
