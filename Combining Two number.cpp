#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    b=(a+b)-(a=b);
    printf("%d%d",a,b);
}

