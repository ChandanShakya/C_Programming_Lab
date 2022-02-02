/*
9.	Write a program to demonstrate the use of drawpoly() and fillpoly().
*/

#include<stdio.h>
 
#include<graphics.h>

void main()
{
	int gd,gm,i;
	int points[]={100,100,150,70,200,100,200,150,150,180,100,150,100,100};
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
	
	fillpoly(7,points);
	
	for(i=0;i<14;i++)
		points[i]+=100;
		
	drawpoly(7,points);
	
	 
	closegraph();
}