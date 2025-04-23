#include <stdio.h>

int divide(int a, int b) {
    return a / b;  // Intentional division by zero bug
}

int main() {
    int x = 10;
    int y = 0;  // y is zero, causing a division by zero error
    int result = divide(x, y);  // This will cause a runtime error (division by zero)

    printf("Result: %d\n", result);  // This won't be printed because the program will crash
    return 0;
}

