#include <stdio.h>

int main() {
    int choice;

    printf("Select an option:\n");
    printf("1. Check if a number is even or odd\n");
    printf("2. Find the largest among three numbers\n");
    printf("3. Check if a character is a vowel or consonant\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            if (num % 2 == 0) 
            {
                printf("%d is even.\n", num);
            } 
            else 
            {
                printf("%d is odd.\n", num);
            }
            break;
        }
        case 2: 
        {
            int a, b, c;
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            if (a >= b && a >= c) 
            {
                printf("%d is the largest.\n", a);
            } 
            else if (b >= a && b >= c) 
            {
                printf("%d is the largest.\n", b);
            } 
            else 
            {
                printf("%d is the largest.\n", c);
            }
            break;
        }
        case 3: 
        {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
            {
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                    ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    printf("%c is a vowel.\n", ch);
                } 
                else 
                {
                    printf("%c is a consonant.\n", ch);
                }
            } 
            else 
            {
                printf("%c is not an alphabet character.\n", ch);
            }
            break;
        }
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please select between 1 and 4.\n");
    }

    return 0;
}

