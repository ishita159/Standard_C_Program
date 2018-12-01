#include<stdio.h>
int main()
{
	int n,d,number;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		d = n%10;
		number = (number*10) + d;
		n=n/10;
	}
	printf("Reverse of the number is: %d",number);
	return 0;
}
