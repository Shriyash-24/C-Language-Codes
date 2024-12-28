#include<stdio.h>
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1){
        return 1;
    }
    if(n==1){ // can't go down
        rightWays += maze(n,m-1);
    }
    if(m==1){
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(){
    int n; // no. of rows
    printf("Enter no of rows of the maze: ");
    scanf("%d",&n);
    int m; // no. of columns
    printf("Enter no of columns if the maze: ");
    scanf("%d",&m);
    printf("Hi: %d",maze(n,m));
}