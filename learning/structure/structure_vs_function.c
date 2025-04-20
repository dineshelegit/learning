#include<stdio.h>
typedef struct
{
	float real;
	float imag;
}complex;

complex add(complex a,complex b)
{
	complex tmp;
	tmp.real = a.real + b.real;
	tmp.imag = a.imag + b.imag;
	return tmp;
}

int main()
{
	complex x={4,5},y={10,15};
	complex z;
	z=add(x,y);
	printf(" %.2f, %.2f\n",z.real,z.imag);	
}
