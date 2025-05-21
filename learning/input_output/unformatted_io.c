#include<stdio.h>

int main()
{	
//putchar and getchar
	printf("\nputchar and getchar\n");
	char ch;
	printf("Enter a character: ");
	ch = getchar();
	printf("You entered: ");
	putchar(ch);
	printf("\n");
	
//puts
	char character[]="Hello, It print char array";
	puts(character);

//gets	//it removed from c11 it is unsafe
	/*char get[50];
	printf("\nEnter your name:");
	gets(get);
	printf("\nName = %s\n",get);	
	*/

}
