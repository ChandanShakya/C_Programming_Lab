/*
5.	Program to read n numbers from the user
	and display the numbers, their sum and the average
*/

#include<stdio.h>
 

void main()
{
	int n,i;
	float num[20],average,sum=0;
	
	printf("How many numbers? [<=20] :");
	scanf("%d",&n);
	
	printf("Enter %d numbers : \n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&num[i]);
		
		sum+=num[i];
	}
	
	average=sum/n;
	
	printf("\nThe %d numbers you have entered are :\n",n);
	
	for(i=0;i<n;i++)
		printf("%d : %g\n",i+1,num[i]);
	
	printf("\nThe sum is %g",sum);
	printf("\nThe average is %g",average);
	 
}