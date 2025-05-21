#include<stdio.h>
int sum(int n);
int sum_crt(int n);
int sumdigit(long int n);
void display(long int n);
void rdisplay(long int n);

int main()
{
	int n;
	printf("Enter No. of series : ");
	scanf("%d",&n);
	printf("sum  = %d \n",sum(n));
	printf("Enter No. of series : ");
	scanf("%d",&n);
	printf("sum crt = %d \n",sum_crt(n));
	printf("\n");
	
	printf("\n\nSUM\n\n");
	printf("sumdigit = %d ",sumdigit(7654321));
	printf("\n");
	display(7654321);
	printf("\n");
	rdisplay(7654321);
	printf("\n");
return 0;	
}
// both function give same output 
int sum(int n) 
{
	if(n==0)
		return 0;
	printf("%d ",n);
	return n + sum(n-1); 
}
// this function is good practice
int sum_crt(int n) 
{
	int total;
	if(n==0)
		return 0;
	total = n + sum(n-1);
	printf("%d ",n);
	return total; 
}
/*
unwinding stage
n=5
f6 = return 0
f5 = 1 + 0 
f4 = 2 + 1
f3 = 3 + 3
f2 = 4 + 6
f1 = 5 + 10
*/


int sumdigit(long int n)
{
	if(n/10==0)
		return n;
	return n%10 + sumdigit(n/10);
}

void display(long int n)
{
	if(n/10==0)
	{
		printf("%ld",n);
		return;
		
	}
	display(n/10);
	printf("%ld", n%10);
}

void rdisplay(long int n)
{
	if(n/10==0)
	{
		printf("%ld",n);
		return;
	}
	printf("%ld", n%10);
	rdisplay(n/10);
}

/*
| Call                | `n`     | `n % 10` | What gets printed? | What happens next?        |
| ------------------- | ------- | -------- | ------------------ | ------------------------- |
| `rdisplay(7654321)` | 7654321 | 1        | `1`                | call `rdisplay(765432)`   |
| `rdisplay(765432)`  | 765432  | 2        | `2`                | call `rdisplay(76543)`    |
| `rdisplay(76543)`   | 76543   | 3        | `3`                | call `rdisplay(7654)`     |
| `rdisplay(7654)`    | 7654    | 4        | `4`                | call `rdisplay(765)`      |
| `rdisplay(765)`     | 765     | 5        | `5`                | call `rdisplay(76)`       |
| `rdisplay(76)`      | 76      | 6        | `6`                | call `rdisplay(7)`        |
| `rdisplay(7)`       | 7       | -        | `7` (base case)    | returns, no further calls |
*/



