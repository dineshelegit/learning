/*#include <stdio.h>
int main() 
{
	char buffer[100];
	int age_out;
	float height_out;
	int age = 30;
    	float height = 6.2;
    	sprintf(buffer, "Age:%d Height:%.1f", age, height);
    	printf("Formatted string: %s\n", buffer);
    	sscanf(buffer, "Age:%d Height:%f", &age_out, &height_out);
    	printf("Extracted Data -> Age: %d, Height: %.1f\n", age_out, height_out);
    	return 0;
}*/
/*
#include<stdio.h>
#include<string.h>
void main()
{
	char c,sentence[80];
	int i=0;
	puts("Enter the line using getchar:");
	while((c=getchar())!='\n')
	{
	sentence[i++]=c;
	}
	sentence[i]='\0';
	puts("\nThe line enter using puts:");
	puts(sentence); //get delete from output
	
	printf("NEXT");
	
	char another_sentence[80];
	int j=0;
	puts("Enter the line using gets:");
	fgets(another_sentence);
	puts("Enter line using putchar");
	for(i=0;another_sentence[i]!='\0';i++)
	{
	putchar(another_sentence[i]);
	}
	printf("\n");
}
*/
/*
#include<stdio.h>
#include<string.h>
//char* format(char *buffer,size_t size,const char* name , size_t quantity,size_t weight)
//{
//	snprintf(buffer,size,"Item: %s Quantity: %zu Weight: %zu",name,quantity,weight);
//	return buffer;
//}
char* staticformat(const char* name,size_t quantity,size_t weight)
{
	static char buffer[64];
	sprintf(buffer,"Item: %s Quantity: %zu Weight: %zu",name,quantity,weight);
	return buffer;
}
int main()
{
//	static char buffer[64];
//	printf("%s\n",format(buffer,sizeof(buffer),"Raja",34,84));
	char* part1 = staticformat("raja",33,84);
	char* part2 = staticformat("shankar",35,82);	
	printf("%s\n",part1);
	printf("%s\n",part2);
}*/
