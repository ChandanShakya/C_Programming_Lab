/*
17. Program to add two matrix using function and DMM.
*/

#include<stdio.h>
 
#include<stdlib.h>

void order(int *r1,int *c1,int *r2,int *c2);
void read(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1);
void sum(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1);
void display(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1);

void main()
{
    int i,j,r1,c1,r2,c2;
    float (*a)[5],(*b)[5],(*add)[5];

    order(&r1,&c1,&r2,&c2);

    a=(float (*)[5])malloc(r1*c1*sizeof(float));
    if(a==NULL)
    {
    	printf("Memory Allocation Failed!");
    	 
    	return;
	}
    b=(float (*)[5])malloc(r2*c2*sizeof(float));
    if(b==NULL)
    {
    	printf("Memory Allocation Failed!");
    	 
    	return;
	}
    add=(float (*)[5])malloc(r1*c1*sizeof(float));
    if(add==NULL)
    {
    	printf("Memory Allocation Failed!");
    	 
    	return;
	}

    read(a,b,add,r1,c1);
    sum(a,b,add,r1,c1);
    display(a,b,add,r1,c1);

     
    free(a);
    free(b);
    free(add);
}

void order(int *r1,int *c1,int *r2,int *c2)
{
    printf("Enter the order of first matrix : ");
    scanf("%d %d",r1,c1);

    printf("Enter the order of second matrix : ");
    scanf("%d %d",r2,c2);

    if(*r1!=*r2||*c1!=*c2)
    {
        printf("Matrix Addition not possible.");
         
        exit(0);
    }
}

void read(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1)
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
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element[%d][%d] : ",i+1,j+1);
            scanf("%f",*(b+i)+j);
        }
    }
    printf("%f",*(*(a+2)+2));
}

void sum(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1)
{
    int i,j;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            (*(*(add+i)+j))=(*(*(a+i)+j))+(*(*(b+i)+j));
        }
    }
}

void display(float (*a)[5],float (*b)[5],float (*add)[5],int r1,int c1)
{
    int i,j;
	printf("%d %d",r1,c1);
    printf("\nElement of first matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%7g",*(*(a+i)+j));
        }
        printf("\n");
    }

    printf("\nElement of second matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%7g",*(*(b+i)+j));
        }
        printf("\n");
    }

    printf("\nElement of sum matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%7g",*(*(add+i)+j));
        }
        printf("\n");
    }
}
