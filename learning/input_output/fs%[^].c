#include<stdio.h>

int main()
{
	char str[100];
	printf("\nPrint using scanf %99[^\ n]\n");
	printf("Enter a string: ");
	scanf("%99[^\n]",str);// 99 char and \0 so total 100 size // safe method
	//scanf("%[^\n]",str); // this have print until \n and it not safe method
	printf("Print: %s\n",str);
	
	printf("\nPrint using sscanf\n");
	char input[]="Hello from sscanf",output[100];
	sscanf(input,"%[^\n]",output);
	printf("Print: %s\n",output);
}
