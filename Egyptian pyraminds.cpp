#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    for(j=4; j>=i; j--)
    {
        printf(" ");
    }
    for(k=1; k<=(2*i-1); k++)
    {
        printf("*");
    }
        printf("\n");
    }
}

