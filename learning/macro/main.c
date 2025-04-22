#include<stdio.h>
#define DATE 	7
#define JOB 	SALARY
#define SALARY	25
#define SIZE	4
#define ARR	1,\
		2,\
		3,\
		4

int main()
{
	printf("Today date is %d-JULY-2025 \n",DATE);	
	
	printf("JOB SALARY %d \n",JOB);
	
	int array[SIZE]={ARR};
	
	for(int i=0;i<SIZE;i++)
	{
	printf("Array value are: Array[%d] is %d\n",i,array[i]);
	}
	return 0;
}
