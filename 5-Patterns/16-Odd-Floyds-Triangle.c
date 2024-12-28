// 1
// 3 5
// 7 9 11
// 13 15 17 19
#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
}