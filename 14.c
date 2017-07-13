#include <stdio.h>
int main()
{
    int j, k;
    printf("the odd numbers to be printed are: ");
    scanf("%d", &k);
     printf("the all numbers in odd %d are: \n", k);
    for(j=1; j<=k; j++)
    {
    if(j%2!=0)
        {
    printf("%d\n", j);
        }
    }
    return 0;
}
