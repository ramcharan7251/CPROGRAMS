#include<Stdio.h>
int main()
{
	char s[30];
    scanf("%[^\n]s",s);
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
    	count=count+1;
	}
	for(i=count;i>=0;i--)
    {
    	printf("%c",s[i]);
	}
    
    
	return 0;
}
