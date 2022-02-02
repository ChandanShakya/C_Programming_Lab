/*
28.	Program to generate the following figure:
	ABCDEEDCBA
	ABCD  DCBA
	ABC    CBA
	AB      BA
	A        A
*/

#include<stdio.h>
 

void main()
{
	int i,j;
	char c;
	
	for(i=0;i<5;i++)
	{
		c='A';
		
		for(j=5;j>i;j--)
			printf("%c",c++);
		
		for(j=1;j<2*i+1;j++)
			printf(" ");
		
		for(j=4;j>=i;j--)
			printf("%c",--c);

		printf("\n");
	}
	
	 
}