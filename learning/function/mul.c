#include<stdio.h>
void mul(int num) 
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d  = %d\n", num, i, (num * i));
    }
}
int main()
{
    int num;    
    printf("Enter the Number: ");
    if (scanf("%d", &num) != 1) 
    {  
        printf("Invalid input!\n");
        return 1;
    }
   
    mul(num);
    return 0;
}


