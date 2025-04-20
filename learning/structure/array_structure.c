#include<stdio.h>
struct student
{
	float cgpa;
	char name[10];
};
int main()
{
	int i;
	float avg=0;
	struct student st[5];
	printf("Enter record of 5 student\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Cgpa:");
		scanf("%f",&st[i].cgpa);
		printf("Enter Name:");
		scanf("%s",&st[i].name);
	}
	for(i=0;i<5;i++)
	{
		avg+=st[i].cgpa;
		avg=avg/5.0;
	}
	printf("Average cgpa %f:\n",avg);
	
}
