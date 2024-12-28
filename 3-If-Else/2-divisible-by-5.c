#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible By 5");
    }
    return 0;
}