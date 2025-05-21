#include <stdio.h>

// Call by Value: Function Definition
void callByValue(int x) {
    printf("CallByValue, before: %d\n", x);
    x = 20;  // This change is local to this function
    printf("CallByValue, after: %d\n", x);
}

// Call by Reference: Function Definition
void callByReference(int *x) {
    printf("CallByReference, before: %d\n", *x);
    *x = 30;  // This change affects the original variable
    printf("CallByReference, after: %d\n", *x);
}

int main() {
    int num = 10;

    printf("CallByValue, num = %d\n", num);
    callByValue(num); // Call by Value
    printf("CallByValue, num = %d\n\n", num);
    
	
    printf("CallByReference, num = %d\n", num);
    callByReference(&num); // Call by Reference r call by pointer // passing address
    printf("CallByReference, num = %d\n", num);

    return 0;
}

