// Take 3 Numbers input and tell if they can be sides of a triangle.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number: ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a + b) > c && (c + b) > a && (b + c) > a)
    {
        printf("Triangle can be formed");
    }
    else
    {
        printf("Triangle can't be formed");
    }
    return 0;
}