/*#include<stdio.h>

int main()
{
	int a=6,b=3,c=4,result;
	result = a + b * c / 2;
	printf("a = %d b = %d ,c = %d\n\n",a,b,c);
	printf("a + b * c / 2     = %d\n\n",result);
	result = (a + b) * (c / 2);
	printf("(a + b) * (c / 2) = %d\n\n",result);
	result = (a + b * c) / 2;
	printf("(a + b * c) / 2   = %d\n\n",result);
	result = ((a + b) * c) / 2;
	printf("((a + b) * c) / 2 = %d\n",result);
}*/

#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 30;

    // (c > b > a) is treated as ((c  > b) > a), associativity of '>'
    // is left to right. 
    //Therefore the value becomes ((30 > 20) > 10)
    // which becomes (1 > 10)
    if (c > b > a)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    return 0;
}
