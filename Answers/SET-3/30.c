/*
25.	Write a program to find the value of given base to the given power.
	[y=a^b]
*/

#include<stdio.h>
 

void main()
{
	float a,y;
	int i,b;
	
	printf("Enter base  : ");
	scanf("%f",&a);
	printf("Enter power : ");
	scanf("%d",&b);
	
	y=1;
	
	if(b<0)
	{
		b=-b;
		for(i=0;i<b;i++)
			y=y*a;

		y=1/y;
		
		printf("%g ^ -%d = %g",a,b,y);
	}
	else
	{
		for(i=0;i<b;i++)
			y=y*a;
	
		printf("%g ^ %d = %g",a,b,y);
	}
	
	 
}