#include<stdio.h>
typedef struct
{
	double x,y;
}point;

typedef struct 
{
	point A,B,C;
	double area;
}triangle;

int main()
{
	triangle T = {{1.6,2.3},{-4.5,5.56},{3.32,-6.54},-1};
	T.area=T.A.x*(T.B.y-T.C.y) + T.B.x*(T.C.y-T.A.y) + T.C.x*(T.A.y-T.B.y);
	T.area /=2;
	if(T.area<0)
		T.area = - T.area;
		printf("Area of T = %.2lf\n",T.area);
}

