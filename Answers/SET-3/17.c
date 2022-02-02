/*
17.	Write a program to display the first 'n' terms of Fibonacci series.
*/

#include<stdio.h>
 

void main()
{
	int range,i,first=0,second=1,third;
	
	printf("How many terms of Fibonacci series to display? : ");
	scanf("%d",&range);
	
	printf("The first \'%d\' terms of Fibonacci series are : \n",range);
	
	for(i=1;i<=range;i++)
	{
		printf("%d ",first);
		third=first+second;
		first=second;
		second=third;
	}
	
	 
}