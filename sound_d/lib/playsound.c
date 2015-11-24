#include <stdio.h>

void playsound()
{
        //printf("please Enter wav files\n");
        printf("Converting mp3 files to wav files\n");
        system("mpg123 -w allday.wav allday.mp3");
        printf("Playing wav files\n");
        //printf("HAHAHA\n");
        system("aplay allday.wav");
        //system("aplay test.wav");


}

