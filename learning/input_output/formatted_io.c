#include<stdio.h>
#include<string.h>

int main()
{
//printf and scanf
	printf("\nprintf anf scanf\n");
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	printf("Number=%d\n",num);
	
//sprintf	
	printf("\nSprintf\n");
	char buffer[100];
	int len = sprintf(buffer,"Integer Number = %d",num);//sprintf -> buffer store it as string
	printf("Buffer: %s\n",buffer); //display the string
	printf("Len: %d\n",len); // display number word in that string
	printf("Strlen: %ld\n",strlen(buffer));
	
//sscanf
	printf("\nSscanf\n");
	char input[] = "Name: John Age: 25 Height: 5.9";
   	char name[20];
    	int age;
    	float height;
    	// Using sscanf to extract the values from the string 'input'
    	int result = sscanf(input, "Name: %s Age: %d Height: %f", name, &age, &height);
    	printf("result %d\n",result);
    	if (result == 3)	// Print the extracted values
    	{
        	printf("Name: %s\n", name);
        	printf("Age: %d\n", age);
        	printf("Height: %.1f\n", height);
    	}
     	else 
   	{
        	printf("Failed to extract all values\n");
    	}
}

