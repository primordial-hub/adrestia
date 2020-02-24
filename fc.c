#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include<SDL/SDL_audio.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "fc.h"


void down_menusettings(int *sb1,int *sb2,int *sb3,int *sb4)
{
 if (*sb4==2)
                     {*sb1=2;*sb4=1;*sb2=1;*sb3=1;}
                     else if (*sb1==2)
                     {*sb2=2;*sb1=1;*sb3=1;*sb4=1;}
                     else if (*sb2==2)
                     {*sb4=1;*sb2=1;*sb1=1;*sb3=2;}
                     else if (*sb3==2)
                     {*sb4=2;*sb2=1;*sb1=1;*sb3=1;}
}

void up_menusettings(int *sb1,int *sb2,int *sb3,int *sb4)
{
if (*sb1==2)
                     {*sb4=2;*sb1=1;*sb2=1;*sb3=1;}
                     else if (*sb4==2)
                     {*sb4=1;*sb1=1;*sb2=1;*sb3=2;}
                     else if (*sb3==2)
                     {*sb4=1;*sb1=1;*sb2=2;*sb3=1;}
                     else if (*sb2==2)
                     {*sb4=1;*sb1=2;*sb2=1;*sb3=1;}

}



void down_menu(int *n,int *l,int *s,int *e,int *e1)
{
 if (*e==2)
                     {*n=2;*e=1;*l=1;*s=1;*e1=1;}
                     else if (*n==2)
                     {*l=2;*n=1;*s=1;*e=1;*e1=1;}
                     else if (*l==2)
                     {*e=1;*l=1;*n=1;*s=2;*e1=1;}
                     else if (*s==2)
                     {*e=2;*l=1;*n=1;*s=1;*e1=3;}
}



void up_menu(int *n,int *l,int *s,int *e,int *e1)
{
if (*n==2)
                     {*e=2;*n=1;*l=1;*s=1;*e1=3;}
                     else if (*e==2)
                     {*e=1;*n=1;*l=1;*s=2;*e1=1;}
                     else if (*s==2)
                     {*e=1;*n=1;*l=2;*s=1;*e1=1;}
                     else if (*l==2)
                     {*e=1;*n=2;*l=1;*s=1;*e1=1;}

}


void choix_menu0 (int n, int l,int s,int s1,int e,SDL_Surface *screen,SDL_Surface *imageNEWGAME,SDL_Surface *imageNEWGAME1,SDL_Surface *imageLOAD,SDL_Surface *imageLOAD1,SDL_Surface *imageEXIT,SDL_Surface *imageEXIT1,SDL_Surface *imageSETTINGS,SDL_Surface *imageSETTINGS1,SDL_Surface *img0[],SDL_Rect posNEWGAME,SDL_Rect posNEWGAME1,SDL_Rect posLOAD,SDL_Rect posLOAD1,SDL_Rect posSETTINGS,SDL_Rect posSETTINGS1,SDL_Rect posEXIT,SDL_Rect posEXIT1)
{
 if (n==1)
       { SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME1);}
        else if (n==2)
            {SDL_BlitSurface(imageNEWGAME,NULL,screen,&posNEWGAME);}
   if (l==1)
    {SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD1);}
   else if (l==2)
   {SDL_BlitSurface(imageLOAD,NULL,screen,&posLOAD);}
   if (s==1)
   {SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS1);}
   else if (s==2)
   {SDL_BlitSurface(imageSETTINGS,NULL,screen,&posSETTINGS);}
   if (e==1)
   {SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);}
   else if(e==2)
   {SDL_BlitSurface(imageEXIT,NULL,screen,&posEXIT);}

}


void choix_menu (int x, int y,int box_x,int box_h,int box_w,int box_y,int box_y1,int box_y2,int box_y3,SDL_Surface *screen,SDL_Surface *imageNEWGAME,SDL_Surface *imageNEWGAME1,SDL_Surface *imageLOAD,SDL_Surface *imageLOAD1,SDL_Surface *imageEXIT,SDL_Surface *imageEXIT1,SDL_Surface *imageSETTINGS,SDL_Surface *imageSETTINGS1,SDL_Rect posNEWGAME,SDL_Rect posNEWGAME1,SDL_Rect posLOAD,SDL_Rect posLOAD1,SDL_Rect posSETTINGS,SDL_Rect posSETTINGS1,SDL_Rect posEXIT,SDL_Rect posEXIT1)
{
if( ( x > box_x ) && ( x < box_x + box_w ) && ( y > box_y ) && ( y < box_y + box_h ) )
            {
                 SDL_BlitSurface(imageNEWGAME,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);
            }
     if( ( x > box_x ) && ( x < box_x + box_w ) && ( y > box_y1 ) && ( y < box_y1 + box_h ) )
            {
                 SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);
            }
     if( ( x > box_x ) && ( x < box_x + box_w ) && ( y > box_y2 ) && ( y < box_y2 + box_h ) )
            {
                SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);
            }
    if( ( x > box_x ) && ( x < box_x + box_w ) && ( y > box_y3 ) && ( y < box_y3 + box_h ) )
            {
                SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT,NULL,screen,&posEXIT1);
            }
}
void choix_menu1 (int *x1, int *y1,int box_x,int box_h,int box_w,int box_y,int box_y1,int box_y2,int box_y3,SDL_Surface *screen,SDL_Surface *imageNEWGAME2,SDL_Surface *imageNEWGAME1,SDL_Surface *imageLOAD2,SDL_Surface *imageLOAD1,SDL_Surface *imageEXIT2,SDL_Surface *imageEXIT1,SDL_Surface *imageSETTINGS2,SDL_Surface *imageSETTINGS1,SDL_Rect posNEWGAME,SDL_Rect posNEWGAME1,SDL_Rect posLOAD,SDL_Rect posLOAD1,SDL_Rect posSETTINGS,SDL_Rect posSETTINGS1,SDL_Rect posEXIT,SDL_Rect posEXIT1,Mix_Chunk *son,int *continuer,int *s1)
{
if( ( *x1 > box_x ) && ( *x1 < box_x + box_w ) && ( *y1 > box_y ) && ( *y1 < box_y + box_h ) )
            {
                 SDL_BlitSurface(imageNEWGAME2,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);
              *x1=0;*y1=0;
 Mix_PlayChannel(1,son,0);
            }
     if( ( *x1 > box_x ) && ( *x1 < box_x + box_w ) && ( *y1 > box_y1 ) && ( *y1 < box_y1 + box_h ) )
            {
                 SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD2,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);
                 SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);*x1=0;*y1=0;
 Mix_PlayChannel(1,son,0);

            }
     if( ( *x1 > box_x ) && ( *x1 < box_x + box_w ) && ( *y1 > box_y2 ) && ( *y1 < box_y2 + box_h ) )
            {
                SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS2,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT1,NULL,screen,&posEXIT1);*x1=0;*y1=0;
 Mix_PlayChannel(1,son,0);
*s1=2;


            }
    if( ( *x1 > box_x ) && ( *x1 < box_x + box_w ) && ( *y1 > box_y3 ) && ( *y1 < box_y3 + box_h ) )
            {
                SDL_BlitSurface(imageNEWGAME1,NULL,screen,&posNEWGAME);
                 SDL_BlitSurface(imageLOAD1,NULL,screen,&posLOAD);
                 SDL_BlitSurface(imageSETTINGS1,NULL,screen,&posSETTINGS);
                 SDL_BlitSurface(imageEXIT2,NULL,screen,&posEXIT1);*x1=0;*y1=0;
 Mix_PlayChannel(1,son,0);
*continuer=0;
            }}



void sc_menusettings(int BR,int SO,int MU,int sb2,int sb3,int sb4,SDL_Surface *screen,SDL_Surface *img1,SDL_Surface *img3,SDL_Surface *img5,SDL_Rect pos0,SDL_Rect pos00,SDL_Rect pos000,Mix_Music *musique)
{
SDL_Rect pos11,pos21,pos31,pos41,pos12,pos22,pos32,pos42,pos13,pos23,pos33,pos43;
pos11.x=pos0.x+54.8;pos11.y=pos0.y+5.5;pos21.x=pos0.x+89.2;pos21.y=pos0.y+5.5;pos31.x=pos0.x+114.38;pos31.y=pos0.y+5.5;pos41.x=pos0.x+221.1;pos41.y=pos0.y+5.5;
pos12.x=pos00.x+54.8;pos12.y=pos00.y+5.5;pos22.x=pos00.x+89.2;pos22.y=pos00.y+5.5;pos32.x=pos00.x+114.38;pos32.y=pos00.y+5.5;pos42.x=pos00.x+221.1;pos42.y=pos00.y+5.5;
pos13.x=pos000.x+54.8;pos13.y=pos000.y+5.5;pos23.x=pos000.x+89.2;pos23.y=pos000.y+5.5;pos33.x=pos000.x+114.38;pos33.y=pos000.y+5.5;pos43.x=pos000.x+221.1;pos43.y=pos000.y+5.5;






pos32.x=pos00.x+114.6-27.18;
if (SO==0)
{Mix_Volume(-1,(MIX_MAX_VOLUME/7)*0);}
if (SO==1)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*1);}


if (SO==2)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
  SDL_BlitSurface(img5,NULL,screen,&pos22);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*2);}

if (SO==3)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
SDL_BlitSurface(img5,NULL,screen,&pos22);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*3);}

if (SO==4)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
SDL_BlitSurface(img5,NULL,screen,&pos22);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*4);
}

if (SO==5)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
SDL_BlitSurface(img5,NULL,screen,&pos22);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*5);
}


if (SO==6)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
SDL_BlitSurface(img5,NULL,screen,&pos22);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
Mix_Volume(-1,(MIX_MAX_VOLUME/7)*6);
}

if (SO==7)
{SDL_BlitSurface(img1,NULL,screen,&pos12);
SDL_BlitSurface(img5,NULL,screen,&pos22);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
pos32.x=pos32.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos32);
SDL_BlitSurface(img3,NULL,screen,&pos42);
Mix_Volume(-1,MIX_MAX_VOLUME);}



pos33.x=pos000.x+114.6-27.18;
if (MU==0)
{Mix_VolumeMusic((MIX_MAX_VOLUME/7)*0);}
if (MU==1)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
 Mix_VolumeMusic((MIX_MAX_VOLUME/7)*1);
 }


if (MU==2)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
  SDL_BlitSurface(img5,NULL,screen,&pos23);
  Mix_VolumeMusic((MIX_MAX_VOLUME/7)*2);}

if (MU==3)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
SDL_BlitSurface(img5,NULL,screen,&pos23);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
 Mix_VolumeMusic((MIX_MAX_VOLUME/7)*3);}

if (MU==4)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
SDL_BlitSurface(img5,NULL,screen,&pos23);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
Mix_VolumeMusic((MIX_MAX_VOLUME/7)*4);
}

if (MU==5)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
SDL_BlitSurface(img5,NULL,screen,&pos23);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
Mix_VolumeMusic((MIX_MAX_VOLUME/7)*5);
}


if (MU==6)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
SDL_BlitSurface(img5,NULL,screen,&pos23);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
Mix_VolumeMusic((MIX_MAX_VOLUME/7)*6);
}

if (MU==7)
{SDL_BlitSurface(img1,NULL,screen,&pos13);
SDL_BlitSurface(img5,NULL,screen,&pos23);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
pos33.x=pos33.x+27.18;
SDL_BlitSurface(img5,NULL,screen,&pos33);
SDL_BlitSurface(img3,NULL,screen,&pos43);
Mix_VolumeMusic(MIX_MAX_VOLUME);}
}
void choix_display(SDL_Surface *screen,SDL_Surface *imageFULLSCREEN1,SDL_Surface *imageNORMAL1,SDL_Surface *imageFULLSCREEN,SDL_Surface *imageNORMAL,SDL_Rect posFULLSCREEN,SDL_Rect posNORMAL,int display )
{
if (display % 2 == 1)
 {SDL_BlitSurface(imageFULLSCREEN1,NULL,screen,&posFULLSCREEN);SDL_BlitSurface(imageNORMAL,NULL,screen,&posNORMAL);}
else if (display % 2 == 0)
 {SDL_BlitSurface(imageFULLSCREEN,NULL,screen,&posFULLSCREEN);SDL_BlitSurface(imageNORMAL1,NULL,screen,&posNORMAL);}

}
void choix_quality(SDL_Surface *screen,SDL_Surface *imageHIGH,SDL_Surface *imageHIGH1,SDL_Surface *imageMEDIUM,SDL_Surface *imageMEDIUM1,SDL_Surface *imageLOW,SDL_Surface *imageLOW1,SDL_Rect posHIGH,SDL_Rect posMEDIUM,SDL_Rect posLOW,int quality )
{
if (quality % 3 == 1)
 {SDL_BlitSurface(imageHIGH1,NULL,screen,&posHIGH);SDL_BlitSurface(imageMEDIUM,NULL,screen,&posMEDIUM);SDL_BlitSurface(imageLOW,NULL,screen,&posLOW);}
else if (quality % 3 == 2)
 {SDL_BlitSurface(imageHIGH,NULL,screen,&posHIGH);SDL_BlitSurface(imageMEDIUM1,NULL,screen,&posMEDIUM);SDL_BlitSurface(imageLOW,NULL,screen,&posLOW);}
else if (quality % 3 == 0)
  {SDL_BlitSurface(imageHIGH,NULL,screen,&posHIGH);SDL_BlitSurface(imageMEDIUM,NULL,screen,&posMEDIUM);SDL_BlitSurface(imageLOW1,NULL,screen,&posLOW);}
}

void choix_menusettings(int sb1,int sb2,int sb3,int sb4,SDL_Surface *screen,SDL_Surface *img0,SDL_Surface *img01,SDL_Surface *img61,SDL_Surface *img62,SDL_Surface *img63,SDL_Surface *img64,SDL_Rect pos0,SDL_Rect pos00,SDL_Rect pos000,SDL_Rect pos61,SDL_Rect pos62,SDL_Rect pos63,SDL_Rect pos64,int BR,int SO,int MU,SDL_Surface *img1,SDL_Surface *img3,SDL_Surface *img5,Mix_Music *musique,SDL_Surface *imageFULLSCREEN1,SDL_Surface *imageNORMAL1,SDL_Surface *imageFULLSCREEN,SDL_Surface *imageNORMAL,SDL_Rect posFULLSCREEN,SDL_Rect posNORMAL,int display,SDL_Surface *imageHIGH,SDL_Surface *imageHIGH1,SDL_Surface *imageMEDIUM,SDL_Surface *imageMEDIUM1,SDL_Surface *imageLOW,SDL_Surface *imageLOW1,SDL_Rect posHIGH,SDL_Rect posMEDIUM,SDL_Rect posLOW,int quality)
{
  if (sb1==2)
   {SDL_BlitSurface(img61,NULL,screen,&pos61);
     	SDL_BlitSurface(img01,NULL,screen,&pos00);SDL_BlitSurface(img01,NULL,screen,&pos000);}
  if (sb2==2)
   {SDL_BlitSurface(img62,NULL,screen,&pos62);
   SDL_BlitSurface(img01,NULL,screen,&pos00);SDL_BlitSurface(img01,NULL,screen,&pos000);}
  if (sb3==2)
   {SDL_BlitSurface(img63,NULL,screen,&pos63);
    SDL_BlitSurface(img0,NULL,screen,&pos00);SDL_BlitSurface(img01,NULL,screen,&pos000);}
  if(sb4==2)
   {SDL_BlitSurface(img64,NULL,screen,&pos64);
   SDL_BlitSurface(img01,NULL,screen,&pos00);SDL_BlitSurface(img0,NULL,screen,&pos000);}
    
 sc_menusettings(BR,SO,MU,sb2,sb3,sb4,screen,img1,img3,img5,pos0,pos00,pos000,musique);
choix_display(screen,imageFULLSCREEN1,imageNORMAL1,imageFULLSCREEN,imageNORMAL,posFULLSCREEN,posNORMAL,display );
choix_quality(screen,imageHIGH,imageHIGH1,imageMEDIUM,imageMEDIUM1,imageLOW,imageLOW1,posHIGH,posMEDIUM,posLOW,quality );
}

