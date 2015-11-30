.PHONY: clean


main: main.c
	gcc `pkg-config --cflags gtk+-2.0` -o main main.c -Wall `pkg-config --libs gtk+-2.0`
	gcc -o main -L../sound_d main.o -lfuncs
main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm *.o play
