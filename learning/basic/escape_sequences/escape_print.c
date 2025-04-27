#include <stdio.h>

int main() {
	    printf("Hello\tWorld\n");         // \t tab, \n newline
	    printf("This is a backspace\b!\n"); // \b backspace
	    printf("This is a single quote: \'\n"); // \' single quote
	    printf("This is a double quote: \"\n"); // \" double quote
	    printf("This is a question mark: \?\n"); // \? question mark
	    printf("This is a backslash: \\\n");     // \\ backslash
	    printf("This is \\n \n"); //print \n 
	    printf("Carriage return example\rLine Start\n"); // \r carriage return
	    printf("Form feed\fNext line\n"); // \f form feed
	    printf("Vertical tab\vNext line\n"); // \v vertical tab
	    printf("Octal character: \101\n");  // \ooo octal value (here 101 is 'A')
	    printf("Hexadecimal character: \x41\n"); // \xhh hexadecimal value (41 is 'A')
	    
//print
	    printf("this first \
this is second\n");
	   printf("this first \ 
this is second\n"); // it gives u warning but not good pratice remove space before the lash

//%% print
	   printf("%% %%d %%s\n"); //percent sign to print 

return 0;
}

