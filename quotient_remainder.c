#include<stdio.h>
int main()
{
	int dividend,divisor,remainder,quotient;
	printf("Enter DIVIDEND");
	scanf("%d",&dividend);
	printf("Enter DIVISOR");
	scanf("%d",&divisor);
	remainder=dividend%divisor;
	quotient=dividend/divisor;
	printf("QUOTIENT = %d \nREMAINDER = %d",quotient, remainder);
	return 0;
}
