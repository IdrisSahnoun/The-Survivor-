prog:image.o main.o 
	gcc image.o main.o -o prog -lSDL -lSDL_ttf -g -lSDL_image -lSDL_mixer
main.o:main.c 
	gcc -c main.c 
image.o:image.c 
	gcc -c image.c