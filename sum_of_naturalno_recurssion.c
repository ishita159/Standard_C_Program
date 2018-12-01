#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	sum=add(n);
	printf("sum of natural numbers till %d = %d",n,sum);
	return 0;
}
int add(int n)
{
	if(n!=0)
	{
		return n + add(n-1);
	}
	else
	{
		return n;
	}
}
