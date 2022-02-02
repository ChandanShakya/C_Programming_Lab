/*
6.	Program to find the largest and the smallest from
	the set of n numbers entered by the users
*/

#include<stdio.h>
 

void main()
{
	int i,n;
	float s,l,num[20];
	
	printf("How many numbers to read [Max = 20]? : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&num[i]);
	}
	
	s=num[0];
	l=num[0];
	
	for(i=1;i<n;i++)
	{
		if(l<num[i])
			l=num[i];
		
		if(s>num[i])
			s=num[i];
	}
	
	printf("The largest among given %d numbers is %g\n",n,l);
	printf("The smallest among given %d numbers is %g",n,s);
	
	 
}