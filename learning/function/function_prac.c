#include<stdio.h>
void palindrome(int num);
void fibanacci(int num);
int factorial(int num);
void func(int num);
void evenroddnum(int num);

int main()
{
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
    palindrome(num);
    fibanacci(num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    func(num);
    evenroddnum(num);
    return 0;
}
void palindrome(int num)
{
    int mem,rev=0,temp=num;
    while(num!=0)
    {
        mem=num%10;
        rev=rev*10+mem;
        num/=10;
    }
    if(temp==rev)
    {
        printf("%d palindrome\n",temp);
    }
    else
        printf("%d not palindrome\n",temp);
}

void fibanacci(int num)
{
    int t1=0,t2=1,t3;
    t3=t1+t2;
    printf("%d %d ",t1,t2);
    for(int i=3;i<=num;i++)
    {
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    printf("\n");
}

int factorial(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    return fact;
}

void func(int num)
{
    if(num<0)
    {
        printf("%d negative\n",num);
    }
    else if(num>0)
    {
        printf("%d positive\n",num);
    }
    else if(num==0)
    {
        printf("zero\n");   
    }
}

void evenroddnum(int num)
{
    if(num%2==0)
    {
        printf("%d even\n",num);
    }
    else
    {
        printf("%d odd\n",num);

    }
}
