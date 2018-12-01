#include<stdio.h>
int main()
{
	int a,b,sum=0,i,n;
	printf("Enter how many terms: \n");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d %d ",a,b);
	for(i=1;i<=(n-2);i++)
	{
	   sum=a+b;
	   a=b;
	   b=sum;
	   printf("%d ",sum);
	}
	return 0;
}
