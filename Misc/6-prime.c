#include<stdio.h>
int main(){
    int i=1,j;
    for(i=1;i<=500;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i/2+1){
            printf("%d ",i);
        }
    }
}