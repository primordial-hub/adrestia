#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
#include "fc.h"
#include "init.h"
#include "main.h"
void menu()
{
  init_sm ();

  int continuer = 1;
  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
  TTF_Init();
   init_m();
  screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

  SDL_EnableKeyRepeat(100, 100);
  init_tm ();
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
 if (s1==2)
    {
       if (sb1==2)
 { display++;}
     }
if (s1==2)
    {
       if (sb2==2)
 { quality++;}
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
           if (s1==2)
    {
       if (sb1==2)
 { display++;}}
 if (s1==2)
    {
       if (sb2==2)
 { quality--;}
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
             if (quality % 3 ==1)
         {            screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF); }
        if (quality % 3 ==2)
         {         screen = SDL_SetVideoMode(1300, 800, 16, SDL_HWSURFACE | SDL_DOUBLEBUF);    }
        if (quality % 3 ==0)
         {        screen = SDL_SetVideoMode(1300, 800, 8, SDL_HWSURFACE | SDL_DOUBLEBUF);     }
              
           
            if (fs == 1)
              screen = SDL_SetVideoMode(1366, 768, 32, SDL_FULLSCREEN);
            else if (fs == 0)
              screen = SDL_SetVideoMode(1366, 768, 32, SDL_HWSURFACE);

            switch (fs)
            {
            case 0:
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
      SDL_BlitSurface(imageSETTINGSM, NULL, screen, &posSETTINGSM);
      choix_menusettings(sb1, sb2, sb3, sb4, screen, img0, img01, img61, img62, img63, img64, pos0, pos00, pos000, pos61, pos62, pos63, pos64, BR, SO, MU, img1, img3, img5, musique,imageFULLSCREEN1,imageNORMAL1,imageFULLSCREEN,imageNORMAL,posFULLSCREEN,posNORMAL,display,imageHIGH,imageHIGH1,imageMEDIUM,imageMEDIUM1,imageLOW,imageLOW1,posHIGH,posMEDIUM,posLOW,quality);
      SDL_BlitSurface(imgredb, NULL, screen, &posredb);
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

      if ((x1 > 552) && (x1 < 552 + 602) && (y1 > 229) && (y1 < 229 + 45))
      {
      

        if (fs == 1)
         { if ((s1==2)&&(sb1==2)&&(display==2))
        {  screen = SDL_SetVideoMode(1366, 768, 32, SDL_FULLSCREEN);}}
        else if (fs == 0)
          {if ((s1==2)&&(sb1==2)&&(display==1))
          {screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE);}}

        switch (fs)
        {
        case 0:
          SDL_BlitSurface(image, NULL, screen, &posback);
          SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
          SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
          SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
          SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
          SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
          SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);
          fs=1;
          break;
        case 1:
          SDL_BlitSurface(image, NULL, screen, &posback);
          SDL_BlitSurface(imageLOGO, NULL, screen, &poslogo);
          SDL_BlitSurface(imageLOGO2, NULL, screen, &poslogo2);
          SDL_BlitSurface(imageNEWGAME, NULL, screen, &posNEWGAME);
          SDL_BlitSurface(imageLOAD1, NULL, screen, &posLOAD);
          SDL_BlitSurface(imageSETTINGS1, NULL, screen, &posSETTINGS);
          SDL_BlitSurface(imageEXIT1, NULL, screen, &posEXIT);
          fs=0;
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
