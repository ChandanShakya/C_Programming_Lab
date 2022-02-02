/*
6.	Write a program to read three numbers and find the median number.
*/

#include<stdio.h>
 

void main()
{
	int a,b,c,mid;
	
	printf("Enter first number  : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number  : ");
	scanf("%d",&c);
	
	if(a>=b&&a<=c||a>=c&&a<=b)
		mid=a;
	else if(b>=a&&b<=c||b>=c&&b<=a)
		mid=b;
	else
		mid=c;
	
	printf("\n%d is the median among ( %d %d %d )",mid,a,b,c);
	
	 
}