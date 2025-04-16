#include<stdio.h>
void print()
{
	static int a;
	//printf("H\n");
	a++;
	printf("a=%d\n",a);
}

int main()
{
	static int i;
	while(i<10)
	{
	print();
	i++;
	}
return 0;
}


