#include<stdio.h>
int main()
{
	int A[20],i,avg,n;
	printf("HOW MANY ELEMENTS? \n\n");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		avg+=A[i];
	}
	printf("\n\nAverage of the array elements is: %d ",avg/n);
	return 0;	
}
