/*
20. Program to find sum of first N natural number using recursion.
*/

#include<stdio.h>
 

int sum(int N);

void main()
{
    int N,s;

    printf("How many natural numbers\' sum ? : ");
    scanf("%d",&N);

    s=sum(N);

    printf("The sum of first %d natural numbers is : %d",N,s);

     
}

int sum(int N)
{
    if(N==0)
        return 0;
    else
        return N+sum(N-1);
}