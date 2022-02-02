/*
14.	Write a menu base program  for
	1.	Area of rectangle
	2.	Perimeter of rectangle
	3.	exit
*/

#include<stdio.h>
 

void main()
{
	float l,b;
	int option;
	
	printf("Menu Based Program\n");
	printf("1. Area of rectangle\n");
	printf("2. Perimeter of rectangle\n");
	printf("3. Exit\n");
	printf("\nChoose option : ");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("\nEnter length  : ");
			scanf("%f",&l);
			printf("Enter breadth : ");
			scanf("%f",&b);
			printf("\nAREA : %.2f",l*b);
			break;
		case 2:
			printf("\nEnter length  : ");
			scanf("%f",&l);
			printf("Enter breadth : ");
			scanf("%f",&b);
			printf("\nPERIMETER : %.2f",2*(l+b));
			break;
		case 3:
			printf("Exit");
			break;
		default:
			printf("Invalid Input.");
	}

	 
}