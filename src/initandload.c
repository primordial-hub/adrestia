#include "initandload.h"

int n = 2;
int l = 1, s = 1, e = 1, e1, i, x, y, x1, y1, s1 = 1, sb1 = 1, sb2 = 2, sb3 = 1, sb4 = 1, BR = 7, SO = 7, MU = 7, exitsetting = 1, OK = 2, CANCEL = 1, scoff = 2, f = 0, display = 1, quality = 1;
int box_x = 50, box_h = 50, box_w = 353, box_y = 400, box_y1 = 450, box_y2 = 500, box_y3 = 550;
int fs = 1, sx, sy, fls = 0;
SDL_Surface *screen = NULL, *image = NULL, *imageLOGO = NULL, *imageLOGO2 = NULL, *imageNEWGAME = NULL, *imageLOAD = NULL, *imageSETTINGS = NULL, *imageEXIT = NULL, *imageNEWGAME1 = NULL, *imageLOAD1 = NULL, *imageSETTINGS1 = NULL, *imageEXIT1 = NULL, *imageNEWGAME2 = NULL, *imageLOAD2 = NULL, *imageSETTINGS2 = NULL, *imageEXIT2 = NULL, *imageSETTINGSM = NULL, *img0 = NULL, *img61 = NULL, *img62 = NULL, *img63 = NULL, *img64 = NULL, *img01 = NULL, *img1 = NULL, *img5 = NULL, *img3 = NULL, *imgredb = NULL, *imgredb1 = NULL;
SDL_Surface *imageFULLSCREEN1 = NULL, *imageNORMAL1 = NULL, *imageLOW1 = NULL, *imageMEDIUM1 = NULL, *imageHIGH1 = NULL, *imageFULLSCREEN = NULL, *imageNORMAL = NULL, *imageLOW = NULL, *imageMEDIUM = NULL, *imageHIGH = NULL;
SDL_Rect posback, poslogo, poslogo2, posNEWGAME, posLOAD, posSETTINGS, posSETTINGSM, posEXIT, posNEWGAME1, posLOAD1, posSETTINGS1, posEXIT1, pos0, pos00, pos000, pos61, pos62, pos63, pos64, posredb, posNORMAL, posFULLSCREEN, posHIGH, posMEDIUM, posLOW;
SDL_Event event;
TTF_Font *fontTest;
Mix_Chunk *son;
Mix_Music *musique;
SDL_Color fontColor = {150, 157, 255};
SDL_Surface *texte;
SDL_Rect textePosition;
void init_m()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    screen = SDL_SetVideoMode(1366, 768, 32, SDL_HWSURFACE);
    poslogo.x = 1220;
    poslogo.y = 720;
    poslogo2.x = 40;
    poslogo2.y = 150;
    posback.x = 0;
    posback.y = 0;
    posNEWGAME.x = 50;
    posNEWGAME.y = 400;
    posNEWGAME1.x = 50;
    posNEWGAME1.y = 400;
    posLOAD.x = 50;
    posLOAD.y = 450;
    posSETTINGS.x = 50;
    posSETTINGS.y = 500;
    posEXIT.x = 50;
    posEXIT.y = 550;
    posLOAD1.x = 50;
    posLOAD1.y = 450;
    posSETTINGS1.x = 50;
    posSETTINGS1.y = 500;
    posEXIT1.x = 50;
    posEXIT1.y = 550;
    posSETTINGSM.x = 500;
    posSETTINGSM.y = 100;
    pos0.x = 822;
    pos0.y = 293;
    pos00.x = 822;
    pos00.y = 436;
    pos000.x = 822;
    pos000.y = 496;
    pos62.x = 552;
    pos62.y = 289;
    pos63.x = 552;
    pos63.y = 432;
    pos64.x = 552;
    pos64.y = 492;
    pos61.x = 552;
    pos61.y = 229;
    posredb.x = 1125;
    posredb.y = 125;
    posNORMAL.x = 800;
    posNORMAL.y = 235;
    posFULLSCREEN.x = 920;
    posFULLSCREEN.y = 235;
    posHIGH.x = 820;
    posHIGH.y = 293;
    posMEDIUM.x = 910;
    posMEDIUM.y = 293;
    posLOW.x = 1000;
    posLOW.y = 293;
    image = SDL_LoadBMP("images/img.bmp");
    imageLOGO = SDL_LoadBMP("images/logo.bmp");
    imageLOGO2 = SDL_LoadBMP("images/logo2.bmp");
    imageNEWGAME = IMG_Load("images/NEWGAME.png");
    imageNEWGAME1 = IMG_Load("images/NEWGAME1.png");
    imageNEWGAME2 = IMG_Load("images/NEWGAME2.png");
    imageSETTINGS = IMG_Load("images/SETTINGS.png");
    imageSETTINGS1 = IMG_Load("images/SETTINGS1.png");
    imageSETTINGS2 = IMG_Load("images/SETTINGS2.png");
    imageSETTINGSM = IMG_Load("images/SETTINGSM.png");
    imageEXIT = IMG_Load("images/EXIT.png");
    imageEXIT1 = IMG_Load("images/EXIT1.png");
    imageEXIT2 = IMG_Load("images/EXIT2.png");
    imageLOAD1 = IMG_Load("images/LOAD1.png");
    imageLOAD2 = IMG_Load("images/LOAD2.png");
    imageLOAD = IMG_Load("images/LOAD.png");
    img61 = IMG_Load("images/61.png");
    img62 = IMG_Load("images/62.png");
    img63 = IMG_Load("images/63.png");
    img64 = IMG_Load("images/64.png");
    img5 = IMG_Load("images/2.png");
    img3 = IMG_Load("images/3.png");
    img1 = IMG_Load("images/1.png");
    img0 = IMG_Load("images/0.png");
    img01 = IMG_Load("images/01.png");
    imgredb = IMG_Load("images/redb.png");
    imgredb1 = IMG_Load("images/redb1.png");
    //***********************************************************************************************************************
    imageFULLSCREEN = IMG_Load("images/FULLSCREEN.png");
    imageNORMAL = IMG_Load("images/NORMAL.png");
    imageHIGH = IMG_Load("images/HIGH.png");
    imageLOW = IMG_Load("images/LOW.png");
    imageMEDIUM = IMG_Load("images/MEDIUM.png");
    imageFULLSCREEN1 = IMG_Load("images/FULLSCREEN1.png");
    imageNORMAL1 = IMG_Load("images/NORMAL1.png");
    imageHIGH1 = IMG_Load("images/HIGH1.png");
    imageLOW1 = IMG_Load("images/LOW1.png");
    imageMEDIUM1 = IMG_Load("images/MEDIUM1.png");
    SDL_Flip(screen);
}
void init_sm()
{
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
    {
        printf("%s", Mix_GetError());
    }
    Mix_AllocateChannels(32);

    son = Mix_LoadWAV("sound/click.wav");

    musique = Mix_LoadMUS("sound/z.mp3");
    Mix_PlayMusic(musique, -1);
}
void init_tm()
{
    fontTest = TTF_OpenFont("DUSTY RANCH PERSONAL USE.ttf", 90);

    texte = TTF_RenderText_Solid(fontTest, "  ", fontColor);

    textePosition.x = 90;
    textePosition.y = 50;
    SDL_BlitSurface(texte, NULL, screen, &textePosition);
}
