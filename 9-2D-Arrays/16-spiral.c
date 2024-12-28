// Leetcode - 54
#include<stdio.h>
int main(){
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
    // Spiral Printing
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;
    while(count<tne){
        // Print the minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        // Print the maximum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",a[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        // Print the maximum row from maximum column to minimum column
        for(int j=maxc;j>=minc;j--){
            printf("%d ",a[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        // Print the minimum column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",a[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}