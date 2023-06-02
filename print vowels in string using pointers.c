#include<stdio.h>
int main()
{
	 char str[100],*p;
	 scanf("%[^\n]s",str);
	 p=str;
	 while(*p!='\0')
	{
			if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
			{
				printf("%c",*p);
			}
			p++;
	}
	return 0;
}
