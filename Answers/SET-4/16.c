/*
16.	Write a program to read salary of N employees and 
	count the numbers of employee receiving salaries
	between 40000 to 60000.
*/

#include<stdio.h>
 

void main()
{
	int n,i,count=0;
	float s[30];
	
	printf("Enter how many employees ? [MAX = 30] : ");
	scanf("%d",&n);
	
	printf("Enter the salaries of %d employees\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%f",&s[i]);
		
		if(s[i]>40000&&s[i]<60000)
			count++;
	}
	
	printf("%d employees had salary between 40000 and 60000.",count);
	
	 
}