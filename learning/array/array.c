//A function called Sort that takes in an array of integers and sorts its contents in ascending order
#include <stdio.h>
void reverse(int x[], int size)
{
	int i;
	printf("\nArray value in reverse:{");
	for (i=size-1; i>=0; i--)
	{
		printf(" %d",x[i]);
	}
	printf(" }\n");
}
int main()
{
      	int a[100], i, n;
	printf("\nN value :");
      	scanf("%d",&n);
	for (i=0; i<n; i++)
	{ 
       		scanf("%d", &a[i]);
        }
        reverse(a,n);
}




//A function called Reverse that takes in an array (any type) and reverses its contents
/*#include <stdio.h>
void reverse(int x[], int size)
{
	int i;
	printf("\nArray value in reverse:{");
	for (i=size-1; i>=0; i--)
	{
		printf(" %d",x[i]);
	}
	printf(" }\n");
}
int main()
{
      	int a[100], i, n;
	printf("\nN value :");
      	scanf("%d",&n);
	for (i=0; i<n; i++)
	{ 
       		scanf("%d", &a[i]);
        }
        reverse(a,n);
}
*/



//A function called Average that takes in an integer array and returns the average of it's elements(as a double))
/*#include <stdio.h>
int average(int x[], int size)
{
	int i,avg=0;
	for (i=0; i<size; i++)
	{
		avg += x[i];
	}
return avg;
}
int main()
{
      	int a[100], i, n;
	printf("\nN value :");
      	scanf("%d",&n);
	for (i=0; i<n; i++)
	{ 
       		scanf("%d", &a[i]);
        }
      	printf("SUM Value is %d \n",(average(a,n)/n));
}
*/





//A function called Sum that takes in an array of type double and returns the sum of its elements
/*#include <stdio.h>
int sum(int x[], int size)
{
	int i,sum = 0;
	for (i=0; i<size; i++)
	{
		sum += x[i];
	}
return sum;
}
int main()
{
      	int a[100], i, n;
	printf("\n N value :");
      	scanf("%d",&n);
	for (i=0; i<n; i++)
	{ 
       		scanf("%d", &a[i]);
        }
      	printf("SUM Value is %d \n",sum(a,n));
}
*/






//A function called Minimum that takes in an array of type double and returns the smallest number in the array
/*#include <stdio.h>
int minimum (int x[], int size)
{
	int i, min = 99999;
	for (i=0; i<size; i++)
	{
		if (min > x[i])
            	min = x[i];
	}
return min;
}
int main()
{
      	int a[100], i, n;
	printf("N value :\n");
      	scanf("%d",&n);
	for (i=0; i<n; i++)
	{ 
       		scanf("%d", &a[i]);
        }
      	printf("\n Minimum Value is %d \n",minimum(a,n));
}
*/
