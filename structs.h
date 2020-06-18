 #include "def.h"

//type sprites
typedef struct
{
	// pour l'affichage

	SDL_Surface *image;
	SDL_Rect source;
	SDL_Rect dest;

	int p;
	// taille du sprite

	int largeur;
	int hauteur;


	// pour le d�placement

	// direction dans laquelle se deplace le sprite
	int direction;

	// vitesse du sprite
	int vitesse;
  int xx;


	// pour la gestion des animations

	// si le sprite est anime
	int anim;

	// direction dans laquelle est orient� le sprite
	int orientation;

	// animation courante du sprite
	int anim_courante;

	// le temps que dure une animation
	int temps_anim;

	// le temps de l'animation courante
	int temps_anim_courante;

	// nombre d'animations du sprite
	int total_anims;

}Sprite;
