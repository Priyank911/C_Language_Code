#include<stdio.h>
#include<math.h>
int main()
{
int  a,b,c;
scanf("%d %d %d",&a,&b,&c);
a=pow(a,2);
b=pow(b,2);
c=pow(c,2);
if(a+b==c)
{
printf(" Boom You Did It");
}
else
{
printf("Better Luck Next Time");
}
}

