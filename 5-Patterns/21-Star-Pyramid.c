//    *
//   ***
//  *****
// *******
#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        a+=2;
        printf("\n");
    }
    return 0;
}