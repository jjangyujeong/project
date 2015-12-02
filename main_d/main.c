#include <gtk/gtk.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "playsound.h"
#include <pthread.h>

GtkWidget *b1, *b2,*b3,*b4,*b5,*b6,*b7,*b8,*out;
GtkWidget *bScore,*s1,*s2,*s3;

char buf[100];
int num=0; //random ddg number
int score = 0;
int push=0;
int stop=0;
<<<<<<< HEAD
=======

int song = 0;
int start = 0;

>>>>>>> 9f0b54ad4159e4eb58463293b670ed92b366461b
gint on_timer(gpointer data);

void *play(void *arg)
{
	int flag;
	flag = playsound(2);
	printf("%d\n",flag);
}
void clear()
{

        gtk_button_set_label(GTK_BUTTON(b1),""); 
        gtk_button_set_label(GTK_BUTTON(b2),""); 
        gtk_button_set_label(GTK_BUTTON(b3),""); 
        gtk_button_set_label(GTK_BUTTON(b4),""); 
        gtk_button_set_label(GTK_BUTTON(b5),""); 
        gtk_button_set_label(GTK_BUTTON(b6),""); 
        gtk_button_set_label(GTK_BUTTON(b7),""); 
        gtk_button_set_label(GTK_BUTTON(b8),""); 

}

gint ddg()
{
        clear();
        srand((unsigned) time(0));
        num = rand()% 8+1;

        if(num==1){
                gtk_button_set_label(GTK_BUTTON(b1),"o");}
        else if(num==2){
                gtk_button_set_label(GTK_BUTTON(b2),"o");}
        else if(num==3){
                gtk_button_set_label(GTK_BUTTON(b3),"o");}
        else if(num==4){
                gtk_button_set_label(GTK_BUTTON(b4),"o");}
        else if(num==5){
                gtk_button_set_label(GTK_BUTTON(b5),"o");}
        else if(num==6){
                gtk_button_set_label(GTK_BUTTON(b6),"o");}
        else if(num==7){
                gtk_button_set_label(GTK_BUTTON(b7),"o");}
        else{
                gtk_button_set_label(GTK_BUTTON(b8),"o");}


        return TRUE;
	if(stop==1) return FALSE;

}

/*void musicSelect()
{
	
}*/

void setAnswer()
{
	if(num==push)
	{
		num=0;
		score++;
		sprintf(buf,"Score is %d",score);
		gtk_label_set_text(GTK_LABEL(bScore),buf);		
	}
	else
	{
		stop=1;

	}
}
void buttonClick()
{
 
	if(num==1){
		push = 1;}
	else if(num==2){
                push = 2;}
	else if(num==3){
                push = 3;}
	else if(num==4){
                push = 4;}
	else if(num==5){
                push = 5;}
	else if(num==6){
                push = 6;}
	else if(num==7){
                push = 7;}
	else{
                push = 8;}

	clear();
	setAnswer();
}



int main (int argc,char *argv[])
{

	GtkWidget* window;
	GtkWidget* label1;

	GtkWidget *hbox;
	GtkWidget *hbox2;
	GtkWidget *hbox3;
	GtkWidget* vbox;
	gtk_init(&argc, &argv);

<<<<<<< HEAD
	int result;
	pthread_t mythread;

	result = pthread_create(&mythread, NULL, play, NULL);
	if(result){
			perror("pthread_create");
			exit(1);
	}

	//pthread_join(mythread,NULL);
=======
>>>>>>> 9f0b54ad4159e4eb58463293b670ed92b366461b

	gtk_init(NULL,NULL);
	g_timeout_add(1000,ddg,0);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window),"destory",G_CALLBACK(gtk_main_quit),NULL);


	//-----------------------------------------------------
	vbox = gtk_vbox_new(TRUE,0);
	hbox = gtk_hbox_new(TRUE,0);
	hbox2 = gtk_hbox_new(TRUE,0);
	hbox3 = gtk_hbox_new(TRUE,0);

	label1 = gtk_label_new("*PIANO TILES GAME*");
	gtk_widget_set_size_request(label1,400,50);

	b1 = gtk_button_new_with_label(" ");
	gtk_widget_set_usize(GTK_WIDGET(b1),30,120);
	b2 = gtk_button_new_with_label(" ");
	b3 = gtk_button_new_with_label(" ");
 	b4 = gtk_button_new_with_label(" ");
	b5 = gtk_button_new_with_label(" ");
 	b6 = gtk_button_new_with_label(" ");
 	b7 = gtk_button_new_with_label(" ");
	b8 = gtk_button_new_with_label(" ");

	s1 = gtk_button_new_with_label("step 1");
	gtk_widget_set_usize(GTK_WIDGET(s1),100,20);
	s2 = gtk_button_new_with_label("step 2");
	 gtk_widget_set_usize(GTK_WIDGET(s2),100,20);

	s3 = gtk_button_new_with_label("step 3");
	 gtk_widget_set_usize(GTK_WIDGET(s3),100,20);


	bScore = gtk_label_new("Score");
	out = gtk_button_new_with_label("exit");

	g_signal_connect(G_OBJECT(b1),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b2),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b3),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b4),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b5),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b6),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b7),"clicked",G_CALLBACK(buttonClick),NULL);
	g_signal_connect(G_OBJECT(b8),"clicked",G_CALLBACK(buttonClick),NULL);
	
	//g_signal_connect(G_OBJECT(exit),"clicked",G_CALLBACK(musicSelect),NULL);
	//--------------------container---------------------
	gtk_container_add(GTK_CONTAINER(vbox),label1);

	gtk_container_add(GTK_CONTAINER(hbox),s1);
        gtk_container_add(GTK_CONTAINER(hbox),s2);
        gtk_container_add(GTK_CONTAINER(hbox),s3);
        gtk_container_add(GTK_CONTAINER(vbox),hbox);

/*	gtk_container_add(GTK_CONTAINER(hbox3),b1);
 	gtk_container_add(GTK_CONTAINER(hbox3),b2);
 	gtk_container_add(GTK_CONTAINER(hbox3),b3);
 	gtk_container_add(GTK_CONTAINER(hbox3),b4);
	gtk_container_add(GTK_CONTAINER(hbox3),b5);
 	gtk_container_add(GTK_CONTAINER(hbox3),b6);
 	gtk_container_add(GTK_CONTAINER(hbox3),b7);
 	gtk_container_add(GTK_CONTAINER(hbox3),b8);

	gtk_container_add(GTK_CONTAINER(vbox),hbox3);*/

/*	gtk_container_add(GTK_CONTAINER(hbox2),bScore);
	gtk_container_add(GTK_CONTAINER(hbox2),out);
	gtk_container_add(GTK_CONTAINER(vbox),hbox2);*/

	gtk_container_add(GTK_CONTAINER(hbox3),b1);
        gtk_container_add(GTK_CONTAINER(hbox3),b2);
        gtk_container_add(GTK_CONTAINER(hbox3),b3);
        gtk_container_add(GTK_CONTAINER(hbox3),b4);
        gtk_container_add(GTK_CONTAINER(hbox3),b5);
        gtk_container_add(GTK_CONTAINER(hbox3),b6);
        gtk_container_add(GTK_CONTAINER(hbox3),b7);
        gtk_container_add(GTK_CONTAINER(hbox3),b8);
 	gtk_container_add(GTK_CONTAINER(vbox),hbox3);

	gtk_container_add(GTK_CONTAINER(hbox2),bScore);
        gtk_container_add(GTK_CONTAINER(hbox2),out);
        gtk_container_add(GTK_CONTAINER(vbox),hbox2);

/*	gtk_container_add(GTK_CONTAINER(hbox),s1);
        gtk_container_add(GTK_CONTAINER(hbox),s2);
        gtk_container_add(GTK_CONTAINER(hbox),s3);
	gtk_container_add(GTK_CONTAINER(vbox),hbox);*/


	gtk_container_add(GTK_CONTAINER(window),vbox);

	gtk_widget_show_all(window);

//	playsound(2);
	gtk_main(); //wait
	return 0;
}
