#include<stdio.h>
int main()
{
	int a,b,multiple,lcm;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	multiple=(a>b)?a:b;
	while(1)
	{
		if(multiple%a==0 && multiple%b==0)
		{
		   printf("LCM of the above two numbers is: %d",multiple);
		   break;	
		}
		else
		{
			multiple++;
		}
	}
	return 0;
}
