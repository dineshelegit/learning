#include <stdio.h>
typedef int (*funpt)(int,int);

int add(int n1,int n2)
{
	return n1+n2;
}
int sub(int n1,int n2)
{
	return n1-n2;
}   
int operation(funpt math,int n1,int n2)
{
	return math(n1,n2); 
}       
int square(int num)
{
	return num*2;
}
char fpchar(char letter)
{
	switch(letter)
	{
		case '+':return add;
		case '-':return sub;
	}
}
int evaluate(char letter,int n1,int n2)
{
	funpt math = fpchar(letter);
	return math(n1,n2); 
}
int main()
{
    	int n=5;
    	int (*funptr)(int);
    	funptr = square;
    	printf("\n %d square is %d ",n,funptr(n));
	printf("\n add is %d ",operation(add,10,20));
	printf("\n sub is %d ",operation(sub,10,20));
	printf("\n + is %d ",evaluate('+',20,10));
	printf("\n - is %d ",evaluate('-',20,10));
}
