/*
12.	Write a program to read N numbers in an array 
	and find the sum of odd numbers.
*/

#include<stdio.h>
 

void main()
{
	int m[20],o[20],n,i,sum=0,count=0;
	
	printf("How many numbers to read ? [Max = 20] : ");
	scanf("%d",&n);
	
	printf("Enter the %d numbers :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%d",&m[i]);
	}
	
	printf("Sum of odd numbers :\n");
	
	for(i=0;i<n;i++)
	{
		if(m[i]%2!=0)
		{
			o[count++]=m[i];
			sum+=m[i];
		}
	}

	for(i=0;i<count;i++)
	{
		printf("%d ",o[i]);
		if(i<count-1)
			printf("+ ");
	}
	
	printf("= %d",sum);
	
	 
}