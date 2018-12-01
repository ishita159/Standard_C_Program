#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,decimal,i=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		decimal+=d*pow(8,i);
		i++;
		n/=10;
	}
	printf(" decimal equivalent of the number is %d",decimal);
	return 0;
}
