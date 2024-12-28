// Take n as input and print Hello n times.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Hello\n");
    }
}