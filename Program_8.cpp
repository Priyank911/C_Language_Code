#include<stdio.h>
int main()
{
	int n,temp,rem,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		int i=1,fact=1;
		rem=n%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum =sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
}
