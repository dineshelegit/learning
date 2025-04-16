#include <stdio.h>
#include<stdlib.h>

char* returnALiteral(int code) {
   	 switch(code) {
        	case 1:
        	    return "I know everything, So, I don't want know anything";
        	case 2:
        	    return "I know everything, Even though I want to learn everything";
        	case 3:
        	    return "I don’t know anything, So, I don’t want know to anything";
        	case 4:
        	    return "I don’t know anything, So, I want know to anything";
        	default:
        	    return "I am not a human, even though animal";
    }
}

char* blanks(int number) 
{
    	char* spaces = (char*)malloc(number + 1);
    	int i;
    	for (i = 0; i < number; i++) 
    	{
    	    spaces[i] = ' ';
    	}
    	spaces[number] = '\0';
    return spaces;  
}
             
int main() 
{
    	for (int i = 1; i <= 5; i++) 
    	{
    	    printf("Code %d: %s\n", i, returnALiteral(i));
    	}
    	printf("\n");
    	printf("[%s]\n", blanks(5));  
    	char *tmp = blanks(5);
    	printf("[%s]\n", tmp);  
    	free(tmp); 
    	printf("\n");
    	
    return 0;
}
