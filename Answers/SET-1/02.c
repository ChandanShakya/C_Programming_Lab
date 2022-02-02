/*
2.	Write a C program to find area and perimeter of a rectangle.
*/

#include<stdio.h>
 

int main()
{
	float l,b,area,perimeter;
	
	printf("Enter the length of the rectangle\t: ");
	scanf("%f",&l);
	printf("Enter the breadth of the rectangle\t: "); 
	scanf("%f",&b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	printf("\nAREA\t\t: %.2f",area);
	printf("\nPERIMETER\t: %.2f",perimeter);
	
	 
	return 0;
}