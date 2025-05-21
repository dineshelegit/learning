// basic pointer
#include<stdio.h>
void incANDdec();
void basic();
void array();
void arr_decay();

int main()
{
	
	//incANDdec();
	//basic();
	array();
	arr_decay();
}

void basic()
{
	int a=4;
	int *p=&a;
	char ch='a',*cp=&ch;
	float f=45.65,*fp=&f;
	printf("num : %d char: %c float: %f\n",a,ch,f);
	printf("address of num: %p char: %p float: %p\n",&a,&ch,&f);
	printf("deference p: %d cp: %c fp: %f\n",*p,*cp,*fp);
	printf("address stored in p: %p cp:%p fp:%p\n",p,cp,fp);
	printf("size of pointer %zu %zu %zu\n",sizeof(p),sizeof(cp),sizeof(fp));
	printf("\nChange value using pointer\n");
	printf("deference p: %d cp: %c fp: %f\n",*p=8,*cp='r',*fp=22.45);
	printf("num : %d char: %c float: %f\n",a,ch,f);
	
	printf("\nDouble pointer\n");
	int **dp = &p;
	printf("*p: %d *dp: %p **dp: %d \n",*p,*dp,**dp);
	
	printf("\narithmetic pointer\n");
	int b=6,*bp = &b;
	printf("*p: %d *bp: %d p-bp: %ld *p-*bp=%d\n",*p,*bp,(long)(p-bp),*p-*bp);
	
}

void incANDdec()
{
	int a=10;
	int *p=&a;
	printf("value %d address of p:%p\n",a,p);
	printf("p   : %p\n",p);//100
	printf("p+1 : %p\n",p+1);//104
	printf("p   : %p\n",p); //100
	printf("p-1 : %p\n",p-1);//96
	printf("p   : %p\n",p);//100
	printf("p++ : %p\n",p++);//100
	printf("p   : %p\n",p);//104
	printf("++p : %p\n",++p);//108
	printf("p   : %p\n",p);//108
	printf("p-- : %p\n",p--);//108
	printf("p   : %p\n",p);//104
	printf("--p : %p\n",--p);//100
	printf("p   : %p\n",p);//100
}

void array()
{
	// pointer are used but not declared separately this is  called pointer decay
	int a[5]={1,2,3,4,5};
	printf("%p\n",a+0);	// pointer arithmetic
	printf("%p\n",a+1);
	printf("%p\n",a+2);
	printf("%d\n",*(a+0));	// deference a pointer
	printf("%d\n",*(a+1));
	printf("%d\n",*(a+2));
	
	printf("Address of a: %p\n",a);
	printf("Address of a[2]: %p\n",a+2);
	printf("value of a[2] using *(a+2): %d\n",*(a+2));
	printf("value of a[2] using a[2]: %d\n",a[2]);
	for(int i=0;i<5;i++)
	{
		printf("*(a+%d): %d   a[%d]: %d \n",i,*(a+i),i,a[i]);
	}
	
	printf("Sizeof of whole array : %zu\n",sizeof(a));
	printf("Sizeof of Length array : %zu\n",sizeof(a)/sizeof(int));
	printf("\n\n");
}

void arr_decay()
{
	int arr[5]={1,2,3,4,5}; 
	int *p=arr; // array decay to a pointer to a[0] // points to first element of the array
	printf("p+1    : %p \n",p+1);
	printf("*(p+1) : %d \n",*(p+1));
	printf("++p    : %p \n",++p);
	printf("*++p   : %d \n",*++p);
	printf("*p++   : %d \n",*p++);
	printf("(*p)++ : %d \n",(*p)++);
	printf("p      : %p \n",p);
	printf("++(*p) : %d \n",++(*p));
}

void arr_pointer()
{
	int arr[5]={1,2,3,4,5};
	int (*p)[5]=&arr;
	printf("p       : %p\n",p);
	printf("*p      : %p\n",*p);
	printf("**p     : %d\n",**p);
	printf("p+1     : %p\n",p+1);
	printf("*p+1    : %p\n",*p+1);
	printf("*(*p+1) : %d\n",*(*p+1));
}















