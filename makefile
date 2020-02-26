LFLAGS = `sdl-config --libs` -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
OBJS   = main.o initandload.o menu.o play.o option.o enigmes.o settings.o
programme = adrestia
CXX = gcc

all: $(programme)

%.o: src/%.c src/%.h src/defs.h 
	$(CXX) $(CFLAGS) -c -s $<

$(programme): $(OBJS)
	$(CXX) $(OBJS) -o $(programme) $(LFLAGS)


clean:
	rm $(programme) *.o
