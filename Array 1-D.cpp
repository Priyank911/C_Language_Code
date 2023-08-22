#include<stdio.h>
int main()
{
	float avg;
	int arr[50],i,size,sum;
	printf("Enter The Array Size");
	scanf("%d",&size);
	printf("Enter the marks");
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=sum-1;i++)
	{
		sum= sum + arr[i];
	}
	avg=sum/size;
	printf("sum=%d",sum );
	printf("avg=%f",avg );
	return 0;
}
