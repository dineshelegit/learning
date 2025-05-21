#include <stdio.h>

int main() 
{
    int choice;

    start:

    printf("\nMenu:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Option 1 selected\n");
    } else if (choice == 2) 
    {
        printf("Option 2 selected\n");
    } else if (choice == 3) 
    {
        printf("Option 3 selected\n");
    } else if (choice == 4) 
    {
        printf("Exiting program.\n");
        return 0;
    } else 
    {
        printf("Invalid choice. Please try again.\n");
    }

    goto start;
}

