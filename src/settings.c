#include "defs.h"
#include "initandload.h"
#include "settings.h"

void down_menusettings(int *sb1, int *sb2, int *sb3, int *sb4)
{
  if (*sb4 == 2)
  {
    *sb1 = 2;
    *sb4 = 1;
    *sb2 = 1;
    *sb3 = 1;
  }
  else if (*sb1 == 2)
  {
    *sb2 = 2;
    *sb1 = 1;
    *sb3 = 1;
    *sb4 = 1;
  }
  else if (*sb2 == 2)
  {
    *sb4 = 1;
    *sb2 = 1;
    *sb1 = 1;
    *sb3 = 2;
  }
  else if (*sb3 == 2)
  {
    *sb4 = 2;
    *sb2 = 1;
    *sb1 = 1;
    *sb3 = 1;
  }
}

void up_menusettings(int *sb1, int *sb2, int *sb3, int *sb4)
{
  if (*sb1 == 2)
  {
    *sb4 = 2;
    *sb1 = 1;
    *sb2 = 1;
    *sb3 = 1;
  }
  else if (*sb4 == 2)
  {
    *sb4 = 1;
    *sb1 = 1;
    *sb2 = 1;
    *sb3 = 2;
  }
  else if (*sb3 == 2)
  {
    *sb4 = 1;
    *sb1 = 1;
    *sb2 = 2;
    *sb3 = 1;
  }
  else if (*sb2 == 2)
  {
    *sb4 = 1;
    *sb1 = 2;
    *sb2 = 1;
    *sb3 = 1;
  }
}

void sc_menusettings(int BR, int SO, int MU, int sb2, int sb3, int sb4, SDL_Surface *screen, SDL_Surface *img1, SDL_Surface *img3, SDL_Surface *img5, SDL_Rect pos0, SDL_Rect pos00, SDL_Rect pos000, Mix_Music *musique)
{
  SDL_Rect pos11, pos21, pos31, pos41, pos12, pos22, pos32, pos42, pos13, pos23, pos33, pos43;
  pos11.x = pos0.x + 54.8;
  pos11.y = pos0.y + 5.5;
  pos21.x = pos0.x + 89.2;
  pos21.y = pos0.y + 5.5;
  pos31.x = pos0.x + 114.38;
  pos31.y = pos0.y + 5.5;
  pos41.x = pos0.x + 221.1;
  pos41.y = pos0.y + 5.5;
  pos12.x = pos00.x + 54.8;
  pos12.y = pos00.y + 5.5;
  pos22.x = pos00.x + 89.2;
  pos22.y = pos00.y + 5.5;
  pos32.x = pos00.x + 114.38;
  pos32.y = pos00.y + 5.5;
  pos42.x = pos00.x + 221.1;
  pos42.y = pos00.y + 5.5;
  pos13.x = pos000.x + 54.8;
  pos13.y = pos000.y + 5.5;
  pos23.x = pos000.x + 89.2;
  pos23.y = pos000.y + 5.5;
  pos33.x = pos000.x + 114.38;
  pos33.y = pos000.y + 5.5;
  pos43.x = pos000.x + 221.1;
  pos43.y = pos000.y + 5.5;

  pos32.x = pos00.x + 114.6 - 27.18;
  if (SO == 0)
  {
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 0);
  }
  if (SO == 1)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 1);
  }

  if (SO == 2)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 2);
  }

  if (SO == 3)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 3);
  }

  if (SO == 4)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 4);
  }

  if (SO == 5)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 5);
  }

  if (SO == 6)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    Mix_Volume(-1, (MIX_MAX_VOLUME / 7) * 6);
  }

  if (SO == 7)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos12);
    SDL_BlitSurface(img5, NULL, screen, &pos22);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    pos32.x = pos32.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos32);
    SDL_BlitSurface(img3, NULL, screen, &pos42);
    Mix_Volume(-1, MIX_MAX_VOLUME);
  }

  pos33.x = pos000.x + 114.6 - 27.18;
  if (MU == 0)
  {
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 0);
  }
  if (MU == 1)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 1);
  }

  if (MU == 2)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 2);
  }

  if (MU == 3)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 3);
  }

  if (MU == 4)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 4);
  }

  if (MU == 5)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 5);
  }

  if (MU == 6)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    Mix_VolumeMusic((MIX_MAX_VOLUME / 7) * 6);
  }

  if (MU == 7)
  {
    SDL_BlitSurface(img1, NULL, screen, &pos13);
    SDL_BlitSurface(img5, NULL, screen, &pos23);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    pos33.x = pos33.x + 27.18;
    SDL_BlitSurface(img5, NULL, screen, &pos33);
    SDL_BlitSurface(img3, NULL, screen, &pos43);
    Mix_VolumeMusic(MIX_MAX_VOLUME);
  }
}
void choix_display(SDL_Surface *screen, SDL_Surface *imageFULLSCREEN1, SDL_Surface *imageNORMAL1, SDL_Surface *imageFULLSCREEN, SDL_Surface *imageNORMAL, SDL_Rect posFULLSCREEN, SDL_Rect posNORMAL, int display)
{
  if (display % 2 == 1)
  {
    SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
    SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
  }
  else if (display % 2 == 0)
  {
    SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
    SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
  }
}
void choix_quality(SDL_Surface *screen, SDL_Surface *imageHIGH, SDL_Surface *imageHIGH1, SDL_Surface *imageMEDIUM, SDL_Surface *imageMEDIUM1, SDL_Surface *imageLOW, SDL_Surface *imageLOW1, SDL_Rect posHIGH, SDL_Rect posMEDIUM, SDL_Rect posLOW, int quality)
{
  if (quality % 3 == 1)
  {
    SDL_BlitSurface(imageHIGH1, NULL, screen, &posHIGH);
    SDL_BlitSurface(imageMEDIUM, NULL, screen, &posMEDIUM);
    SDL_BlitSurface(imageLOW, NULL, screen, &posLOW);
  }
  else if (quality % 3 == 2)
  {
    SDL_BlitSurface(imageHIGH, NULL, screen, &posHIGH);
    SDL_BlitSurface(imageMEDIUM1, NULL, screen, &posMEDIUM);
    SDL_BlitSurface(imageLOW, NULL, screen, &posLOW);
  }
  else if (quality % 3 == 0)
  {
    SDL_BlitSurface(imageHIGH, NULL, screen, &posHIGH);
    SDL_BlitSurface(imageMEDIUM, NULL, screen, &posMEDIUM);
    SDL_BlitSurface(imageLOW1, NULL, screen, &posLOW);
  }
}

void choix_menusettings(int s1, int sb1, int sb2, int sb3, int sb4, SDL_Surface *screen, SDL_Surface *img0, SDL_Surface *img01, SDL_Surface *img61, SDL_Surface *img62, SDL_Surface *img63, SDL_Surface *img64, SDL_Rect pos0, SDL_Rect pos00, SDL_Rect pos000, SDL_Rect pos61, SDL_Rect pos62, SDL_Rect pos63, SDL_Rect pos64, int BR, int SO, int MU, SDL_Surface *img1, SDL_Surface *img3, SDL_Surface *img5, Mix_Music *musique, SDL_Surface *imageFULLSCREEN1, SDL_Surface *imageNORMAL1, SDL_Surface *imageFULLSCREEN, SDL_Surface *imageNORMAL, SDL_Rect posFULLSCREEN, SDL_Rect posNORMAL, int display, SDL_Surface *imageHIGH, SDL_Surface *imageHIGH1, SDL_Surface *imageMEDIUM, SDL_Surface *imageMEDIUM1, SDL_Surface *imageLOW, SDL_Surface *imageLOW1, SDL_Rect posHIGH, SDL_Rect posMEDIUM, SDL_Rect posLOW, int quality)
{
  if (sb1 == 2)
  {
    SDL_BlitSurface(img61, NULL, screen, &pos61);
  }
  if (sb2 == 2)
  {
    SDL_BlitSurface(img62, NULL, screen, &pos62);
  }
  if (sb3 == 2)
  {
    SDL_BlitSurface(img63, NULL, screen, &pos63);
    SDL_BlitSurface(img01, NULL, screen, &pos000);
    SDL_BlitSurface(img0, NULL, screen, &pos00);
  }
  if (sb4 == 2)
  {
    SDL_BlitSurface(img64, NULL, screen, &pos64);
    SDL_BlitSurface(img01, NULL, screen, &pos00);
    SDL_BlitSurface(img0, NULL, screen, &pos000);
  }
  if (s1 == 2 && sb4 != 2 && sb3 != 2)
  {
    SDL_BlitSurface(img01, NULL, screen, &pos000);
    SDL_BlitSurface(img01, NULL, screen, &pos00);
  }

  sc_menusettings(BR, SO, MU, sb2, sb3, sb4, screen, img1, img3, img5, pos0, pos00, pos000, musique);
  choix_display(screen, imageFULLSCREEN1, imageNORMAL1, imageFULLSCREEN, imageNORMAL, posFULLSCREEN, posNORMAL, display);
  choix_quality(screen, imageHIGH, imageHIGH1, imageMEDIUM, imageMEDIUM1, imageLOW, imageLOW1, posHIGH, posMEDIUM, posLOW, quality);
}

void settings_LEFT()
{
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
  if (s1 == 2)
  {
    if (sb1 == 2)
    {
      display++;
    }
  }
  if (s1 == 2)
  {
    if (sb2 == 2)
    {
      quality--;
    }
  }
}
void settings_RIGHT()
{

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
  }
  if (s1 == 2)
  {
    if (sb1 == 2)
    {
      display++;
    }
  }
  if (s1 == 2)
  {
    if (sb2 == 2)
    {
      quality++;
    }
  }
}
void settings_RETURN()
{
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
    if (quality % 3 == 1)
    {
      screen = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    }
    if (quality % 3 == 2)
    {
      screen = SDL_SetVideoMode(1300, 800, 16, SDL_HWSURFACE | SDL_DOUBLEBUF);
    }
    if (quality % 3 == 0)
    {
      screen = SDL_SetVideoMode(1300, 800, 8, SDL_HWSURFACE | SDL_DOUBLEBUF);
    }

    if (fs == 1)
      screen = SDL_SetVideoMode(1366, 768, 32, SDL_FULLSCREEN);
    else if (fs == 0)
      screen = SDL_SetVideoMode(1366, 768, 32, SDL_HWSURFACE);

    switch (fs)
    {
    case 0:
      imageNORMAL = IMG_Load("images/NORMAL1.png");
      imageFULLSCREEN = IMG_Load("images/FULLSCREEN.png");
      SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
      SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
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
      imageNORMAL = IMG_Load("images/NORMAL.png");
      imageFULLSCREEN = IMG_Load("images/FULLSCREEN1.png");
      SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
      SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
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
}
void settings_affichage()
{
  if (s1 == 2)
  {
    SDL_BlitSurface(imageSETTINGSM, NULL, screen, &posSETTINGSM);
    choix_menusettings(s1, sb1, sb2, sb3, sb4, screen, img0, img01, img61, img62, img63, img64, pos0, pos00, pos000, pos61, pos62, pos63, pos64, BR, SO, MU, img1, img3, img5, musique, imageFULLSCREEN1, imageNORMAL1, imageFULLSCREEN, imageNORMAL, posFULLSCREEN, posNORMAL, display, imageHIGH, imageHIGH1, imageMEDIUM, imageMEDIUM1, imageLOW, imageLOW1, posHIGH, posMEDIUM, posLOW, quality);
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
        imageNORMAL = IMG_Load("images/NORMAL1.png");
        imageFULLSCREEN = IMG_Load("images/FULLSCREEN.png");
        SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
        SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
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
        imageNORMAL = IMG_Load("images/NORMAL.png");
        imageFULLSCREEN = IMG_Load("images/FULLSCREEN1.png");
        SDL_BlitSurface(imageNORMAL, NULL, screen, &posNORMAL);
        SDL_BlitSurface(imageFULLSCREEN, NULL, screen, &posFULLSCREEN);
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
}

void settings()
{
  SDL_WaitEvent(&event1);
  switch (event1.type)
  {
  case SDL_QUIT:
    continuer = 0;

  case SDL_MOUSEMOTION:
    sx = event.motion.x;
    sy = event.motion.y;
    break;

  case SDL_KEYDOWN:
  {
    switch (event1.key.keysym.sym)
    {
    case SDLK_UP:
      up_menusettings(&sb1, &sb2, &sb3, &sb4);
      break;
    case SDLK_DOWN:
      down_menusettings(&sb1, &sb2, &sb3, &sb4);
      break;
    case SDLK_RIGHT:
      settings_RIGHT();
      break;
    case SDLK_LEFT:
      settings_LEFT();
      break;
    case SDLK_RETURN:
      settings_RETURN();
      break;
    }
  }

  case SDL_MOUSEBUTTONUP:
    switch (event1.button.button)
    {
    case SDL_BUTTON_LEFT:
    {
      x1 = event1.button.x;
      y1 = event1.button.y;
    }
    }
    break;
  }
  settings_affichage();
}
