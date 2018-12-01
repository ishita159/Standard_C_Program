#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],i,j,k,l,MULTIPLICATION[10][10],r1,r2,c1,c2;
	printf("Enter rows and columns for first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and columns for the swecond matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1==r2)
	{
    printf("Enter elements in first matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter elements in first matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c2;k++)
			{
			    MULTIPLICATION[i][j] += (A[i][k] * B[k][j]);
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		MULTIPLICATION[i][j]=0;
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\n\n %d  ",MULTIPLICATION[i][j]);
			if(j==c2-1)
			{
				printf("\n\n");
			}
		}
	}
    }
    else
	{
		printf("ERROR!! COLUMN OF FIRST MATRIX IS NOT EQUAL TO ROW OF SECOND MATRIX");
	}
	return 0;
}
