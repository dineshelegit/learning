#include<stdio.h>
void display1();
void display2();

int main()
{
	display1(3);
	printf("\n");
	display2(3);
	printf("\n");
return 0;	
}

void display1(int n) // winding phase
{
	if(n==0)
		return;
	printf("%d ",n);
	display1(n-1); //unwinding phase
} // print 3 2 1

void display2(int n) 
{
	if(n==0)
		return;
	display2(n-1);
	printf("%d ",n);
} // print 1 2 3

