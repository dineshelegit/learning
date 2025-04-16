void p2a()
{
	int arr[5],*p;
	int (*ptr)[5];
	
	p=arr;
	ptr=arr;
	
	printf("p = %d, ptr = %d ",p,ptr);
	p++;
	ptr++;
	printf("p = %d, ptr = %d ",p,ptr);
}
