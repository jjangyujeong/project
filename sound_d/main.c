#include <stdio.h>
//#define AAA 100
//#define BBB 200

int main(int argc, char argv[])
{


	//printf("please Enter wav files\n");
	printf("Converting mp3 files to wav files\n");
	system("mpg123 -w allday.wav allday.mp3");
	printf("Playing wav files\n");
	//printf("HAHAHA\n");
	//system("aplay allday.wav");
	system("aplay test.wav");
	return 0;
}
