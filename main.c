#include <gtk/gtk.h>

int main (int argc,char *argv[])
{
	GtkWidget* window;
	GtkWidget* label1;
	GtkWidget *b1, *b2,*b3,*b4,*b5,*b6,*b7,*b8;
	GtkWidget *bScore,*bMusic;
	GtkWidget *hbox;
	GtkWidget *hbox2;
	GtkWidget* vbox;
	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window),"destory",G_CALLBACK(gtk_main_quit),NULL);

	//-----------------------------------------------------
	vbox = gtk_vbox_new(TRUE,0);
	hbox = gtk_hbox_new(TRUE,0);
	hbox2 = gtk_hbox_new(TRUE,0);

	label1 = gtk_label_new("*PIANO TILES GAME*");
	gtk_widget_set_size_request(label1,400,50);

	b1 = gtk_button_new_with_label(" ");
	b2 = gtk_button_new_with_label(" ");
	b3 = gtk_button_new_with_label(" ");
 	b4 = gtk_button_new_with_label(" ");
	b5 = gtk_button_new_with_label(" ");
 	b6 = gtk_button_new_with_label(" ");
 	b7 = gtk_button_new_with_label(" ");
	b8 = gtk_button_new_with_label(" ");

	bScore = gtk_label_new("Score");
	bMusic = gtk_label_new("Music");


	//--------------------container---------------------
	gtk_container_add(GTK_CONTAINER(vbox),label1);
	
	gtk_container_add(GTK_CONTAINER(hbox),b1);
 	gtk_container_add(GTK_CONTAINER(hbox),b2);
 	gtk_container_add(GTK_CONTAINER(hbox),b3);
 	gtk_container_add(GTK_CONTAINER(hbox),b4);
	gtk_container_add(GTK_CONTAINER(hbox),b5);
 	gtk_container_add(GTK_CONTAINER(hbox),b6);
 	gtk_container_add(GTK_CONTAINER(hbox),b7);
 	gtk_container_add(GTK_CONTAINER(hbox),b8);

	gtk_container_add(GTK_CONTAINER(vbox),hbox);
	
	gtk_container_add(GTK_CONTAINER(hbox2),bScore);
	gtk_container_add(GTK_CONTAINER(hbox2),bMusic);
	gtk_container_add(GTK_CONTAINER(vbox),hbox2);
	
	gtk_container_add(GTK_CONTAINER(window),vbox);



	gtk_widget_show_all(window);

	gtk_main(); //wait
	return 0;
}
