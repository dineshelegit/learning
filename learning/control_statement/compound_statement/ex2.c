#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 150) 
    {
        printf("Invalid age input\n");
    }
    else if (age < 13) 
    {
        printf("You are a Child.\n");
    }
    else if (age >= 13 && age <= 19) 
    {
        printf("You are a Teenager.\n");
    } 
    else if (age >= 20 && age <= 64) 
    {
        printf("You are an Adult.\n");
    }
    else 
    {
        printf("You are a Senior.\n");
    }

    return 0;
}

