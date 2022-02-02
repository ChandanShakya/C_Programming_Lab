/*
12.	Write a program to demonstrate the use of setlinestyle() and linerel().
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

	moveto(100,150);
	setlinestyle(DASHED_LINE,0,NORM_WIDTH);
	linerel(190,150);
	
	 
	closegraph();
}
