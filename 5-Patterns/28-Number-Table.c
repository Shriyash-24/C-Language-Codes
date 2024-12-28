// For n=4,
// 1234567
// 123 567
// 12   67
// 1     7

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int m = n - 1;
    int nst = m;
    int nsp = 1;
    for (int h = 1; h <= 2 * n - 1; h++)
    {
        printf("%d",h);
    }
    printf("\n");
    for (int i = 1; i <= n-1; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d",a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int l=1; l <= nst; l++){
            printf("%d",a);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
}