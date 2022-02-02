/*
15.	write a menu base program  to perform calculation,
	according to following choice:
	+	For addition
	-	For subtraction
	*	For multiplication
	/	For division
*/

#include<stdio.h>
 

void main()
{
	char option;
	float num1,num2;
	
	printf("Menu Based Program\n");
	printf("\'+\' for addition\n");
	printf("\'-\' for subtraction\n");
	printf("\'*\' for multiplication\n");
	printf("\'/\' for division\n");
	printf("\nChoose option : ");
	scanf("%c",&option);
	
	switch(option)
	{
		case '+':
			printf("\nEnter first number  : ");
			scanf("%f",&num1);
			printf("Enter second number : ");
			scanf("%f",&num2);
			printf("\n%g + %g = %g",num1,num2,num1+num2);
			break;
		case '-':
			printf("\nEnter first number  : ");
			scanf("%f",&num1);
			printf("Enter second number : ");
			scanf("%f",&num2);
			printf("\n%g - %g = %g",num1,num2,num1-num2);
			printf("\n%g - %g = %g",num2,num1,num2-num1);
			break;
		case '*':
			printf("\nEnter first number  : ");
			scanf("%f",&num1);
			printf("Enter second number : ");
			scanf("%f",&num2);
			printf("\n%g * %g = %g",num1,num2,num1*num2);
			break;
		case '/':
			printf("\nEnter first number  : ");
			scanf("%f",&num1);
			printf("Enter second number : ");
			scanf("%f",&num2);
			printf("\n%g / %g = %g",num1,num2,num1/num2);
			printf("\n%g / %g = %g",num2,num1,num2/num1);
			break;
		default:
			printf("Invalid Input.");
	}
		
	 
}