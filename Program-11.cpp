#include<stdio.h>
#include<conio.h>
int total(int,int,int);
float average(int);
int main()
{
int s1,s2,s3,tot;
float avg;
printf("Enter the values for s1,s2,s3\n");
scanf("%d%d%d",&s1,&s2,&s3);
printf("The value of three subjects is %d%d%d\n",s1,s2,s3);
tot=total(s1,s2,s3);/*function declaration*/
avg=average(tot);
printf("The average of 3 subjects is\t %f\n",avg);
if(avg>75&&avg<100)
{
printf("First Rank");
}
else if(avg>50&&avg<75)
{
printf("Second Rank");
}
else if(avg>35&&avg<50)
{
printf("Third Rank");
}
else
{
printf("Fail");
}
return 0;
}
int total(int a,int b ,int c)/*function definition*/
{
int tot1;
tot1=a+b+c;
printf("the total is %d\n",tot1);
return tot1;
}
float average(int x)
{
float avg1;
avg1=x/3;
return avg1;
}


