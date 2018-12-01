#include<stdio.h>
int main()
{
	int i,j,k,l,A[10][10],T[10][10],r1,c1;
	printf("enter no of rows and columns:");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			T[j][i]=A[i][j];
		}
	}
	for(j=0;j<c1;j++)
	{
		for(i=0;i<r1;i++)
		{
			printf("%d  ",T[j][i]);
			if(i==c1-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
