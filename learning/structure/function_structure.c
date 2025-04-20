#include<stdio.h>
typedef struct
{
	float real;
	float imag;
}complex;

void swap (complex *a,complex *b)
{
	complex tmp;
	tmp =*a ;
	*a=*b;
	*b=tmp;
}
void print(complex a)
{
	printf(" %.2f, %.2f",a.real,a.imag);
}

int main()
{
	complex x={4,5},y={10,15};
	print(x);print(y);printf("\n");
	swap(&x,&y);
	print(x);print(y);printf("\n");
	
}
