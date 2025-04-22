#include<stdio.h>

#define SQUARE(x) ((x)*(x))
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))
#define ISLOWER(c) ((c)>=97 && (c)<=122)
#define ISUPPER(c) ((c)>=65 && (c)<=90)
#define TOUPPER(c) ((c)+'A'-'a')
#define ISLEAP(y) ((y%400==0)||(y%100!=0&&y%4==0))
#define BLANK_LINES(n) {int i;for(i =0;i<n;i++) printf("\n");}
#define CIRCLE_AREA(rad) (3.14*(rad)*(rad))

int main() 
{
    	int a = 5, b = 10;
    	char ch = 'g';
    	int year = 2024;
    	float rad = 3.0;
    	printf("SQUARE of %d is %d\n", a, SQUARE(a));
    	printf("MAX of %d and %d is %d\n", a, b, MAX(a, b));
    	printf("MIN of %d and %d is %d\n", a, b, MIN(a, b));
    	if (ISLOWER(ch))
        	printf("'%c' is a lowercase letter\n", ch);
    	if (ISUPPER(ch))
        	printf("'%c' is an uppercase letter\n", ch);

    	printf("Uppercase of '%c' is '%c'\n", ch, TOUPPER(ch));

    	if (ISLEAP(year))
        	printf("%d is a leap year\n", year);
    	else
        	printf("%d is not a leap year.\n", year);
		printf("Area of circle with radius %.2f is %.2f\n", rad, CIRCLE_AREA(rad));

    	printf("Printing 3 blank lines now:");
    	BLANK_LINES(3);
    	printf("Program Completed\n");
return 0;
}
