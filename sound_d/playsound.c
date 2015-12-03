#include <stdio.h>

void playsound(int num)
{
        //printf("Please select a music (1~3)\n");

	if(num==1)
        {
                printf("play music numb 1\n");
                system("aplay 1.wav");
        }
        else if(num==2)
        {
                printf("play music numb 2\n");
                system("aplay 2.wav");
        }
        else if(num==3)
        {
                printf("play music numb 3\n");
                system("aplay 3.wav");
        }
}
