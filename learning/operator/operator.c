#include <stdio.h>

int main() 
{
//Arithmetic operator
    	int a = 10, b = 5,c=15 ,d=0;   
    	printf("\nArithmetic Operator\n");
    	printf("a = %d b = %d\n",a,b); 		
    	printf("(a + b) = %d\n", a + b);
    	printf("(a - b) = %d\n", a - b);
    	printf("(a * b) = %d\n", a * b);
    	printf("(a / b) = %d\n", a / b);
    	printf("(a %% b) = %d\n", a % b);
    	float x = 10.0, y = 3.0;
    	printf("a = %.2f b = %.2f\n",x,y);
    	printf("Floating point Division (x / y) = %.2f\n", x / y);
	// printf("(x %% y) = %.2f\n", x % y); Modulus operator only support int,long
	
//Relation Operator
	printf("\nRelation Operator\n");
	printf("a = %d b = %d\n",a,b);
	printf("a == b = %d\n", a == b);
	printf("a != b = %d\n", a != b); 	
 	printf("a > b  = %d\n", a > b);  
    	printf("a < b  = %d\n", a < b);  
    	printf("a >= b = %d\n", a >= b); 
    	printf("a <= b = %d\n", a <= b); 
    	
//shift operator
	printf("\nShift operator\n"); // binary to decimal 
	int s = 5;    // binary: 0000 0101 // s * 2*(power n) // s / 2(pow n) 
 	printf("s= %d\n", s);
	printf("s << 1 = %d\n", s << 1); // 5 * 2 = 10 //5 * 2(pow 1)
    	printf("s << 2 = %d\n", s << 2); // 5 * 4 = 20 //5 * 2(pow 2)
    	printf("s >> 1 = %d\n", s >> 1); // 5 / 2 = 2 //5 / 2(pow 1)
    	printf("s >> 2 = %d\n", s >> 2); // 5 / 4 = 1 //5 / 2(pow 2)

//Logical Operator

	printf("\nLogical Operator\n");
	printf("a = %d  b = %d c = %d d = %d\n",a,b,c,d);
	// Logical AND
    	if (a < b && c) 
    		{ printf("AND (a < b && c) is TRUE beacuse both are 1\n");}
        	else { printf("AND (a < b && c) is FALSE\n"); }

   	// Logical OR
    	if (a > b || d) 
    		{ printf("OR (a > b || d) is TRUE because both are 1\n"); }
    		else { printf("OR (a > b || d) is FALSE\n"); }

    	// Logical NOT
    	if (!d)
    		{ printf("NOT (!d) is TRUE because d is 0\n"); }
    		else { printf("NOT (!d) is FALSE\n"); }
    		
//Bit wise Operator
	// It a value convert to binary then operation happening
    	printf("\nBitwise Operatorn\n");
    	printf("a = %d b = %d\n",a,b);
    	printf("a & b = %d\n", a & b); //AND
    	printf("a | b = %d\n", a | b);// OR
    	printf("a ^ b = %d\n", a ^ b);//XOR
    	printf("~a = %d\n", ~a);//NOT 2's complement

//Conditional Operator

	printf("\nConditional Operator\n");
	printf("a = %d b = %d\n",a,b);
	int max;
	max = (a<b)?a:b;
	printf("Max value = %d\n",max);
	
//Unary Operator

	printf("\nUnary Operator\n");
	int o=10,i=5;
	int *p = &o;
	printf("o = %d p = %d\n",o,i);
    	// Unary Plus (+,-)
    	printf("Unary Plus: +o = %d\n", +o); //10
    	printf("Unary Minus: -o = %d\n", -o); //-10

    	// Increment (++)
    	//printf("Increment:o = %d o++ = %d, o = %d\n", o, o++, o); error output 11 10 11
    	printf("Increment:o = %d ",o);
    	printf("o++ = %d ",o++);
    	printf("o = %d\n",o); //o++ = 10, o= 11 post-increment
    	printf("Increment: ++o = %d\n",++o); //++o = 12 pre-increment

    	// Decrement (--)
    	//printf("Decrement:i = %d, i-- = %d, i = %d\n",i, i--,i); printing error output 4 5 4
    	printf("i = %d ",i);
    	printf("i-- = %d ",i--);
    	printf("i = %d\n",i); //i-- = 5, i = 4 post-decrement
    	printf("Decrement: --i = %d\n", --i); //--i = 3 pre-decrement

    	// Address-of (&)
    	printf("Address-of: &o = %p\n", (void*)&o); //Memory address of o

    	// Dereference (*)
   	printf("Dereference: *p = %d\n", *p); //10

//Assignment Operator = operator
	printf("\n= assignement operator\n");
	int g = 10;
	printf("g = %d\n",g);
    	g += 5;
    	printf("g += 5 -> %d\n", g); // 15
    	g -= 3;
    	printf("g -= 3 -> %d\n", g); // 12
    	g *= 2;
    	printf("g *= 2 -> %d\n", g); // 24
    	g /= 4;
    	printf("g /= 4 -> %d\n", g); // 6
    	g %= 5;
    	printf("g %%= 5 -> %d\n", g); // 1
    	g = 10;
    	g &= 6;
    	printf("g &= 6 -> %d\n", g); // 2 (binary 1010 & 0110 = 0010)
    	g |= 4;
    	printf("g |= 4 -> %d\n", g); // 6 (binary 0010 | 0100 = 0110)
    	g ^= 2;
    	printf("g ^= 2 -> %d\n", g); // 4 (binary 0110 ^ 0010 = 0100)
    	g <<= 1;
    	printf("g <<= 1 -> %d\n", g); // 8 (shift left)
    	g >>= 2;
    	printf("g >>= 2 -> %d\n", g); // 2 (shift right)

//Comma Operator
    	int m;
    	printf("\nComa Operator\n");
	m = (a = 5, b = 10, a + b);
	printf("a = %d b = %d\n",a,b);
	printf("Comma Operator: m = %d\n", m); // m = 5 + 10 = 15
	
//sizeof operator
	printf("\nSizeof Operator\n");
	printf("sizeof int a = %zu\n",sizeof(a));

return 0;
}

