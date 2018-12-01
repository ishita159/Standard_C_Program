#include<stdio.h>
int swap(int *a,int *b,int *c)
{
	int temp;
	temp=*c;
	*c= *b;
	*b= *a;
	*a= temp;
	return 0;
}
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	printf("a= %d \nb= %d \nc= %d",a,b,c);
	swap(&a,&b,&c);
	printf("\n\na= %d \nb= %d \nc= %d",a,b,c);
	return 0;
}
