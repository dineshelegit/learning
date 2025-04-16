#include<stdio.h>
void swap(int a,int b);
void swap_temp(int a,int b);

int main()
{
    int x,y;
    printf("Enter the x & y :");
    scanf("%d %d",&x,&y);
    swap(x,y);
    swap_temp(x,y);
    return 0;
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap numbers: %d and %d\n",a,b);
}
void swap_temp(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("Swap number using temp: %d and %d\n",a,b);
}
