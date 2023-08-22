#include<stdio.h>
#include<string.h>
union ParulUniversity
{
char WebSite[50];
char Subject[50];
int Price;
};
int main()
{
union ParulUniversity PU;
strcpy( PU.WebSite, "login.Bytexl.in");
printf( "WebSite : %s\n", PU.WebSite);
strcpy(PU.Subject,"Principles of Programming");
printf( "Subject : %s\n", PU.Subject);
PU.Price=1000;
printf( "Price : %d\n", PU.Price);
}
