/*
2.	Program to find surface area of box using function.
*/

#include<stdio.h>
 

float surface(float,float,float);

void main()
{
	float l,b,h,sa;

	printf("Enter the length  : ");
	scanf("%f",&l);

	printf("Enter the breadth : ");
	scanf("%f",&b);

	printf("Enter the height  : ");
	scanf("%f",&h);

	sa=surface(l,b,h);
	printf("\nThe surface area is : %.2f",sa);

	 
}

float surface(float l,float b,float h)
{
	float sa;

	sa=2*(l*b+l*h+h*b);

	return sa;
}