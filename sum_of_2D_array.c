#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],i,j,SUM[10][10],n;
	printf("Enter the diamentions of the square matrix:");
	scanf("%d",&n);
    printf("Enter elements of array no1:");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&A[i][j]);
		}
	}
	printf("Enter elements of array no2:");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&B[i][j]);
		}
	}
	printf("Enter elements of array no2:");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		SUM[i][j] = A[i][j] + B[i][j];
		}
	}
	printf("/n/n");
	for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d  ",SUM[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
