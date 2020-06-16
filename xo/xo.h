#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_video.h>
void initXo(char M[3][3]);
void printForMe(char M[3][3]);
void play2(char *player, char M[3][3], int x, int y, SDL_Surface *kx, SDL_Rect x_position, SDL_Surface *screen);
void play1(char *player, char M[3][3], int *c, int *t, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen,int test);
void play3(char *player, char M[3][3], int *c, SDL_Surface *ko, SDL_Rect o_position, SDL_Surface *screen, int test);
int whowin(char M[3][3]);
