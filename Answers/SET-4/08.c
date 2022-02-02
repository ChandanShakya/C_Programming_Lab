/*
	Write a program to read N numbers and sort them in ascending order.
	(Using selection sort)
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
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d : %g\n",i+1,num[i]);

	 
}