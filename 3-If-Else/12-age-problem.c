// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int r, s, a;
    printf("Please enter age of ram: ");
    scanf("%d", &r);
    printf("Please enter age of Shyam: ");
    scanf("%d", &s);
    printf("Please enter age of ajay: ");
    scanf("%d", &a);
    if(r<s && r<a){
        printf("Ram's Age - %d is the youngest.",r);
    }
    if(s<r && s<a){
        printf("Shyam's Age - %d is the youngest.",s);
    }
    else{
        printf("Ajay's Age - %d Is The Youngest",a);
    }
    return 0;
}