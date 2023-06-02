#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	   if(num1>num3)
	     printf("%d large",num1);
	    else
	      printf("%d large",num3);
    else
        if(num2>num3)
           printf("%d large",num2);
        else
           printf("%d large",num3);
 return 0;
}
