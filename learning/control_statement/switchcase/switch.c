#include<stdio.h>

int main()
{
	int a=5,b=10,choose;
	printf("a = %d b = %d\n",a,b);
	printf("1.+ 2.- 3.* 4./ \n");
	
	printf("Enter Number between 1-4: ");
	scanf("%d",&choose);
	printf("\n");
	switch(choose)
	{
		case 1:
			printf("Add %d\n",a+b);break;
		case 2:
			printf("Sub %d\n",a-b);break;
		case 3:
			printf("Mul %d\n",a*b);break;
		case 4:
			printf("Div %.3f\n",(float)a/b);break;
		default:
			printf("Chose between 1 -4 \n%d",choose);
	}
}
