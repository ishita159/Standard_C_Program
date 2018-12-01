#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{ 
		    if(year%400==0)
		    {
		    	printf("its a leap year");
			}
			else
		    {
	 		    printf("its not a leap year");
		    }
		}
		printf("it is a leap year");		
	}
	else
	{ 
	  printf("its not a leap year");
	}
	return 0;
}
