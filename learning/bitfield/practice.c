/*
#include<stdio.h>
struct date
{
	int d:10;
	int m:4;
	int y;
};

int main()
{
	printf("Size of date %lu \n",sizeof(struct date));
	struct date dt = {21,04,2014};
	printf("Date is %d %d %d \n",dt.d,dt.m,dt.y);
return 0;	
}
*/
/*
#include<stdio.h>
struct test1
{
	unsigned int x:5;
	unsigned int y:8;
};
struct test2
{
	unsigned int x:5;
	unsigned int :0;
	unsigned int y:8;
};
int main()
{
	printf("size of test1 is %lu \n",sizeof(struct test1));
	printf("size of test2 is %lu \n",sizeof(struct test2));
}*/

#include<stdio.h>
struct test
{
	unsigned int x:5;
	unsigned int y:5;
	unsigned int z;
};

int main()
{
	struct test t;
	printf("addres of t.x is %p",&t.x);
	printf("addres of t.z is %p",&t.z);
}
