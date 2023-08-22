#include<stdio.h>
#include<conio.h>
int main()
{
	int number1,number2,results;
	printf("Enter the number1\n");
	scanf("%d",&number1);
	printf("Enter the number2\n");
	scanf("%d",&number2);
	results=number1-number2;
	printf("%d-%d=%d",number1,number2,results);
	return 0;
}
