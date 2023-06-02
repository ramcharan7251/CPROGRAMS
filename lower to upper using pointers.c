#include<stdio.h>
int main()
{
	char s[30],*p;
	scanf("%[^\n]s",s);
	int i=0;
	p=s;
	while(*p!='\0')
	{
		if(*p>=97 && *p<=122)
		{
		   *p=*p-32;
     	} 
     	p++;
	}
	printf("%s",s);
}
