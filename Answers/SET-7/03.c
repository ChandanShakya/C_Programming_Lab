/*
3.  Program to copy a structure variables.
*/

#include<stdio.h>
 
struct copying
{
    int numbers;
    char words[12];
};

void main()
{
    struct copying c1={200,"Hello World"};
    struct copying c2;

    c2=c1;

    printf("Value in c1 : %d\t%s\n",c1.numbers,c1.words);
    printf("value in c2 : %d\t%s",c2.numbers,c2.words);

     
}