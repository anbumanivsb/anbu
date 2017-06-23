#include <stdio.h>
void main()
{
    int i, no, sum = 0;
     printf("Enter an integer number \n");
    scanf ("%d", &no);
    for (i = 1; i <= no; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", no, sum);
}
