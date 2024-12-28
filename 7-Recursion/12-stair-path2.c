#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return 4;
    int totalWays;
    totalWays = stair(n-1) + stair(n-2) + stair(n-3);
    return totalWays;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}