#include <stdio.h>
#include <math.h>
int armstrong(int number)
{
    int originalNumber, remainder, result = 0, n = 0 ;

     originalNumber = number;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.", number);
    else
        printf("%d is not an Armstrong number.", number);
}
int prime(int n)
{
	int i,flag=0;
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
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	armstrong(n);
	printf("\n");
	prime(n);
	return 0;
}
