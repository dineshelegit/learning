/*#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="Dinesh";
	char ch[20]={'D','i','n','e','s','h','\0'};
    	puts(str);                          
    	puts(ch);                           

   	if ((strcmp(str, ch)) == 0)        
       		 printf("Strings are same\n");     
    	else
        	printf("Strings are not same\n"); 
}
*/

/*
#include <stdio.h>

int strcmp_array(char str1[], char str2[]) 
{
    	int i = 0;
    	while ((str1[i] != '\0') && (str2[i] != '\0') && (str1[i] == str2[i])) 
    	{
        	i++;
    	}

    	if (str1[i] == str2[i])
        	return 0;
    	else
        	return (str1[i] - str2[i]);
}
int main() 
{
    	char str[]="Dineshk";
	char ch[20]={'D','i','n','e','s','h','\0'};
    	int result = strcmp_array(str, ch);
   	if (result == 0)
        	printf("Strings are equal.\n");
    	else
        	printf("string are not equal\n");
    return 0;
}
*/

#include <stdio.h>

int strcmp_pointer(char *str1, char *str2)  
{
    	while (*str1 && *str2 && (*str1 == *str2)) 
    	{
        	str1++;
        	str2++;
    	}
    	return (*str1 - *str2);
}

int main() 
{
	char str[]="Dinesh";
	char ch[20]={'D','i','n','e','s','h','\0'};

    	int result = strcmp_pointer(str,ch);

    	if (result == 0)
        	printf("Strings are equal\n");
    	else
        	printf("string are not equal\n");
    return 0;
}
