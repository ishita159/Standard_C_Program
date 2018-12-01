#include<stdio.h>
int main()
{
	char srt[1000],i;
	printf("enter the string:");
	gets(srt);
	for(i=0;srt[i]!='\0';i++);
	printf("Length of the srting is %d characters.",i+1);
	return 0;
}
