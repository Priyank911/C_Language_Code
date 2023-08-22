#include<stdio.h>
	#include<conio.h>
int fact,y;
char answer;
int factorial(int a);
int main()
{ 
do
{
answer='y';
printf("Enter an integer value between 1 and 20: ");
scanf("%d",&y);
if(y > 20 || y<1)
{
printf("Only values between 1 and 20 are acceptable!\n");
}
else
{
fact = factorial(y);
printf("%d factorial equals %d\n",y,fact);
}
printf("\nDo you want to continue (Y/N)? ");
answer=getch();
}while (answer=='y' || answer=='Y');
}

int factorial(int a) /*function to calculate factorial*/
{
if (a == 1)
return 1;
else
{
a *=factorial(a-1);
return a;  /* returns int value to program */
}
}

