#include <stdio.h>
void dangling_else_correct();
void dangling_else();

int main() 
{
    int a = 10, b = 20;

    	if (a > b) // dangling if it print only first line
    	    printf("a is greater than b\n");
    	    printf("This line will always print.\n");
        
    	if (a > b) //this statement is correct with brackets
    	{
    	    printf("a is greater than b\n");
    	    printf("This line will always print.\n");
    	}
    	
    	dangling_else();
    	dangling_else_correct();


return 0;
}


void dangling_else()
{
   	int a = 10, b = 10;
   	if (a > b)
        	if (a == b)
            		printf("a is equal to b\n");
        	else
            		printf("a is greater than b\n");

}

void dangling_else_correct()
{
    	int a = 10, b = 10;

   	 if (a > b) 
   	 {
        	if (a == b)
        	{
            		printf("a is equal to b\n");
        	} 
        	else
        	{
            		printf("a is greater than b\n");
        	}
    	}
}
