/*
5.	Write a program to find surface area of a box.
	[S=2(lb+lh+bh)]
*/

#include<stdio.h>
 

int main()
{
	float l,b,h,sur;
	
	printf("Enter the length of the box\t: ");
	scanf("%f",&l);
	printf("Enter the breadth of the box\t: "); 
	scanf("%f",&b);
	printf("Enter the height of the box\t: "); 
	
	scanf("%f",&h);
	
	sur=2*(l*b+l*h+b*h);
	
	printf("\nSurface Area\t: %.2f",sur);

	 
	return 0;
}