#include<stdio.h>
int main()
{ 
    /*
	int i,a,sum;
	printf("enter the positive no");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("sum of natural numbers till %d is %d",a,sum);
	return 0;
	*/
	int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
