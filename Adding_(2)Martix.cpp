#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],result[10][10];
	int r,c,i,j;
	printf("Enter the row and coloumn size:-\n");
	scanf("%d%d",&r,&c);
	printf("Enter data for First Matrix:-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the data for second matrix:-\n");
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
			{
				result[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("addition result are:-\n");
			for(i=0;i<r;i++)
	{
			for(j=0;j<r;j++)
			{
				printf(" %d ",result[i][j]);
			}
				printf("\n");
		}
}
