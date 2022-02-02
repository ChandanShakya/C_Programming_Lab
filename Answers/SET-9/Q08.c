/*
8.	Write a program to demonstrate the use of getpixel() and putpixel().
*/

#include<stdio.h>
 
#include<graphics.h>

void main()
{
	int gd,gm,cbg,i;

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
	
	cbg=getpixel(10,10);

	printf("Background = %d",cbg);

	for(i=0;i<100;i++)
		putpixel(i+10,i+10,BLACK);
	
	 
	closegraph();
}