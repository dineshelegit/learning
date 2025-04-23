#include<stdio.h>
union number
{
	char ch;
	int i;
};

int main()
{
	union number x;
	x.i = 100;
	//x.ch = 'A';
	printf("ch = %c, i= %d \n",x.ch,x.i);
}
