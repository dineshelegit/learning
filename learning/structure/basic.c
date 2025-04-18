#include<stdio.h>
struct complex
{
	float real;
	float imag;
	int z[5];
};
int main()
{
	struct complex a={1,2.0},b={-3,4.0},c;
	struct complex d,x,y;
	printf("a and b %.2f %.2f %.2f %.2f\n",a.real,a.imag,b.real,b.imag);
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	printf("c %.2f %.2f \n",c.real,c.imag);
	d=b;
	printf("d %.2f %.2f \n",d.real,d.imag);
	
	x.z[0]=1;
	x.z[1]=2;
	x.z[2]=3;
	x.z[3]=4;
	x.z[4]=5;
	y=x;
	
	printf("y: ");
    	for (int i = 0; i < 5; i++) 
    	{
        	printf("%d ", y.z[i]);
    	}
    	printf("\n");
}

