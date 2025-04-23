/*#include<stdio.h>
enum direction
{
	EAST,NORTH,WEST,SOUTH
};

int main()
{
	enum direction dir = WEST;
	printf("%d\n",dir);
	dir = 3;
	printf("%d\n",dir);
}*/

#include<stdio.h>
enum enm
{
	a=3,b=2,c
};

int main()
{
	enum enm v1 =a, v2 =b,v3=c;
	printf("%d %d %d \n",v1,v2,v3);
	return 0;
}
