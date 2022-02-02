/*
31.	c.	 Program to find sum of following series:
		1^1+2^2+3^3+4^4+...upto nth terms
*/

#include<stdio.h>
 

void main()
{
	int i,j,n,sum=0,term;
	
	printf("Upto which term ?: ");
	scanf("%d",&n);
	
	printf("The series is :\n");
	
	for(i=0;i<n;i++)
	{
		term=i+1;
		
		for(j=0;j<i;j++)
			term=term*(i+1);

		printf("%d ",term);
		
		if(i<n-1)
			printf("+ ");
		
		sum+=term;
	}
	
	printf("\nThe sum is : %d",sum);
	
	 
}