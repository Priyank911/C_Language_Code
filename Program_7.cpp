#include<stdio.h>
int main()
{
	int start,end,i,flag;
	scanf("%d%d",&start,&end);
	while(start<=end)
	{
		flag=0;
		if(start==1)
		{
			start++;
		}
		for(i=2;i<=start/2;i++)
		{
			if(start%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf(" %d ",start);
		}
		start++;
	}
	return 0;
}
