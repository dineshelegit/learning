/*
#include<stdio.h>
#include<string.h>

int main() 
{
	char str[]="Dineshkumar";
	char ch[20]={'D','i','n','e','s','h','\0'};

    	strcat(str, ch);  
    	printf("Cat : %s\n", str);
    return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    	char* error="ERROR:";
    	char* error_message="Not enough memory";
   	char* buffer=(char*)malloc(strlen(error)+strlen(error_message)+1);
    	strcpy(buffer,error);
    	strcat(buffer,error_message);
    	printf("%s\n",buffer);
    	printf("%s\n",error);
    	printf("%s\n",error_message);
free (buffer);
}
*/
/*
#include <stdio.h>

char* strcat_array(char str1[], char str2[]) 
{
    int i = 0, j = 0;
    while (str1[i] != '\0') 
    {
        i++;
    }
    while (str2[j] != '\0') 
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    return str1;
}

int main() {
    char str[50] = "Dineshkumar";
    char ch[20] = {'D', 'i', 'n', 'e', 's', 'h', '\0'};
    printf("Cat : %s\n", strcat_array(str, ch));
    return 0;
}
*/

#include <stdio.h>

char* strcat_pointer(char *str1, char *str2) 
{
    char *ptr = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    return ptr;
}

int main() {
    char str[50] = "Dineshkumar";
    char ch[20] = {'D', 'i', 'n', 'e', 's', 'h', '\0'};

    printf("Cat : %s\n", strcat_pointer(str, ch));
    return 0;
}



