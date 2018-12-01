#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	fp =open("shan.txt", "w");
	
	while(ch = getchar())
	{
		putc(ch, fp);
	}
	fclose(fp);
}
