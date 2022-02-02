/*
17. Program to add two matrices using user defined function.
    Use read() function to read element of matrix,
    display() function to display element of matrix in matrix form 
    and add() function to add matrices.
*/

#include<stdio.h>
 
#include<stdlib.h>

void read(float m1[20][20],float m2[20][20],int o[4]);
void add(float m1[20][20],float m2[20][20],float added[20][20],int o[4]);
void display(float m1[20][20],float m2[20][20],float added[20][20],int o[4]);

void main()
{
    int o[4];

    float m1[20][20],m2[20][20],added[20][20];

    read(m1,m2,o);
    add(m1,m2,added,o);
    display(m1,m2,added,o);

     
}

void read(float m1[20][20],float m2[20][20],int o[4])
{
    int i,j;

    printf("Enter the order of first matrix : ");
    scanf("%d %d",&o[0],&o[1]);

    printf("Enter the order of second matrix : ");
    scanf("%d %d",&o[2],&o[3]);

    if(o[0]!=o[2]||o[1]!=o[3])
    {
        printf("Matrix addition is not possible.");

         
        exit(0);
    }

    printf("\nEnter the elements of the first matrix :\n");

    for(i=0;i<o[0];i++)
    {
        for(j=0;j<o[1];j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",&m1[i][j]);
        }

        printf("\n");
    }

    printf("Enter the elements of the second matrix :\n");

    for(i=0;i<o[2];i++)
    {
        for(j=0;j<o[3];j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",&m2[i][j]);
        }

        printf("\n");
    }
}

void add(float m1[20][20],float m2[20][20],float added[20][20],int o[4])
{
    int i,j;
    for(i=0;i<o[0];i++)
        for(j=0;j<o[1];j++)
            added[i][j]=m1[i][j]+m2[i][j];
}

void display(float m1[20][20],float m2[20][20],float added[20][20],int o[4])
{
    int i,j;

    printf("\nThe elements of the first matrix are : \n");

    for(i=0;i<o[0];i++)
    {
        for(j=0;j<o[1];j++)
            printf("%10g",m1[i][j]);
        
        printf("\n");
    }
    
    printf("\nThe elements of the second matrix are : \n");
    
    for(i=0;i<o[2];i++)
    {
        for(j=0;j<o[3];j++)
            printf("%10g",m2[i][j]);
        
        printf("\n");
    }
   
    printf("\nResult of the matrix addition is : \n");
   
    for(i=0;i<o[0];i++)
    {
        for(j=0;j<o[1];j++)
            printf("%10g",added[i][j]);
        
        printf("\n");
    }
}