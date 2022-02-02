/*
3.	Write a program to compute p to the power b using library function.
	Your program should read value of b and p from user.
*/

#include<stdio.h>
#include<math.h>
 

int main()
{
	int p,b,power;

	printf("Enter base number : ");
	scanf("%d",&b);
	printf("Enter power value : ");
	scanf("%d",&p);

	power=pow(b,p);

	printf("\n%d^%d\t: %d",b,p,power);

	 
	return 0;
}