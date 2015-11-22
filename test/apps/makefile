player: player.o
	cc -o player -L../lib player.o -lfuncs
player.o: player.c
	cc -g -c -I../include player.c -o player.o
clean:
	rm -f *.o $(OUTPUT)
