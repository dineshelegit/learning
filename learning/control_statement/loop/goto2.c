#include <stdio.h>

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

    even: 
    printf("The number is Even.\n");
    return 0;

    odd:
    printf("The number is Odd.\n");
    return 0;
}
