/*
8.  Program to check whether a number is armstrong or not.
*/

#include<stdio.h>
 

int arm(int);

void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(arm(num)==0)
        printf("%d is not armstrong number.",num);
    else
        printf("%d is armstrong number.",num);

     
}

int arm(int num)
{
    int arms=0,rem,copy;

    copy=num;

    while(num!=0)
    {
        rem=num%10;
        arms+=rem*rem*rem;
        num=num/10;
    }

    if (arms==copy)
        return 1;
    else
        return 0;
}