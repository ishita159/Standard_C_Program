#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("ENTER THE 2 NUMBERS");
	scanf("%d %d",&a,&b);
	printf("THE NUMBERS ENTERED ARE a=%d and b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("THE SWAPPED NUMBERS ARE a=%d and b=%d",a,b);
	return 0;
}
