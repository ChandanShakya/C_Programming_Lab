/*
18. Program to multiply two matrix using function and DMM.

Mistake
*/

#include<stdio.h>
 
#include<stdlib.h>

void order(int *r1,int *c1,int *r2,int *c2);
void read(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int r2,int c2);
void multiply(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int c2);
void display(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int r2,int c2);

void main()
{
    int i,j,r1,c1,r2,c2;
    float (*a)[5],(*b)[5],(*mul)[5];

    order(&r1,&c1,&r2,&c2);

    a=(float (*)[5])malloc(r1*c1*sizeof(float));
    b=(float (*)[5])malloc(r2*c2*sizeof(float));
    mul=(float (*)[5])malloc(r1*c2*sizeof(float));

    read(a,b,mul,r1,c1,r2,c2);
    multiply(a,b,mul,r1,c1,c2);
    display(a,b,mul,r1,c1,r2,c2);

     
    free(a);
    free(b);
    free(mul);
}

void order(int *r1,int *c1,int *r2,int *c2)
{
    printf("Enter the order of first matrix : ");
    scanf("%d %d",r1,c1);

    printf("Enter the order of second matrix : ");
    scanf("%d %d",r2,c2);

    if(*c1!=*r2)
    {
        printf("Matrix multiplication not possible.");
         
        exit(0);
    }
}

void read(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int r2,int c2)
{
    int i,j;

    printf("\nEnter the elements first array :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",*(a+i)+j);
        }
    }

    printf("\nEnter the elements second array :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",*(b+i)+j);
        }
    }
}

void multiply(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int c2)
{
    int i,j,k;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                (*(*(mul+i)+j))+=(*(*(a+i)+k))*(*(*(b+k)+j));
            }
        }
    }
}

void display(float (*a)[5],float (*b)[5],float (*mul)[5],int r1,int c1,int r2,int c2)
{
    int i,j;

    printf("\nElement of first matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%-4g",*(*(a+i)+j));
        }
        printf("\n");
    }

    printf("\nElement of second matrix is :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%-4g",*(*(b+i)+j));
        }
        printf("\n");
    }

    printf("\nElement of multiplication matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%-4g",*(*(mul+i)+j));
        }
        printf("\n");
    }
}