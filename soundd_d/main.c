#include <stdio.h>
#define AAA 100
int main(int argc, char argv[])
{
	printf("please Enter wav files\n");
	printf("playing wav file\n");
	//system("aplay test.wav");
	system("aplay allday.wav");
	//conver mp3 files to wav files
	system("mpg123 -w example.wav allday.mp3");
	printf("HAHAHA\n");
	return 0;
}
