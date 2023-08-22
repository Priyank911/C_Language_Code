#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],min,s,c,loc=1;
printf("Enter the number of elements in array\n");
scanf("%d",&s);
printf("Enter the %d integer values\n",s);
for(c=0;c<s;c++)
scanf("%d",&a[c]);
min=a[0];
for(c=1;c<s;c++)
{
if(a[c]<min)
{
min=a[c];
loc=c+1;
}
}
printf("The minimum element is present at location is %d and it's value %d\n",loc,min);
return 0;
}

