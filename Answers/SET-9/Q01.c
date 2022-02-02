/*
1.	Write a program to draw lines using 
	line(), moveto() and lineto().
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
	
	line(10,10,10,300);
	line(10,300,300,300);
	line(300,300,300,10);
	
	moveto(50,50);
	lineto(250,250);
	moveto(250,50);
	lineto(50,250);
	
	 
	closegraph();
}