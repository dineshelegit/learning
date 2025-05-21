#include<stdio.h>
#include<stdlib.h>
void malloc_d();
void malloc_overload();
int calloc_d();
int relloc_d();

int main()
{
	//malloc_d();
	//calloc_d();
	relloc_d();
}

void malloc_d()
{
	int a,*p,n,i;
	
	printf("Enter the n value: ");
	scanf("%d",&n);
	p = (int *)malloc (n*sizeof(int));
	printf("\n");
	if(p == NULL)
	{
		printf("Memory not avaiable\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter an int value:");
		scanf("%d",p+i);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Print: %d\n",*(p+i));
	}
	free(p);
}	

int calloc_d()
{
  	int *arr;
    	int n, i;

    	printf("Enter the number of elements: ");
    	scanf("%d", &n);

    	arr = (int *)calloc(n, sizeof(int)); 

    	if (arr == NULL) 
    	{
        	printf("Memory not available\n");
        	return 1;
    	}

    	printf("\nMemory after calloc initialization:\n");
    	for (i = 0; i < n; i++) 
    	{
        	printf("arr[%d] = %d\n", i, arr[i]);
   	}

    	printf("\nEnter values for the array:\n");
    	for (i = 0; i < n; i++) 
    	{
        	printf("Enter value for arr[%d]: ", i);
        	scanf("%d", &arr[i]);
    	}
    	printf("\nThe values in the array are:\n");
    	for (i = 0; i < n; i++) 
    	{
        	printf("arr[%d] = %d\n", i, arr[i]);
    	}

    	free(arr);
}

int relloc_d()
{
	int a,*p,n,i,ns;
	
	printf("Enter the n value: ");
	scanf("%d",&n);
	p = (int *)malloc (n*sizeof(int));
	printf("\n");
	if(p == NULL)
	{
		printf("Memory not avaiable\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter an int value:");
		scanf("%d",p+i);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Print: %d\n",*(p+i));
	}
	
	// Realloc
   	printf("\nEnter the new size (realloc size): ");
    	scanf("%d", &ns);

    	p = (int *)realloc(p, ns * sizeof(int));

    	if (p == NULL) {
        	printf("Memory not available - realloc\n");
        	exit(1);
    	}

	if (ns > n) 
	{
        	printf("\nEnter additional %d values:\n", ns - n);
        	for (i = n; i < ns; i++) 
        	{
            		printf("Enter value for index %d: ", i);
            		scanf("%d", p + i);
        	}
    	}

    	printf("\nThe values in the array after realloc are:\n");
    	for (i = 0; i < ns; i++) 
    	{
        	printf("p[%d] = %d\n", i, *(p + i));
    	}
	
	free(p);
}
