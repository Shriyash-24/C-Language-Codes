// For n=4,
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include<stdio.h>
int minimum(int a,int b){
    int min = a;
    if(b<a){
        min = b;
    }
    return min;
}
int main(){
    int n;
    printf("Enter no. of lines: ");
    scanf("%d",&n);
    int min = 0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i;
            if(i>n){
                a = 2*n-i;
            }
            int b = j;
            if(b>n){
                b = 2*n-j;
            }
            // min = minimum of a and b
            min = minimum(a,b);
            // if(a<b){
            //     min = a;
            // }
            // else{
            //     min = b;
            // }
            printf("%d",n+1-min);
        }
        printf("\n");
    }
}