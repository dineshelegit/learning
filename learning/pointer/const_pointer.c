/*
#include<stdio.h>
int main()
{
int a=10,b=20;
const int *const ptr=&a;
printf("%d\n",*ptr);
//*ptr=40;//invalid
printf("%d\n",*ptr);
//ptr=&b;//invalid
printf("%d\n",*ptr);
return 0;
}
*/
/*
#include<stdio.h>
int main()
{
int a=10,b=90;
int *const ptr=&a;
printf("%d\n",*ptr);//10;
a=89;
printf("%d\n",*ptr);//89
*ptr=67;//valid
printf("%d\n",*ptr);//67
// ptr=&b;//invalid
printf("%d\n",*ptr);//67
return 0;
}
*/

#include<stdio.h>
int main()
{
int a=10,b=90;
const int *ptr=&a;
printf("%d\n",*ptr);//10;
a=89;
printf("%d\n",*ptr);//89
// *ptr=67;//invalid
printf("%d\n",*ptr);//89
ptr=&b;//valid
printf("%d\n",*ptr);//90
return 0;
}

/*
#include<stdio.h>
int main()
{
const int a=78;//RO
// a=67;
// a=89; 
int b=20;//stack
printf("%d %d\n",a,b);
printf("enter the new value for a\n");
scanf("%d",&a);
printf("%d\n",a);
//int *ptr=&a;
//*ptr=450;
printf("%d\n",*ptr);
return 0;
}
*/
