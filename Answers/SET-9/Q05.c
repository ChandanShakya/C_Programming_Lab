/*
5.	Write a program to draw a rectangle.
*/

#include<stdio.h>
 
#include<graphics.h>

void main()
{
	int gd,gm;

	gd=DETECT;

	if(graphresult()!=grOk)
	{
		printf("Graphics driver not detected.");
		
		 
		return;
	}

	initgraph(&gd,&gm,"C:\\TC\\BGI");

	if(graphresult()!=grOk)
	{
		printf("Initialization unsuccessful.");
		
		 
		return;
	}

	setbkcolor(WHITE);
	
	setcolor(BLACK);

	rectangle(100,50,250,300);
	rectangle(300,100,400,200);
	
	 
	closegraph();
}