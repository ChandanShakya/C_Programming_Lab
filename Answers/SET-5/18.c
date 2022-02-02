
/*
18. Program to multiply two matrices using function.
*/

#include<stdio.h>
 
#include<stdlib.h>

void read(float m1[20][20],float m2[20][20],int o[4]);
void multiply(float m1[20][20],float m2[20][20],float mul[20][20],int o[4]);
void display(float m1[20][20],float m2[20][20],float mul[20][20],int o[4]);

void main()
{
    int o[4];
    float m1[20][20],m2[20][20],mul[20][20];

    read(m1,m2,o);
    multiply(m1,m2,mul,o);
    display(m1,m2,mul,o);
    
     
}

void read(float m1[20][20],float m2[20][20],int o[4])
{
    int i,j;

    printf("Enter the order of first matrix : ");
    scanf("%d %d",&o[0],&o[1]);

    printf("Enter the order of second matrix : ");
    scanf("%d %d",&o[2],&o[3]);

    if(o[1]!=o[2])
    {
        printf("Matrix multiplication is not possible.");

         
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

void multiply(float m1[20][20],float m2[20][20],float mul[20][20],int o[4])
{
    int i,j,k;

    for(i=0;i<o[0];i++)
    {
        for(j=0;j<o[3];j++)
        {
            mul[i][j]=0;
            
            for(k=0;k<o[1];k++)
                mul[i][j]+=m1[i][k]*m2[k][j];
        }
    }
}

void display(float m1[20][20],float m2[20][20],float mul[20][20],int o[4])
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
  
    printf("\nResult of the matrix multiplication is : \n");
  
    for(i=0;i<o[0];i++)
    {
        for(j=0;j<o[3];j++)
            printf("%10g",mul[i][j]);
        
        printf("\n");
    }
}