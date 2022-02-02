/*
19. Program to find factorial of a number using recursion
*/

#include<stdio.h>
 

long factorial(int num);

void main()
{
    long num,fact;

    printf("Enter positive integer to find factorial of : ");
    scanf("%ld",&num);

    if(num<0)
    {
        printf("Invalid Input.");
        return;
    }
    fact=factorial(num);

    printf("Factorial of %ld is %ld",num,fact);

     
}

long factorial(int num)
{
    if(num==0)
        return 1;
    else
        return (num*factorial(num-1));
}