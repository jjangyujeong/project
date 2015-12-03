#include <stdio.h>

void playsound(int num)
{
<<<<<<< HEAD
        //int flag=0;
        printf("Please select a music (1~3)\n");
        //printf("mod\n");
        //system("mpg123 -w *.wav *.mp3");
        if(num==1)
        {
                printf("play music numb 1\n");
                system("aplay 1.wav");
          //      flag=1;
        }
        else if(num==2)
        {
                printf("play music numb 2\n");
                system("aplay 2.wav");
            //    flag=1;
        }
        else if(num==3)
        {
                printf("play music numb 3\n");
                system("aplay 3.wav");
              //  flag=1;
        }


        printf("Playing wav files\n");
//      return flag;
=======
	
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
	
>>>>>>> 67f74c2ebe490041dcc15040b144c9c891060699
}
