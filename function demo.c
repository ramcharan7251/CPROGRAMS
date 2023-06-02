#include<stdio.h>
int sum(int ,int );   // function declaration  ,,,,here parameters can be any thing formal/actual
int main()

{
	int n1,n2;         // actual parameters
	scanf("%d%d",&n1,&n2);
	sum(n1,n2);                // function call
	printf("%d",sum(n1,n2));
	return 0;
}
int sum(int num1, int num2)    // function defination    //formal parameters
{
	return num1+num2;                  // actual parameters can be formal parameters but
}                                      // formal parameters cannot be actual parameters
