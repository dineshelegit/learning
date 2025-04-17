#include<stdio.h>
#define LITTLE_ENDIAN 0
#define BIG_ENDIAN 1
#define bigendianchar ((*(char*)&i)==0)
const int i=1;
int endian()
{
	unsigned int x = 1;
	char *p = (char*)&x;
	if(*p)
	{
		return LITTLE_ENDIAN;
	}
	else
	{
		return BIG_ENDIAN;
	}
}


int main()
{
	if(endian())
	{
		printf("BIG_ENDIAN\n");
	}
	else
	{
		printf("LITTLE_ENDIAN\n");
	}
	
	unsigned int val = 0x12345678;
	char *ptr;
	ptr = (char*)&val;
	if (bigendianchar)
	{
		printf("%X %X %X %X\n",ptr[0],ptr[1],ptr[2],ptr[3]);
	}
	else
	{
		printf("%X %X %X %X\n",ptr[3],ptr[2],ptr[1],ptr[0]);
	}
}




