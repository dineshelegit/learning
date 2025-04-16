/*#include<stdio.h>

int* alarr(int size, int value)
{
	int arr[size];
	for(int i=0;i<5;i++)
	{
		arr[i]=value;
	}
	//return arr;
}

int main()
{
	int* vector = alarr(5,45);
	for(int i=0;i<5;i++)
	{
		printf("%d\n",vector[i]);
	}
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int* alarr(int size, int value)
{
    int* arr = (int*) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        arr[i] = value;
    }
    return arr;
}

int main()
{
    int* vector = alarr(5, 45);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }
    free(vector);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
void alarr(int **arr,int size, int value)
{
    *arr = (int*) malloc(size * sizeof(int));
    if(*arr!=NULL)
    {
    for (int i = 0; i < size; i++)
    {
        *(*arr+i) = value;
    }
    }
}

int main()
{
    int *vector = NULL;
    alarr(&vector,5, 45);
    printf("%p\n", vector);
    
}

*/
