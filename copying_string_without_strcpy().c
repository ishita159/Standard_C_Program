#include<stdio.h>
int main()
{
	char s1[100] ,s2[100];
	int i;
	printf("Enter a string");
	scanf("%s",s1);
	for(i=0 ; s1[i] !='\0'; i++)
	{
	   s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("COPIED STRING IS....\n %s",s2);
	return 0;
}
