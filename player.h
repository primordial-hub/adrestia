#include "structs.h"

extern Sprite spControlable;

int chargerSprite( Sprite *sprite, const char *image );
void supprimerSprite( Sprite *sprite );
void fixerDirectionSprite( Sprite *sprite, int direction );
void miseAJourSprite( Sprite *sprite );
void dessinerSprite( Sprite *sprite, SDL_Surface *destination );
