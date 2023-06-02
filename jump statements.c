#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	  if(i%3==0)
	  {
	    continue;
	  }
	   printf("%d\t",i);
    }
    for(i=0;i<=num;i++)
    {
     if(i%2==0)
       break;
       printf("%d\t",i);
    }
 return 0;
}
