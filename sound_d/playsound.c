#include <stdio.h>
#include <pthread.h>

void playsound(int num)
{
	int flag=0;
	printf("Please select a music (1~5)\n");
        //printf("Converting mp3 files to wav files\n");
	//system("mpg123 -w *.wav *.mp3");
	if(num==1)
	{
		printf("play music numb 1\n");
		system("aplay 1.wav");
		flag=1;
	}
	else if(num==2)
	{
		printf("play music numb 2\n");
		system("aplay 2.wav");
		flag=1;
	}
	else if(num==3)
        {
		printf("play music numb 3\n");
                system("aplay 3.wav");
		flag=1;
        }
	else if(num==4)
        {
		printf("play music numb 4\n");
                system("aplay 4.wav");
		flag=1;
        }
	else if(num==5)
        {
		printf("play music numb 5\n");
                system("aplay 5.wav");
		flag=1;
        }

	printf("Playing wav files\n");
//	return flag;
}

