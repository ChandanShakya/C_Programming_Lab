/*
15.	Write a program to read N numbers
	and display only prime numbers.
*/

#include<stdio.h>
 

void main()
{
	int m[20],n,i,j,prime;
	
	printf("How many numbers ? [MAX = 20] : ");
	scanf("%d",&n);
	
	printf("Enter %d numbers :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%d",&m[i]);
	}
	
	printf("Prime numbers are :\n");
	
	for(i=0;i<n;i++)
	{
		prime=0;
		
		if(m[i]<=1)
			continue;
		else
		{
			for(j=1;j<=m[i]/2;j++)
				if(m[i]%j==0)
					prime++;

			if(prime<2)
				printf("%3d",m[i]);
			
		}
	}

	 
}