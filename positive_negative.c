#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("the no is positive");
	}
	else if(a<0)
	{
		printf("the no is negative");
	}
	else
	{
		printf("its a zero");
	}
	return 0;
}
