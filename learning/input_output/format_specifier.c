 #include<stdio.h>
 
 int main()
 {
 	int num=123;
 	unsigned int unum=456;
 	float fnum=3.4567;
 	double dnum=12345.6789;
 	long lnum = 812345678L;
 	unsigned long ulnum = 987654331234UL;
 	long long llnum= 9875634521232324LL;
 	unsigned long long ullnum = 12345678823456ULL;
 	char ch = 'D';
 	char str[]="Hello Format Specifier";
 	int hex_num=254;
 	int oct_num=64;
 	void *ptr=&num;
 	printf("\nFORMAT SPECIFIER\n");
 	
 	printf("int num \t%%d = %d\n",num);
 	printf("unsigned int num \t%%u = %u\n",unum);
 	printf("float fnum \t%%f = %f\n",fnum);
 	printf("double dnum \t%%lf = %lf\n",dnum);
 	printf("long lnum \t%%ld = %ld\n",lnum);
 	printf("unsigned long lnum \t%%lu = %lu\n",ulnum);
 	printf("long long llnum \t%%lld = %lld\n",llnum);
 	printf("unsigned long long ullnum \t%%llu = %llu\n",ullnum);
 	printf("char ch \t%%c = %c\n",ch);
 	printf("char str \t%%s = %s\n",str);
 	printf("hexadecimal small \t%%x = %x\n",hex_num);
 	printf("hexadecimal caps \t%%X = %X\n",hex_num);
 	printf("octal  \t%%o = %o\n",oct_num);
 	printf("Pointer address \t%%p = %p\n",ptr);
 	printf("Expointional notation dnum \t%%e = %e\n",dnum); 
 	
 	printf("\n-- Width and Precision Examples --\n");
    	printf("Integer with width 10 (%%10d): %10d\n", num);
    	printf("Float with 3 decimal places (%%.3f): %.3f\n", fnum);
 	
 }
