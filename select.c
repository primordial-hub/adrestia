#include "select.h"

int choose(Sprite *sp)
{

	SDL_Surface *ecran ,*fond ,*select1,*select2;
	SDL_Event event;
  int bFin = 0;
  SDL_Rect pos,selectpos,select1pos;
  pos.x= 0;
  pos.y= 0;
	selectpos.x = 777;
	selectpos.y = 222;
	select1pos.x = 292;
	select1pos.y = 222;
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0)
  {
    fprintf(stderr, "Echec d'initialisation de SDL.\n");
    return 1;
  }
  printf("Bonjour le monde, SDL est initialis� avec succ�s.\n");


  /* On fixe le mode d'affichage � 640*480*16 plein ecran.*/
  ecran = SDL_SetVideoMode(1300, 800, 32, SDL_HWSURFACE);
	SDL_WM_SetCaption ("Adrestia",NULL);
  if ( ecran == NULL )
  {
    fprintf(stderr, "Echec de changement du mode video : %s.\n", SDL_GetError());
    return 1;
  }

  fond = IMG_Load("background.png");
	select1 = IMG_Load("select.png");
	select2 = IMG_Load("select-1.png");


  while (!bFin)
  {
    SDL_BlitSurface(fond, NULL, ecran, &pos);
		SDL_BlitSurface(select1, NULL, ecran, &selectpos);
			SDL_WaitEvent(&event);
			switch (event.type)
			{
			case SDL_MOUSEMOTION:
					if ((event.motion.x > 777) && (event.motion.x < 1030) && (event.motion.y > 222 )&& (event.motion.y < 655) )
						{
							select1 = IMG_Load("selectb.png");



						}
					else if ((event.motion.x > 292) && (event.motion.x < 545) && (event.motion.y > 222 )&& (event.motion.y < 655) )
							{
								select2 = IMG_Load("selectb1.png");



							}
					else
					{
						select1 = IMG_Load("select.png");
						select2 = IMG_Load("select-1.png");

					}
						break;
			case SDL_MOUSEBUTTONUP:
			if ((event.motion.x > 777) && (event.motion.x < 1030) && (event.motion.y > 222 )&& (event.motion.y < 655) )
				{
					sp->p = 1;
					bFin = 1;
				}
				else if ((event.motion.x > 292) && (event.motion.x < 545) && (event.motion.y > 222 )&& (event.motion.y < 655) )
						{
							sp->p = 2;
							bFin = 1;
						}


			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
				case SDLK_ESCAPE:
					bFin = 1;
					break;
				}
			}
			SDL_BlitSurface(fond, NULL, ecran, &pos);
			SDL_BlitSurface(select1, NULL, ecran, &selectpos);
			SDL_BlitSurface(select2, NULL, ecran, &select1pos);
			SDL_Flip(ecran);



  }
return 1 ;
SDL_Quit();
}
