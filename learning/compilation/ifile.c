//Preprocessor

//#include<stdio.h>

#define AGE 18
//comment got removed
int main()
{
	#ifdef	AGE
		printf("AGE %d\n",AGE);
	#else
		printf("NOT DEFINED\n");
	#endif
return 0;
}
