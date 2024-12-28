//    1
//   123
//  12345
// 1234567
#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("%d",k);
        }
        a+=2;
        printf("\n");
    }
}