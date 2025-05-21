#include<stdio.h>
#include<math.h>

int prime(int n);
int reverse(int num);
void palindrom (void);

int main()
{
	reverse(12345); printf("\n");	
	palindrom(); printf("\n");
	
	//prime
	if(prime(7))
		printf("Prime\n");
	else
		printf("Not prime\n");
	printf("\n");
}

int reverse(int num)
{
	int reverse=0, remainder;
	
	while(num != 0)
	{
		remainder = num % 10; // 12345 remainder will be 5 = 5 // 4 // 3
		
		reverse = reverse * 10 + remainder; // 0 * 10 + 5 = 5 // 54 // 543
 		
		num /= 10; // 12345 / 10 = 1234 // 123 // 12
	}
	
	printf("Reverse number: %d\n",reverse);
	
	return reverse;
}

void palindrom(void)
{
	int num = 121;
	
	if(num == reverse(num))
		printf("It is palindrom\n");
	else 
		printf("It is not a palindrom\n");
}

int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}

