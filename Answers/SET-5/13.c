/*
13  Write a program to display triangle of asterisk of N lines 
    using function.
        *
       ***
      *****
     *******
    *********
*/

#include<stdio.h>
 

void triangle(int);

void main()
{
    int num;

    printf("Enter how many lined triangle to display? : ");
    scanf("%d",&num);

    triangle(num);

     
}

void triangle(int num)
{
    int i,j;

    for(i=0;i<num;i++)
    {
        for(j=num-i;j>0;j--)
            printf(" ");

        for(j=0;j<(2*i+1);j++)
            printf("*");

        printf("\n");
    }
}