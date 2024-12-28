// 3 inputs and print greatest.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else
    {
        printf("%d is greatest", c);
    }
    return 0;
}
