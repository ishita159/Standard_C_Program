#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a Number");
	scanf("%d",&n);
	while(n>0)
	{
		i++;
		n=n/10;
	}
	printf("Number of digits in the number is: %d",i);
	return 0;
}
