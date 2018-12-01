#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("number is not a prime no.");
			flag=1;
			break;
		}
    }  
    if(flag==0)
    {
    	printf("no is a prime no");
	}
	return 0;
}
	
	
	

