// Given a matrix 'a' of dimension nxm and 2 co-ordinates (l1,r1) and (l2,r2). Return the sum of the rectangle formed by (l1,r1) and (l2,r2).

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the elements for the array");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l1,r1;
    printf("Enter the co-ordinates of l1 and r1: ");
    scanf("%d%d",&l1,&r1);
    int l2,r2;
    printf("Enter the co-ordinates of l2 and r2: ");
    scanf("%d%d",&l2,&r2);
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("Sum: %d",sum);
}