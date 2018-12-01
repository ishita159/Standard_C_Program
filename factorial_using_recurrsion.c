#include<stdio.h>
int main()
{
	int n,factorial_val;
	printf("Enter a number: ");
	scanf("%d",&n);
	factorial_val=factorial(n);
	printf("Factorial Value = %d",factorial_val);
	getch();
	return 0;
}
int factorial(int n)
{
	int k;
	if(n!=1)
	{
		k = factorial(n-1);
		return n * k;
			//printf("%d", n);
	}
	else
	{
		return 1;
	}
}
