/*
25.	Program to generate the pyramid of numbers as
    1
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
 

void main()
{
	int i,j,k,l;
	
	for(i=0;i<5;i++)
	{
		for(j=5;j>i+1;j--)
			printf(" ");
		
		for(k=0;k<i+1;k++)
			printf("%d",k+1);
		
		for(l=i;l>=1;l--)
			printf("%d",l);
	
		printf("\n");
	}
	
	 
}