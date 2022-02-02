/*
15.	Program to read n different numbers and find the largest number 
	using pointer and Dynamic Memory Management
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
	int n,i,lar,*ptr;
	
	printf("How many numbers to read? : ");
	scanf("%d",&n);
	
	ptr=(int *)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Memory Allocation Failed.");
	
		 
		exit(0);
	}
	
	printf("Enter %d integers :\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d : ",i+1);
		scanf("%d",ptr+i);
	}
	
	lar=*ptr;
	
	for(i=1;i<n;i++)
		if(lar<*(ptr+i))
			lar=*(ptr+i);
	
	printf("The largest number is : %d",lar);
	
	 
	
	free(ptr);
}