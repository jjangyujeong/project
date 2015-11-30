.PHONY: clean


main: main.c
	gcc `pkg-config --cflags gtk+-2.0` -o main main.c -Wall `pkg-config --libs gtk+-2.0` -L../sound_d -lfuncs -I../include/
main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm main
