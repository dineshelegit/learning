#include <stdio.h>

void print_message(char *message) 
{   //2. Wextra
    // Function that prints a message, but doesn't use the 'message' parameter.
    printf("Hello, World!\n");
}

int main() {
    int x = 10;
    int y = 20;

    //1.  Wall
    if (x = y) 
    {  // Warning! Single '=' should be '==' for comparison
        printf("x and y are equal\n");
    }
    
    //2. Wextra
	//print_message("Hello, Dinesh");
    return 0;
}

    

