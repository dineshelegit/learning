#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int stringLength(const char *string) 
{
    	unsigned int length = 0;
    	while (*(string++))    
    	{  
        	length++;
    	}
    return length;
}
int main() 
{
    	char simplearray[] = "simple string"; 
    	char *simpleptr = (char *)malloc(strlen("simple string") + 1); 
    	strcpy(simpleptr, "simple string"); 
    	printf("%d\n", stringLength(simpleptr));          
    	printf("%d\n", stringLength(simplearray));       
    	printf("%d\n", stringLength(&simplearray[0]));   
    	free(simpleptr); 
    return 0;
}
