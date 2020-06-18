#include "player.h"

int chargerSprite( Sprite *sprite, const char *image )
{
	sprite->image = IMG_Load( image );
	if ( !sprite->image )
		return 0;

	// on fixe la cle de transparance
	SDL_SetColorKey( sprite->image, SDL_SRCCOLORKEY, SDL_MapRGB( sprite->image->format, 0, 255, 0 ) );
	// On definit d'abord les propri�t�s du sprite :

	// le sprite n'est pas anim� par defaut
	sprite->anim = 0;

	// on commence par la premi�re animation
	sprite->anim_courante = 0;

	// le sprite dispose de trois animations
	sprite->total_anims = 13;

	// par d�faut, le sprite est tourn� vers le bas
	sprite->orientation = DROITE;

	// chaque animation dure 5 affichages
	sprite->temps_anim = 3;

	// Le temps qu'il reste � afficher l'animation courante
	sprite->temps_anim_courante = 0;

	// On definit ensuite les dimentions du sprite.
	sprite->largeur = 138.82;
	sprite->hauteur = 154.18;

	sprite->source.x = sprite->anim_courante * sprite->largeur;
	sprite->source.y = sprite->orientation * sprite->hauteur;
	sprite->source.w = sprite->largeur;
	sprite->source.h = sprite->hauteur;

	sprite->dest.x = 300;
	sprite->dest.y = 570;
	sprite->dest.w = sprite->largeur;
	sprite->dest.h = sprite->hauteur;

	// on definit enfin la vitesse et la direction du sprite
	sprite->vitesse = 12;
  sprite->xx = 0;
	sprite->direction = AUCUNE_DIRECTION;

	return 1;
}

////////////////////////////////////////////////////////////////

void supprimerSprite( Sprite *sprite )
{
	SDL_FreeSurface( sprite->image );
}

////////////////////////////////////////////////////////////////

void fixerDirectionSprite( Sprite *sprite, int direction )
{
	// On affecte la direction au sprite
	sprite->direction = direction;

	// on affecte l'animation correcpondant � la direction au sprite
	if (direction != AUCUNE_DIRECTION)
	{
		sprite->anim = 1;
		switch (direction)
		{

		case DIRECTION_DROITE:
			sprite->orientation = DROITE;
			break;

		case DIRECTION_GAUCHE:
			sprite->orientation = GAUCHE;
			break;

		default:
			;
		}
	}
	else
		// si le sprite est aret�, on ne l'anime pas
		sprite->anim = 0;

	// on met la premi�re animation
	sprite->anim_courante = 0;
	sprite->temps_anim_courante = 0;

	// on regle la source de l'image � copier
	sprite->source.y = sprite->orientation * sprite->hauteur;
	sprite->source.x = sprite->anim_courante * sprite->largeur;
}
//////////////////////////////////////////////////

void miseAJourSprite( Sprite *sprite )
{
  if (sprite->direction & DIRECTION_DROITE)
	{
    if (sprite->vitesse==50){
      sprite->xx=sprite->xx+50;
      if (sprite->xx>250){
        sprite->vitesse=12;
      }
    }
		// on va � droite et on fait attention a ne pas sortie de l'ecran
		sprite->dest.x += sprite->vitesse;
		if (sprite->dest.x + sprite->largeur > LARGEUR_ECRAN)
			sprite->dest.x = LARGEUR_ECRAN - sprite->largeur;
	}
	else if (sprite->direction & DIRECTION_GAUCHE)
	{
    if (sprite->vitesse==50){
      sprite->xx=sprite->xx+50;
      if (sprite->xx>250){
        sprite->vitesse=12;
      }
    }
		// on va � gauche et on fait attention a ne pas sortie de l'ecran
		sprite->dest.x -= sprite->vitesse;
		if (sprite->dest.x < 0)
			sprite->dest.x = 0;
	}
}

////////////////////////////////////////////////////////////

void dessinerSprite( Sprite *sprite, SDL_Surface *destination )
{
	/* si le sprite est anim�, on gere l'animation */
	if (sprite->anim)
	{
		// on decremente le temps restant � l'animation courante
		sprite->temps_anim_courante--;
		// et on regarde s'il est temps de changer d'animation
		if ( sprite->temps_anim_courante <= 0 )
		{
			// s'il faut changer, on passe � l'animation suivante
			sprite->anim_courante++;
			// si on �tait � la derni�re animation, on repasse � la premi�re
			if (sprite->anim_courante >= sprite->total_anims)
				sprite->anim_courante = 1;

			// on regle la source � copier
			sprite->source.x = sprite->largeur * sprite->anim_courante;
			sprite->temps_anim_courante = sprite->temps_anim;
		}
	}

	// enfin, on dessine le sprite � l'ecran
	SDL_BlitSurface( sprite->image, &sprite->source, destination, &sprite->dest );
}

//////////////////////////////////////////////////////////////////
