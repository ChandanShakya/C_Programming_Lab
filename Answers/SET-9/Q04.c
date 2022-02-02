/*
4.	Write a program to draw a circle.
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
	
	setbkcolor(8);
	
	circle(150,150,50);
	
	 
	closegraph();
}