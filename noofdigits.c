#include <stdio.h>
int main()
{
    long long no;
    int ct = 0;
    printf("Enter any number: ");
    scanf("%lld", &no);
    while(no != 0)
    {
        ct++;
        no /= 10;
    }
    printf("Total digits: %d", ct);
    return 0;
}
