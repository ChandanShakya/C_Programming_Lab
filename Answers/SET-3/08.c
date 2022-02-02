/*
8.	Write a program to find the sum of square of first 'n' natural numbers 
	(using all loops)
*/

#include<stdio.h>
 

void main()
{
	int n,sum=0,count=0;
	
	printf("Enter how many numbers to find sum of square? : ");
	scanf("%d",&n);
	
	//Using while loop
	while(count++<n)
	{
		sum+=(count*count);
	}
	printf("\nUsing while loop\nThe sum of square is %d\n",sum);
	
	//Using do while loop
	count=1,sum=0;
	do{
		sum+=(count*count);
	}while(++count<=n);
	printf("\nUsing do-while loop\nThe sum of square is %d\n",sum);
	
	//Using for loop
	sum=0;
	for(count=1;count<=n;count++)
	{
		sum+=(count*count);
	}
	printf("\nUsing for loop\nThe sum of square is %d",sum);
	
	 
}