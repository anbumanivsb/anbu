#include<stdio.h>
#include<conio.h>
void main()
{
int i, N ;
oddsum=0;                                  
evensum=0;
clrscr();
scanf("%d" , &N);
for( i=1 ; i<=N ; i++ )
{
if(i%2 ==0)
{
evensum=evensum+ i;
}
else
{
oddsum=oddsum+i;
}
}
printf("%d" , oddsum);
printf("%d" , evensum);
getch()
}
