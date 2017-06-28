#include<stdio.h>
#include<conio.h>

int  po(int ,int);

int main()
{
     int res,b,c;
     printf("Enter the no\n");
     scanf("%d",&b);
     printf("Enter the po.\n");
     scanf("%d",&c);

     res=po(b,c);
     printf("Value of %d^%d = %d",b,c,res);
     getch();
}

int po(int c, int d)
{
     int power=1;
     int i=1;
     while(i<=d)
     {
          power=power*c;
          i++;
     }
     return power;
}
