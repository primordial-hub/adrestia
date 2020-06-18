#include "structs.h"



extern int chargerSprite( Sprite *sprite, const char *image );
extern void supprimerSprite( Sprite *sprite );
extern void miseAJourSprite( Sprite *sprite );
extern void fixerDirectionSprite( Sprite *sprite, int direction );
extern void dessinerSprite( Sprite *sprite, SDL_Surface *destination );
extern int choose(Sprite *sp);


//Input input;
Sprite spControlable;
