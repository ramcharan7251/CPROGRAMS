#include<stdio.h>
int main()
{
	int i,num1;
	printf("for loop\n enter num");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		printf("hello\t");
	}
	printf(" while loop \n enter num");
	scanf("%d",&num1);
	while(num1>0)
	{
		printf("hello\t");
		num1--;
	}
	printf("do while loop\n enter num");
	 scanf("%d",&num1);
	 do{
	 	printf("hello\t");
	 }while(num1>0,num1--);
	 
	
	 return 0;
	}
