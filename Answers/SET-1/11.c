/*
11.	Write a program to reverse four digit numbers.
*/

#include<stdio.h>
 

int main()
{
	int num,o,t,h,th;
	
	printf("Enter the four digit number : ");
	scanf("%d",&num);
	
	o=num%10;
	num=num/10;
	t=num%10;
	num=num/10;
	h=num%10;
	th=num/10;
	
	printf("\nReverse of %d%d%d%d is %d%d%d%d",th,h,t,o,o,t,h,th);
	
	 
	return 0;
}