/*
7.	Write a program to draw an ellipse.
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

	ellipse(150,100,0,360,100,50);
	
	 
	closegraph();
}