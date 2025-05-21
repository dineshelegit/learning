#include<stdio.h>

int main()
{
	printf("\nbreak\n");
	for (int i =1;i<=5;i++)
	{
		if(i==3)
		{
		break;
		}
		printf("Count: %d\n",i);
	}
	
	printf("\nContinue\n");
	for (int i =1;i<=5;i++)
	{
		if(i==3 | i==4)
		{
		continue;
		}
		printf("Count: %d\n",i);
	}
	
return 0;
}
