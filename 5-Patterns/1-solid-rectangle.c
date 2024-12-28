// *****
// *****
// *****
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter a number of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*"); // Prints star based on input.
        }
        printf("\n"); // Next line.
    }
    return 0;
}