/*
14.	Write a program to read age of 20 people 
	and count the numbers of child, teen, adult, young, and old.
	Given
	Age<13				- child
	Age>=13 and age<20	- TEEN
	Age>=20 and age<31	- Adult
	Age>=31 and age<55	- Young
	Age>=55				- Old
*/

#include<stdio.h>
 

void main()
{
	int age[20],i;
	int invalid=0,child=0,teen=0,adult=0,young=0,old=0;
	
	printf("Enter the age of 20 people [Age>0 and Age < 130]\n");
	
	for(i=0;i<20;i++)
	{
		printf("%d : ",i+1);
		scanf("%d",&age[i]);
	}
	
	for(i=0;i<20;i++)
	{
		if(age[i]<=0 || age[i]>130)
			invalid++;
		else if(age[i]<13)
			child++;
		else if(age[i]>=13&&age[i]<20)
			teen++;
		else if(age[i]>=20&&age[i]<31)
			adult++;
		else if(age[i]>=31&&age[i]<55)
			young++;
		else
			old++;
	}
	
	printf("\nNumber of Invalid : %d\n",invalid);
	printf("Number of Child : %d\n",child);
	printf("Number of Teen : %d\n",teen);
	printf("Number of Adult : %d\n",adult);
	printf("Number of Young : %d\n",young);
	printf("Number of Old : %d\n",old);
	
	 
}