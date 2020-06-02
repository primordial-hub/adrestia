LFLAGS = `sdl-config --libs` -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lm -lSDL_gfx
OBJS   = main.o background.o menu.o  enigmes.o  entsec.o perso.o
programme = adrestia
CXX = gcc

all: $(programme)

%.o: src/%.c src/%.h src/defs.h 
	$(CXX) $(CFLAGS) -c -s $<

$(programme): $(OBJS)
	$(CXX) $(OBJS) -o $(programme) $(LFLAGS)


clean:
	rm $(programme) *.o
