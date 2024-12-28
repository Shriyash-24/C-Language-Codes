// ABCDEFG
// ABC EFG
// AB   FG
// A     G
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a = 65;
    int nsp = 1;
    for(int h=1;h<=2*n-1;h++){
        printf("%c",a);
        a++;
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int b = 65;
        for(int j=1;j<=n-i;j++){
            printf("%c",b);
            b++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            b++;
        }
        for(int l=1;l<=n-i;l++){
            printf("%c",b);
            b++;
        }
        nsp+=2;
        printf("\n");
    }
}