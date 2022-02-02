/*
2.	Write a program to demonstrate the use of functions 
	: setcolor() and setbkcolor().
*/

#include<stdio.h>
 
#include<graphics.h>

void main()
{
	int gd,gm,i;

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
	
	for(i=0;i<100;i++)
	{
		setcolor(BLUE);
		line(200,40+(i*2),250,70+(i*2));
		
		setcolor(BLACK);
		line(200+(i/2),40-(i/4),250+(i/2),70-(i/4));
		
		setcolor(RED);
		line(250,70+(i*2),300,44+(i*2));
		
		delay(50);
	}
	
	 
	closegraph();
}