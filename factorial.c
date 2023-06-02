#include<stdio.h>
int fact(int num)
{
	if(num==0)
	{
		return 1; 
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{  
    int n;
    scanf("%d",&n);
    fact(n);
    printf("%d",fact(n));
	return 0;
}
