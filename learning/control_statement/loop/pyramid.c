#include<stdio.h>
void pyramid_left();
void pyramid_leftdown();
void pyramid_center();
void pyramid_right();
int main()
{
	printf("\n\npyramid_left\n");
	pyramid_left();
	printf("\n\npyramid_leftdown\n");
	pyramid_leftdown();
	printf("\n\npyramid_centre\n");
	pyramid_center();
	printf("\n\npyramid_right\n");
	pyramid_right();
	
}

void pyramid_right()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
		for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

void pyramid_center()
{
	int i,j,a=1,k,n=5,temp=0,r=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(temp == 0)
			{
				for(k=r;k<=n;k++)
				{
					printf(" ");
				}
			}
			printf("* ");
			temp = 1;
		}
		printf("\n");
		temp = 0;
		r++;
	}
	printf("\n");
	
	a=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		a=1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	printf("\n");
	a=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d",a);
		}
		printf("\n");
		a++;
	}
	printf("\n");
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
	printf("\n");
		for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	a=5;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("  ");
		}
		
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d ",a);
		}
		a--;
		printf("\n");
	}
	printf("\n");
}


void pyramid_leftdown()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",a);
		}
		printf("\n");
		a++;
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		a=1;
		for(j=5;j>=i;j--)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	printf("\n");
	a=5;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",a);
		}
		printf("\n");
		a--;
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		a=5;
		for(j=5;j>=i;j--)
		{
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}
}

void pyramid_left()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	int a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
		}
		printf("\n");
		a++;
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2 == 0)
			printf("1 ");
			else
			printf("0 ");
		}
		printf("\n");
		
	}
	printf("\n");
	int n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(n)
			{
			printf("1 ");
			n=0;
			}
			else
			{
			printf("0 ");
			n=1;
			}
		}
		printf("\n");
	}
		printf("\n");
	a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}
		printf("\n");
		
	}
	printf("\n");
	a=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
		}
		printf("\n");
		a--;
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		a=5;
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a--;
		}
		printf("\n");
	}
}
