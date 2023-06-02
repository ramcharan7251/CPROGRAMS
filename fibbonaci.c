#include<stdio.h>
int fib(num)
{
	if(num==1)
	{
		return 0;
	}
	else if(num==2)
	{
       return 1;    		 
	}
	else
	{
	  return fib(num-1)+fib(num-2);

	}
}
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	printf("%d",fib(num));
return 0;
}
