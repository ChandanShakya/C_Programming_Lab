/*
10.	Write a program to search an item in an array. 
	(Using binary search technique)
*/

#include<stdio.h>
 

void main()
{
	float array[20],search;
	int i,j,n,temp,L=0,R,mid,count=0;
	
	printf("Enter how many elements [MAX = 20] : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&array[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	printf("\nSorted\n");

	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		printf("%g\n",array[i]);
	}

	printf("Enter the number to search : ");
	scanf("%f",&search);

	R=n;
	while(L<=R)
	{
		mid=(L+R)/2;
		
		if(search==array[mid])
		{
			count++;
			break;
		}
		else if(search<array[mid])
			R=mid-1;
		else
			L=mid+1;
	}
	
	if(count==0)
		printf("%g was not found.",search);
	else
		printf("%g was found at index : %d",search,mid+1);
	
	 
}