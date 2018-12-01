#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,A[20];
	float d,mean=0.00;
	printf("how many elements?");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		mean+=A[i];
	}
	mean/=n;
	for(i=0;i<n;i++)
	{
		d=pow(A[i]-mean,2);
	}
	d/=n;
	printf("Standard deviation = %.6f",sqrt(d));
	return 0;
}
