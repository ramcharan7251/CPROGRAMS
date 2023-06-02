#include<stdio.h>
int main()
{
	char s[30];
	scanf("%[^\n]s",s);
	int i=0;
	if(s[0]>=97 && s[0]<=122)
		{
		   s[0]=s[0]-32;
     	} 
	
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]==32)
		{
			i++;
			if(s[i]>=98 && s[i]<=122)
			   s[i]=s[i]-32;
	    }
	    else if(s[i]>=65 && s[i]<=90)
	          s[i]=s[i]+32;
    }
	printf("%s",s);
}
