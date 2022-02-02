/*
7.	Write a program to find the smallest among four given numbers.
*/

#include<stdio.h>
 

void main()
{
	int a,b,c,d,small;
		
	printf("Enter first number  : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number  : ");
	scanf("%d",&c);
	printf("Enter fourth number : ");
	scanf("%d",&d);
	
	if(a<=b&&a<=c&&a<=d)
		small=a;
	else if(b<=a&&b<=c&&b<=d)
		small=b;
	else if(c<=a&&c<=b&&c<=d)
		small=c;
	else
		small=d;
		
	printf("\n%d is the smallest among ( %d %d %d %d )",small,a,b,c,d);
	
	 
}