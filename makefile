prog:init.o fc.o menu.o main.o
	gcc init.o fc.o menu.o main.o  -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
menu.o:menu.c
	gcc -c menu.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
fc.o:fc.c
	gcc -c fc.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
init.o:init.c
	gcc -c init.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf

