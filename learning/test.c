#include<stdio.h>
int a=0;
void print()
{
	printf("a5 %d \n",a);
	a=23;
	printf("a6 %d \n",a);
}



int main()
{
	int i=0;
	printf("a1 %d \n",a);
	while(i<1)
	{
		int a;
		a=20;
		printf("a2 %d \n",a);
		i++;
	}	
	
	printf("a3 %d \n",a);
	print(a);
	printf("a4 %d \n",a);

}

