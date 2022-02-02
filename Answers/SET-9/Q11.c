/*
11.	Write a program to demonstrate the use of pieslice().
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

	setfillstyle(1,BLUE);
	pieslice(200,150,0,100,50);
	
	setfillstyle(1,WHITE);
	pieslice(200,150,100,200,50);
	
	setfillstyle(1,RED);
	pieslice(200,150,200,360,50);
	
	 
	closegraph();
}
