#include<stdio.h>
int main()
{
	int BINARY[8]={000,001,010,011,100,101,110,111} , OCTAL[8]={0,1,2,3,4,5,6,7},i,n,octal=0,j=1,d;
	printf("enter a binary no");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%1000;
		for(i=0;i<8;i++)
		{
			if(d==BINARY[i])
			{
				octal=octal + OCTAL[i]*j;
			}
		}
		j*=10;
		n=n/1000;
	}
	printf("OCTAL equivalent of the number is = %d",octal);
	return 0;
}
	
