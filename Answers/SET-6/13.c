/*
13. Program to read elements of a matrix 
    and display it in matrix form using pointer to array.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
    int i,j,r,c;
    float (*matrix)[5];

    printf("Enter order of matrix : ");
    scanf("%d %d",&r,&c);

    matrix=(float (*)[5])malloc(r*c*sizeof(float));

    if(matrix==NULL)
    {
        printf("Memory Allocation Failed !");

         
        exit(0);
    }

    printf("\nEnter the elements of %d x %d matrix :\n",r,c);

    for(i=0;i<r;i++)
    {
        printf("\n");

        for(j=0;j<c;j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",*(matrix+i)+j);
        }
    }

    printf("\nThe Matrix is :\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%-5g",*(*(matrix+i)+j));
        
        printf("\n");
    }

     
    
    free(matrix);
}