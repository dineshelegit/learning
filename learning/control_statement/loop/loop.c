#include<stdio.h>

int main()
{
	int count,i;
	printf("\nFor\n");
	for (i=0;i<10;i++)
	{
		count++;
	}
	printf("count: %d\n",count);
	printf("\ncount:%d i:%d\n",count,i);
	count = 0;
	i=0;
	printf("\nwhile\n");
	while(i<10)
	{
		count++;
		i++;
	}
	printf("count: %d\n",count);
	count = 0;
	i=0;
	printf("\ndo\n");
	do
	{
		count++;
		i++;
	}while(i<10);
	printf("count: %d\n",count);
}
