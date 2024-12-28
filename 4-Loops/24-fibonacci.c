// Print the nth fibonacci number.
// 1 1 2 3 5 8 13 21 34 55 89..
#include <stdio.h>
int main()
{
    int n, i, f = 0, a = 1, b = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = a + b;
        a = b;
        b = f;
        printf("%d\n", f);
    }
}
