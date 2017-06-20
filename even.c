#include <stdio.h>
#include <conio.h>
 
int main()
{
   int n;
 
   printf("Enter an number\n");
   scanf("%d", &n);
 
   if (n%2 == 0)
      printf("it is even number\n");
   else
      printf("it is odd number\n");
 
   return 0;
}
