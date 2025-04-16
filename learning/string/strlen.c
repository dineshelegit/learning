/* // with library 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Dineshkumar";
	char ch[20]={'D','i','n','e','s','h','\0'};
	int length = strlen(str);
	int len = strlen(ch);
	puts(str);
	puts(ch);
	printf("The length of the string is: %d and %d\n",length,len);
}
*/

#include<stdio.h>
int strlen_array(char str[])
{
	int i=0;
	while (str[i]!='\0')
	{
		i++;
	}
	return i;
}
int strlen_pointer(char *str)
{
	char *pstr=str;
	while (*str!='\0')
	{
		str++;
	}
	return (str-pstr);
}

int main()
{
	char str[]="Dineshkumar";
	char ch[20]={'D','i','n','e','s','h','\0'};
	puts(str);
	puts(ch);
	printf("The length of the string is: %d and %d\n",strlen_array(str),strlen_array(ch));
	printf("The length of the string is: %d and %d\n",strlen_pointer(str),strlen_pointer(ch));
}
