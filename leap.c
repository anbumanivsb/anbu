#include <stdio.h>
#include <conio.h>
int main()
{
  int yr;
  printf("Enter a year to check leap year\n");
  scanf("%d", &yr);
  if ( yr%400 == 0)
  printf("%d leap year.\n", yr);
  else if ( year%100 == 0)
  printf("%d not leap year.\n", yr);
  else if ( yr%4 == 0 )
  printf("%d leap year.\n", yr);
  else
  printf("%d is not a leap year.\n", yr);  
  return 0;
}
