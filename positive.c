#include <stdio.h>
int main()
{
    int no;

    printf("Enter number: ");
    scanf("%f", &no;

    if (no <= 0.0)
    {
        if (no== 0.0)
            printf("You gave 0.");
        else
            printf("You gave negative no.");
    }
    else
        printf("You gave positive no.");
    return 0;
}
