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
    // Wave Printing
    for (int i = 0; i < m; i++)
    {
        if(i%2==0){
            for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        }
        else{
            for (int j = n-1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}