/*
24.	Design the layout of chess board using nested loop.
	[hint use ASCII 219 for white and 255 for black square box]
*/

#include<stdio.h>
 

void main()
{
	int i,j,k,check=0;
	
	for(i=0;i<8;i++)
	{		
		for(j=0;j<8;j++)
		{
			if(check%2==0)
			{
				printf("%c%c",219,219);
				check++;
			}
			else
			{
				printf("%c%c",255,255);
				check++;
			}
		}
		
		check++;
		
		printf("\n");
	}
	
	 
}