#include<stdio.h>
int main()
{   
    int i,arr1[1000],arr2[1000];
    printf("enter arr1 elements");
    for( i=0;i<10;i++)
      {
      	scanf("%d",&arr1[i]);
	  }
	printf("enter arr2 elements");
	for( i=0;i<10;i++)
	{
			scanf("%d",&arr2[i]);
	}
	printf("sum is");
    for( i=0;i<10;i++)
    {
    	printf("%d",arr1[i]+arr2[i]);
    	printf("\n");
	}
	return 0;
}
