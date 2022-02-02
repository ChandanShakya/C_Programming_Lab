/*
12.	Write a program to demonstrate the use of arithmetic operation on integers. 
	(Find sum, difference, product, quotient, and remainder).
*/

#include<stdio.h>
 

int main()
{
	int a,b;
	
	printf("Enter The First Number\t(A): ");
	scanf("%d",&a);
	printf("Enter The Second Number\t(B): ");
	scanf("%d",&b);
	
	printf("\nAddition\n");
	printf("%d+%d = %d\n\n",a,b,a+b);
	
	printf("Subtraction\n");
	printf("%d-%d = %d\n",a,b,a-b);
	printf("%d-%d = %d\n\n",b,a,b-a);
	
	printf("Multiplication\n");
	printf("%d*%d = %d\n\n",a,b,a*b);
	
	printf("Quotient\n");
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d/%d=%d\n\n",b,a,b/a);
	
	printf("Remainder\n");
	printf("%d%%%d = %d\n",a,b,a%b);
	printf("%d%%%d = %d",b,a,b%a);
	
	 
	return 0;
}