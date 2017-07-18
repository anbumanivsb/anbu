#include<conio.h>
#include<stdlib.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
a^=b^=a^=b;
printf("%d %2d",a,b);
return 0;
}
