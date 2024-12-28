#include<stdio.h>
int main(){
    int product=1,i,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        product = product*i;
    }
    printf("Product: %d",product);
    return 0;
}