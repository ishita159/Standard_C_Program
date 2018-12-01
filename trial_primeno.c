#include<stdio.h>
int main()
{
	int i,j,flag=0;
	for(i=20;i<50;i++)
	{
		for(j=2;j<j/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
