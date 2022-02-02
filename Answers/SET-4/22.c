/*
22.	Program to find sum of diagonal elements of a square matrix
*/

#include<stdio.h>
 

void main()
{
	int m[10][10],i,j,r,c,sum1=0,sum2=0;
	
	printf("Enter the dimension of the square matrix [MAX = 10x10] : ");
	scanf("%d %d",&r,&c);
	
	if(r!=c)
	{
		printf("Matrix %d x %d is not square",r,c);
		 
		return;
	}
	
	printf("\nEnter the elements of %d x %d matrix :\n",r,c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("element[%d][%d] : ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	
	printf("\nOriginal Matrix :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%3d",m[i][j]);

		printf("\n");
	}

	j=c-1;
	
	for(i=0;i<r;i++)
	{
		sum1+=m[i][i];
		sum2+=m[i][j];
		j--;
	}
	
	printf("\nThe sum of elements of the main diagonal is : %d\n",sum1);
	printf("The sum of elements of the minor diagonal is : %d",sum2);
	
	 
}