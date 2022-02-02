/*
8.	Write a program to find area and circumference of circle using symbolic constant.
*/

#include<stdio.h>
 
#define PI 3.14

int main()
{
	float r,area,circumference;

	printf("Enter the radius of circle : ");
	scanf("%f",&r);

	area=PI*r*r;
	circumference=2*PI*r;

	printf("\nAREA\t\t: %f\n",area);
	printf("CIRCUMFERENCE\t: %f",circumference);
	
	 
	return 0;
}