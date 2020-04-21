#include "menu.h"

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

void setjouersouris(int *jouer)
{
  possetj.x = 13;
  possetj.y = 606;
  posexitj.x = 13;
  posexitj.y = 695;
  possetjouer.x = 0;
  possetjouer.y = 0;
  SDL_Event eventj1;
  SDL_WaitEvent(&eventj1);
  switch (eventj1.type)
  {

  case SDL_MOUSEBUTTONUP:
    x3 = eventj1.button.x;
    y3 = eventj1.button.y;
    x1 = eventj1.button.x;
    y1 = eventj1.button.y;
    break;
  case SDL_MOUSEMOTION:
    if (sett == 1)
    {
      x = eventj1.button.x;
      y = eventj1.button.y;
    }
    break;
  case SDL_KEYDOWN:
  {
    switch (eventj1.key.keysym.sym)
    {
    case SDLK_UP:
      if (sett != 1)
      {
        setj++;
      }

      break;
    case SDLK_DOWN:

      if (sett != 1)
      {
        setj++;
      }
      break;
    case SDLK_RETURN:
      if (setj % 2 == 1)
      {
        *jouer = 0;
      }
      if (setj % 2 == 0)
      {
        sett = 1;
      }
      break;
    case SDLK_ESCAPE:
      if (sett == 1)
      {
        sett = 0;
      }
      break;
    }
  }
  break;
  case SDL_QUIT:
    *jouer = 0;
    break;
  }
  setjouer = IMG_Load("images/setjouer0.png");
  setjouer1 = IMG_Load(" ");
  SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  SDL_BlitSurface(setjouer1, NULL, screen, &possetj);

  if (setj == -1)
  {
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
  }

  if (setj % 2 == 0)
  {
    setjouer1 = IMG_Load("images/settingsjouer.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    SDL_BlitSurface(setjouer1, NULL, screen, &possetj);
  }

  if (setj % 2 == 1)
  {

    setjouer1 = IMG_Load("images/exitjouer.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    SDL_BlitSurface(setjouer1, NULL, screen, &posexitj);
  }
  if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 594) && (y3 < 594 + 68))
  {
    sett = 1;
    setj = 0;
    x3 = 0;
    y3 = 0;
    setjouer1 = IMG_Load("images/settingsjouer.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    SDL_BlitSurface(setjouer1, NULL, screen, &possetj);
  }
  if ((x3 > 10) && (x3 < 10 + 64) && (y3 > 682) && (y3 < 682 + 68))
  {
    setj = 1;
    x3 = 0;
    y3 = 0;
    *jouer = 0;
    setjouer1 = IMG_Load("images/exitjouer.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    SDL_BlitSurface(setjouer1, NULL, screen, &posexitj);
  }
  if ((x1 > posredb.x) && (x1 < posredb.x + 31) && (y1 > posredb.y) && (y1 < posredb.y + 27))
  {
    sett = 0;
  }

  if (sett == 1)
  {
    s1 = 2;
    settings();
  }
  if (sett == 0)
  {
    s1 = 1;
    exitsetting = 1;
  }

  SDL_Flip(screen);
  SDL_FreeSurface(setjouer);
  SDL_FreeSurface(setjouer1);
}

void play(int *jouer)
{

  personnage1 per;
  per = init_perso();

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
  const int vitesse = 10;
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

  per.posperso.x = 300;
  per.posperso.y = 570;
  per.posperso.w = 375;
  per.posperso.h = 570 + 150;
  per.position_init.x = 300;
  per.position_init.y = 570;
  per.position_init.w = 375;
  per.position_init.h = 570 + 150;

  int check;
  int test = 0;
  int test1 = 0;

  SDL_Surface *map;
  map = IMG_Load("imlvl1/maplvl1.png");

  lvl1 = IMG_Load("imlvl1/lvl1.png");
  enemy1.en = IMG_Load("imlvl1/en1.png");
  enemy2.en = IMG_Load("imlvl1/en1.png");
  box1.box = IMG_Load("imlvl1/lvl1box1.png");
  mario.perso = IMG_Load("imlvl1/en2.png");
  mario1.perso = IMG_Load("imlvl1/en2.png");
  box2.box = IMG_Load("imlvl1/lvl1box2.png");
  lvll = IMG_Load("imlvl1/lvl1.png");
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

    check = tellmewhattodo(map, per.posperso);
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
        per.perso = IMG_Load("imperso/per.png");
        break;
      case SDLK_LEFT:
        b[1] = 1;
        per.perso = IMG_Load("imperso/per2.png");
        break;
      case SDLK_DOWN:
        access = 2;
        break;
      case SDLK_UP:
        if (check == 4)
        {

          do
          {
            test++;
            per.posperso.y--;
            per.posperso.h--;
            per.position_init.y--;
            per.position_init.h--;
          } while (test != 250 && tellmewhattodo(map, per.posperso) != 5 && tellmewhattodo(map, per.posperso) != 9 && tellmewhattodo(map, per.posperso) != 8);
          test = 0;
        }

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
      case SDLK_UP:

        break;
      case SDLK_DOWN:

        break;
      }
      break;
    }

    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }

    per = tellmewhy(check, test1, per);
    if (check == 2 || check == 8)
    {
      per.posperso.x = per.posperso.x - 2;
      per.posperso.w = per.posperso.w - 2;
      x = x - 2;
      camera.x = camera.x - 2;
    }
    if (check == 3 || check == 9)
    {
      per.posperso.x = per.posperso.x + 2;
      per.posperso.w = per.posperso.w + 2;
      x = x + 2;
      camera.x = camera.x + 2;
    }

    if (a % 2 != 0)
    {
      if ((b[0]) && (camera.x < 5365 - 1300) && check != 2 && check != 6 && check != 5 && check != 8)
      {
        per.posperso.x = per.posperso.x + vitesse;
        per.posperso.w = per.posperso.w + vitesse;
        x = x + vitesse;
        camera.x = camera.x + vitesse;
      }
      if ((b[1]) && (camera.x > 0) && check != 3 && check != 5 && check != 7 && check != 9)
      {
        per.posperso.w = per.posperso.w - vitesse;
        per.posperso.x = per.posperso.x - vitesse;
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
      //////////////////////////////
      SDL_BlitSurface(per.perso, NULL, screen, &per.position_init);
      //////////////////////////////
      if (enemy3.direction % 2 == 0)
      {
        enemy3.en = IMG_Load("imlvl1/en2.png");
        enemy3 = deplacement_aleatoire(enemy3);
        SDL_BlitSurface(enemy3.en, NULL, lvl1, &enemy3.posen);
      }
      else if (enemy3.direction % 2 == 1)
      {
        enemy3.en = IMG_Load("imlvl1/en21.png");
        enemy3 = deplacement_aleatoire(enemy3);
        SDL_BlitSurface(enemy3.en, NULL, lvl1, &enemy3.posen);
      }
      SDL_Flip(lvl1);
    }
    SDL_Flip(screen);
  }
  sb2 = 2;
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
