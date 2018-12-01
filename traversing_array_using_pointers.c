#include<stdio.h>
#define MAX 20
int main()
{
	int A[MAX],i,n;
	printf("ENTER NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS:");
	for(i=0;i<n;i++)
	{
		scanf("%d",A+i);
	}
	printf("The array elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(A+i));
	}
	return 0;
}
