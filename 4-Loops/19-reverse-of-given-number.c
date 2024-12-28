#include<stdio.h>
int main(){
    int n,last,result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        n/=10;
        result= result*10 + last;
    }
    printf("Result: %d",result);
}