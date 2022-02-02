/*
16.	Program to read n different numbers and arrange them 
	using pointer and Dynamic Memory Management
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
	int n,i,j,temp,*ptr;

	printf("How many numbers to arrange? : ");
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

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}

	printf("The numbers arranged are : \n");

	for(i=0;i<n;i++)
		printf("%d\n",*(ptr+i));
	
	 
	
	free(ptr);
}