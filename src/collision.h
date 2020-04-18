    #include "structs.h"
int tellmewhattodo(control *input);
void GetInput(int *i) ;
void doAnimation(Animation *anim, int speed);
void switchimage(SDL_Surface *s, SDL_Surface *screen, SDL_Rect p);
void delay(unsigned int frameLimit);
void ScrollMap();
int collision(int x0, int y0, int w0, int h0, int x2, int y2, int w1, int h1);
void Jump();
void gravity();
void MovePlayer();
extern Animation walk, run,walk1,run1,walk2,run2,walkb,runb,jump,jumpb;
extern int q, i , j, input,x,frame;
extern int k , all, v, l , y , fs, fs1 , fs2 ,
    fs3 , qual , ani,go,speed,gravite,lr;
extern SDL_Surface *background , *screen, *newgame, *newgame1, *resumegame,
            *resumegame1, *onlinemode, *onlinemode1, *option, *option1,
            *exitgame, *exitgame1, *background1, *princess, *bleu, *vert,
            *rouge, *pmusic, *arrowright, *box, *load6, *load1, *load2,
            *load3, *load4, *load5, *app, *app1, *quit, *quit1, *ch1, *ch2,
            *ch3, *ch4, *ch5, *ch6, *ch7, *ch8, *image,*imageb, *scroll,*Map;
extern SDL_Rect PositionNewGame, Positionbackground, Positionresumegame,
    Positiononlinemode, Positionoption, Positionexitgame, Positionbackground1,
    Positionprincess, Volume, box1, box2, bmusic, bmusic1, bquality,
    bquality1,imagec, bfx, bfx1, box4, box5, Volume2, Load, appc, quitc, ch1c, Psc,PosEgg,PosEgg1,PosEgg2,flamec,Mapc;
extern SDL_Event Menu;
extern Mix_Music *sound;
extern Mix_Chunk *mouse;
extern Mix_Chunk *welcome, *change;
extern control c;
