#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,large;
clrscr();
printf(“Enter The Three Num:”);
scanf(“%d%d%d”,&a,&b,&c);

large=a;
if(b>large&&b>c)
large=b;
else
if(c>large)
large=c;
printf(“nThe largest Num among %d %d %d is %d”,a,b,c,large);
getch();
}
