#include<stdio.h>
#include<conio.h>
void main()
{
   int f,i,n;
   f = 1;
   printf("Enter the number\t");
   scanf("%d" , &n);
   for(i = 1; i <= n; i++)
   {
       f = f*i;		
   }
   printf("Factorial of %d is %d", n , f);
   getch();
}
