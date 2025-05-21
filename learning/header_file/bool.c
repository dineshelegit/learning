#include<stdio.h>
#include<stdbool.h>

typedef enum {false1,true1} b;

int main()
{
	//bool x = true;
	bool x = false;
	
	if(x == true)
	{
		printf("True and print %%d %d\n",x);
	}
	else
	{
		printf("False and print %%d %d\n",x);
	}

	printf("\nBool Array\n");
	bool b_arr[2]={true,false};
	for(int i=0;i<2;i++)
	{
		printf("array : %d\n",b_arr[i]);
	}
	
	printf("\nTypedef\n");
	b y = true1;
	//b y = false1;
	if(y == true1)
	{
		printf("True and print %%d %d\n",y);
	}
	else
	{
		printf("False and print %%d %d\n",y);
	}
return 0;
}
