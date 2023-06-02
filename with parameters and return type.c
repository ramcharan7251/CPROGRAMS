#include<stdio.h>              
int sum(int num1,int num2 )    //formal parameters
{
return num1+num2;
}
int main()
{
	int n1,n2;                 // actual parameters
	scanf("%d%d",&n1,&n2);
	sum(n1,n2);
	printf("%d",sum(n1,n2));
	return 0;
}


