#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	b=(a+b)-(a=b);
	printf("a=%d b=%d",a,b);//if you get round off value in output uses: ("a=%1.d b=%1.d",a,b)
}
