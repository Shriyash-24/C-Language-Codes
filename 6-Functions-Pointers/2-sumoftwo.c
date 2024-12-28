#include<stdio.h>
int add(int x,int y){ // these two are different dabbas
    return x+y;
}
int main(){
    int a,b; // this is different dabba
    printf("Enter number");
    scanf("%d%d",&a,&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}