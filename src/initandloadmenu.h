#include "defs.h"

extern int n,continuer;
extern int l, s, e, e1, i, x, y, x1, y1, s1, sb1, sb2, sb3, sb4, BR, SO, MU, exitsetting, OK, CANCEL, scoff, f, display, quality;
extern int box_x, box_h, box_w, box_y, box_y1, box_y2, box_y3;
extern int fs, sx, sy, fls;
extern SDL_Surface *screen, *image, *imageLOGO, *imageLOGO2, *imageNEWGAME, *imageLOAD, *imageSETTINGS, *imageEXIT, *imageNEWGAME1, *imageLOAD1, *imageSETTINGS1, *imageEXIT1, *imageNEWGAME2, *imageLOAD2, *imageSETTINGS2, *imageEXIT2, *imageSETTINGSM, *img0, *img61, *img62, *img63, *img64, *img01, *img1, *img5, *img3, *imgredb, *imgredb1;
extern SDL_Surface *imageFULLSCREEN1, *imageNORMAL1, *imageLOW1, *imageMEDIUM1, *imageHIGH1, *imageFULLSCREEN, *imageNORMAL, *imageLOW, *imageMEDIUM, *imageHIGH;
extern SDL_Rect posback, poslogo, poslogo2, posNEWGAME, posLOAD, posSETTINGS, posSETTINGSM, posEXIT, posNEWGAME1, posLOAD1, posSETTINGS1, posEXIT1, pos0, pos00, pos000, pos61, pos62, pos63, pos64, posredb, posNORMAL, posFULLSCREEN, posHIGH, posMEDIUM, posLOW;
extern SDL_Event event,event1;
extern Mix_Chunk *son;
extern Mix_Music *musique;
extern TTF_Font *fontTest;
extern SDL_Color fontColor;
extern SDL_Surface *texte;
extern SDL_Rect textePosition;
void init_m();
void init_sm();
void init_tm();
