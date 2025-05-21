#include<stdio.h>

void print(); // function declaration
void function_header(void); 
int sum(int x, int y);
void return_to_main(void);
int return_value(int x, int y);

int main()
{
	// unserstanding body of function - decalration , calling , definition
	print(); // function calling
	
	// void function
	function_header(); // no void is required here inside parameter 
	
	// int function with actual and formal paramter
	int a=5,b=5;
	sum(a,b); // parameter is variable // actual parameter
	sum(5,6); // parameter is value // actual parameter
	
	//return to main with value
	return_to_main();
	
	//return the value 
	printf("THIS VALUE 10 - 5 IS RETURNED FROM FUNCTION: %d\n\n",return_value(10,5));
	
}

void print() // function definition
{
	printf("THIS LINE PRINT FROM FUNCTION\n\n");
}

void function_header(void) // function hearder // void inside parameter is good practice
{
	printf("Function body\n\n"); // function body
}

int sum(int x, int y)  // formal parameter
{
	if(y==6)
	{
		printf("5 + 6 = %d\n\n",x+y); // print value
	}
	else
	{
		printf("A + B = %d\n\n",x+y); // print variable call
	}
}

void return_to_main(void)
{
	int a = 10; // local scope this value not affect the main
	if(a>10)
	{ printf("Return without no next statement\n\n"); 
	  return; } // return to main without going to next line
	else
	{ printf("Return after function terminated\n"); }
	printf("This is statement printed\n\n");
}

int return_value(int x, int y)
{
	return x-y; // return the value to main
}
