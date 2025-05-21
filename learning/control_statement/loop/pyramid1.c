#include<stdio.h>
void pyramid_com();
void pyramid_updown();
int main()
{
	//pyramid_com();
	pyramid_updown();
return 0;
}	

void pyramid_updown()
{

/*
     1
    123
   12345
  1234567
 123456789
  1234567
   12345
    123
     1
*/
	int i,j,n=5,a=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		a=1;
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d",a);
		a++;
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		a=1;
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
}











/* output
     1
    232
   34543
  4567654
 567898765

     5
    545
   54345
  5432345
 543212345
*/
void pyramid_com()
{
	int i,j,k,a=1,n=5,p;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		p=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",p++);
		}
		p=p-2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",p);
			p--;
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		p=5;
		for(j=1;j<=i;j++)
		{
			printf("%d",p--);
		}
		p=p+2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",p);
			p++;
		}
		printf("\n");
	}
}
