/*
9. Write a program to find the sum of digits of three digit number.
*/

#include<stdio.h>
 

int main()
{
	int num,copy,sum,ones,tens,hundreds;

	printf("Enter a three digit number : ");
	scanf("%d",&num);

	copy=num;

	ones=copy%10;
	copy=copy/10;
	tens=copy%10;
	hundreds=copy/10;
	
	sum=ones+tens+hundreds;
	
	printf("\nThe sum of digits of %d ( %d+%d+%d ) : %d",num,hundreds,tens,ones,sum);

	 
	return 0;
}