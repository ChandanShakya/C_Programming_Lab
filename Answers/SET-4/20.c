/*
20. Program to multiply two matrices by asking size from user.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
    int i,j,k,r1,c1,r2,c2;
    float m1[20][20],m2[20][20],mul[20][20];
    
    printf("Enter the order of the first matrix : ");
    scanf("%d %d",&r1,&c1);
    
    printf("Enter the order of the second matrix : ");
    scanf("%d %d",&r2,&c2);
    
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible.");
         
        exit(0);
    }
    
    printf("\nEnter the elements of the first matrix : \n");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%f",&m1[i][j]);
        }
    
        printf("\n");
    }
    
    printf("\nEnter the elements of the second matrix : \n");
    
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Element [%d][%d] : ",i+1,j+1);
            scanf("%f",&m2[i][j]);
        }
    
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
    
            for(k=0;k<c1;k++)
                mul[i][j]+=m1[i][k]*m2[k][j];
            
        }
    }
    
    printf("\nThe Elements of the first matrix are :\n");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%10g",m1[i][j]);
        
        printf("\n");
    }
    
    printf("\nThe Elements of the second matrix are :\n");
    
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%10g",m2[i][j]);
        
        printf("\n");
    }
    
    printf("\nThe Multiplied matrix is :\n");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%10g",mul[i][j]);
        
        printf("\n");
    }
     
}