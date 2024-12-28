#include <stdio.h>
int main()
{
    // First matrix order.
    int m;
    printf("Enter number of rows of first matrix: ");
    scanf("%d", &m);
    int n;
    printf("Enter number of columns of first matrix: ");
    scanf("%d", &n);
    int a[m][n];
    // Taking Input Of First Matrix
    printf("Enter elements of first matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Second matrix order
    int p;
    printf("Enter number of rows of second matrix: ");
    scanf("%d", &p);
    int q;
    printf("Enter number of columns of second matrix: ");
    scanf("%d", &q);
    int b[p][q];
    // Taking Input
    printf("Enter the elements of second matrix: ");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Check
    if (n != p)
    {
        printf("The matrices can't be multiplied.");
    }
    else
    {
        // Multiplication
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                // i row of a, j column of b
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // Print
        printf("The resultant matrix is:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}