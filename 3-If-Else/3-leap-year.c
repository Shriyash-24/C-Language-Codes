#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year % 2 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}