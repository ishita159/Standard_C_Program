#include<stdio.h>
int main()
{
	int n,binary_number,i=1,remainder;
	printf("Enter a no:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%2;
		n=n/2;
		binary_number=remainder*i;
		i=i*10;
	}
	printf("Binary number is: %d",binary_number);
	return 0;
}
