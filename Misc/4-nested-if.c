#include<stdio.h>
int main(){
    int m1,m2,m3;
    printf("Enter the marks of m1: ");
    scanf("%d",&m1);
    printf("Enter the marks of m2: ");
    scanf("%d",&m2);
    printf("Enter the marks of m3: ");
    scanf("%d",&m3);
    if(m1>50){
        if(m2>50){
            if(m3>50){
                printf("Congratulations! You are selected for the M.Tech Program In CSA department at IIT Bombay.");
            }
            else{
                printf("You worked hard but it was not enough. Try again later.");
            }
        }
        else{
            if(m3>50){
                printf("If only you could pass M2. Try again!");
            }
            else{
                printf("You have been kicked out of this rat race.");
            }
        }
    }
    else{
        if(m2>50){
            if(m3>50){
                printf("If only you could pass M1. Try again!");
            }
            else{
                printf("You failed at M1 & M3. You have not been selected.");
            }
        }
        else{
            if(m3>50){
                printf("You atleast passed M3 but we wish you could have passed M1 and M2.");
            }
            else{
                printf("You don't deserve to be here.");
            }
        }
    }
}
