// For n = 5, this pattern is printed for odd numbers only.
//   *
//   *
// *****
//   *
//   *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == n / 2 + 1 || i == n / 2 + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}