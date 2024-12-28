// Take 3 positive integers input and print greatest of them.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){ // b is not greatest
        if(a>c){
            printf("%d is greatest",a);
        }
        else{ // a<c
            printf("%d is greatest",c);
        }
    }
    else{ // a is not greatest
        if(b>c){
            printf("%d is greatest",b);
        }
        else{
            printf("%d is greatest",c);
        }
    }
}