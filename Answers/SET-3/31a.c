/*
31.	a.	Program to find the sum of following series
		1/(1^2)+1/(3^2)+1/(5^2)+...upto 10th terms
*/

#include<stdio.h>
 

void main()
{
	float sum=0;
	int i,n=1;
	
	printf("The series is : \n");
	
	for(i=0;i<10;i++)
	{
		sum+=1.0/(n*n);
		
		printf("1/%d ",n*n);
		
		if(i<9)
			printf("+ ");
		
		n+=2;
	}

	printf("\nThe sum is :\n%g",sum);

	 
}