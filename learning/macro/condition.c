#include<stdio.h>
#define FLAG 2 
int main()
{
	int a=20,b=4;
	#if FLAG == 0
		printf("ZERO\n");
		a++;b++;
	#elif FLAG == 1
		printf("ONE\n");
		a--;b--;
	#elif FLAG == 2
		printf("TWO\n");
		a=a-3;
		b=b-3;
	#else 
		printf("MORE\n");
		a=a+b;
		b=a-b;
	#endif
		printf("a = %d,b = %d\n",a,b);
		printf("PROGRAM COMPLETED\n");
		
}
