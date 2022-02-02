/*
31.	b.	Program to find the sum of following series:
		11+22+33+.. upto nth terms
*/

#include<stdio.h>
 

void main()
{
	int i,n,term,sum=0;
	
	printf("Upto which term ?: ");
	scanf("%d",&n);
	
	printf("The series is :\n");
	
	for(i=0;i<n;i++)
	{
		term=11*(i+1);
		
		printf("%d ",term);
		
		if(i<n-1)
			printf("+ ");
		
		sum+=term;
	}

	printf("\nThe sum is : %d",sum);

	 
}