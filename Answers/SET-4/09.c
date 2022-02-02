/*
9.	Write a program to search an item in an array. 
	(Using linear search technique)
*/

#include<stdio.h>
 

void main()
{
	float array[20],search;
	int i,n,count=0;
	
	printf("Enter how many elements [MAX = 20] : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&array[i]);
	}
	
	printf("Enter the number to search : ");
	scanf("%f",&search);
	
	for(i=0;i<n;i++)
	{
		if(array[i]==search)
		{
			count++;
			break;
		}
	}
	
	if(count==0)
		printf("%g was not found.",search);
	else
		printf("%g was found at index : %d",search,i+1);
	
	 
}