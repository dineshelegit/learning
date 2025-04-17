#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 20

int main()
{
	char buffer[BUFFER_SIZE+1];
	char *string;
	memset(buffer,0,sizeof(buffer));
	string = (char*)memset(buffer,'A',10);
	printf("Buffer contents1:%s\n",string);
	memset(buffer+10,'B',10);
	printf("Buffer contents2:%s\n",buffer);
}
