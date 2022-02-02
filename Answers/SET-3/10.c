/*
10.	Write a program to display the first 10 terms of series 1, 5, 9, ...
*/

#include<stdio.h>
 

void main()
{
	int first=1,n=0;
	
	printf("The first 10 terms of the series :\n");
	
	while(n++<10)
	{
		printf("%2d. %3d\n",n,first);
		first+=4;
	}
	
	 
}