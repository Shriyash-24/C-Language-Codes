// ****
// ****
// ****

#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows and columns you want: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // Rows
        for(int i=1;i<=n;i++){ // Columns
            printf("*");
        }
        printf("\n");
    }
}