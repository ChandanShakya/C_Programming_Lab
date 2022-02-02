/*
7.  Program to demonstrate the Pointer Arithmetic & Operations.
*/

#include<stdio.h>
 

void main()
{
    int n[10],*p1,*p2;

    n[0]=10;
    p1=n;
    p2=p1;

    printf("Value of pointers are :\n");
    printf("*p1=%d and *p2=%d",*p1,*p2);

    n[1]=15;
    p1=p1+1;    //p1=p1+(1*sizeof(int));

    printf("\nValue of pointers are :\n");
    printf("*p1=%d and *p2=%d",*p1,*p2);
    printf("\n\n*p2-*p1 = %d\n",*p1-*p2);

    p1++;

    if(p1>p2)
        printf("%d > %d\n",p1,p2);
    else if(p1<p2)
        printf("%d < %d\n",p1,p2);
    else
        printf("Impossible");

    *(p1+1)=(*p1)*(*p2);

    printf("Value of n[3] = %d",n[3]);

     
}