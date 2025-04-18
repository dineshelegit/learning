#include<stdio.h>
//#pragma pack(1)
struct padding
{
	int a;
	char b;
	char str_name[20];
	double c;
	float d;
	//int h;
	//int l;
};//__attribute__((packed));

int main()
{
	struct padding e;
	printf("Total: \t%lu \n",sizeof(e));
	printf("a: \t%lu \n",sizeof(e.a));
	printf("b: \t%lu \n",sizeof(e.b));
	printf("str: \t%lu \n",sizeof(e.str_name));
	printf("c: \t%lu \n",sizeof(e.c));
	printf("d: \t%lu \n",sizeof(e.d));
}
