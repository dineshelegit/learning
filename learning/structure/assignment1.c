#include<stdio.h>
struct student
{
	int roll_number;
	char *name;
	float cgpa;
};
int main()
{
	struct student s1 = {1,"Dinesh",8.8},s2 = {2,"Kumar",9.9},s3 = {3,"Ruthra",9.8};
	
	printf("\tRoll_Number\tName\tCGPA\n");
	printf("\t%d\t\t%s\t%.2f\n",s1.roll_number,s1.name,s1.cgpa);
	printf("\t%d\t\t%s\t%.2f\n",s2.roll_number,s2.name,s2.cgpa);
	printf("\t%d\t\t%s\t%.2f\n",s3.roll_number,s3.name,s3.cgpa); 
}
