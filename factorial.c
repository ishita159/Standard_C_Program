#include<stdio.h>
int main()
{
	int n,i,product=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   product=product*i;	
	}
	printf("factorial of the number is: %d",product);
	return 0;
}
