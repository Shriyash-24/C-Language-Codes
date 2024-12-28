#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    // *x = &a; ye nahi hoo sakta bhai
    *x = 7;
    printf("%d\n",a);
    printf("%p\n",*x);
    return 0;
}