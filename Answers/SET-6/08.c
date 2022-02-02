/*
8.  Program to demonstrate the use of Pointer and Array.
*/

#include<stdio.h>
 

void main()
{
    int a[5],i;

    printf("Enter five integers : ");

    for(i=0;i<5;i++)
        scanf("%d",a+i);
    
    printf("Numbers you entered are : ");
  
    for(i=0;i<5;i++)
        printf("\t%d",*(a+i));
    
     
}