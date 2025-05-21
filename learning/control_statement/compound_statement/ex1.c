#include <stdio.h>

int main() {
    char choice;
    int num1, num2;

    while (1) {
        printf("\nMenu:\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Exit\n");
        printf("Enter your choice (a/b/c/d): ");
        scanf(" %c", &choice);

        if (choice == 'a') 
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
        }
        else if (choice == 'b') 
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
        } 
        else if (choice == 'c') 
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
        } 
        else if (choice == 'd') 
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

