#include<stdio.h>

int main()
{
	int check,a,b;
	printf("\nEnter two number it take how many character:\n");
	scanf("%d%d%n",&a,&b,&check);// two variable only taken as input not %n
	//scanf("%d%d %n",&a,&b,&check); //if space given between %n %d. %n taken as input 
	printf("%d %d %d\n",a,b,check);// 10 20 5 for 1.   10 20 32 6 for 2. this error
	printf("\nEnter two number but it take space as charater from scanf\n");
	scanf("%d %d%n",&a,&b,&check);
	printf("%d %d %d\n",a,b,check);
}
