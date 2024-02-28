#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct element
{
	char name[20];
	char sb[5];
	int atm;
	float atms;
	char block;
	char atc[20];
	char prop[250];
}p,q;
int rw,cl;
FILE *fp;
void add();
void explore();
void print();
void mainScreen();
void main()
{
	int a,i,n,y;
	char c,d;
	char date1[15],date2[15],string1[20];
	unsigned int tsz;
	mainscreen();
	label1:
		textcolor(15);
		gotoxy(22,15);
		textcolor(14);
		cprintf("\nEnter Corresponding No: ");
		gotoxy(22,19);
		textcolor(10);
		cprintf("\n1.Add New Element Information");
		gotoxy(22,21);
		cprintf("\n2.Explore");
		gotoxy(22,23);
		cprintf("\n3.Quit");
		gotoxy(22,25);
		cprintf("\n4.Delete The Record");
		gotoxy(22,27);
		cprintf("\n5.Exit");
		gotoxy(25,30);
		fflush(stdin);
		d = getch();
		switch(d)
		{
			case '1':
				add();
				break;
			case '2':
				explore();
				break;
			case '3':
				mainscreen();
				textcolor(14);
				gotoxy(30,24);
				cprintf("Saving Your Settings");
				gotoxy(30,28);
				getch();
				exit(1)
				break;
			default:
				mainscreen();
				textcolor(12+128);
				gotoxy(22,11);
				cprintf("Wrong Choice");
				gotoxy(22,13);
				textcolor(15);
				cprintf("Retype Choice");
				goto label1;
		}
		mainscreen();
		goto label1;
}
void mainscreen()
{
	int i,j;
	for(i=2,j=2;i<rw;j++)
	{
		if(j>15)
		  j=2;
		textcolor(j);
		gotoxy(i,2);
		cprintf("%c",'*');
		gotoxy(i,cl-1);
		cprintf("%c",'*');
		i++;
	}
	for(i=2,j=2;i<cl;i++,j++)
	{
		if(j>15)
		  j=2;
		textcolor(j);
		gotoxy(2,i);
		cprintf("%c",'*');
		gotoxy(rw-1,i);
		cprintf("%c",'*');
	}
	gotoxy(30,4);
	textcolor(3);
	cprintf("\nModern Periodic Table\n");
	gotoxy(37,6);
	textcolor(6);
	cprintf("Digital");
	gotoxy(35,7);
	textcolor(15);
	cprintf("-----------");
}
void add()
{
	char ch;
	
}


