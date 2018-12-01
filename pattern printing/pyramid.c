#include<stdio.h>

int main()
{
	int n,i,j,k,l,count = 0, temp, temp2;
	scanf("%d", &n);
	temp = n-1;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= temp; j++)
		{
			printf(" ");
		}
		for(k = 1; k <= 2*i -1; k++)
		{
			printf("*");
		}
		
		printf("\n");
		temp--;
	}
	return 0;
}

