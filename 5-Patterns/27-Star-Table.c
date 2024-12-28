// *******
// *** ***
// **   **
// *     *

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n-1;
    int nst=m;
    int nsp=1; 
    for(int h=1;h<=2*n-1;h++){ // First line
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}