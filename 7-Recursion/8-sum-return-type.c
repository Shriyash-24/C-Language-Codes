#include<stdio.h>
int sum(int n){
    if(n==1 || n==0){
        return n;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("Sum: %d",fact);
}