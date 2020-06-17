#include "menu.h"
SDL_Surface *fenetre = NULL, *solo = NULL, *solo2 = NULL, *solo3 = NULL, *multijoueurs = NULL, *multijoueurs2 = NULL, *multijoueurs3 = NULL;

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
      poslogo.x = 1220;
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
      poslogo.x = 1280;
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
    if ((x1 > posredb.x) && (x1 < posredb.x + 31) && (y11 > posredb.y) && (y11 < posredb.y + 27))
    {
      x1 = 0;
      y11 = 0;
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
    if ((x1 > 552) && (x1 < 552 + 602) && (y11 > 492) && (y11 < 492 + 45))
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
      y11 = 0;
    }

    if ((x1 > 552) && (x1 < 552 + 602) && (y11 > 432) && (y11 < 432 + 45))
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
      y11 = 0;
    }

    if ((x1 > 552) && (x1 < 552 + 602) && (y11 > 229) && (y11 < 229 + 45))
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
        poslogo.x = 1220;
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
        poslogo.x = 1280;
        fs = 0;
        break;
      }
      SDL_Flip(screen);
      x1 = 0;
      y11 = 0;
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
      y11 = event1.button.y;
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
    y11 = eventj1.button.y;
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
        sauvg = 1;
        tests = 0;
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
    sauvg = 1;
    test = 0;
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
    sauvg = 1;
    test = 0;
    setjouer1 = IMG_Load("images/exitjouer.png");
    SDL_BlitSurface(setjouer, NULL, screen, &possetjouer);
    SDL_BlitSurface(setjouer1, NULL, screen, &posexitj);
  }
  if ((x1 > posredb.x) && (x1 < posredb.x + 31) && (y11 > posredb.y) && (y11 < posredb.y + 27))
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

  if (ktest == 0)
  {
    per = init_perso();
    camera.x = 0;
    camera.y = 0;
    camera.w = 1366;
    camera.h = 800;
    per.posperso.x = 300;
    per.posperso.y = 570;
    per.posperso.w = 375;
    per.posperso.h = 570 + 150;
    per.position_init.x = 300;
    per.position_init.y = 570;
    per.position_init.w = 375;
    per.position_init.h = 570 + 150;
  }
  else if (ktest == 1)
  {

    FILE *f = NULL;
    f = fopen("sauvgarder.txt", "r");
    fscanf(f, "%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd ", &per.posperso.x, &per.posperso.y, &per.posperso.w, &per.posperso.h, &camera.x, &camera.y, &camera.h, &camera.w, &per.position_init.x, &per.position_init.y, &per.position_init.h, &per.position_init.w);
    fclose(f);
  }

  bool b[2] = {0, 0};

  posvie.x = 1;
  posvie.y = 1;
  postexte.x = 500;
  postexte.y = 50;
  postexte2.x = 400;
  postexte2.y = 300;
  postexte3.x = 1;
  postexte3.y = 37;
  postexte4.x = 120;
  postexte4.y = 37;
  poslvl1.x = 0;
  poslvl1.y = 0;

  enemy1.posen.x = 1700;
  enemy1.posen.y = 655.5;
  enemy2.posen.x = 2716;
  enemy2.posen.y = 655.5;
  enemy3.posen.x = 3069;
  enemy3.posen.y = 628;
  /*box1.posbox.x = 1578;
  box1.posbox.y = 600;
  box2.posbox.x = 2158;
  box2.posbox.y = 544;*/
  mario.posperso.x = 1578;
  mario.posperso.y = 514;
  mario1.posperso.x = 2160;
  mario1.posperso.y = 495;
  mario.h = 86;
  mario.w = 61;
  mario1.h = 86;
  mario1.w = 61;
  enemy1.distance = 378;
  enemy2.distance = 280;
  enemy3.distance = 109;
  enemy1.position_initiale = 1712;
  enemy2.position_initiale = 2716;
  enemy3.position_initiale = 3069;
  enemy1.direction = 1;
  enemy2.direction = 1;
  enemy3.direction = 1;

  SDL_Surface *rot;
  SDL_Rect posrot;
  tmp_position.x = 10;
  tmp_position.y = 670;
  sauvgarderPosition.x = 400;
  sauvgarderPosition.y = 50;

  ouiPosition.x = 400;
  ouiPosition.y = 100 + 442;

  nonPosition.x = 420 + 225;
  nonPosition.y = 100 + 442;

  FILE *fic1 = NULL;
  Enigme *enig;

  sauvgarder = IMG_Load("images/sauvgarder.png");
  oui = IMG_Load("images/oui.png");
  non = IMG_Load("images/non.png");

  rot = IMG_Load("imperso/per.png");
  map = IMG_Load("imlvl1/maplvl1.png");
  lvll = IMG_Load("imlvl1/lvl1.png");
  lvl1 = IMG_Load("imlvl1/lvl1.png");
  enemy1.en = IMG_Load("imlvl1/en1.png");
  enemy2.en = IMG_Load("imlvl1/en1.png");
  vie11 = IMG_Load("imlvl1/lives.png");
  fontTest1 = TTF_OpenFont("font/fon.otf", 30);
  fontTest2 = TTF_OpenFont("font/fon.otf", 90);
  texte1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
  texte3 = TTF_RenderText_Solid(fontTest1, "Score:", fontColor1);
  texte4 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
  sprintf(tempsjeu, "%d", SDL_GetTicks());
  chrono = TTF_RenderText_Solid(fontTest1, tempsjeu, fontColor1);
  SDL_BlitSurface(chrono, NULL, lvl1, &tmp_position);
  //box1.box = IMG_Load("imlvl1/lvl1box1.png");
  //mario.perso = IMG_Load("imlvl1/en2.png");
  //mario1.perso = IMG_Load("imlvl1/en2.png");
  //box2.box = IMG_Load("imlvl1/lvl1box2.png");
  /*eq_linaire(res_lin, eq);
    printf("%s",eq);
    enig->surf_enig = TTF_RenderText_Solid(fontTest1, eq,fontColor1 );
    enig->enigme_position.x = 100;
    enig->enigme_position.y = 100;
    SDL_BlitSurface(enig->surf_enig, NULL,lvl1, &enig->enigme_position);

    enig->surf_choix_A = TTF_RenderText_Solid(fontTest1, "10",fontColor1 );
    enig->choix_A_position.x = 100;
    enig->choix_A_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_A, NULL, lvl1, &enig->choix_A_position);

    sprintf(B, "%.2f", *res_lin);
     printf("%.2f", *res_lin);
    enig->surf_choix_B = TTF_RenderText_Solid(fontTest1, B,fontColor1 );
    enig->choix_B_position.x = 150;
    enig->choix_B_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_B, NULL, lvl1, &enig->choix_B_position);

    enig->surf_choix_C = TTF_RenderText_Solid(fontTest1, "15",fontColor1 );
    enig->choix_C_position.x = 200;
    enig->choix_C_position.y = 200;
    SDL_BlitSurface(enig->surf_choix_C, NULL, lvl1, &enig->choix_C_position);*/

  if (*jouer == 1)
  {
    SDL_BlitSurface(lvl1, &camera, screen, NULL);
    SDL_BlitSurface(enemy1.en, NULL, screen, &enemy1.posen);
    SDL_BlitSurface(enemy2.en, NULL, screen, &enemy2.posen);
    SDL_BlitSurface(per.perso, NULL, screen, &per.position_init);
  }
  SDL_Flip(screen);
  SDL_EnableKeyRepeat(10, 10);

  enig->surf_enig = IMG_Load("enig/enigme.png");
  SDL_SetColorKey(enig->surf_enig, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_enig->format, 255, 255, 255));
  enig->enigme_position.x = 300;
  enig->enigme_position.y = 0;
  SDL_BlitSurface(enig->surf_enig, NULL, lvl1, &enig->enigme_position);

  enig->surf_choix_A = IMG_Load("enig/1.png");
  SDL_SetColorKey(enig->surf_choix_A, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_A->format, 255, 255, 255));
  enig->choix_A_position.x = 300;
  enig->choix_A_position.y = 551;
  SDL_BlitSurface(enig->surf_choix_A, NULL, lvl1, &enig->choix_A_position);

  enig->surf_choix_B = IMG_Load("enig/2.png");
  SDL_SetColorKey(enig->surf_choix_B, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_B->format, 255, 255, 255));
  enig->choix_B_position.x = 310 + 140;
  enig->choix_B_position.y = 551;
  SDL_BlitSurface(enig->surf_choix_B, NULL, lvl1, &enig->choix_B_position);

  enig->surf_choix_C = IMG_Load("enig/3.png");
  SDL_SetColorKey(enig->surf_choix_C, SDL_SRCCOLORKEY, SDL_MapRGB(enig->surf_choix_C->format, 255, 255, 255));
  enig->choix_C_position.x = 320 + 280;
  enig->choix_C_position.y = 551;
  SDL_BlitSurface(enig->surf_choix_C, NULL, lvl1, &enig->choix_C_position);

  SDL_Event jj;

  while (*jouer == 1)
  {
    aaa++;

    if (aaa > 1000)
    {
      texte1 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
    }
    afficher_img(enig, lvl1, fic1, yossri);
    die1 = callenemy(per, enemy1);
    die2 = callenemy(per, enemy2);
    die3 = callenemy(per, enemy3);
    check = tellmewhattodo(map, per.posperso);
    tempsActuelr = SDL_GetTicks();
    SDL_PollEvent(&jj);

    switch (jj.type)
    {
    case SDL_QUIT:
      sauvg = 1;
    case SDL_MOUSEBUTTONUP:
      x = jj.button.x;
      y = jj.button.y;
      break;
    case SDL_MOUSEBUTTONDOWN:

      switch (jj.button.button)
      {

      case SDL_BUTTON_RIGHT:

        r = jj.button.x - (jj.button.x % 10);

        break;
      case SDL_BUTTON_LEFT:

        if ((jj.button.x > 420 && jj.button.x < 620) && (jj.button.y > 542 && jj.button.y < 597))

        {
          FILE *f = NULL;
          f = fopen("sauvgarder.txt", "w");
          fprintf(f, "%d %d %d %d %d %d %d %d %d %d %d %d ", per.posperso.x, per.posperso.y, per.posperso.w, per.posperso.h, camera.x, camera.y, camera.h, camera.w, per.position_init.x, per.position_init.y, per.position_init.h, per.position_init.w);
          fclose(f);
          tests = 1;
          *jouer = 0;
          sauvg = 0;
        }
        else if ((jj.button.x > 640 && jj.button.x < 870) && (jj.button.y > 542 && jj.button.y < 595))
        {
          *jouer = 0;
          tests = 1;
          sauvg = 0;
        }

        break;
      }

      break;

    case SDL_KEYDOWN:

    {

      switch (jj.key.keysym.sym)
      {
      case SDLK_RIGHT:
        b[0] = 1;
        per.perso = IMG_Load("imperso/per.png");
        pit = 0;
        break;
      case SDLK_LEFT:
        b[1] = 1;
        per.perso = IMG_Load("imperso/per2.png");
        pit = 1;
        break;
      case SDLK_DOWN:
        // access = 2;
        break;
      case SDLK_n:
        nitro = 1;
        break;
      case SDLK_UP:
        if (check == 4 && check != 6 && check != 7)
        {

          do
          {
            test++;
            per.posperso.y--;
            per.posperso.h--;
            per.position_init.y--;
            per.position_init.h--;
          } while (test != 250 && tellmewhattodo(map, per.posperso) != 5 && tellmewhattodo(map, per.posperso) != 9 && tellmewhattodo(map, per.posperso) != 8);
        }
        test = 0;

        break;
      case SDLK_SPACE:
        if (check == 4 && check != 6 && check != 7)
        {

          do
          {
            test++;
            per.posperso.y--;
            per.posperso.h--;
            per.position_init.y--;
            per.position_init.h--;
          } while (test != 250 && tellmewhattodo(map, per.posperso) != 5 && tellmewhattodo(map, per.posperso) != 9 && tellmewhattodo(map, per.posperso) != 8);
        }
        test = 0;
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
    if (sauvg == 1 && tests == 0)
    {

      SDL_BlitSurface(sauvgarder, NULL, lvl1, &sauvgarderPosition);
      SDL_BlitSurface(oui, NULL, lvl1, &ouiPosition);
      SDL_BlitSurface(non, NULL, lvl1, &nonPosition);
    }

    if (nitro == 1)
    {

      if (ii < 10)
      {
        if (pit == 0)
        {
          b[0] = 1;
          per.perso = IMG_Load("imperso/per.png");
        }
        if (pit == 1)
        {
          b[1] = 1;
          per.perso = IMG_Load("imperso/per2.png");
        }

        vitesse = 50;
        ii++;
        aaa = aaa + 30;
      }

      if (ii == 10)
      {
        ii = 0;
        vitesse = 10;
        b[0] = 0;
        b[1] = 0;
        nitro = 0;
      }
    }
    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }

    if (r != 0 && test1 == 0)
    {
      test2 = depdouris(test2, depsouris(test2, r), check);
      per.posperso.x = (depdouris(per.posperso.x, depsouris(test2, r), check));
      per.posperso.w = (depdouris(per.posperso.w, depsouris(test2, r), check));
      camera.x = (depdouris(camera.x, depsouris(test2, r), check));
      x = (depdouris(x, depsouris(test2, r), check));

      if (depsouris(test2, r) == 1)
      {
        per.perso = IMG_Load("imperso/per.png");
      }

      if (depsouris(test2, r) == 2)
      {
        per.perso = IMG_Load("imperso/per2.png");
      }
      if (test2 == r)
      {
        r = 0;
        test2 = 370;
      }
    }
    if (die1 == 1 || die2 == 1 || die3 == 1)
    {

      SDL_Delay(1000);
      per.posperso.x = per.posperso.x - 300;
      per.posperso.w = per.posperso.w - 300;
      x = x - 300;
      camera.x = camera.x - 300;
      per.posperso.y = per.posperso.y - 300;
      per.posperso.h = per.posperso.h - 300;
      per.position_init.y = per.position_init.y - 300;
      per.position_init.h = per.position_init.h - 300;
      die++;
      posrot.x = per.posperso.x;
      posrot.y = per.posperso.y;
      /* SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);

      tempsActuel = SDL_GetTicks();
      if (tempsActuel - tempsPrecedent > 30)
      {
        angle += 2; //On augmente l'angle pour que l'image tourne sur elle-même.

        tempsPrecedent = tempsActuel;
      }
      else
      {
        SDL_Delay(30 - (tempsActuel - tempsPrecedent));
      }

      SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));

      rotation = rotozoomSurface(rot, angle, 1.0, 1); //On transforme la surface image.*/

      //On positionne l'image en fonction de sa taille.
      //per.posperso.x = 200 - rotation->w / 2;
      //per.posperso.y = 200 - rotation->h / 2;

      /* SDL_BlitSurface(rotation, NULL, screen, &posrot); //On affiche la rotation de la surface image.
      SDL_FreeSurface(rotation);*/
      /*	while(angle <200)
	{
		angle+=5;
		rotation = rotozoomSurface(per.perso, angle, 0, 0);
		SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
		SDL_BlitSurface(rotation,NULL,screen,&per.posperso);
		SDL_FreeSurface(rotation);
		SDL_Delay(50);
		SDL_Flip(screen);
	}*/
      if (aaa < 301)
      {
        aaa = 0;
      }
      if (aaa > 300)
      {
        aaa = aaa - 300;
      }
    }

    per = tellmewhy(check, per);
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
      if ((b[0]) && (camera.x < 5365 - 1366) && check != 2 && check != 6 && check != 5 && check != 8 && test1 == 0)
      {
        per.posperso.x = per.posperso.x + vitesse;
        per.posperso.w = per.posperso.w + vitesse;
        x = x + vitesse;
        camera.x = camera.x + vitesse;
        sauvgarderPosition.x = sauvgarderPosition.x + vitesse;
        ouiPosition.x = ouiPosition.x + vitesse;
        nonPosition.x = nonPosition.x + vitesse;
      }
      if ((b[1]) && (camera.x > 0) && check != 3 && check != 5 && check != 7 && check != 9 && test1 == 0)
      {
        per.posperso.w = per.posperso.w - vitesse;
        per.posperso.x = per.posperso.x - vitesse;
        x = x - vitesse;
        camera.x = camera.x - vitesse;
        sauvgarderPosition.x = sauvgarderPosition.x - vitesse;
        ouiPosition.x = ouiPosition.x - vitesse;
        nonPosition.x = nonPosition.x - vitesse;
      }
      if ((b[1]) && (camera.x < 10 || camera.x > 5365 - 1366) && test1 < 29 && check != 3 && check != 5 && check != 7 && check != 9)
      {
        per.position_init.x = per.position_init.x - vitesse;
        per.position_init.w = per.position_init.w - vitesse;
        per.posperso.x = per.posperso.x - vitesse;
        per.posperso.w = per.posperso.w - vitesse;
        test1++;
      }
      if (b[0] && (camera.x < 10 || camera.x > 5365 - 1366) && check != 2 && check != 6 && check != 5 && check != 8)
      {
        per.position_init.x = per.position_init.x + vitesse;
        per.position_init.w = per.position_init.w + vitesse;
        per.posperso.x = per.posperso.x + vitesse;
        per.posperso.w = per.posperso.w + vitesse;
        test1--;
      }

      sprintf(str, "%d", aaa);
      texte4 = TTF_RenderText_Solid(fontTest1, str, fontColor1);

      sprintf(tempsjeu, "%d ", tempsActuelr);
      chrono = TTF_RenderText_Solid(fontTest1, tempsjeu, fontColor1);
      SDL_BlitSurface(chrono, NULL, lvl1, &tmp_position);

      SDL_BlitSurface(lvl1, &camera, screen, NULL);
      SDL_BlitSurface(lvll, NULL, lvl1, &poslvl1);
      enemy1 = deplacement_aleatoire(enemy1);
      enemy2 = deplacement_aleatoire(enemy2);

      SDL_BlitSurface(enemy1.en, NULL, lvl1, &enemy1.posen);
      SDL_BlitSurface(enemy2.en, NULL, lvl1, &enemy2.posen);
      //mario = access_box1(box1, mario, access);
      //mario1 = access_box2(box2, mario1, access);
      //SDL_BlitSurface(mario.perso, NULL, lvl1, &mario.posperso);
      //SDL_BlitSurface(mario1.perso, NULL, lvl1, &mario1.posperso);
      // SDL_BlitSurface(box1.box, NULL, lvl1, &box1.posbox);
      //SDL_BlitSurface(box2.box, NULL, lvl1, &box2.posbox);
      //////////////////////////////
      SDL_BlitSurface(per.perso, NULL, screen, &per.position_init);
      SDL_BlitSurface(vie11, NULL, screen, &posvie);
      SDL_BlitSurface(texte3, NULL, screen, &postexte3);
      SDL_BlitSurface(texte4, NULL, screen, &postexte4);

      /*if(tmp_enig ==2){

        SDL_BlitSurface(enig->surf_enig, NULL, lvl1, &enig->enigme_position);
        SDL_BlitSurface(enig->surf_choix_A, NULL, lvl1, &enig->choix_A_position);
        SDL_BlitSurface(enig->surf_choix_B, NULL, lvl1, &enig->choix_B_position);
        SDL_BlitSurface(enig->surf_choix_C, NULL, lvl1, &enig->choix_C_position);
        SDL_Flip(screen);}

    tmp_enig = gestion_temp_enigme(enig, screen, fic1);
    if (tmp_enig == 0)
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest1,"echec", fontColor1);
        SDL_BlitSurface(enig->surf_enig, NULL, lvl1, &enig->enigme_position);
    }
    if(tmp_enig == 1)
    {
        enig->surf_enig = TTF_RenderText_Solid(fontTest1,"bravo", fontColor1);
        SDL_BlitSurface(enig->surf_enig, NULL, lvl1, &enig->enigme_position);
    }*/

      if (die2 != 2 && die3 != 3)
      {
        SDL_BlitSurface(texte1, NULL, lvl1, &postexte);
      }
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
      if (die == 1)
      {
        vie11 = IMG_Load("imlvl1/lives1.png");
        SDL_BlitSurface(vie11, NULL, screen, &posvie);
      }
      if (die == 2)
      {
        vie11 = IMG_Load("imlvl1/lives2.png");
        SDL_BlitSurface(vie11, NULL, screen, &posvie);
        texte1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
        SDL_BlitSurface(texte1, NULL, screen, &postexte);
      }
      if (die == 3)
      {
        postexte3.x = 595;
        postexte3.y = 410;
        postexte4.x = 715;
        postexte4.y = 410;
        texte2 = TTF_RenderText_Solid(fontTest2, "GAME OVER", fontColor2);
        SDL_BlitSurface(texte2, NULL, screen, &postexte2);
        SDL_BlitSurface(texte3, NULL, screen, &postexte3);
        SDL_BlitSurface(texte4, NULL, screen, &postexte4);
        *jouer = 0;
        SDL_Delay(2000);
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
  // SDL_FreeSurface(box1.box);
  //SDL_FreeSurface(box2.box);
  //SDL_FreeSurface(mario.perso);
  // SDL_FreeSurface(mario1.perso);
  SDL_FreeSurface(per.perso);
  SDL_FreeSurface(vie11);
  SDL_FreeSurface(sauvgarder);
  SDL_FreeSurface(oui);
  SDL_FreeSurface(non);
  SDL_FreeSurface(chrono);

  SDL_FreeSurface(enig->surf_enig);
  SDL_FreeSurface(enig->surf_choix_A);
  SDL_FreeSurface(enig->surf_choix_B);
  SDL_FreeSurface(enig->surf_choix_C);
}

void play2(int *jouer)
{
  if (ktest == 0)
  {
    per = init_perso();
    per2 = init_perso();
    per.posperso.x = 300 / 2;
    per.posperso.y = 570;
    per.posperso.w = 375 / 2;
    per.posperso.h = 570 + 150;
    per.position_init.x = 300 / 2;
    per.position_init.y = 570;
    per.position_init.w = 375;
    per.position_init.h = 570 + 150;
    ////////////////////////////////
    per2.posperso.x = 683 + 300 / 2;
    per2.posperso.y = 570;
    per2.posperso.w = 375;
    per2.posperso.h = 570 + 150;
    per2.position_init.x = 683 + 300 / 2;
    per2.position_init.y = 570;
    per2.position_init.w = 683 + 375 / 2;
    per2.position_init.h = 570 + 150;
    camera.x = 0;
    camera.y = 0;
    camera.w = 1366 / 2;
    camera.h = 800;
    //
    camera2.x = 0;
    camera2.y = 0;
    camera2.w = 1366 / 2;
    camera2.h = 800;
  }
  else if (ktest == 1)
  {

    FILE *f = NULL;
    f = fopen("sauvgarder.txt", "r");
    fscanf(f, "%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd ", &per.posperso.x, &per.posperso.y, &per.posperso.w, &per.posperso.h, &camera.x, &camera.y, &camera.h, &camera.w, &per.position_init.x, &per.position_init.y, &per.position_init.h, &per2.position_init.w, &per2.posperso.x, &per2.posperso.y, &per2.posperso.w, &per2.posperso.h, &camera2.x, &camera2.y, &camera2.h, &camera2.w, &per2.position_init.x, &per2.position_init.y, &per2.position_init.h, &per2.position_init.w);
    fclose(f);
  }
  bool b[2] = {0, 0};
  bool b2[2] = {0, 0};

  posvie.x = 1;
  posvie.y = 1;
  posvie2.x = 684;
  posvie2.y = 1;
  postexte.x = 500;
  postexte.y = 50;
  postexte2.x = 400;
  postexte2.y = 300;
  postexte3.x = 1;
  postexte3.y = 37;
  postexte4.x = 120;
  postexte4.y = 37;
  //
  postextek.x = 500 + 683;
  postextek.y = 50;
  postextek2.x = 400 + 683;
  postextek2.y = 300;
  postextek3.x = 1 + 683;
  postextek3.y = 37;
  postextek4.x = 120 + 683;
  postextek4.y = 37;
  //
  poslvl1.x = 0;
  poslvl1.y = 0;
  poslvl1_2.y = 0;
  poslvl1_2.x = 683;

  enemy1.posen.x = 1700;
  enemy1.posen.y = 655.5;
  enemy2.posen.x = 2716;
  enemy2.posen.y = 655.5;
  enemy3.posen.x = 3069;
  enemy3.posen.y = 628;

  enemyk1.posen.x = 1700 + 683;
  enemyk1.posen.y = 655.5;
  enemyk2.posen.x = 2716 + 683;
  enemyk2.posen.y = 655.5;
  enemyk3.posen.x = 3069 + 683;
  enemyk3.posen.y = 628;
  /*box1.posbox.x = 1578;
  box1.posbox.y = 600;
  box2.posbox.x = 2158;
  box2.posbox.y = 544;*/
  mario.posperso.x = 1578;
  mario.posperso.y = 514;
  mario1.posperso.x = 2160;
  mario1.posperso.y = 495;
  mario.h = 86;
  mario.w = 61;
  mario1.h = 86;
  mario1.w = 61;
  enemy1.distance = 378;
  enemy2.distance = 280;
  enemy3.distance = 109;
  enemy1.position_initiale = 1712;
  enemy2.position_initiale = 2716;
  enemy3.position_initiale = 3069;
  enemy1.direction = 1;
  enemy2.direction = 1;
  enemy3.direction = 1;

  enemyk1.distance = 378;
  enemyk2.distance = 280;
  enemyk3.distance = 109;
  enemyk1.position_initiale = 1712 + 683;
  enemyk2.position_initiale = 2716 + 683;
  enemyk3.position_initiale = 3069 + 683;
  enemyk1.direction = 1;
  enemyk2.direction = 1;
  enemyk3.direction = 1;

  sauvgarderPosition.x = 50;
  sauvgarderPosition.y = 50;

  ouiPosition.x = 50;
  ouiPosition.y = 100 + 442;

  nonPosition.x = 70 + 225;
  nonPosition.y = 100 + 442;

  sauvgarder = IMG_Load("images/sauvgarder.png");
  oui = IMG_Load("images/oui.png");
  non = IMG_Load("images/non.png");

  SDL_Surface *rot;
  SDL_Rect posrot;
  SDL_Rect posrot2;

  rot = IMG_Load("imperso/per.png");
  map = IMG_Load("imlvl1/maplvl1.png");
  lvll = IMG_Load("imlvl1/lvl1.png");
  lvl1 = IMG_Load("imlvl1/lvl1.png");
  enemy1.en = IMG_Load("imlvl1/en1.png");
  enemy2.en = IMG_Load("imlvl1/en1.png");
  enemyk1.en = IMG_Load("imlvl1/en1.png");
  enemyk2.en = IMG_Load("imlvl1/en1.png");
  vie11 = IMG_Load("imlvl1/lives.png");
  vie2 = IMG_Load("imlvl1/lives.png");
  fontTest1 = TTF_OpenFont("font/fon.otf", 30);
  fontTest2 = TTF_OpenFont("font/fon.otf", 90);
  texte1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
  texte3 = TTF_RenderText_Solid(fontTest1, "Score:", fontColor1);
  texte4 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
  textek1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
  textek3 = TTF_RenderText_Solid(fontTest1, "Score:", fontColor1);
  textek4 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
  textek4 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
  //box1.box = IMG_Load("imlvl1/lvl1box1.png");
  //mario.perso = IMG_Load("imlvl1/en2.png");
  //mario1.perso = IMG_Load("imlvl1/en2.png");
  //box2.box = IMG_Load("imlvl1/lvl1box2.png");

  if (*jouer == 2)
  {
    SDL_BlitSurface(lvl1, &camera, screen, NULL);
    SDL_BlitSurface(enemy1.en, NULL, screen, &enemy1.posen);
    SDL_BlitSurface(enemy2.en, NULL, screen, &enemy2.posen);
    SDL_BlitSurface(enemyk1.en, NULL, screen, &enemyk1.posen);
    SDL_BlitSurface(enemyk2.en, NULL, screen, &enemyk2.posen);
  }
  SDL_Flip(screen);
  SDL_EnableKeyRepeat(10, 10);

  SDL_Event jj;

  while (*jouer == 2)
  {
    aaa++;
    kkk++;
    if (aaa > 1000)
    {
      texte1 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
    }
    if (kkk > 1000)
    {
      textek1 = TTF_RenderText_Solid(fontTest1, " ", fontColor1);
    }

    die1 = callenemy(per, enemy1);
    die2 = callenemy(per, enemy2);
    die3 = callenemy(per, enemy3);

    diek1 = callenemy(per2, enemyk1);
    diek2 = callenemy(per2, enemyk2);
    diek3 = callenemy(per2, enemyk3);
    check = tellmewhattodo(map, per.posperso);
    check2 = tellmewhattodo(map, per2.posperso);
    SDL_PollEvent(&jj);
    switch (jj.type)
    {
    case SDL_QUIT:
      sauvg = 1;
    case SDL_MOUSEBUTTONUP:
      x = jj.button.x;
      y = jj.button.y;
      break;
    case SDL_MOUSEBUTTONDOWN:

      switch (jj.button.button)
      {

      case SDL_BUTTON_RIGHT:

        r = jj.button.x - (jj.button.x % 10);

        break;
      case SDL_BUTTON_LEFT:

        if ((jj.button.x > 170 && jj.button.x < 370) && (jj.button.y > 542 && jj.button.y < 597))

        {
          FILE *f = NULL;
          f = fopen("sauvgarder.txt", "w");
          fprintf(f, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", per.posperso.x, per.posperso.y, per.posperso.w, per.posperso.h, camera.x, camera.y, camera.h, camera.w, per.position_init.x, per.position_init.y, per.position_init.h, per.position_init.w, per2.position_init.w, per2.posperso.x, per2.posperso.y, per2.posperso.h, camera2.x, camera2.y, camera2.h, camera2.w, per2.position_init.x, per2.position_init.y, per2.position_init.h, per2.position_init.w);
          fclose(f);
          tests = 1;
          *jouer = 0;
        }
        else if ((jj.button.x > 190 && jj.button.x < 420) && (jj.button.y > 542 && jj.button.y < 595))
        {
          *jouer = 0;
          tests = 1;
        }
      }
      break;
    case SDL_KEYDOWN:
    {

      switch (jj.key.keysym.sym)
      {
      case SDLK_RIGHT:
        b[0] = 1;
        per.perso = IMG_Load("imperso/per.png");
        pit = 0;
        break;
      case SDLK_LEFT:
        b[1] = 1;
        per.perso = IMG_Load("imperso/per2.png");
        pit = 1;
        break;
      case SDLK_DOWN:
        // access = 2;
        break;
      case SDLK_n:
        nitro = 1;
        break;
      case SDLK_UP:
        if (check == 4 && check != 6 && check != 7)
        {

          do
          {
            test++;
            per.posperso.y--;
            per.posperso.h--;
            per.position_init.y--;
            per.position_init.h--;
          } while (test != 250 && tellmewhattodo(map, per.posperso) != 5 && tellmewhattodo(map, per.posperso) != 9 && tellmewhattodo(map, per.posperso) != 8);
        }
        test = 0;

        break;
        /////////////////////////////
      case SDLK_d:
        b2[0] = 1;
        per2.perso = IMG_Load("imperso/per.png");
        pit2 = 0;
        break;
      case SDLK_q:
        b2[1] = 1;
        per2.perso = IMG_Load("imperso/per2.png");
        pit2 = 1;
        break;
      case SDLK_f:
        nitro2 = 1;
        break;
      case SDLK_SPACE:
        if (check2 == 4 && check2 != 6 && check2 != 7)
        {

          do
          {
            testk++;
            per2.posperso.y--;
            per2.posperso.h--;
            per2.position_init.y--;
            per2.position_init.h--;
          } while (testk != 250 && tellmewhattodo(map, per2.posperso) != 5 && tellmewhattodo(map, per2.posperso) != 9 && tellmewhattodo(map, per2.posperso) != 8);
        }
        testk = 0;
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
      case SDLK_d:
        b2[0] = 0;
        break;
      case SDLK_q:
        b2[1] = 0;
        break;
      case SDLK_SPACE:

        break;
      }
      break;
    }

    if (nitro == 1)
    {

      if (ii < 10)
      {
        if (pit == 0)
        {
          b[0] = 1;
          per.perso = IMG_Load("imperso/per.png");
        }
        if (pit == 1)
        {
          b[1] = 1;
          per.perso = IMG_Load("imperso/per2.png");
        }

        vitesse = 50;
        ii++;
        aaa = aaa + 30;
      }
      if (ii == 10)
      {
        ii = 0;
        vitesse = 10;
        b[0] = 0;
        b[1] = 0;
        nitro = 0;
      }
    }
    ///////
    if (sauvg == 1 && tests == 0)
    {

      SDL_BlitSurface(sauvgarder, NULL, lvl1, &sauvgarderPosition);
      SDL_BlitSurface(oui, NULL, lvl1, &ouiPosition);
      SDL_BlitSurface(non, NULL, lvl1, &nonPosition);
    }

    if (nitro2 == 1)
    {

      if (kk < 10)
      {
        if (pit2 == 0)
        {
          b2[0] = 1;
          per2.perso = IMG_Load("imperso/per.png");
        }
        if (pit2 == 1)
        {
          b2[1] = 1;
          per2.perso = IMG_Load("imperso/per2.png");
        }

        vitesse2 = 50;
        ii++;
        aaa = aaa + 30;
      }

      if (kk == 10)
      {
        kk = 0;
        vitesse2 = 10;
        b2[0] = 0;
        b2[1] = 0;
        nitro2 = 0;
      }
    }

    if (a % 2 == 0)
    {
      setjouersouris(jouer);
    }

    if (r != 0 && test1 == 0)
    {
      test2 = depdouris(test2, depsouris(test2, r), check);
      per.posperso.x = (depdouris(per.posperso.x, depsouris(test2, r), check));
      per.posperso.w = (depdouris(per.posperso.w, depsouris(test2, r), check));
      camera.x = (depdouris(camera.x, depsouris(test2, r), check));
      x = (depdouris(x, depsouris(test2, r), check));

      if (depsouris(test2, r) == 1)
      {
        per.perso = IMG_Load("imperso/per.png");
      }

      if (depsouris(test2, r) == 2)
      {
        per.perso = IMG_Load("imperso/per2.png");
      }
      if (test2 == r)
      {
        r = 0;
        test2 = 370;
      }
    }
    if (die1 == 1 || die2 == 1 || die3 == 1)
    {

      SDL_Delay(1000);
      per.posperso.x = per.posperso.x - 300;
      per.posperso.w = per.posperso.w - 300;
      x = x - 300;
      camera.x = camera.x - 300;
      per.posperso.y = per.posperso.y - 300;
      per.posperso.h = per.posperso.h - 300;
      per.position_init.y = per.position_init.y - 300;
      per.position_init.h = per.position_init.h - 300;
      die++;
      posrot.x = per.posperso.x;
      posrot.y = per.posperso.y;
      if (aaa < 301)
      {
        aaa = 0;
      }
      if (aaa > 300)
      {
        aaa = aaa - 300;
      }
    }
    if (diek1 == 1 || diek2 == 1 || diek3 == 1)
    {

      SDL_Delay(1000);
      per2.posperso.x = per2.posperso.x - 300;
      per2.posperso.w = per2.posperso.w - 300;
      x2 = x2 - 300;
      camera2.x = camera2.x - 300;
      per2.posperso.y = per2.posperso.y - 300;
      per2.posperso.h = per2.posperso.h - 300;
      per2.position_init.y = per2.position_init.y - 300;
      per2.position_init.h = per2.position_init.h - 300;
      diek++;
      posrot2.x = per2.posperso.x;
      posrot2.y = per2.posperso.y;
      if (kkk < 301)
      {
        kkk = 0;
      }
      if (kkk > 300)
      {
        kkk = kkk - 300;
      }
    }
    /* SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY, SDL_DEFAULT_REPEAT_INTERVAL);

      tempsActuel = SDL_GetTicks();
      if (tempsActuel - tempsPrecedent > 30)
      {
        angle += 2; //On augmente l'angle pour que l'image tourne sur elle-même.

        tempsPrecedent = tempsActuel;
      }
      else
      {
        SDL_Delay(30 - (tempsActuel - tempsPrecedent));
      }

      SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));

      rotation = rotozoomSurface(rot, angle, 1.0, 1); //On transforme la surface image.*/

    //On positionne l'image en fonction de sa taille.
    //per.posperso.x = 200 - rotation->w / 2;
    //per.posperso.y = 200 - rotation->h / 2;

    /* SDL_BlitSurface(rotation, NULL, screen, &posrot); //On affiche la rotation de la surface image.
      SDL_FreeSurface(rotation);*/
    /*	while(angle <200)
	{
		angle+=5;
		rotation = rotozoomSurface(per.perso, angle, 0, 0);
		SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
		SDL_BlitSurface(rotation,NULL,screen,&per.posperso);
		SDL_FreeSurface(rotation);
		SDL_Delay(50);
		SDL_Flip(screen);
	}*/

    per = tellmewhy(check, per);
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

    per2 = tellmewhy(check2, per2);
    if (check2 == 2 || check2 == 8)
    {
      per2.posperso.x = per2.posperso.x - 2;
      per2.posperso.w = per2.posperso.w - 2;
      x2 = x2 - 2;
      camera2.x = camera2.x - 2;
    }
    if (check2 == 3 || check2 == 9)
    {
      per2.posperso.x = per2.posperso.x + 2;
      per2.posperso.w = per2.posperso.w + 2;
      x2 = x2 + 2;
      camera2.x = camera2.x + 2;
    }

    if (a % 2 != 0)
    {
      if ((b[0]) && (camera.x < 5365 - (1366 / 2)) && check != 2 && check != 6 && check != 5 && check != 8 && test1 == 0)
      {
        per.posperso.x = per.posperso.x + vitesse;
        per.posperso.w = per.posperso.w + vitesse;
        x = x + vitesse;
        camera.x = camera.x + vitesse;
        sauvgarderPosition.x = sauvgarderPosition.x + vitesse;
        ouiPosition.x = ouiPosition.x + vitesse;
        nonPosition.x = nonPosition.x + vitesse;
      }
      if ((b[1]) && (camera.x > 0) && check != 3 && check != 5 && check != 7 && check != 9 && test1 == 0)
      {
        per.posperso.w = per.posperso.w - vitesse;
        per.posperso.x = per.posperso.x - vitesse;
        x = x - vitesse;
        camera.x = camera.x - vitesse;
        sauvgarderPosition.x = sauvgarderPosition.x - vitesse;
        ouiPosition.x = ouiPosition.x - vitesse;
        nonPosition.x = nonPosition.x - vitesse;
      }
      if ((b[1]) && (camera.x < 10 || camera.x > 5365 - (1366 / 2)) && test1 < 29 && check != 3 && check != 5 && check != 7 && check != 9)
      {
        per.position_init.x = per.position_init.x - vitesse;
        per.position_init.w = per.position_init.w - vitesse;
        per.posperso.x = per.posperso.x - vitesse;
        per.posperso.w = per.posperso.w - vitesse;
        test1++;
      }
      if (b[0] && (camera.x < 10 || camera.x > 5365 - (1366 / 2)) && check != 2 && check != 6 && check != 5 && check != 8)
      {
        per.position_init.x = per.position_init.x + vitesse;
        per.position_init.w = per.position_init.w + vitesse;
        per.posperso.x = per.posperso.x + vitesse;
        per.posperso.w = per.posperso.w + vitesse;
        test1--;
      }
      if (a % 2 != 0)
      {
        if ((b2[0]) && (camera2.x < 5365 - (1366 / 2)) && check2 != 2 && check2 != 6 && check2 != 5 && check2 != 8 && testk1 == 0)
        {
          per2.posperso.x = per2.posperso.x + vitesse2;
          per2.posperso.w = per2.posperso.w + vitesse2;
          x2 = x2 + vitesse2;
          camera2.x = camera2.x + vitesse2;
          sauvgarderPosition.x = sauvgarderPosition.x + vitesse;
          ouiPosition.x = ouiPosition.x + vitesse;
          nonPosition.x = nonPosition.x + vitesse;
        }
        if ((b2[1]) && (camera2.x > 0) && check2 != 3 && check2 != 5 && check2 != 7 && check2 != 9 && testk1 == 0)
        {
          per2.posperso.w = per2.posperso.w - vitesse2;
          per2.posperso.x = per2.posperso.x - vitesse2;
          x2 = x2 - vitesse2;
          camera2.x = camera2.x - vitesse2;
          sauvgarderPosition.x = sauvgarderPosition.x - vitesse;
          ouiPosition.x = ouiPosition.x - vitesse;
          nonPosition.x = nonPosition.x - vitesse;
        }
        if ((b2[1]) && (camera2.x < 10 || camera2.x > 5365 - (1366 / 2)) && test1 < 29 && check2 != 3 && check2 != 5 && check2 != 7 && check2 != 9)
        {
          per2.position_init.x = per2.position_init.x - vitesse2;
          per2.position_init.w = per2.position_init.w - vitesse2;
          per2.posperso.x = per2.posperso.x - vitesse2;
          per2.posperso.w = per2.posperso.w - vitesse2;
          testk1++;
        }
        if (b2[0] && (camera2.x < 10 || camera2.x > 5365 - (1366 / 2)) && check2 != 2 && check2 != 6 && check2 != 5 && check2 != 8)
        {
          per2.position_init.x = per2.position_init.x + vitesse2;
          per2.position_init.w = per2.position_init.w + vitesse2;
          per2.posperso.x = per2.posperso.x + vitesse2;
          per2.posperso.w = per2.posperso.w + vitesse2;
          testk1--;
        }
      }
      sprintf(str, "%d", aaa);
      texte4 = TTF_RenderText_Solid(fontTest1, str, fontColor1);

      sprintf(str2, "%d", kkk);
      textek4 = TTF_RenderText_Solid(fontTest1, str2, fontColor1);

      SDL_BlitSurface(lvl1, &camera, screen, NULL);
      SDL_BlitSurface(lvll, NULL, lvl1, &poslvl1);
      SDL_BlitSurface(lvl1, &camera2, screen, &poslvl1_2);
      SDL_BlitSurface(lvll, NULL, lvl1, &poslvl1_2);
      enemy1 = deplacement_aleatoire(enemy1);
      enemy2 = deplacement_aleatoire(enemy2);

      enemyk1 = deplacement_aleatoire(enemyk1);
      enemyk2 = deplacement_aleatoire(enemyk2);
      SDL_BlitSurface(enemy1.en, NULL, lvl1, &enemy1.posen);
      SDL_BlitSurface(enemy2.en, NULL, lvl1, &enemy2.posen);

      SDL_BlitSurface(enemyk1.en, NULL, lvl1, &enemyk1.posen);
      SDL_BlitSurface(enemyk2.en, NULL, lvl1, &enemyk2.posen);
      //mario = access_box1(box1, mario, access);
      //mario1 = access_box2(box2, mario1, access);
      //SDL_BlitSurface(mario.perso, NULL, lvl1, &mario.posperso);
      //SDL_BlitSurface(mario1.perso, NULL, lvl1, &mario1.posperso);
      // SDL_BlitSurface(box1.box, NULL, lvl1, &box1.posbox);
      //SDL_BlitSurface(box2.box, NULL, lvl1, &box2.posbox);
      //////////////////////////////
      SDL_BlitSurface(per.perso, NULL, screen, &per.position_init);
      SDL_BlitSurface(per2.perso, NULL, screen, &per2.position_init);
      SDL_BlitSurface(vie11, NULL, screen, &posvie);
      SDL_BlitSurface(vie2, NULL, screen, &posvie2);
      SDL_BlitSurface(textek1, NULL, screen, &postextek);
      SDL_BlitSurface(texte3, NULL, screen, &postexte3);
      SDL_BlitSurface(textek3, NULL, screen, &postextek3);
      SDL_BlitSurface(texte4, NULL, screen, &postexte4);
      SDL_BlitSurface(textek4, NULL, screen, &postextek4);
      if (die2 != 2 && die3 != 3)
      {
        SDL_BlitSurface(texte1, NULL, lvl1, &postexte);
      }
      if (diek2 != 2 && diek3 != 3)
      {
        SDL_BlitSurface(textek1, NULL, lvl1, &postextek);
      }
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

      if (enemyk3.direction % 2 == 0)
      {
        enemyk3.en = IMG_Load("imlvl1/en2.png");
        enemyk3 = deplacement_aleatoire(enemyk3);
        SDL_BlitSurface(enemyk3.en, NULL, lvl1, &enemyk3.posen);
      }
      else if (enemyk3.direction % 2 == 1)
      {
        enemyk3.en = IMG_Load("imlvl1/en21.png");
        enemyk3 = deplacement_aleatoire(enemyk3);
        SDL_BlitSurface(enemyk3.en, NULL, lvl1, &enemyk3.posen);
      }
      if (die == 1)
      {
        vie11 = IMG_Load("imlvl1/lives1.png");
        SDL_BlitSurface(vie11, NULL, screen, &posvie);
      }
      if (die == 2)
      {
        vie11 = IMG_Load("imlvl1/lives2.png");
        SDL_BlitSurface(vie11, NULL, screen, &posvie);
        texte1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
        SDL_BlitSurface(texte1, NULL, screen, &postexte);
      }
      if (die == 3)
      {
        postexte3.x = 595;
        postexte3.y = 410;
        postexte4.x = 715;
        postexte4.y = 410;
        texte2 = TTF_RenderText_Solid(fontTest2, "GAME OVER", fontColor2);
        SDL_BlitSurface(texte2, NULL, screen, &postexte2);
        SDL_BlitSurface(texte3, NULL, screen, &postexte3);
        SDL_BlitSurface(texte4, NULL, screen, &postexte4);
        *jouer = 0;
        SDL_Delay(2000);
      }
      if (diek == 1)
      {
        vie2 = IMG_Load("imlvl1/lives1.png");
        SDL_BlitSurface(vie2, NULL, screen, &posvie2);
      }
      if (diek == 2)
      {
        vie2 = IMG_Load("imlvl1/lives2.png");
        SDL_BlitSurface(vie2, NULL, screen, &posvie2);
        textek1 = TTF_RenderText_Solid(fontTest1, "dlrow olleH!", fontColor1);
        SDL_BlitSurface(textek1, NULL, screen, &postextek);
      }
      if (diek == 3)
      {
        postextek3.x = (595 / 2) + 683;
        postextek3.y = 410;
        postextek4.x = (715 / 2) + 683;
        postextek4.y = 410;
        texte2 = TTF_RenderText_Solid(fontTest2, "GAME OVER", fontColor2);
        SDL_BlitSurface(textek2, NULL, screen, &postextek2);
        SDL_BlitSurface(textek3, NULL, screen, &postextek3);
        SDL_BlitSurface(textek4, NULL, screen, &postextek4);
        *jouer = 0;
        SDL_Delay(2000);
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
  SDL_FreeSurface(enemyk1.en);
  SDL_FreeSurface(enemyk2.en);
  SDL_FreeSurface(enemyk3.en);
  // SDL_FreeSurface(box1.box);
  //SDL_FreeSurface(box2.box);
  //SDL_FreeSurface(mario.perso);
  // SDL_FreeSurface(mario1.perso);
  SDL_FreeSurface(per.perso);
  SDL_FreeSurface(per2.perso);
  SDL_FreeSurface(vie11);
  SDL_FreeSurface(vie2);
  SDL_FreeSurface(sauvgarder);
  SDL_FreeSurface(oui);
  SDL_FreeSurface(non);
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
    tesst = 1;
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
    if(tesst1=1)
    *jouer = 1;
    else if(tesst2=1)
    *jouer =2;
    
    ktest = 1;
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
  SDL_Surface *fenetre = NULL, *solo = NULL, *solo2 = NULL, *solo3 = NULL, *multijoueurs = NULL, *multijoueurs2 = NULL, *multijoueurs3 = NULL;
  SDL_Rect possolo, posmultijoueurs, posfenetre;
  possolo.x = 60;
  possolo.y = 250;
  posmultijoueurs.x = 877;
  posmultijoueurs.y = 250;
  posfenetre.x = 0;
  posfenetre.y = 0;
  fenetre = IMG_Load("src/st.jpg");
  solo = IMG_Load("src/Solo.png");
  multijoueurs = IMG_Load("src/Multijoueurs.png");
  solo2 = IMG_Load("src/Solo.png");
  multijoueurs2 = IMG_Load("src/Multijoueurs.png");
  multijoueurs3 = IMG_Load("src/Multijoueurs2.png");
  solo3 = IMG_Load("src/Solo2.png");
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
        if (tesst == 1)
      {
        tesst = 0;
      }
      else
      {
        continuer = 0;
      }

    case SDL_MOUSEMOTION:
      x = event.motion.x;
      y = event.motion.y;
      if (tesst == 1)
      {
        if ((x > 60 && x < 60 + 353) && (y > 250 && y < 250 + 40))
        {

          SDL_BlitSurface(solo3, NULL, screen, &possolo);

          SDL_BlitSurface(multijoueurs, NULL, screen, &posmultijoueurs);
          SDL_Flip(screen);
        }
        if ((x > 877 && x < 877 + 353) && (y > 250 && y < 250 + 40))
        {

          SDL_BlitSurface(multijoueurs3, NULL, screen, &posmultijoueurs);

          SDL_BlitSurface(solo, NULL, screen, &possolo);
          SDL_Flip(screen);
        }
      }
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
        y11 = event.button.y;
        if ((x1 > 60 && x1 < 60 + 353) && (y11 > 250 && y11 < 250 + 40))
        {
          printf("mmmmm");
          solo2 = IMG_Load("src/Solo.png");
          SDL_BlitSurface(solo2, NULL, screen, &possolo);
          SDL_BlitSurface(multijoueurs, NULL, screen, &posmultijoueurs);
          tesst1=1;
          jouer = 1;
          tesst = 0;
        }
        if ((x1 > 877 && x1 < 877 + 353) && (y11 > 250 && y11 < 250 + 40))
        {
          SDL_BlitSurface(multijoueurs2, NULL, screen, &posmultijoueurs);
          SDL_BlitSurface(solo, NULL, screen, &possolo);
          tesst2=1;
          jouer = 2;
          tesst = 0;
        }
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
    choix_menu1(&jouer, &x1, &y11, box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3, screen, imageNEWGAME2, imageNEWGAME1, imageLOAD2, imageLOAD1, imageEXIT2, imageEXIT1, imageSETTINGS2, imageSETTINGS1, posNEWGAME, posNEWGAME1, posLOAD, posLOAD1, posSETTINGS, posSETTINGS1, posEXIT, posEXIT1, son, &continuer, &s1);
    //**************************************************************************************************
    if (tesst == 1)
    {
      SDL_BlitSurface(fenetre, NULL, screen, &posfenetre);
      SDL_BlitSurface(solo, NULL, screen, &possolo);
      SDL_BlitSurface(multijoueurs, NULL, screen, &posmultijoueurs);
    }
    SDL_BlitSurface(texte, NULL, screen, &textePosition);
    SDL_Flip(screen);
    printf("%d", jouer);

    if (jouer == 1)
    {
      play(&jouer);
    }
    if (jouer == 2)
    {
      play2(&jouer);
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
  SDL_FreeSurface(fenetre);
  SDL_FreeSurface(multijoueurs);
  SDL_FreeSurface(multijoueurs3);
  SDL_FreeSurface(multijoueurs2);
  SDL_FreeSurface(solo);
  SDL_FreeSurface(solo2);
  SDL_FreeSurface(solo3);
  SDL_FreeSurface(imgredb1);
  Mix_FreeMusic(musique);
  Mix_FreeChunk(son);
  Mix_CloseAudio();
  //***********************************************************************
}
