#include<Stdio.h>
int main()
{
	char s[30],*p;
    scanf("%[^\n]s",s);
    p=s;
    int i,count=0;
    while(*p!='\0')
    {
    	count=count+1;
    	p++;
	}
	printf("%d",count);
    
    
	return 0;
}
