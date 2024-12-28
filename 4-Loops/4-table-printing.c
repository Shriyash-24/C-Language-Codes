#include<stdio.h>
int main(){
    int n;
    printf("Enter that number which you want the table to be printed upon :");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d ",i);
    }
    return 0;
}