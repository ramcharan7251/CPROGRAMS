#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter bo.of elements:");
	scanf("%d",&n);
	printf("enter %d elements",n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	    }
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	return 0;
}
