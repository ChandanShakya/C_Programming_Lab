/*
19. Program to read the name of n students 
    and arrange them in alphabetical order using DMM.

*/

#include<stdio.h>
 
#include<string.h>
#include<stdlib.h>

void main()
{
    char *name[20],*tp;
    int n,i,j;

    printf("How many students? : ");
    scanf("%d",&n);

    fflush(stdin);

    for(i=0;i<n;i++)
        name[i]=(char *)malloc(20*sizeof(char));
    
    printf("Enter name of %d students :\n",n);
    
    for(i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        gets(name[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                tp=name[i];
                name[i]=name[j];
                name[j]=tp;
            }
        }
    }
    
    printf("Arranged Name :\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d : %s\n",i+1,name[i]); 
        free(name[i]);
    }
    
     
}