#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char name[50];
    char copiedName[50];
    int number;
    double squareRoot;

    // stdio.h printf and scanf are library function
    printf("Enter your name: ");
    scanf("%s", name);

    // string.h function library
    strcpy(copiedName, name);

    // string.h
    int length = strlen(name);

    // math.h
    printf("Enter a number to find its square root: ");
    scanf("%d", &number);
    squareRoot = sqrt(number);

    // stdio.h
    printf("Hello, %s!\n", copiedName);
    printf("Your name has %d characters.\n", length);
    printf("The square root of %d is %.2f\n", number, squareRoot);

    return 0;
}

