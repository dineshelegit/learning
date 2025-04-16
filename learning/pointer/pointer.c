/*
#include<stdio.h>
int main()
{
int a=6;
int *ptr=&a;//100
printf("%p\n",ptr);//100
printf("%p\n",ptr+1);//104 
printf("%p\n",ptr);//100
printf("%p\n",ptr-1);//96
printf("%p\n",ptr++);//100
printf("%p\n",ptr);//104
printf("%p\n",++ptr);//108
printf("%p\n",ptr);//108
printf("%p\n",--ptr);//104
printf("%p\n",ptr);//104
printf("%p\n",ptr--);//104
printf("%p\n",ptr);//100
return 0;
}
*/

#include<stdio.h>
int main()
{
int a=4;
printf("%d\n",a);
printf("%p\n",&a);
int *ptr=&a;
printf("%p\n",ptr);
printf("%d\n",*ptr);
char ch='r';
printf("%c\n",ch);
char *cptr=&ch;
printf("%p\n",cptr);
printf("%c\n",*cptr);
float b=8.9;
float *fptr=&b;
printf("%f\n",b);
printf("%p\n",fptr);
printf("%f\n",*fptr);
printf("sizeof int pointer is %lu\n",sizeof(ptr));
printf("sizeof char pointer is %lu\n",sizeof(cptr));
printf("size of float pointer is %lu\n",sizeof(fptr));
return 0;
}

