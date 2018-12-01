#include<stdio.h>
int main()
{
	int n,d,number,n1;
	printf("Enter a number:");
	scanf("%d",&n);
	n1=n;
	while(n1>0)
	{
		d = n1%10;
		number = (number*10) + d;
		n1=n1/10;
	}
	if(number==n)
	{
		printf("\nthe number is a palindrome");
	}
	else
	{
		printf("the number is not a palindrome");
	}
	return 0;
}
