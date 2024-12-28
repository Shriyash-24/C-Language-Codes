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
    for (int j=0;j<m;j++)
    {
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                printf("%d ",a[i][j]);
        }
        }
        else{
            for(int i=0;i<n;i++){
            printf("%d ",a[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}