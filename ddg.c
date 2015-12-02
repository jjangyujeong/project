#include<gtk/gtk.h>
#include<stdlib.h>
// modified
GtkWidget *window;
GtkWidget *vbox;
GtkWidget *label1;
GtkWidget *label2;
GtkWidget *hbox1;
GtkWidget *hbox2;
GtkWidget *hbox3;
GtkWidget *hbox4;
char buf[100];
char buf2[100]; //ddg()
GtkWidget *button1, *button2, *button3, *button4;
GtkWidget *button5, *button6, *button7, *button8;
GtkWidget *button9, *button10, *button11, *button12;
GtkWidget *button13, *button14, *button15, *button16;
int remainTime = 60;
int done=0;
int num1=0;
int push=0; //push_ddg
int catch=0;
int one_catch=0;

int timer_handler(gpointer data)
{	
	if(remainTime==0)
	{ 
	ddg_clear();	
	return;
	}
	int min=0;
	int sec=0;

	remainTime = remainTime -1;
	min = remainTime /60;
	sec = remainTime %60;
	sprintf(buf,"Remaining Time: %d : %02d!!", min,sec);
	gtk_label_set_text(GTK_LABEL(label1),buf);

	if(remainTime>0) return 1;
	else
	{
	done = 1;
	gtk_label_set_text(GTK_LABEL(label1),"DONE!!"); 
	return 0;
	}
}
void ddg_clear() 
{
	sprintf(buf2,"%s","");
	gtk_button_set_label(GTK_BUTTON(button1),buf2);	
	gtk_button_set_label(GTK_BUTTON(button2),buf2);	
	gtk_button_set_label(GTK_BUTTON(button3),buf2);	
	gtk_button_set_label(GTK_BUTTON(button4),buf2);	
	gtk_button_set_label(GTK_BUTTON(button5),buf2);	
	gtk_button_set_label(GTK_BUTTON(button6),buf2);	
	gtk_button_set_label(GTK_BUTTON(button7),buf2);	
	gtk_button_set_label(GTK_BUTTON(button8),buf2);	
	gtk_button_set_label(GTK_BUTTON(button9),buf2);	
	gtk_button_set_label(GTK_BUTTON(button10),buf2);	
	gtk_button_set_label(GTK_BUTTON(button11),buf2);	
	gtk_button_set_label(GTK_BUTTON(button12),buf2);	
	gtk_button_set_label(GTK_BUTTON(button13),buf2);	
	gtk_button_set_label(GTK_BUTTON(button14),buf2);	
	gtk_button_set_label(GTK_BUTTON(button15),buf2);	
	gtk_button_set_label(GTK_BUTTON(button16),buf2);	

}

void setAnswer()
{
	if(num1==push&&one_catch==0)
	{
	num1=999;
	catch ++;
	sprintf(buf, "♥CATCH %d!!",catch);
	gtk_label_set_text(GTK_LABEL(label2),buf);
	one_catch ++;
	}
}

void button_Click(GtkWidget *widget)
{
	one_catch=1; 
	//button push and other space push NO!!
	if(widget ==  button1&&num1==1) {push=1;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button2&&num1==2) {
	push=2;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button3&&num1==3) {
	push=3;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button4&&num1==4)  {
	push=4;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button5&&num1==5)  {
	push=5;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button6&&num1==6)  {
	push=6;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button7&&num1==7)  {
	push=7;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button8&&num1==8)  {
	push=8;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button9&&num1==9)  {
	push=9;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button10&&num1==10)  {
	push=10;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button11&&num1==11)  {
	push=11;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button12&&num1==12)  {
	push=12;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button13&&num1==13)  {
	push=13;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button14&&num1==14)  {
	push=14;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button15&&num1==15)  {
	push=15;
	one_catch=0;
	ddg_clear();}
	else if(widget ==  button16&&num1==16)  {
	push=16;
	one_catch=0;
	ddg_clear();}
	setAnswer();
}

void ddg(gpointer data)
{
	if(remainTime<3)//FINAL DDG no!!
	{ 
	ddg_clear();	
	return;
	}
	ddg_clear();	
	//random
	srand((unsigned) time(0));
	num1 = rand() % 16+1;
	sprintf(buf2,"%s","O");
	
	if(num1==1)
	{
	gtk_button_set_label(GTK_BUTTON(button1),buf2);
	}
	else if(num1==2)
	{
	gtk_button_set_label(GTK_BUTTON(button2),buf2);
	}	
	else if(num1==3)
	{
	gtk_button_set_label(GTK_BUTTON(button3),buf2);
	}
	else if(num1==4)
	{
	gtk_button_set_label(GTK_BUTTON(button4),buf2);
	}
	else if(num1==5)
	{
	gtk_button_set_label(GTK_BUTTON(button5),buf2);
	}
	else if(num1==6)
	{
	gtk_button_set_label(GTK_BUTTON(button6),buf2);
	}
	else if(num1==7)
	{
	gtk_button_set_label(GTK_BUTTON(button7),buf2);
	}
	else if(num1==8)
	{
	gtk_button_set_label(GTK_BUTTON(button8),buf2);
	}	
	else if(num1==9)
	{
	gtk_button_set_label(GTK_BUTTON(button9),buf2);
	}
	else if(num1==10)
	{
	gtk_button_set_label(GTK_BUTTON(button10),buf2);
	}
	else if(num1==11)
	{
	gtk_button_set_label(GTK_BUTTON(button11),buf2);
	}
	else if(num1==12)
	{
	gtk_button_set_label(GTK_BUTTON(button12),buf2);
	}
	else if(num1==13)
	{
	gtk_button_set_label(GTK_BUTTON(button13),buf2);
	}
	else if(num1==14)
	{
	gtk_button_set_label(GTK_BUTTON(button14),buf2);
	}
	else if(num1==15)
	{
	gtk_button_set_label(GTK_BUTTON(button15),buf2);
	}
	else if(num1==16)
	{
	gtk_button_set_label(GTK_BUTTON(button16),buf2);
	}
}

int main(int argc, char *argv[])
{
gtk_init(&argc,&argv); //initialize

//timer 설정
g_timeout_add(1000,timer_handler,0);
g_timeout_add(3000,ddg,0);

window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
g_signal_connect(G_OBJECT(window),"destroy", G_CALLBACK(gtk_main_quit),NULL);

//vbox에 글씨 올리는 거
vbox=gtk_vbox_new(TRUE,0);

label1=gtk_label_new("Remaining Time: 1 : 00!!");
label2=gtk_label_new("CATCH!!!");
gtk_widget_set_size_request(label1,200,50);
gtk_container_add (GTK_CONTAINER(vbox),label1);

hbox1=gtk_hbox_new(TRUE,0);
hbox2=gtk_hbox_new(TRUE,0);
hbox3=gtk_hbox_new(TRUE,0);
hbox4=gtk_hbox_new(TRUE,0);

button1 = gtk_button_new_with_label("");
button2 = gtk_button_new_with_label("");
button3 = gtk_button_new_with_label("");
button4 = gtk_button_new_with_label("");

gtk_widget_set_size_request(button1,25,25);
gtk_widget_set_size_request(button2,25,25);
gtk_widget_set_size_request(button3,25,25);
gtk_widget_set_size_request(button4,25,25);

gtk_container_add (GTK_CONTAINER(hbox1),button1);
gtk_container_add (GTK_CONTAINER(hbox1),button2);
gtk_container_add (GTK_CONTAINER(hbox1),button3);
gtk_container_add (GTK_CONTAINER(hbox1),button4);

g_signal_connect(G_OBJECT(button1),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button2),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button3),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button4),"clicked", G_CALLBACK(button_Click),NULL);
//--------------------------------------------------------------------------------
button5 = gtk_button_new_with_label("");
button6 = gtk_button_new_with_label("");
button7 = gtk_button_new_with_label("");
button8 = gtk_button_new_with_label("");

gtk_widget_set_size_request(button5,25,25);
gtk_widget_set_size_request(button6,25,25);
gtk_widget_set_size_request(button7,25,25);
gtk_widget_set_size_request(button8,25,25);

gtk_container_add (GTK_CONTAINER(hbox2),button5);
gtk_container_add (GTK_CONTAINER(hbox2),button6);
gtk_container_add (GTK_CONTAINER(hbox2),button7);
gtk_container_add (GTK_CONTAINER(hbox2),button8);

g_signal_connect(G_OBJECT(button5),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button6),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button7),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button8),"clicked", G_CALLBACK(button_Click),NULL);
//--------------------------------------------------------------------------------
button9 = gtk_button_new_with_label("");
button10 = gtk_button_new_with_label("");
button11 = gtk_button_new_with_label("");
button12= gtk_button_new_with_label("");

gtk_widget_set_size_request(button9,25,25);
gtk_widget_set_size_request(button10,25,25);
gtk_widget_set_size_request(button11,25,25);
gtk_widget_set_size_request(button10,25,25);

gtk_container_add (GTK_CONTAINER(hbox3),button9);
gtk_container_add (GTK_CONTAINER(hbox3),button10);
gtk_container_add (GTK_CONTAINER(hbox3),button11);
gtk_container_add (GTK_CONTAINER(hbox3),button12);

g_signal_connect(G_OBJECT(button9),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button10),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button11),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button12),"clicked", G_CALLBACK(button_Click),NULL);
//--------------------------------------------------------------------------------
button13 = gtk_button_new_with_label("");
button14 = gtk_button_new_with_label("");
button15 = gtk_button_new_with_label("");
button16 = gtk_button_new_with_label("");

gtk_widget_set_size_request(button13,25,25);
gtk_widget_set_size_request(button14,25,25);
gtk_widget_set_size_request(button15,25,25);
gtk_widget_set_size_request(button16,25,25);

gtk_container_add (GTK_CONTAINER(hbox4),button13);
gtk_container_add (GTK_CONTAINER(hbox4),button14);
gtk_container_add (GTK_CONTAINER(hbox4),button15);
gtk_container_add (GTK_CONTAINER(hbox4),button16);

g_signal_connect(G_OBJECT(button13),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button14),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button15),"clicked", G_CALLBACK(button_Click),NULL);
g_signal_connect(G_OBJECT(button16),"clicked", G_CALLBACK(button_Click),NULL);
//--------------------------------------------------------------------------------
gtk_container_add(GTK_CONTAINER(vbox),hbox1);
gtk_container_add(GTK_CONTAINER(vbox),hbox2);
gtk_container_add(GTK_CONTAINER(vbox),hbox3);
gtk_container_add(GTK_CONTAINER(vbox),hbox4);

gtk_widget_set_size_request(label2,200,50);
gtk_container_add (GTK_CONTAINER(vbox),label2);
gtk_container_add(GTK_CONTAINER(window),vbox);

gtk_widget_show_all(window); //윈도우 창 띄우기
sprintf(buf,"%d", num1);
gtk_main(); // 이벤트가 있을 때까지 기다림
}

