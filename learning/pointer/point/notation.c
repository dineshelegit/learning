#include "notation.h"

int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr; 

void notation()
{
    printf("array notation:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("i = %d ptr = %d\n", i, arr[i]);
    }

    printf("\nAccessing elements using pointer notation:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("i= %d ptr = %d\n", i, *(ptr + i));
    }
}

