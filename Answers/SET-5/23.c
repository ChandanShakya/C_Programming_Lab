/*
22. Program to generate first n terms of Fibonacci series 
    using recursive function to return Nth term of series.
*/

#include<stdio.h>
 
#include<stdlib.h>

int fib(int n1);

void main()
{
    int n1,f;

    printf("Which term of the fibonnaci series to find? : ");
    scanf("%d",&n1);

    if(n1<=0)
    {
        printf("Term cannot be less than 1.");
         
        exit(0);
    }
    
    f=fib(n1-1);

    printf("The %dth term of fibonacci series is %d",n1,f);

     
}

int fib(int n1)
{
    if(n1==0||n1==1)
        return n1;
    else
        return fib(n1-1)+fib(n1-2);
}