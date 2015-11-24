.PHONY: clean

play: play.o
	gcc -o play -L../lib play.o -lfuncs
play.o: play.c
	gcc -c play.c -o play.o

clean:
	rm *.o play
