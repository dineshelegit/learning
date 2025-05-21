#include<stdio.h>
void fun1(void) //function without agrument and return type
{
	int a=5,b=10;
	printf("a + b is %d\n",a+b);
}

int fun2(void) //function without agrument and with return type
{
	int a=5,b=10;
	return a+b;
}

void fun3(int x ,int y) //function with agrument and without return type
{
	printf("a + b is %d\n",x+y);
}

int fun4(int x ,int y) //function with agrument and with return type
{
	return x+y;
}

int main()
{
	fun1();
	
	printf("a + b is %d\n",fun2());
	
	int a=5,b=10;
	int temp = fun3(a,b);
	
	printf("a + b is %d\n",fun4(a,b));
}
