/*
14.  Program to read n numbers and display them in monitor using DMM.
*/

#include<stdio.h>
 
#include<stdlib.h>

void main()
{
    int n,i,*a;

    printf("How many numbers? : ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));

    if(a==NULL)
    {
        printf("Memory Allocation Failed !");

         
        exit(0);
    }

    printf("Enter %d numbers :\n",n);

    for(i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        scanf("%d",a+i);
    }

    printf("Numbers you entered are :");
    
    for(i=0;i<n;i++)
        printf("\t%d",*(a+i));
    
     
    
    free(a);
}