#include<stdio.h>

int main()
{
	int dec,hex,oct;
	printf("\nEnter Decimal Format number:");
	scanf("%d",&dec);
	printf("\nEnter Hexadecimal Format number:");
	scanf("%i",&hex);
	printf("\nEnter Octal Format number:");
	scanf("%i",&oct);
	printf("\n");
	printf("Decimal = %i \nHexadecimal = %i \nOctal = %i",dec,hex,oct);
	printf("\n");
}
