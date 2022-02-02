/*
5.  Program to find HCF of two number using function.
*/

#include<stdio.h>
 
#include<stdlib.h>

int HCF(int,int);

void main()
{
    int n1,n2,hcf;
   
    printf("Enter the first number  : ");
    scanf("%d",&n1);
   
    printf("Enter the second number : ");
    scanf("%d",&n2);
   
    hcf=HCF(n1,n2);
   
    printf("The HCF of %d and %d is %d.",n1,n2,hcf);
   
     
}

int HCF(int n1,int n2)
{
    int i,hcf;
    n1=abs(n1);
    n2=abs(n2);
    if(n1==0||n2==0)
    {
        printf("Undefined operation with 0");
         
        exit(0);
    }
    for(i=1;i<=n1||i<=n2;i++)
        if(n1%i==0 && n2%i==0)
            hcf=i;
  
    return hcf;
}