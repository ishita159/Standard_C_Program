#include<stdio.h>
int main()
{
	int i,max,A[20],n;
	printf("HOW MANY ELEMENTS?");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	max=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	printf("The maximum element of the array is: %d",max);
	return 0;
}
