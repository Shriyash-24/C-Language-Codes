// For n = 4 -->
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // Rows
        for(int j=1;j<=n;j++){ // 1,2,3,4..
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}