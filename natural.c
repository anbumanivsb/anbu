#include <stdio.h>
#include <conio.h>
int addnum(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addnum(num));
    return 0;
}
int addnum(int n)
{
    if(n != 0)
        return n + addnum(n-1);
    else
        return n;
}
