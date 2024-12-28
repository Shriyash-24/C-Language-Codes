//    A
//   ABA
//  ABCBA
// ABCDCBA
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int b=65;
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",a);
            a++;
        }
        for(int l=1;l<=i-1;l++){
            printf("%c",b);
            b--;
        }
        b = 65 + i - 1;
        printf("\n");
    }
}