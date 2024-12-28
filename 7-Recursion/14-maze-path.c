#include<stdio.h>
// cr --> current row, cc --> current column, er --> ending row, rc --> ending column.
int maze(int cr, int cc, int er, int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){ // only rigthways call
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ // only downways call
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
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
    printf("Hi: %d",maze(1,1,n,m));
}