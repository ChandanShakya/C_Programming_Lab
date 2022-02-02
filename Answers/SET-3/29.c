/*
29.	Program to generate the pyramid of numbers as
	123454321
 	 1234321
  	  12321
   	   121
   	    1
*/

#include<stdio.h>
 

void main()
{
	int i,j,k;
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<i+1;j++)
			printf(" ");
		
		for(j=0;j<5-i;j++)
			printf("%d",j+1);
		
		for(k=j-1;k>=1;k--)
			printf("%d",k);
		
		printf("\n");
	}
	
	 
}