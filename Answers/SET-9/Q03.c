/*
3.	Write a program to draw a triangle.
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

	line(100,200,200,200);
	line(150,150,100,200);
	line(150,150,200,200);
	
	 
	closegraph();
}