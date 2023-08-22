#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],*max,s,c,loc=1;
printf("Enter the number of elements in array\n");
scanf("%d",&s);
printf("Enter %dintegers\n",s);
for(c=0;c<s;c++)
scanf("%d",&a[c]);
max=a;
*max=*a;
for(c=1;c<s;c++)
{
if(*(a+c)>*max)
{
*max=*(a+c);
loc=c+1;
}
}
printf("Maximium element is persent at location %d and it's value is s %d\n",loc,*max);
return 0;
}

