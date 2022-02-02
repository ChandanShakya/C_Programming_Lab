/*
	Write a program to read N numbers and sort them in ascending order.
	(Using bubble sort)
*/

#include<stdio.h>
 

void main()
{
	int n,i,j;
	float num[20],temp;
	
	printf("How many numbers to read [Max = 20]? : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&num[i]);
	}
	
	printf("The %d numbers in ascending order :\n",n);
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;	
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d : %g\n",i+1,num[i]);

	 
}