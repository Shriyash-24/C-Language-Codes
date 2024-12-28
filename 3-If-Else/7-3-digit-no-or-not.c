#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("Three digit number ");
    }
    else 
    {
        printf("Not a three digit number");
    }
    return 0;
}