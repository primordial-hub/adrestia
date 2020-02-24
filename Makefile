programme:menufct.o menu.o
	gcc menufct.o menu.o -o programme -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer
menu.o:menu.c 
	gcc -c menu.c -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer
menufct.o:menufct.c
	gcc -c menufct.c -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer
