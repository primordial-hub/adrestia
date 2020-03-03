#include "menu.h"


void play(int *jouer)
{

  SDL_Surface *logoo = NULL;
  SDL_Rect poslogoo;
  SDL_Event jj;
  int a = 1;
  poslogoo.x = 0;
  poslogoo.y = 0;
  logoo = IMG_Load("images/st.jpg");
  SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
  while (*jouer == 1)
  {
    SDL_WaitEvent(&jj);
    SDL_BlitSurface(logoo, NULL, screen, &poslogoo);
    if (jj.type == SDL_KEYDOWN)
    {
      if ((jj.key.keysym.sym == SDLK_ESCAPE) && (sett != 1))
      {
        a++;
      }
    }
    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }
    SDL_Flip(screen);
  }
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
void choix_menu1(int *jouer,int *x1, int *y1, int box_x, int box_h, int box_w, int box_y, int box_y1, int box_y2, int box_y3, SDL_Surface *screen, SDL_Surface *imageNEWGAME2, SDL_Surface *imageNEWGAME1, SDL_Surface *imageLOAD2, SDL_Surface *imageLOAD1, SDL_Surface *imageEXIT2, SDL_Surface *imageEXIT1, SDL_Surface *imageSETTINGS2, SDL_Surface *imageSETTINGS1, SDL_Rect posNEWGAME, SDL_Rect posNEWGAME1, SDL_Rect posLOAD, SDL_Rect posLOAD1, SDL_Rect posSETTINGS, SDL_Rect posSETTINGS1, SDL_Rect posEXIT, SDL_Rect posEXIT1, Mix_Chunk *son, int *continuer, int *s1)
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
        *jouer=1;
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
