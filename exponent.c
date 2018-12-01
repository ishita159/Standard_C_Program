#include<stdio.h>
#include<math.h>
int main()
{
	double a,value;
	int b;
	printf("Enter base value");
	scanf("%lf",&a);
	printf("Enter power");
	scanf("%d",&b);
	value = pow(a,b);
	printf("exponent value is: %.2lf",value);
	return 0;
}
