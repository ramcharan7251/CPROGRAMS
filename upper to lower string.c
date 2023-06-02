#include<stdio.h>
int main()
{
	char s[30];
	scanf("%[^\n]s",s);
	int i=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
		   s[i]=s[i]-32;
     	} 
	}
	printf("%s",s);
}
