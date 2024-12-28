// For n = 4,
// 4
// 3
// 2
// 1
// 1
// 2
// 3 
// 4

#include<stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    decreasing(n);
    increasing(1,n);
    return 0;
}