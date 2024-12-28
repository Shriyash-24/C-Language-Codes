// WAP to print sum of given number and it's reverse.
#include<stdio.h>
int main(){
    int n,last,result=0,copy;
    printf("Enter the number: ");
    scanf("%d",&n);
    copy = n;
    while(n!=0){
        last=n%10;
        n/=10;
        result= result*10 + last;
    }
    printf("Sum: %d",copy+result);
}