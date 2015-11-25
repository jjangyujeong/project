#include <stdio.h>

void playsound(int num)
{

	printf("Please select a music (1~5)");
	
        printf("Converting mp3 files to wav files\n");
	//system("mpg123 -w *.wav *.mp3");
	if(num==1)
	{
		system("aplay 1.wav");
	}
	else if(num==2)
	{
	        system("aplay 2.wav");
	}
	else if(num==3)
        {
                system("aplay 3.wav");
        }
	else if(num==4)
        {
                system("aplay 4.wav");
        }
	else if(num==5)
        {
                system("aplay 5.wav");
        }

	 printf("Playing wav files\n");
}

