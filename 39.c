#include<stdio.h>
int main()
{
int a[10],i,n,j;
for(i=0;i<10;i++)
{
printf("%d",i);
scanf("%d",&a[i]);
}
n=a[0];
for(j=0;j<10;j++)
{
if (n<a[j])
n=a[j];
}
printf("%d",n);
return 0;
}
