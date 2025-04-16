/*
#include <stdio.h>
#include <string.h>
#define MAX 1000  

int main()
{
    	char myText[MAX]; 
    	int i,n,wCount=0,lCount=0;
    	char c;  
    	while ((c = getchar()) != 0)
    	myText[i++] = c;
    	myText[i] = '\0';  

    	n = strlen(myText);  
    	for (i = 0; i < n; i++) 
    	{	
        	switch (myText[i]) 
        	{
        	    case ' ': 
        	        wCount++;
        	        break;
        	    case '.':
        	        lCount++;
        	        break;
        	}
    	}
    	printf("\nThe number of words is %d and sentences is %d\n", wCount, lCount);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>  
int main()
{
 	   char line[81];  
 	   int i, n, count = 0;
 	   scanf("%[^\n]", line);  
	   n = strlen(line); 

	   for (i = 0; i < n; i++)
	   {
	        if (isupper(line[i]))
	            count++;        
	   }
	   printf("\nThe no. of uppercase letters %s is %d\n", line, count);
    return 0;
}
