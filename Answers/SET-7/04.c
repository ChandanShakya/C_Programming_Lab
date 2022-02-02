/*
4.  Program to read roll, name, marks in C and Dl of 10 students and then display them in tabular format.
*/

#include<stdio.h>
 

struct student
{
    int roll;
    char name[30];
    float mc;
    float mdl;
};

void main()
{
    struct student s[10];
    int i;

    printf("Enter the details of 10 students.\n\n");

    for(i=0;i<10;i++)
    {
        printf("For Student %d :\n",i+1);

        printf("ROLL\t\t: ");
        scanf("%d",&s[i].roll);

        fflush(stdin);

        printf("NAME\t\t: ");
        gets(s[i].name);

        printf("Marks in C\t: ");
        scanf("%f",&s[i].mc);

        printf("Marks in DL\t: ");
        scanf("%f",&s[i].mdl);
    }

    printf("The details of 10 students are :\n");
    printf("Roll\tName\t\t\tMarks in C\tMarks in DL\n");

    for(i=0;i<10;i++)
    {
        printf("%d\t%s\t\t\t",s[i].roll,s[i].name);
        printf("%.2f\t\t%.2f\n",s[i].mc,s[i].mdl);
    }

     
}