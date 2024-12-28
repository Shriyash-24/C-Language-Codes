// Print the sum of this series : 1-2+3-4+5-6 upto n.
#include <stdio.h>
int main()
{
    int n, s = 0, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    }
    printf("Sum: %d", s);
}