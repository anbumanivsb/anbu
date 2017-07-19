#include <stdio.h>
#include <string.h>
int main()
{
   char a[100], b[100];
  gets(a);
  gets(b);
 
   if (strcmp(a,b) == 0)
      printf("equal.\n");
   else
      printf("not equal.\n");
 
   return 0;
}
