#include<stdio.h>
void address_value();
void size_of_datatype();
void string_pointer();

int main()
{
	// address_value();
	//size_of_datatype();
	string_pointer();

}

void address_value()
{
	int a=6,b=7,*p,*pt; // this *p is correct methode
	p=&a; // this correct methode
	pt=&b;
	//int *ptr=&a // it will work but not good pratice
	printf("value of a : %d\n",a);
	printf("value of &a : %p\n",&a);
	printf("value of p : %p\n",p);
	printf("value of *p : %d\n",*p);
	printf("value of *(&a) : %d\n\n",*(&a));
	
	printf("value of b : %d\n",b);
	printf("value of &b : %p\n",&b);
	printf("value of pt : %p\n",pt);
	printf("value of *pt : %d\n",*pt);
	printf("value of *(&b) : %d\n",*(&b));
	
}

void size_of_datatype()
{
	int a=10, *p1=&a;
	float b=2.34,*p2=&b;
	char c='f',*p3=&c;
	double d=153.34,*p4=&d;
	// u used for 32 bit it cause error while return beause unsigned
	//printf("size int of p1: %u *p1: %u \n",sizeof(p1),sizeof(*p1)); // u gives warning
	printf("size float of p2: %lu *p2: %lu \n",sizeof(p2),sizeof(*p2)); // lu ok
	printf("size char of p3: %zu *p3: %zu \n",sizeof(p3),sizeof(*p3)); // zu is ok
	printf("size double of p4: %zu *p4: %zu \n",sizeof(p4),sizeof(*p4));
}


void string_pointer()
{

	char *p="Dinesh"; //point to string literal
	//string literal is stored read - only memory cannot be modified
	printf("  p: %s\n",p); // p has whole string
	printf(" *p: %c\n",*p);  // *p one has starting address
	printf(" *(p+1): %c\n",*(p+1)); // print using pointer one char
	printf(" p[1]: %c\n",p[1]); // to print one char
	//p[1]='j';
	//printf(" p[1]: %c\n",p[1]); // segmentation fault due to j 
	//printf(" ++(*p): %c\n",++(*p)); // this cause segmentation fault p cannot be inc 
	
	printf(" ++p: %s\n",++p);  // inc value p
	printf(" p: %s\n",p); // print values of p
	
}

