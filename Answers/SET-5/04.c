/*
4.  Program to find smallest of three number using function.
*/

#include<stdio.h>
 

float smallest(float,float,float);

void main()
{
    float n1,n2,n3,small;

    printf("Enter the First number : ");
    scanf("%f",&n1);

    printf("Enter the Second number : ");
    scanf("%f",&n2);

    printf("Enter the Third number : ");
    scanf("%f",&n3);

    small=smallest(n1,n2,n3);

    printf("Smallest among %g,%g and %g is %g.",n1,n2,n3,small);

     
}

float smallest(float n1,float n2, float n3)
{
    if(n1<n2&&n1<n3)
        return n1;
    else if(n2<n3)
        return n2;
    else
        return n3;
}