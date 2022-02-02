/*
21. Program to find product of two natural numbers using recursion.
*/

#include<stdio.h>
 

int product(int n1,int n2);

void main()
{
    int n1,n2,mul;

    printf("Enter two natural numbers to multiply : ");
    scanf("%d %d",&n1,&n2);

    mul=product(n1,n2);

    printf("%d times %d = %d",n1,n2,mul);

     
}

int product(int n1,int n2)
{
    if(n2==0)
        return 0;
    else
        return n1+product(n1,--n2);
}