/*
34.	Write a program to read name of N student and display in monitors.
*/

#include<stdio.h>
 

void main()
{
	int n,i,j;
	char c[20][30];
	
	printf("How many students [MAX = 20] : ");
	scanf("%d",&n);
	
	fflush(stdin);
	
	for(i=0;i<n;i++)
	{
		printf("%2d : ",i+1);
		gets(c[i]);
	}
	
	printf("The students are :\n");
	
	for(i=0;i<n;i++)
		printf("%2d : %s\n",i+1,c[i]);
	
	 
}