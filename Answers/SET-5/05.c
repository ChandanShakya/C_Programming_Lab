/*
5. Program to find factorial of number using function.
*/

#include<stdio.h>
 

int fact(int);

void main()
{
    int n,facto;

    printf("Enter a positive integer to find factorial : ");
    scanf("%d",&n);

    if(n<0)
        printf("Factorial of %d is not valid.",n);
    
    else
    {
    facto=fact(n);
    printf("\nThe Factorial of %d is %d.",n,facto);
    }
    
     
}

int fact(int n)
{
    int fact=1;
    
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    
    return fact;
}