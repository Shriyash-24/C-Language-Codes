#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("Divisible by 5 and 3");
        }
        else{
            printf("Not divisible by 5 and 3");
        }
    }
    else{
        printf("Not divisible by 5 and 3");
    }
    return 0;
}