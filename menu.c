#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "menufct.h"
int main()
{
  int n = 2, l = 1, s = 1, e = 1, e1, i, x, y, x1, y1, s1 = 1, sb1 = 1, sb2 = 2, sb3 = 1, sb4 = 1, BR = 7, SO = 7, MU = 7, exitsetting = 1, OK = 2, CANCEL = 1, scoff = 2, f = 0;
  float qq = 0;
  SDL_Surface *screen = NULL, *image = NULL, *imageLOGO = NULL, *imageLOGO2 = NULL, *imageNEWGAME = NULL, *imageLOAD = NULL, *imageSETTINGS = NULL, *imageEXIT = NULL, *imageNEWGAME1 = NULL, *imageLOAD1 = NULL, *imageSETTINGS1 = NULL, *imageEXIT1 = NULL, *imageNEWGAME2 = NULL, *imageLOAD2 = NULL, *imageSETTINGS2 = NULL, *imageEXIT2 = NULL, *imageSETTINGSM = NULL, *img0 = NULL, *img61 = NULL, *img62 = NULL, *img63 = NULL, *img64 = NULL, *img01 = NULL, *img1 = NULL, *img5 = NULL, *img3 = NULL, *imgredb = NULL, *imgredb1 = NULL, *NORMAL = NULL, *FULLSCREEN = NULL,*low=NULL,*med=NULL,*hig=NULL;
  SDL_Rect posback, poslogo, poslogo2, posNEWGAME, posLOAD, posSETTINGS, posSETTINGSM, posEXIT, posNEWGAME1, posLOAD1, posSETTINGS1, posEXIT1, pos0, pos00, pos000, pos61, pos62, pos63, pos64, posredb, posnormal, posfullscreen,poslow,posmed,poshig;
  SDL_WM_SetCaption("SDL_Mixer", NULL);
  SDL_Event event;
  //***********************************
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
  {
    printf("%s", Mix_GetError());
  }
  Mix_AllocateChannels(32);
  Mix_Chunk *son;
  son = Mix_LoadWAV("click.wav");
  Mix_Music *musique;
  musique = Mix_LoadMUS("z.mp3");
  Mix_PlayMusic(musique, -1);
  //***********************************
  int box_x = 50, box_h = 50, box_w = 353, box_y = 400, box_y1 = 450, box_y2 = 500, box_y3 = 550;
  int fs = 1, sx, sy, fls = 0;
  int tempsActuel=0,tempsPrecedent=0;int lpl=0;
  poslow.x=792;
  poslow.y=295;
  posmed.x=892;
  posmed.y=295;
  poshig.x=992;
  poshig.y=295;
  posnormal.x = 792;
  posnormal.y = 235;
  posfullscreen.x = 992;
  posfullscreen.y = 235;
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
  //**********************************
  int continuer = 1;
  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
  TTF_Init();

  screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  //**************************************************************************************************************************************
  low= IMG_Load("images/LOW.png");
  med= IMG_Load("images/MEDIUM.png");
  hig=IMG_Load("images/HIGH1.png");
  NORMAL = IMG_Load("images/NORMAL1.png");
  FULLSCREEN = IMG_Load("images/FULLSCREEN.png");
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
  SDL_EnableKeyRepeat(100, 100);
  //***********************************
  TTF_Font *fontTest;
  fontTest = TTF_OpenFont("DUSTY RANCH PERSONAL USE.ttf", 90);
  SDL_Color fontColor = {150, 157, 155};
  SDL_Surface *texte;
  texte = TTF_RenderText_Solid(fontTest, "  ", fontColor);
  SDL_Rect textePosition;
  textePosition.x = 90;
  textePosition.y = 50;
  SDL_BlitSurface(texte, NULL, screen, &textePosition);
  SDL_Flip(screen);
  //*********************************
  //*********************************************************************************************************************************
  SDL_SetColorKey(imageLOGO, SDL_SRCCOLORKEY, SDL_MapRGB(imageLOGO->format, 255, 255, 255));
  SDL_SetColorKey(imageLOGO2, SDL_SRCCOLORKEY, SDL_MapRGB(imageLOGO2->format, 255, 255, 255));
  //*********************************************************************************************************************************
  SDL_BlitSurface(image, NULL, screen, &posback);
  SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
  SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
  SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
  SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
  SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
  SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);
  //*********************************************************************************************************************************
  int SDL_SetWindowBrightness(screen, qq);
  //*********************************************************************************************************************************
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
        if (scoff == 2)
        {
          if ((sb2 == 2) && (BR < 7))
          {
            BR++;
          }
          if ((sb3 == 2) && (SO < 7))
          {
            SO++;
          }
          if ((sb4 == 2) && (MU < 7))
          {
            MU++;
          }

          break;
        case SDLK_LEFT:
          if ((sb2 == 2) && (BR > 0))
          {
            BR--;
          }
          if ((sb3 == 2) && (SO > 0))
          {
            SO--;
          }
          if ((sb4 == 2) && (MU > 0))
          {
            MU--;
          }
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
          if (sb4 == 2 && MU != 0)
          {
            MU = 0;
          }
          else if (sb4 == 2 && MU == 0)
          {
            MU = 7;
          }
          if (sb3 == 2 && SO != 0)
          {
            SO = 0;
          }
          else if (sb3 == 2 && SO == 0)
          {
            SO = 7;
          }
          if (sb1 == 2)
          {
            if (fs == 1)
              screen = SDL_SetVideoMode(1366, 768, 32, SDL_FULLSCREEN);
            else if (fs == 0)
              screen = SDL_SetVideoMode(1366, 768, 32, SDL_HWSURFACE);

            switch (fs)
            {
            case 0:
              NORMAL = IMG_Load("images/NORMAL1.png");
              FULLSCREEN = IMG_Load("images/FULLSCREEN.png");
              SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
              SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
              SDL_BlitSurface(image, NULL, screen, &posback);
              SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
              SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
              SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
              SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
              SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
              SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);

              fs = 1;
              break;
            case 1:
              NORMAL = IMG_Load("images/NORMAL.png");
              FULLSCREEN = IMG_Load("images/FULLSCREEN1.png");
              SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
              SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
              SDL_BlitSurface(image, NULL, screen, &posback);
              SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
              SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
              SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
              SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
              SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
              SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);
              fs = 0;
              break;
            }
            SDL_Flip(screen);
          }

          break;
          //***************************************************************************
        }
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
    if (s1 == 2)
    {
      SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
      SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
      SDL_BlitSurface(imageSETTINGSM, NULL, screen, &posSETTINGSM);
      choix_menusettings(sb1, sb2, sb3, sb4, screen, img0, img01, img61, img62, img63, img64, pos0, pos00, pos000, pos61, pos62, pos63, pos64, BR, SO, MU, img1, img3, img5, musique, s1);
      SDL_BlitSurface(imgredb, NULL, screen, &posredb);
      SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
      SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
      if ((x > posredb.x) && (x < posredb.x + 31) && (y > posredb.y) && (y < posredb.y + 27))
      {
        SDL_BlitSurface(imgredb1, NULL, screen, &posredb);
      }
      if ((x1 > posredb.x) && (x1 < posredb.x + 31) && (y1 > posredb.y) && (y1 < posredb.y + 27))
      {
        x1 = 0;
        y1 = 0;
        s1 = 1;
        sb2 = 2;
        sb3 = 1;
        sb4 = 1;
        sb1 = 1;
        exitsetting = 1;
      }
      if ((x > 552) && (x < 552 + 602) && (y > 229) && (y < 229 + 45))
      {
        sb1 = 2;
        sb4 = 1;
        sb2 = 1;
        sb3 = 1;
      }

      if ((x > 552) && (x < 552 + 602) && (y > 289) && (y < 289 + 45))
      {
        sb1 = 1;
        sb4 = 1;
        sb2 = 2;
        sb3 = 1;
      }

      if ((x > 552) && (x < 552 + 602) && (y > 432) && (y < 432 + 45))
      {
        sb1 = 1;
        sb4 = 1;
        sb2 = 1;
        sb3 = 2;
      }

      if ((x > 552) && (x < 552 + 602) && (y > 492) && (y < 492 + 45))
      {
        sb1 = 1;
        sb4 = 2;
        sb2 = 1;
        sb3 = 1;
      }
      if ((x1 > 552) && (x1 < 552 + 602) && (y1 > 492) && (y1 < 492 + 45))
      {
        if (sb4 == 2 && MU != 0)
        {
          MU = 0;
        }
        else if (sb4 == 2 && MU == 0)
        {
          MU = 7;
        }
        x1 = 0;
        y1 = 0;
      }

      if ((x1 > 552) && (x1 < 552 + 602) && (y1 > 432) && (y1 < 432 + 45))
      {
        if (sb3 == 2 && SO != 0)
        {
          SO = 0;
        }
        else if (sb3 == 2 && SO == 0)
        {
          SO = 7;
        }
        x1 = 0;
        y1 = 0;
      }

      if ((x1 > 552) && (x1 < 552 + 602) && (y1 > 229) && (y1 < 229 + 45))
      {

        if (fs == 1)
          screen = SDL_SetVideoMode(1366, 768, 32, SDL_FULLSCREEN);
        else if (fs == 0)
          screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE);

        switch (fs)
        {
        case 0:
          NORMAL = IMG_Load("images/NORMAL1.png");
          FULLSCREEN = IMG_Load("images/FULLSCREEN.png");
          SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
          SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
          SDL_BlitSurface(image, NULL, screen, &posback);
          SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
          SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
          SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
          SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
          SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
          SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);

          fs = 1;
          break;
        case 1:
          NORMAL = IMG_Load("images/NORMAL.png");
          FULLSCREEN = IMG_Load("images/FULLSCREEN1.png");
          SDL_BlitSurface(NORMAL, NULL, screen, &posnormal);
          SDL_BlitSurface(FULLSCREEN, NULL, screen, &posfullscreen);
          SDL_BlitSurface(image, NULL, screen, &posback);
          SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
          SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
          SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
          SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
          SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
          SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);

          fs = 0;
          break;
        }
        SDL_Flip(screen);
        x1 = 0;
        y1 = 0;
      }
    }

    //**********************************************************************************************
    choix_menu(x, y, box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3, screen, imageNEWGAME, imageNEWGAME1, imageLOAD, imageLOAD1, imageEXIT, imageEXIT1, imageSETTINGS, imageSETTINGS1, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1);
    //*********************************************************************************************
    choix_menu1(&x1, &y1, box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3, screen, imageNEWGAME2, imageNEWGAME1, imageLOAD2, imageLOAD1, imageEXIT2, imageEXIT1, imageSETTINGS2, imageSETTINGS1, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1, son, &continuer, &s1);
    //**************************************************************************************************
    SDL_BlitSurface(texte, NULL, screen, &textePosition);
    SDL_Flip(screen);


       /* tempsActuel = SDL_GetTicks();

if (tempsActuel - tempsPrecedent>70)
        {
     lpl++;
            switch(lpl)
            {
            case 1:
                image=SDL_LoadBMP("img.bmp");
                posback.x =0;
                posback.y =0;
                SDL_BlitSurface(image,NULL,screen,&posback);

                break;
            case 2:
                image=SDL_LoadBMP("img3.bmp");
                posback.x =0;
                posback.y =0;
                SDL_BlitSurface(image,NULL,screen,&posback);
                break;
            case 3:
                image=SDL_LoadBMP("img5.bmp");
                posback.x =0;
                posback.y =0;
            case 4:
                image=SDL_LoadBMP("img4.bmp");
                posback.x =0;
                posback.y =0;
                lpl=0;
                break;
            }
            tempsPrecedent = tempsActuel;
            SDL_BlitSurface(image,NULL,screen,&posback);
        }*/

    
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

  return 0;
}
