#include<stdio.h>
void display();

int main()
{
	display(3);
	printf("\n");
return 0;	
}

void display(int n)
{
	if(n==0)
		return;			// winding phase until it reach base case r finish call
	printf("winding phase: %d \n",n); 	//before recursion call
	display(n-1);			//recursion call
	printf("Unwinding phase: %d \n",n); 	// after recursion call 
	// unwinding phase when returning
}
