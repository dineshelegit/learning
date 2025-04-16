
/*#include<stdio.h>

int main()
{
	printf("size of char %zu\n",sizeof(char*));
	printf("size of int %zu\n",sizeof(int*));
}
*/

/*
#include<stdio.h>

int main()
{
	int arr[] ={1,2,3,4,5,6,7,8};
	int *p = arr;
	printf("%d\n",*p++); 
	printf("%d\n",*++p);
	printf("%d\n",++*p);
	printf("%d\n",(*p)++);
}
*/
/*
#include<stdio.h>

int main()
{
	int arr[] ={1,2,3,4,5,6,7,8};
	int *p = arr + 4;
	printf("%d\n",*p);
	p--;
	printf("%d\n",*p);
	//p--;
	printf("%d\n",*p--);
	--p;
	printf("%d\n",*p);
	
	return 0;
}
*/
/*
#include<stdio.h>

int main()
{
	int arr[] ={1,2,3,4,5,6,7,8};
	int *p0 = arr;
	int *p1 = arr+3;
	int *p2 = arr+6;
	printf("p0 = %d p1 = %d p2 = %d\n",*p0,*p1,*p2);
	printf("p2-p0- %d\n",p2-p0);
	printf("p2-p1- %d\n",p2-p1);
	printf("p0-p1- %d\n",p0-p1);
	
	printf("p0 - p1 - %d\n",*p0-*p1);
	
	printf("p2>p0- %d\n",p2>p0);
	printf("p2<p1- %d\n",p2<p1);
	printf("p0<p1- %d\n",p0<p1);
	
	return 0;
}
*/

#include<stdio.h>

int main()
{
	int arr[] ={1,2,3,4,5,6,7,8};
	printf("value %d %d %d\n",arr[0],arr[1],arr[2]);
	printf("address %d %d %d\n",&arr[0],&arr[1],&arr[2]);
	return 0;
}
































