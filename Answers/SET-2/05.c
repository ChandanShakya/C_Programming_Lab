/*
5. Write a program to read three numbers and find the largest one.
*/

#include<stdio.h>
 

void main()
{
	int a,b,c,lar;
	
	printf("Enter first number  : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number  : ");
	scanf("%d",&c);
	
	if(a>=b)
	{
		if(a>=c)
			lar=a;
		else
			lar=c;
	}
	else
	{
		if(b>=c)
			lar=b;
		else
			lar=c;
	}
	
	printf("\n%d is the largest among ( %d %d %d )",lar,a,b,c);
	
	 
}