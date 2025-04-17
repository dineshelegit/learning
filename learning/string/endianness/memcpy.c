#include<stdio.h>
#include<string.h>
#define MAX_LEN 80
char source[MAX_LEN]="If you hard now, after completion of the course!!";
char target[MAX_LEN]="you will get the job and you will become successful";

int main()
{
	printf("Before memcpy,target is\"%s\"\n",target);
	memcpy(target ,source,sizeof(source));
	printf("After memcpy,target become \"%s\"\n",target);
}
