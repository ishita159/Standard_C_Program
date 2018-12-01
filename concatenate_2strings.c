#include<stdio.h>
int main()
{
	char str1[1000],str2[1000],i,k;
	printf("Enter string 1");
	gets(str1);
	printf("\n\nEnter string 2");
	gets(str2);
	for(i=0;str1[i]!='\0';++i);
	for(k=0;str2[k]!='\0';i++,k++)
	{
		str1[i]=str2[k];
	}
	str1[i]='\0';
    printf("String after concatination: %s",str1);
	return 0;
}  
