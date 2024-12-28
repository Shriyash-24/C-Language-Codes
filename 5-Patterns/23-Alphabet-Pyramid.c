//    A
//   ABC
//  ABCDE
// ABCDEFG

#include<stdio.h>
int main(){
    int n,b=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=b;k++){
            printf("%c",a);
            a++;
        }
        b+=2;
        printf("\n");
    }
}