/*
10.	Write a program to demonstrate 
	the use of outtext(), outtextxy() and settextstyle().
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

	setcolor(BLUE);
	
	moveto(100,50);
	outtext("This is a line.");
	
	outtextxy(100,100,"This is also a line.");
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
	outtextxy(100,200,"This is a big line.");
	
	settextstyle(GOTHIC_FONT,VERT_DIR,2);
	outtextxy(50,50,"This is gothic vertical text.");
	
	 
	closegraph();
}