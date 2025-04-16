/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Dineshkumar";
	char ch[20]={'D','i','n','e','s','h','\0'};
	puts(str);
	puts(ch);
	char *cpy = strcpy(str,ch);
	puts("after cpy");
	puts(str);
	puts(ch);
	printf("The length of the string is: %s\n",cpy);
}
*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char name[32],*names[30];
	int count=0;
	printf("Enter a name");
	scanf("%s",name);
	names[count]=(char*)malloc(strlen(name)+1);
	strcpy(names[count],name);
	count++;
	printf("The length of the string is: %s \nand %s\n",names[0],name);
	
}
*/

#include <stdio.h>
#include <string.h>
int *strcpy_array(char dest[], char src[]) 
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
       		i++;
    	}
    	return dest;
}
int *strcpy_pointer(char *dest,char *src) {
	while (*src!='\0') 
    	{
        	*dest = *src;
        	dest++;
        	src++;
    	}
    	*dest = '\0';
    	return dest;
}

int main() {
    	char src[] = "Dinesh kumar";
	char dest1[50],dest2[50],dest3[50];
   	strcpy(dest1, src);
   	puts("strcpy:");
   	puts(dest1);
   	strcpy_array(dest2, src);
   	puts("strcpy_array:");
   	puts(dest2);
   	strcpy_pointer(dest3, src);
   	puts("strcpy_pointer:");
   	puts(dest3);
}

