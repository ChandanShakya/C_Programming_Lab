/*
19.	Program to multiply matrices A and B
	A = 1 5 2	B = -1 1
	    3 4 6        2 3
	                 5 2
*/

#include<stdio.h>
 

void main()
{
	int A[2][3]={1,5,2,3,4,6},B[3][2]={-1,1,2,3,5,2},M[2][2],i,j,k;
	
	printf("The Multiplied matrix is :\n");	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			M[i][j]=0;
			
			for(k=0;k<3;k++)
				M[i][j]+=A[i][k]*B[k][j];
		
		}
		for(j=0;j<2;j++)
			printf("%-6d",M[i][j]);
		
		printf("\n");
	}
	
	 
}