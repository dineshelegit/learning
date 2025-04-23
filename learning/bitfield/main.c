/*
#include<stdio.h>
struct test
{
	unsigned int x:2;
	unsigned int y:2;
	unsigned int z:2;
};

int main()
{
	struct test t;
	t.x=5; // warning for size less 
	printf("%d\n",t.x);
	printf("size of test is %lu \n",sizeof(struct test));
}
*/
/*
#include<stdio.h>
struct test
{
	unsigned int x[10]:5;
};

int main()
{
	struct test t={1,2};
	printf("%d\n",t.x);
	printf("size of test is %lu \n",sizeof(struct test));
}
*/

#include<stdio.h>
struct test
{
	//unsigned int x;
	//long int y:33;
	//unsigned int z;
	
	int a;
	int *u;	
	//char d;
	int c;
};

int main()
{
	struct test t;
	printf("size of test is %lu \n",sizeof(struct test));
	//printf("size of test is %lu \n",sizeof(t.));
}

