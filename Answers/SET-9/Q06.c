/*
6.	Write a program to draw an arc.
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

	arc(100,100,0,180,50);
	
	 
	closegraph();
}