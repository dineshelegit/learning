#include <stdio.h>

int main() {
    int mainChoice, subChoice;

    printf("1. Fruit\n2. Vegetable\nChoose: ");
    scanf("%d", &mainChoice);

    switch(mainChoice) {
        case 1:
            printf("1. Apple\n2. Banana\nChoose: ");
            scanf("%d", &subChoice);
            switch(subChoice) {
                case 1: printf("You chose Apple\n"); break;
                case 2: printf("You chose Banana\n"); break;
                default: printf("Invalid fruit\n");
            }
            break;

        case 2:
            printf("1. Carrot\n2. Potato\nChoose: ");
            scanf("%d", &subChoice);
            switch(subChoice) {
                case 1: printf("You chose Carrot\n"); break;
                case 2: printf("You chose Potato\n"); break;
                default: printf("Invalid vegetable\n");
            }
            break;

        default: printf("Invalid choice\n");
    }

    return 0;
}

