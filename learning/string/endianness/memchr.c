#include<stdio.h>
#include<string.h>
int main(int argc,char** argv)
{
	char* result;
	if(argc!=2)
	{
		printf("Usage: %s string\n",argv[0]);
	}
	else
	{
		if((result=(char*)memchr(argv[1],'R',strlen(argv[1])))!=NULL)
		{
			printf("The string starting with R is %s\n",result);
		}
		else
		{
			printf("The letter x cannot be found in the string\n");
		}
	}
}
