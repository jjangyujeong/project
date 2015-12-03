#include <stdio.h>

void playsound(int num)
{
	
	if(num==1)
	{
		system("aplay 1.wav");
	}
	else if(num==2)
	{
		system("aplay 2.wav");
	}
	else
        {
                system("aplay 3.wav");
        }
	
}

