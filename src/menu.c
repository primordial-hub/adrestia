#include "menu.h"

typedef int bool;
void play(int *jouer)
{
  SDL_Surface *lvl1 = NULL, *lvll = NULL;
  SDL_Rect poslvl1;
  SDL_Rect camera;
  enemy enemy1, enemy2, enemy3;
  box box1, box2, box3, box4;
  personnage mario, mario1;

  poslvl1.x = 0;
  poslvl1.y = 0;
  const int fps = 30;
  Uint32 start;
  const int vitesse = 5;
  int x = 0, y = 0, j = 0;
  camera.x = 0;
  camera.y = 0;
  camera.w = 1366;
  camera.h = 800;
  bool b[2] = {0, 0};
  enemy1.posen.x = 1700;
  enemy1.posen.y = 655.5;
  enemy2.posen.x = 2716;
  enemy2.posen.y = 655.5;
  enemy3.posen.x = 3069;
  enemy3.posen.y = 628;
  box1.posbox.x = 1578;
  box1.posbox.y = 600;
  box2.posbox.x = 2158;
  box2.posbox.y = 544;
  mario.posperso.x = 1578;
  mario.posperso.y = 514;
  mario1.posperso.x = 2160;
  mario1.posperso.y = 495;
  mario.h = 86;
  mario.w = 61;
  mario1.h = 86;
  mario1.w = 61;
  int x1, y1, access = 1, access1 = 1;
  enemy1.distance = 378;
  enemy2.distance = 280;
  enemy3.distance = 109;
  enemy1.position_initiale = 1712;
  enemy2.position_initiale = 2716;
  enemy3.position_initiale = 3069;
  enemy1.direction = 1;
  enemy2.direction = 1;
  enemy3.direction = 1;

  lvl1 = IMG_Load("tachesproj/lvl1.png");
  enemy1.en = IMG_Load("tachesproj/en1.png");
  enemy2.en = IMG_Load("tachesproj/en1.png");
  box1.box = IMG_Load("tachesproj/lvl1box1.png");
  mario.perso = IMG_Load("tachesproj/en2.png");
  mario1.perso = IMG_Load("tachesproj/en2.png");
  box2.box = IMG_Load("tachesproj/lvl1box2.png");
  lvll = IMG_Load("tachesproj/lvl1.png");
  if (*jouer == 1)
  {
    SDL_BlitSurface(lvl1, &camera, screen, NULL);
    SDL_BlitSurface(enemy1.en, NULL, screen, &enemy1.posen);
    SDL_BlitSurface(enemy2.en, NULL, screen, &enemy2.posen);
  }
  SDL_Flip(screen);
  SDL_EnableKeyRepeat(10, 10);

  SDL_Event jj;
  int a = 1;

  while (*jouer == 1)
  {

    SDL_PollEvent(&jj);
    switch (jj.type)
    {
    case SDL_QUIT:
      *jouer = 0;
    case SDL_MOUSEBUTTONUP:
      x = jj.button.x;
      y = jj.button.y;
      break;
    case SDL_KEYDOWN:
    {

      switch (jj.key.keysym.sym)
      {
      case SDLK_RIGHT:
        b[0] = 1;
        break;
      case SDLK_LEFT:
        b[1] = 1;
        break;
      case SDLK_DOWN:
        access = 2;

        break;
      case SDLK_ESCAPE:
        if (sett != 1)
        {
          a++;
        }
        break;
      }
    }

    break;
    case SDL_KEYUP:
      switch (jj.key.keysym.sym)
      {
      case SDLK_RIGHT:
        b[0] = 0;
        break;
      case SDLK_LEFT:
        b[1] = 0;
        break;
      }
      break;
    }

    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }

    if (a % 2 != 0)
    {
      if ((b[0]) && (camera.x < 5365 - 1300))
      {
        x = x + vitesse;
        camera.x = camera.x + vitesse;
      }
      if ((b[1]) && (camera.x > 0))
      {
        x = x - vitesse;
        camera.x = camera.x - vitesse;
      }
      SDL_BlitSurface(lvl1, &camera, screen, NULL);
      SDL_BlitSurface(lvll, NULL, lvl1, &poslvl1);
      enemy1 = deplacement_aleatoire(enemy1);
      enemy2 = deplacement_aleatoire(enemy2);

      SDL_BlitSurface(enemy1.en, NULL, lvl1, &enemy1.posen);
      SDL_BlitSurface(enemy2.en, NULL, lvl1, &enemy2.posen);
      mario = access_box1(box1, mario, access);
      mario1 = access_box2(box2, mario1, access);
      SDL_BlitSurface(mario.perso, NULL, lvl1, &mario.posperso);
      SDL_BlitSurface(mario1.perso, NULL, lvl1, &mario1.posperso);
      SDL_BlitSurface(box1.box, NULL, lvl1, &box1.posbox);
      SDL_BlitSurface(box2.box, NULL, lvl1, &box2.posbox);
      if (enemy3.direction % 2 == 0)
      {
        enemy3.en = IMG_Load("tachesproj/en2.png");
        enemy3 = deplacement_aleatoire(enemy3);
        SDL_BlitSurface(enemy3.en, NULL, lvl1, &enemy3.posen);
      }
      else if (enemy3.direction % 2 == 1)
      {
        enemy3.en = IMG_Load("tachesproj/en21.png");
        enemy3 = deplacement_aleatoire(enemy3);
        SDL_BlitSurface(enemy3.en, NULL, lvl1, &enemy3.posen);
      }
      SDL_Flip(lvl1);
    }
    SDL_Flip(screen);
  }
  sb2=2;
  if (*jouer == 0)
  {
    a = 1;
    exitsetting = 1;
    s1 = 1;
    sett = 0;
    sb1 = 1;
    sb2 = 2;
    sb3 = 1;
    sb4 = 1;
  }
  SDL_FreeSurface(lvl1);
  SDL_FreeSurface(lvll);
  SDL_FreeSurface(enemy1.en);
  SDL_FreeSurface(enemy2.en);
  SDL_FreeSurface(enemy3.en);
  SDL_FreeSurface(box1.box);
  SDL_FreeSurface(box2.box);
  SDL_FreeSurface(mario.perso);
  SDL_FreeSurface(mario1.perso);
}

void down_menu(int *n, int *l, int *s, int *e, int *e1)
{
  if (*e == 2)
  {
    *n = 2;
    *e = 1;
    *l = 1;
    *s = 1;
    *e1 = 1;
  }
  else if (*n == 2)
  {
    *l = 2;
    *n = 1;
    *s = 1;
    *e = 1;
    *e1 = 1;
  }
  else if (*l == 2)
  {
    *e = 1;
    *l = 1;
    *n = 1;
    *s = 2;
    *e1 = 1;
  }
  else if (*s == 2)
  {
    *e = 2;
    *l = 1;
    *n = 1;
    *s = 1;
    *e1 = 3;
  }
}

void up_menu(int *n, int *l, int *s, int *e, int *e1)
{
  if (*n == 2)
  {
    *e = 2;
    *n = 1;
    *l = 1;
    *s = 1;
    *e1 = 3;
  }
  else if (*e == 2)
  {
    *e = 1;
    *n = 1;
    *l = 1;
    *s = 2;
    *e1 = 1;
  }
  else if (*s == 2)
  {
    *e = 1;
    *n = 1;
    *l = 2;
    *s = 1;
    *e1 = 1;
  }
  else if (*l == 2)
  {
    *e = 1;
    *n = 2;
    *l = 1;
    *s = 1;
    *e1 = 1;
  }
}

void choix_menu0(int n, int l, int s, int s1, int e, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Surface *img0, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1)
{
  if (n == 1)
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME1);
  }
  else if (n == 2)
  {
    SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
  }
  if (l == 1)
  {
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD1);
  }
  else if (l == 2)
  {
    SDL_BlitSurface(imageLOAD, NULL, screen, &posLOAD);
  }
  if (s == 1)
  {
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS1);
  }
  else if (s == 2)
  {
    SDL_BlitSurface(imageSETTINGS, NULL, screen, &posSETTINGS);
  }
  if (e == 1)
  {
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
  }
  else if (e == 2)
  {
    SDL_BlitSurface(imageEXIT, NULL, screen, &posEXIT);
  }
}

void choix_menu(int x, int y, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1)
{
  if ((x > box_x) && (x < box_x + box_w) && (y > box_y) && (y < box_y + box_h))
  {
    SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
  }
  if ((x > box_x) && (x < box_x + box_w) && (y > box_y1) && (y < box_y1 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
  }
  if ((x > box_x) && (x < box_x + box_w) && (y > box_y2) && (y < box_y2 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
  }
  if ((x > box_x) && (x < box_x + box_w) && (y > box_y3) && (y < box_y3 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT, NULL, screen, &posEXIT1);
  }
}
void choix_menu1(int *jouer, int *x1, int *y1, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME2, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD2, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT2, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS2, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1, Mix_Chunk *son, int *continuer, int *s1)
{
  if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y) && (*y1 < box_y + box_h))
  {
    SDL_BlitSurface(imageNEWGAME2, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    *x1 = 0;
    *y1 = 0;
    Mix_PlayChannel(1, son, 0);
    *jouer = 1;
  }
  if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y1) && (*y1 < box_y1 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD2, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    *x1 = 0;
    *y1 = 0;
    Mix_PlayChannel(1, son, 0);
  }
  if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y2) && (*y1 < box_y2 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS2, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT1);
    *x1 = 0;
    *y1 = 0;
    Mix_PlayChannel(1, son, 0);
    *s1 = 2;
  }
  if ((*x1 > box_x) && (*x1 < box_x + box_w) && (*y1 > box_y3) && (*y1 < box_y3 + box_h))
  {
    SDL_BlitSurface(imageNEWGAME1, NULL, screen, &posNEWGAME);
    SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
    SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
    SDL_BlitSurface(imageEXIT2, NULL, screen, &posEXIT1);
    *x1 = 0;
    *y1 = 0;
    Mix_PlayChannel(1, son, 0);
    *continuer = 0;
  }
}

void menu()
{
  int jouer = 0;
  init_sm();

  int continuer = 1;
  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
  TTF_Init();
  init_m();
  screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

  SDL_EnableKeyRepeat(100, 100);
  init_tm();
  SDL_SetColorKey(imageLOGO, SDL_SRCCOLORKEY, SDL_MapRGB(imageLOGO->format, 255, 255, 255));
  SDL_SetColorKey(imageLOGO2, SDL_SRCCOLORKEY, SDL_MapRGB(imageLOGO2->format, 255, 255, 255));
  SDL_BlitSurface(image, NULL, screen, &posback);
  SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
  SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
  SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
  SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
  SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
  SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);
  SDL_Flip(screen);
  while (continuer)
  {

    if (f != 100)
    {
      f++;
      if (f == 10)
      {
        texte = TTF_RenderText_Solid(fontTest, "A", fontColor);
      }

      if (f == 20)
      {
        texte = TTF_RenderText_Solid(fontTest, "AD", fontColor);
      }

      if (f == 30)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADR", fontColor);
      }

      if (f == 40)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADRE", fontColor);
      }

      if (f == 50)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADRES", fontColor);
      }

      if (f == 60)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADREST", fontColor);
      }

      if (f == 70)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADRESTI", fontColor);
      }

      if (f == 80)
      {
        texte = TTF_RenderText_Solid(fontTest, "ADRESTIA", fontColor);
        f = 100;
      }
    }
    SDL_WaitEvent(&event);
    switch (event.type)
    {
    case SDL_QUIT:
      continuer = 0;

    case SDL_MOUSEMOTION:
      x = event.motion.x;
      y = event.motion.y;
      if (s1 == 2)
      {
        sx = event.motion.x;
        sy = event.motion.y;
      }
      break;

    case SDL_KEYDOWN:
    {

      switch (event.key.keysym.sym)
      {
      case SDLK_DOWN:
        if (s1 != 2)
        {
          down_menu(&n, &l, &s, &e, &e1);
        }

        if (s1 == 2)
        {
          down_menusettings(&sb1, &sb2, &sb3, &sb4);
        }
        break;
      case SDLK_UP:
        if (s1 != 2)
        {
          up_menu(&n, &l, &s, &e, &e1);
        }
        if (s1 == 2)
        {
          up_menusettings(&sb1, &sb2, &sb3, &sb4);
        }
        break;
      case SDLK_RIGHT:

        settings_RIGHT();
        break;
      case SDLK_LEFT:
        settings_LEFT();
        break;
      case SDLK_ESCAPE:
        s1 = 1;
        exitsetting = 1;
        sb1 = 1;
        sb2 = 2;
        sb3 = 1;
        sb4 = 1;
        break;
      case SDLK_RETURN:
        //exit
        if (e1 == 3)
        {
          continuer = 0;
        }
        //ouverture settings
        if (s == 2)
        {
          s1 = 2;
        }
        //ouverture jouer
        if (n == 2)
        {
          jouer = 1;
        }

        settings_RETURN();

        break;
        //***************************************************************************
      }

      break;
    case SDL_MOUSEBUTTONUP:
      switch (event.button.button)
      {
      case SDL_BUTTON_LEFT:
      {
        x1 = event.button.x;
        y1 = event.button.y;
      }
      break;
      }
    }
    }
    SDL_BlitSurface(image, NULL, screen, &posback);
    SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
    SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
    //******************************************************************************************
    choix_menu0(n, l, s, s1, e, screen, imageNEWGAME, imageNEWGAME1, imageLOAD, imageLOAD1, imageEXIT, imageEXIT1, imageSETTINGS, imageSETTINGS1, img0, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1);
    //**********************************************************************************************
    settings_affichage();

    //**********************************************************************************************
    choix_menu(x, y, box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3, screen, imageNEWGAME, imageNEWGAME1, imageLOAD, imageLOAD1, imageEXIT, imageEXIT1, imageSETTINGS, imageSETTINGS1, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1);
    //*********************************************************************************************
    choix_menu1(&jouer, &x1, &y1, box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3, screen, imageNEWGAME2, imageNEWGAME1, imageLOAD2, imageLOAD1, imageEXIT2, imageEXIT1, imageSETTINGS2, imageSETTINGS1, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1, son, &continuer, &s1);
    //**************************************************************************************************
    SDL_BlitSurface(texte, NULL, screen, &textePosition);
    SDL_Flip(screen);
    if (jouer == 1)
    {
      play(&jouer);
    }
  }
  //**********************************************************************
  SDL_FreeSurface(image);
  SDL_FreeSurface(imageLOGO);
  SDL_FreeSurface(imageLOGO2);
  SDL_FreeSurface(imageNEWGAME);
  SDL_FreeSurface(imageNEWGAME1);
  SDL_FreeSurface(imageNEWGAME2);
  SDL_FreeSurface(imageLOAD);
  SDL_FreeSurface(imageLOAD1);
  SDL_FreeSurface(imageLOAD2);
  SDL_FreeSurface(imageSETTINGS);
  SDL_FreeSurface(imageSETTINGS1);
  SDL_FreeSurface(imageSETTINGS2);
  SDL_FreeSurface(imageSETTINGSM);
  SDL_FreeSurface(imageEXIT);
  SDL_FreeSurface(imageEXIT1);
  SDL_FreeSurface(imageEXIT2);
  SDL_FreeSurface(img61);
  SDL_FreeSurface(img62);
  SDL_FreeSurface(img63);
  SDL_FreeSurface(img64);
  SDL_FreeSurface(img3);
  SDL_FreeSurface(img1);
  SDL_FreeSurface(img0);
  SDL_FreeSurface(img01);
  SDL_FreeSurface(imgredb);
  SDL_FreeSurface(imgredb1);
  Mix_FreeMusic(musique);
  Mix_FreeChunk(son);
  Mix_CloseAudio();
  //***********************************************************************
}
