// For n = 4,
// ****
// ***
// **
// *
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}