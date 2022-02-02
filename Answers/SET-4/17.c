/*
17.	Program to add two matrices by asking matrix order from user.
*/

#include<stdio.h>
 

void main()
{
	int m[10][10],n[10][10],i,j,r1,c1,r2,c2;
	
	printf("Enter the dimension of first matrix [MAX = 10x10] : ");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter the dimension of second matrix [MAX = 10x10] : ");
	scanf("%d %d",&r2,&c2);
	
	if(r1==r2 && c1==c2)
	{
		printf("\nEnter the elements of first %d x %d matrix :\n",r1,c1);
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("element[%d][%d] : ",i+1,j+1);
				scanf("%d",&m[i][j]);
			}
		}
		
		printf("\nEnter the elements of second %d x %d matrix :\n",r2,c2);
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("element[%d][%d] : ",i+1,j+1);
				scanf("%d",&n[i][j]);
			}
		}
		
		printf("\nFirst Matrix : \n");
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%-6d",m[i][j]);
			
			printf("\n");
		}
		
		printf("\nSecond Matrix : \n");
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%-6d",n[i][j]);
			
			printf("\n");
		}
		
		printf("\nMatrix Addition : \n");
		
		for(i=0;i<r1;i++)
		{	
			for(j=0;j<c1;j++)
				printf("%-6d",m[i][j]+n[i][j]);

			printf("\n");
		}
	}
	else
		printf("Matrix addition not compatible.");
	
	 
}