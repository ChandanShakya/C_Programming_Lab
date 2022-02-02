/*
22. Program to find HCF of two numbers using recursive definition.
*/

#include<stdio.h>
 
#include<stdlib.h>

int HCF(int n1,int n2);

void main()
{
    int n1,n2,hcf;

    printf("Enter two integers to find HCF of : ");
    scanf("%d %d",&n1,&n2);

    hcf=HCF(n1,n2);

    printf("The HCF between %d & %d is %d",n1,n2,hcf);

     
}

int HCF(int n1,int n2)
{
    n1=abs(n1);
    n2=abs(n2);
    if(n1==0||n2==0)
    {
        printf("Undefined Operation with 0");
         
        exit(0);
    }

    while(n1!=n2)
    {
        if(n1>n2)
            return HCF(n1-n2,n2);
        else
            return HCF(n1,n2-n1);
    }
 
    return n1;
}