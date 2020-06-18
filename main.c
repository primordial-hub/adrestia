  #include "main.h"

  int main(int argc, char *argv[])
{
  SDL_Surface *ecran ,*fond;
	SDL_Event event;
	int bFin = 0;
	float x ;
	int d;
	//string src[13];
	Uint32 temps_courant, prochain_rendu = 0;

	/* On d�clare trois sprites, un que l'on controlera
	   et deux qui se d�placerons tout seul */
	Sprite spControlable;

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) < 0)
	{
		fprintf(stderr, "Echec d'initialisation de SDL.\n");
		return 1;
	}
	printf("Bonjour le monde, SDL est initialis� avec succ�s.\n");


	/* On fixe le mode d'affichage � 640*480*16 plein ecran.*/
	ecran = SDL_SetVideoMode(LARGEUR_ECRAN, HAUTEUR_ECRAN, 32, SDL_FULLSCREEN);
	if ( ecran == NULL )
	{
		fprintf(stderr, "Echec de changement du mode video : %s.\n", SDL_GetError());
		return 1;
	}
	//src = "j2/char.png";
	choose(&spControlable);
	/* On charge le sprite controlable avec l'image pecheur.bmp */
	if (spControlable.p == 2){

		if ( !chargerSprite( &spControlable, "char2.png" ) )
		{
			SDL_Quit();
			return 1;
		}
	}
	else if (spControlable.p == 1){
		if ( !chargerSprite( &spControlable, "char.png" ) )
		{
			SDL_Quit();
			return 1;
		}
	}
	SDL_Rect pos;
	pos.x= 0;
	pos.y= 0;
	fond = IMG_Load("lvl1.png");



  // on place le sprite que l'on controle au milieu
	spControlable.dest.x = 300;
	spControlable.dest.y = 570;
	fixerDirectionSprite( &spControlable, DIRECTION_GAUCHE );
	fixerDirectionSprite( &spControlable, AUCUNE_DIRECTION );
  while (!bFin)
	{
			SDL_BlitSurface(fond, NULL, ecran, &pos);
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
				case SDLK_ESCAPE:
					bFin = 1;
					break;
				case SDLK_TAB:
					choose(&spControlable);
					if (spControlable.p == 2){
						spControlable.image = IMG_Load("char2.png");
					}
					else if (spControlable.p == 1){
						spControlable.image = IMG_Load("char.png");
					}
					break;
				x=spControlable.dest.x;
				case SDLK_c:

					spControlable.vitesse = 50;

					break;
				// on deplace le sprite au clavier
				case SDLK_x:
					//x= spControlable.dest.x;
					spControlable.dest.x=x;
					if (spControlable.p == 2){
					spControlable.image = IMG_Load( "tornado2.png" )  ;
					SDL_BlitSurface( spControlable.image, &spControlable.source, ecran, &spControlable.dest );
					}
					else if (spControlable.p == 1)
					{
						spControlable.image = IMG_Load( "tornado.png" )  ;
						SDL_BlitSurface( spControlable.image, &spControlable.source, ecran, &spControlable.dest );
					}
					spControlable.dest.x=x;
					spControlable.orientation=d;
					break;

				case SDLK_RIGHT:
					fixerDirectionSprite( &spControlable, DIRECTION_DROITE );
					x= spControlable.dest.x;
					break;

				case SDLK_LEFT:
					x= spControlable.dest.x;
					fixerDirectionSprite( &spControlable, DIRECTION_GAUCHE );

					break;

				default:
					printf("Une touche � �t� press�e.\n");
				}
				break;

			case SDL_KEYUP:
				switch (event.key.keysym.sym)
				{
					case SDLK_c:
            spControlable.xx=0;
						spControlable.vitesse = 12;
						break;
				// on deplace le sprite au clavier
				case SDLK_x:
					x= spControlable.dest.x;
					if (spControlable.p == 2){
					spControlable.image = IMG_Load( "char2.png" )  ;
					SDL_BlitSurface( spControlable.image, &spControlable.source, ecran, &spControlable.dest );
					}
					else if (spControlable.p == 1)
					{
						spControlable.image = IMG_Load( "char.png" )  ;
						SDL_BlitSurface( spControlable.image, &spControlable.source, ecran, &spControlable.dest );
					}
					spControlable.dest.x=x;
					spControlable.orientation =d;

					break;
				case SDLK_RIGHT:
					x= spControlable.dest.x;
					d =spControlable.orientation;
					if (spControlable.direction == DIRECTION_DROITE)
					fixerDirectionSprite( &spControlable, AUCUNE_DIRECTION );


					break;

				case SDLK_LEFT:
					d =spControlable.orientation;
					x= spControlable.dest.x;
					if (spControlable.direction == DIRECTION_GAUCHE)
						fixerDirectionSprite( &spControlable, AUCUNE_DIRECTION );

					break;

				default:
					;
				}
				break;

			case SDL_QUIT:
				bFin = 1;
				break;

			default:
				;
			}
		}
    /* On recup�re le temps �coul� en mili-secondes */
    temps_courant = SDL_GetTicks();

    /* On regarde s'il est temps d'effectuer le prochain rendu */
    if (temps_courant > prochain_rendu)
    {
      /* un rendu toutes les 20 milli-secondes = 50 images par secondes */
      prochain_rendu = temps_courant + 20;

      miseAJourSprite( &spControlable );
      //SDL_FillRect(ecran, NULL, 0);

  			/* On dessine les sprites � l'�cran */
  		dessinerSprite( &spControlable, ecran );
      SDL_UpdateRect(ecran, 0, 0, 0, 0);
      }

  	}

  	supprimerSprite( &spControlable );
  	SDL_Quit();
  	return 0;
}
