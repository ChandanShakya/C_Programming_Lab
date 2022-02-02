/*
6.  Design a structure : student with members roll, name, marks in 5 subjects, total marks, percentage and results.
Write a main program to read the details of n students and find total marks, results and percentage.
Display the result in tabular format.
Also display the detail of the student with the highest percentage. 
*/

#include<stdio.h>
 
#include<string.h>
#include<stdlib.h>

struct student
{
    int roll;
    char name[30];
    float marks[5];
    float total;
    float percentage;
    char result[5];
};

void main()
{
    struct student *s;
    int n,i,j,check,checkper=0;

    printf("How many students ? [MAX = 50] : ");
    scanf("%d",&n);

    s=(struct student *)malloc(n*sizeof(struct student));
    if(s==NULL)
    {
        printf("Memory Allocation Error ! ");
         
        exit(0);
    }

    printf("\nEnter the records of %d students :\n\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nFor Student %d :\n\n",i+1);

        printf("ROLL : ");
        scanf("%d",&(s+i)->roll);

        printf("NAME : ");
        fflush(stdin);
        gets((s+i)->name);

        for (j=0;j<5;j++)
        {
            printf("Marks of Subject %d : ",j+1);
            scanf("%f",&(s+i)->marks[j]);
        }     
    }

    for(i=0;i<n;i++)
    {
        (s+i)->total=0;
        check=0;
      
        for(j=0;j<5;j++)
        {
            if((s+i)->marks[j]<40)
            {
                check++;
            }
            (s+i)->total+=(s+i)->marks[j];
        }
      
        (s+i)->percentage=((s+i)->total)/5;
      
        if(check==0)
            strcpy(((s+i)->result),"PASS");
        else
          strcpy(((s+i)->result),"FAIL");
      
        if(!strcmp((s+i)->result,"PASS")&&(((s+i)->percentage)>((s+checkper)->percentage)))
            checkper=i;
    }
    
    printf("\nThe Details of %d students are :",n);
    printf("\nRoll\tName\t\t\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\t Percent  Result\n");
    
    for(i=0;i<n;i++)
    {
        printf("%-8d",(s+i)->roll);
        printf("%-24s",(s+i)->name);
        for (j=0;j<5;j++)
            printf("%-8.2f",(s+i)->marks[j]);
        printf("%-9.2f",(s+i)->total);
        printf("%-11.2f",(s+i)->percentage);
        printf("%-s\n",(s+i)->result);
    }
    
    printf("\n\nThe Detail of the student with highest marks :");
    printf("\nRoll\tName\t\t\tSub1\tSub2\tSub3\tSub4\tSub5\tTotal\t Percent  Result\n");
    
    printf("%-8d",(s+checkper)->roll);
    printf("%-24s",(s+checkper)->name);
    for (i=0;i<5;i++)
        printf("%-8.2f",(s+checkper)->marks[i]);
    printf("%-9.2f",(s+checkper)->total);
    printf("%-11.2f",(s+checkper)->percentage);
    printf("%-s\n",(s+checkper)->result);
    free(s);
     
}